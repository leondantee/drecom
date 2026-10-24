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

// Function: entry_00377908
// Address: 0x377908 - 0x377920
void entry_00377908_0x377908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377908_0x377908");
#endif

    ctx->pc = 0x377908u;

    // 0x377908: 0x8e031304  lw          $v1, 0x1304($s0)
    ctx->pc = 0x377908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4868)));
    // 0x37790c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37790Cu;
    {
        const bool branch_taken_0x37790c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37790c) {
            ctx->pc = 0x377920u;
            return;
        }
    }
    ctx->pc = 0x377914u;
    // 0x377914: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x377914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x377918: 0xc06c58c  jal         func_1B1630
    ctx->pc = 0x377918u;
    SET_GPR_U32(ctx, 31, 0x377920u);
    ctx->pc = 0x1B1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1630u, 0x377918u, 0x377920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377920u;
}
