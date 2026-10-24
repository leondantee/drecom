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

// Function: entry_001ec410
// Address: 0x1ec410 - 0x1ec498
void entry_001ec410_0x1ec410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec410_0x1ec410");
#endif

    ctx->pc = 0x1ec410u;

    // 0x1ec410: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec414: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec418: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec41c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec420: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec424: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec42c: 0x0  nop
    ctx->pc = 0x1ec42cu;
    // NOP
    // 0x1ec430: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1EC430u;
    {
        const bool branch_taken_0x1ec430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec430) {
            ctx->pc = 0x1EC498u;
            return;
        }
    }
    ctx->pc = 0x1EC438u;
    // 0x1ec438: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec43c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec440: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1ec440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec444: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec448: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec44c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec450: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ec454: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1ec458: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec45c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec460: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec464: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec468: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec46c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec474: 0x0  nop
    ctx->pc = 0x1ec474u;
    // NOP
    // 0x1ec478: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC478u;
    {
        const bool branch_taken_0x1ec478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec478) {
            ctx->pc = 0x1EC498u;
            return;
        }
    }
    ctx->pc = 0x1EC480u;
    // 0x1ec480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec484: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec488: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ec488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec48c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec494: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x1ec498u;
}
