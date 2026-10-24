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

// Function: entry_00267b6c
// Address: 0x267b6c - 0x267b80
void entry_00267b6c_0x267b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267b6c_0x267b6c");
#endif

    switch (ctx->pc) {
        case 0x267b78u: goto label_267b78;
        default: break;
    }

    ctx->pc = 0x267b6cu;

    // 0x267b6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267b6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267b70: 0xc09a220  jal         func_268880
    ctx->pc = 0x267B70u;
    SET_GPR_U32(ctx, 31, 0x267B78u);
    ctx->pc = 0x268880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268880u, 0x267B70u, 0x267B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B78u;
label_267b78:
    // 0x267b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x267b7c: 0x0  nop
    ctx->pc = 0x267b7cu;
    // NOP
    ctx->pc = 0x267b80u;
}
