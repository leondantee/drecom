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

// Function: entry_00267cf8
// Address: 0x267cf8 - 0x267d18
void entry_00267cf8_0x267cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267cf8_0x267cf8");
#endif

    switch (ctx->pc) {
        case 0x267d04u: goto label_267d04;
        case 0x267d10u: goto label_267d10;
        default: break;
    }

    ctx->pc = 0x267cf8u;

    // 0x267cf8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267cf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267cfc: 0xc09a300  jal         func_268C00
    ctx->pc = 0x267CFCu;
    SET_GPR_U32(ctx, 31, 0x267D04u);
    ctx->pc = 0x268C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268C00u, 0x267CFCu, 0x267D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D04u;
label_267d04:
    // 0x267d04: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267d04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267d08: 0xc09a480  jal         func_269200
    ctx->pc = 0x267D08u;
    SET_GPR_U32(ctx, 31, 0x267D10u);
    ctx->pc = 0x269200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269200u, 0x267D08u, 0x267D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D10u;
label_267d10:
    // 0x267d10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x267d14: 0x0  nop
    ctx->pc = 0x267d14u;
    // NOP
    ctx->pc = 0x267d18u;
}
