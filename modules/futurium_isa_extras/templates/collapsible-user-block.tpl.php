<?php if (user_is_logged_in()): ?>
  <div class="container collapsed-user-block">
    <nav role="navigation">
      <a href="#login-collapse" class="btn btn-login" data-toggle="collapse">
        <div class="title"><?php echo $title; ?></div>
      </a>
    </nav>
    <div id="login-collapse" class="collapse row">
      <div class="container">
        <?php echo $content; ?>
      </div>
    </div>
  </div>
<?php else: ?>
  <div class="container collapsed-user-block">
    <nav role="navigation">
      <a href="#login-collapse" class="btn btn-login" data-toggle="collapse">
        <div class="title"><?php echo $title; ?></div>
      </a>
    </nav>
    <div id="login-collapse" class="collapse row">
      <div class="containment">
        <div class="register">
          <h2><?php print $content['register']['title'] ?></h2>
          <div class="register-content-wrapper">
            <?php print $content['register']['content'] ?>
          </div>
        </div>
        <div class="login">
          <h2><?php print $content['login']['title'] ?></h2>
          <div class="login-content-wrapper">
            <?php print $content['login']['content'] ?>
          </div>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>
