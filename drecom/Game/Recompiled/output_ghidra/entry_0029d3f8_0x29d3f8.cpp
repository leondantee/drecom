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

// Function: entry_0029d3f8
// Address: 0x29d3f8 - 0x29d490
void entry_0029d3f8_0x29d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d3f8_0x29d3f8");
#endif

    ctx->pc = 0x29d3f8u;

    // 0x29d3f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3fc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d400: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d408: 0x0  nop
    ctx->pc = 0x29d408u;
    // NOP
    // 0x29d40c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x29D40Cu;
    {
        const bool branch_taken_0x29d40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d40c) {
            ctx->pc = 0x29D490u;
            return;
        }
    }
    ctx->pc = 0x29D414u;
    // 0x29d414: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d41c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x29d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d420: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d424: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d428: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29d428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d42c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d430: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d434: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d438: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x29d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d43c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x29d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x29d440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d444: 0x0  nop
    ctx->pc = 0x29d444u;
    // NOP
    // 0x29d448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29d448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d44c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x29d44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x29d450: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d454: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d458: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d45c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29d45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d460: 0x0  nop
    ctx->pc = 0x29d460u;
    // NOP
    // 0x29d464: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x29D464u;
    {
        const bool branch_taken_0x29d464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d464) {
            ctx->pc = 0x29D568u;
            return;
        }
    }
    ctx->pc = 0x29D46Cu;
    // 0x29d46c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d470: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d474: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d47c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d484: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29d488: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29D488u;
    {
        const bool branch_taken_0x29d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d488) {
            ctx->pc = 0x29D568u;
            return;
        }
    }
    ctx->pc = 0x29D490u;
}
