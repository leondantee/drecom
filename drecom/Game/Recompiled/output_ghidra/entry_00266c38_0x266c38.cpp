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

// Function: entry_00266c38
// Address: 0x266c38 - 0x266c50
void entry_00266c38_0x266c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266c38_0x266c38");
#endif

    switch (ctx->pc) {
        case 0x266c48u: goto label_266c48;
        default: break;
    }

    ctx->pc = 0x266c38u;

    // 0x266c38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266c38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266c3c: 0x2605124c  addiu       $a1, $s0, 0x124C
    ctx->pc = 0x266c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4684));
    // 0x266c40: 0xc099934  jal         func_2664D0
    ctx->pc = 0x266C40u;
    SET_GPR_U32(ctx, 31, 0x266C48u);
    ctx->pc = 0x2664D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664D0u, 0x266C40u, 0x266C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C48u;
label_266c48:
    // 0x266c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x266C48u;
    {
        const bool branch_taken_0x266c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c48) {
            ctx->pc = 0x266C78u;
            return;
        }
    }
    ctx->pc = 0x266C50u;
}
