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

// Function: entry_00207350
// Address: 0x207350 - 0x2073d0
void entry_00207350_0x207350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207350_0x207350");
#endif

    switch (ctx->pc) {
        case 0x207374u: goto label_207374;
        case 0x207388u: goto label_207388;
        default: break;
    }

    ctx->pc = 0x207350u;

    // 0x207350: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207354: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207358: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20735c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x207360: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x207360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207364: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x207368: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x207368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20736c: 0xc05c848  jal         func_172120
    ctx->pc = 0x20736Cu;
    SET_GPR_U32(ctx, 31, 0x207374u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20736Cu, 0x207374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207374u;
label_207374:
    // 0x207374: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207378: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x207378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20737c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20737cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207380: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x207380u;
    SET_GPR_U32(ctx, 31, 0x207388u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x207380u, 0x207388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207388u;
label_207388:
    // 0x207388: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20738c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20738cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x207390: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207394: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x207394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207398: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x207398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20739c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20739cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2073a0: 0x0  nop
    ctx->pc = 0x2073a0u;
    // NOP
    // 0x2073a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2073a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2073a8: 0x0  nop
    ctx->pc = 0x2073a8u;
    // NOP
    // 0x2073ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2073ACu;
    {
        const bool branch_taken_0x2073ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2073ac) {
            ctx->pc = 0x2073D0u;
            return;
        }
    }
    ctx->pc = 0x2073B4u;
    // 0x2073b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2073b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2073b8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2073b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2073bc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2073bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2073c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2073c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2073c4: 0x0  nop
    ctx->pc = 0x2073c4u;
    // NOP
    // 0x2073c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2073c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2073cc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2073ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x2073d0u;
}
