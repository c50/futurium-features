<?php
/**
 * @file
 * Custom page template for landing pages.
 */
?>
<div class="layout" id="layout">
  <a id="top-page"></a>

  <header id="layout-header">
    <div class="container">
      <?php echo $regions['header_top']; ?>
      <div class="headerBannerContainer">
        <div id="main-logo"><img id="banner-flag" src="<?php echo $logo; ?>" alt="European Commission logo"></div>
        <div id="main-title"><span><?php echo $site_name; ?></span></div>
        <div id="sub-title"><span><?php echo $site_slogan; ?></span></div>
      </div>
    </div>
  </header><!-- /header#layout-header -->

  <div id="path" class="hideWhenSmall">
    <div class="container">
      <?php echo $breadcrumb; ?>
    </div>
  </div><!-- /div#path -->

  <?php if ($page['main_navigation']): ?>
  <nav id="main-navigation">
    <div class="container"><?php echo render($page['main_navigation']); ?></div>
  </nav>
  <?php endif; ?><!-- /nav#main-navigation -->

  <?php if ($page['banner']): ?>
  <div id="banner">
    <div class="container"><?php echo render($page['banner']); ?></div>
  </div>
  <?php endif; ?><!-- /div# -->

  <div class="identityContainer">
    <div id="layout-body" class="container">
      <div id="pageCenter" class="clearfix">
        <?php echo $regions['featured']; ?>

        <?php if ($regions['tools']): ?>
          <div class=""><?php echo $regions['tools']; ?></div>
        <?php endif; ?>

        <a id="content"></a>

        <section class="mainContentSection clearfix">

          <div class="contentContainer">

            <a id="main-content"></a>
            <?php echo $regions['help']; ?>

            <div class="homepageContainer">
              <div class="topHPcnt">
                <div class="mainBlocks">

                  <?php if ($messages): ?>
                    <div id="messages"><?php echo $messages; ?></div><!-- /#messages -->
                  <?php endif; ?>

                  <?php if ($tabs): ?>
                    <div class="tabs"><?php echo render($tabs); ?></div>
                  <?php endif; ?>

                  <?php if($regions['content_top']): ?>
                    <?php echo $regions['content_top']; ?>
                  <?php endif; ?>

                  <?php print render($page['home_main']); ?>
                </div>

                <div class="homepage-sidebar">
                  <?php if($identity): ?>
                  <div class="identityBlock">
                    <?php echo render($page['identity']); ?>
                  </div>
                  <?php endif; ?>
                  <?php print render($page['home_sidebar']); ?>
                </div>
              </div>

              <div class="botHPcnt clearfix">
                <?php print render($page['home_footer']); ?>
              </div>
            </div>
          </div>

        </section>
        <?php echo $regions['content_bottom']; ?>
    </div>

  </div>
  <!-- /#layout-body -->
</div><!-- /.identityContainer -->

<footer>
  <div class="container">
    <div id="footer">
      <div class="footer">
        <?php echo $regions['footer']; ?>
      </div>
      <div class="footer_copyright">
        <?php echo render($page['footer_copyright']); ?>
      </div>
    </div>
  </div>
</footer><!-- /footer -->

</div><!-- /.layout -->
