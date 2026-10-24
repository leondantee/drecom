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

// Function: entry_00295368
// Address: 0x295368 - 0x2953a0
void entry_00295368_0x295368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295368_0x295368");
#endif

    switch (ctx->pc) {
        case 0x295378u: goto label_295378;
        case 0x295388u: goto label_295388;
        default: break;
    }

    ctx->pc = 0x295368u;

    // 0x295368: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x295368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x29536c: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x29536cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x295370: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295370u;
    SET_GPR_U32(ctx, 31, 0x295378u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295370u, 0x295378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295378u;
label_295378:
    // 0x295378: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x295378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x29537c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x29537cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x295380: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295380u;
    SET_GPR_U32(ctx, 31, 0x295388u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295380u, 0x295388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295388u;
label_295388:
    // 0x295388: 0x26620130  addiu       $v0, $s3, 0x130
    ctx->pc = 0x295388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x29538c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x29538cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x295390: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x295390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x295394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295398: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x295398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x29539c: 0x0  nop
    ctx->pc = 0x29539cu;
    // NOP
    ctx->pc = 0x2953a0u;
}
