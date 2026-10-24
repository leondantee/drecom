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

// Function: entry_00267db0
// Address: 0x267db0 - 0x267dd0
void entry_00267db0_0x267db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267db0_0x267db0");
#endif

    switch (ctx->pc) {
        case 0x267dbcu: goto label_267dbc;
        case 0x267dc8u: goto label_267dc8;
        default: break;
    }

    ctx->pc = 0x267db0u;

    // 0x267db0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267db0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267db4: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x267DB4u;
    SET_GPR_U32(ctx, 31, 0x267DBCu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x267DB4u, 0x267DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DBCu;
label_267dbc:
    // 0x267dbc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267dc0: 0xc09a480  jal         func_269200
    ctx->pc = 0x267DC0u;
    SET_GPR_U32(ctx, 31, 0x267DC8u);
    ctx->pc = 0x269200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269200u, 0x267DC0u, 0x267DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DC8u;
label_267dc8:
    // 0x267dc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x267dcc: 0x0  nop
    ctx->pc = 0x267dccu;
    // NOP
    ctx->pc = 0x267dd0u;
}
