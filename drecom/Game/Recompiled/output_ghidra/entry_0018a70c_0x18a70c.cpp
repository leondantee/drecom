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

// Function: entry_0018a70c
// Address: 0x18a70c - 0x18a720
void entry_0018a70c_0x18a70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a70c_0x18a70c");
#endif

    ctx->pc = 0x18a70cu;

    // 0x18a70c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x18a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18a710: 0x24050e20  addiu       $a1, $zero, 0xE20
    ctx->pc = 0x18a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3616));
    // 0x18a714: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x18a714u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a718: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x18A718u;
    SET_GPR_U32(ctx, 31, 0x18A720u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x18A718u, 0x18A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A720u;
}
