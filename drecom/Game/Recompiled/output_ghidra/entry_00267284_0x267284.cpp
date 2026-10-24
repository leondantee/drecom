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

// Function: entry_00267284
// Address: 0x267284 - 0x267298
void entry_00267284_0x267284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267284_0x267284");
#endif

    switch (ctx->pc) {
        case 0x267294u: goto label_267294;
        default: break;
    }

    ctx->pc = 0x267284u;

    // 0x267284: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x267288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26728c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x26728Cu;
    SET_GPR_U32(ctx, 31, 0x267294u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x26728Cu, 0x267294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267294u;
label_267294:
    // 0x267294: 0x0  nop
    ctx->pc = 0x267294u;
    // NOP
    ctx->pc = 0x267298u;
}
