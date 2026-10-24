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

// Function: entry_0018e308
// Address: 0x18e308 - 0x18e334
void entry_0018e308_0x18e308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e308_0x18e308");
#endif

    switch (ctx->pc) {
        case 0x18e328u: goto label_18e328;
        default: break;
    }

    ctx->pc = 0x18e308u;

    // 0x18e308: 0x8e030294  lw          $v1, 0x294($s0)
    ctx->pc = 0x18e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x18e30c: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x18e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x18e310: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e314: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E314u;
    {
        const bool branch_taken_0x18e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e314) {
            ctx->pc = 0x18E334u;
            return;
        }
    }
    ctx->pc = 0x18E31Cu;
    // 0x18e31c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e31cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e320: 0xc063b4c  jal         func_18ED30
    ctx->pc = 0x18E320u;
    SET_GPR_U32(ctx, 31, 0x18E328u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E320u, 0x18E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E328u;
label_18e328:
    // 0x18e328: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e328u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e32c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18E32Cu;
    {
        const bool branch_taken_0x18e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e32c) {
            ctx->pc = 0x18E420u;
            return;
        }
    }
    ctx->pc = 0x18E334u;
}
