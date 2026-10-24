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

// Function: entry_00267040
// Address: 0x267040 - 0x267058
void entry_00267040_0x267040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267040_0x267040");
#endif

    switch (ctx->pc) {
        case 0x26704cu: goto label_26704c;
        default: break;
    }

    ctx->pc = 0x267040u;

    // 0x267040: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267044: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x267044u;
    SET_GPR_U32(ctx, 31, 0x26704Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x267044u, 0x26704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26704Cu;
label_26704c:
    // 0x26704c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26704cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x267050: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x267050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x267054: 0x0  nop
    ctx->pc = 0x267054u;
    // NOP
    ctx->pc = 0x267058u;
}
