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

// Function: entry_00251c24
// Address: 0x251c24 - 0x251c30
void entry_00251c24_0x251c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251c24_0x251c24");
#endif

    switch (ctx->pc) {
        case 0x251c2cu: goto label_251c2c;
        default: break;
    }

    ctx->pc = 0x251c24u;

    // 0x251c24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251C24u;
    SET_GPR_U32(ctx, 31, 0x251C2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251C24u, 0x251C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C2Cu;
label_251c2c:
    // 0x251c2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x251c30u;
}
