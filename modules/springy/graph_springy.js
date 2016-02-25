(function ($) {
  Drupal.behaviors.exampleModule = {
    attach: function (context, settings) {
        // Create each graph.

      for (var i = 0; i < Drupal.settings.graph_springy.graphs.length; i++) {
        var graph_data = Drupal.settings.graph_springy.graphs[i];

        var container_id  = graph_data.id;
        var graph_data    = graph_data.graph;

        if($(context).find('#' + container_id).length) {
          // Make a new graph.
          var graph = new Springy.Graph();

          // Create a list of the nodes we're about to add, so we can refer to
          // them when creating edges.
          var graph_nodes = {};

          // Add nodes.
          $.each(graph_data, function(node_name, node_data) {

            // Handle parameters from the GraphAPI node data.
            var node_parameters = {};

            node_parameters.label = node_data.data.title;

            var keys = [];
            for(var k in node_data.data)
              keys.push(k);

            keys.map(function(property_name) {
              if (typeof node_data.data[property_name] != 'undefined') {
                node_parameters[property_name] = node_data.data[property_name];
              }
            });

            // Add node.
            graph_nodes[node_name] = graph.newNode(node_parameters);
          }); // each node

          // Add edges; all the nodes must exist already.
          $.each(graph_data, function(node_name, node_data) {
            $.each(node_data.edges, function(edge_target_node_name, edge_data) {
              // Handle parameters from the GraphAPI edge data.
              var edge_parameters = {};

              if (typeof edge_data.data.title != 'undefined') {
                edge_parameters.label = edge_data.data.title;
              }

              var keys = [];
              for(var k in edge_data.data)
                keys.push(k);

              keys.map(function(property_name) {
                if (typeof edge_data.data[property_name] != 'undefined') {
                  edge_parameters[property_name] = edge_data.data[property_name];
                }
              });

              graph.newEdge(graph_nodes[node_name], graph_nodes[edge_target_node_name], edge_parameters);
            }); // each edges
          }); // each node

          // Set the renderer up.
          $('#' + container_id).springy({ graph: graph });
        }
      }

      var c = jQuery('#graph-springy-graphapi');

      if(c.length) {
        var ct = c.get(0).getContext('2d');
        var container = jQuery(c).parent();

        jQuery(window).resize( respondCanvas );

        function respondCanvas(){
            c.attr('width', jQuery(container).width() ); //max width
            c.attr('height', jQuery(container).height() ); //max height
        }

        respondCanvas();
      }
    }
  };
})(jQuery);
