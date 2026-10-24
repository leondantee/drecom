#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002ce2c0
// Address: 0x2ce2c0 - 0x2ce47c
void entry_002ce2c0_0x2ce2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce2c0_0x2ce2c0");
#endif

    ctx->pc = 0x2ce2c0u;

    // 0x2ce2c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce2c8: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2ce2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2ce2cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2d4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2d8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce2dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2e4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2e8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce2ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2f4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2f8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce2fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce300: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce304: 0x24701770  addiu       $s0, $v1, 0x1770
    ctx->pc = 0x2ce304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x2ce308: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce30c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce318: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce31c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce31cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce320: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce328: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce32c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce330: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce334: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce338: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce338u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce33c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce344: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce348: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce350: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce354: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce358: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce35c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce360: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce364: 0x24701db0  addiu       $s0, $v1, 0x1DB0
    ctx->pc = 0x2ce364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7600));
    // 0x2ce368: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce36c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce370: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce378: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce37c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce37cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce380: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce388: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce38c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce390: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce394: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce398: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce398u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce39c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce3a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3a4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce3a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce3ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce3acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce3b0: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce3b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce3b8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce3bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3c0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce3c4: 0x24702580  addiu       $s0, $v1, 0x2580
    ctx->pc = 0x2ce3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2ce3c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3cc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce3d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce3d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce3d8: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce3dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce3e0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce3e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3e8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce3ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce3f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce3f4: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce3f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce3fc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce400: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce404: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce408: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce40c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce410: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce414: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce414u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce418: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce41c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce420: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce424: 0x24702bc0  addiu       $s0, $v1, 0x2BC0
    ctx->pc = 0x2ce424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x2ce428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce42c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce430: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce434: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce438: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce43c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce43cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce440: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce444: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce448: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce44c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce454: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce458: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce458u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce45c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce460: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce464: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce468: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce46c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce470: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce474: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce478: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->pc = 0x2ce47cu;
}
