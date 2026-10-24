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

// Function: entry_00243838
// Address: 0x243838 - 0x2438c0
void entry_00243838_0x243838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243838_0x243838");
#endif

    ctx->pc = 0x243838u;

    // 0x243838: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24383c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243840: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x243840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243844: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243848: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24384c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x24384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243854: 0x0  nop
    ctx->pc = 0x243854u;
    // NOP
    // 0x243858: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x243858u;
    {
        const bool branch_taken_0x243858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243858) {
            ctx->pc = 0x2438C0u;
            return;
        }
    }
    ctx->pc = 0x243860u;
    // 0x243860: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243864: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243868: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x243868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24386c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243874: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x243874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243878: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24387c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x24387cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x243880: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243884: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243888: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x243888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24388c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243890: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243894: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x243894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24389c: 0x0  nop
    ctx->pc = 0x24389cu;
    // NOP
    // 0x2438a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2438A0u;
    {
        const bool branch_taken_0x2438a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2438a0) {
            ctx->pc = 0x2438C0u;
            return;
        }
    }
    ctx->pc = 0x2438A8u;
    // 0x2438a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2438ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2438acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2438b0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2438b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2438b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2438b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2438b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2438bc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2438bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x2438c0u;
}
