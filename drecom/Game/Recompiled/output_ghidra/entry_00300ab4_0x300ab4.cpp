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

// Function: entry_00300ab4
// Address: 0x300ab4 - 0x300ad4
void entry_00300ab4_0x300ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300ab4_0x300ab4");
#endif

    ctx->pc = 0x300ab4u;

    // 0x300ab4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300ab8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x300abc: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x300abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x300ac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300AC0u;
    {
        const bool branch_taken_0x300ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ac0) {
            ctx->pc = 0x300AD4u;
            return;
        }
    }
    ctx->pc = 0x300AC8u;
    // 0x300ac8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300acc: 0xc0c04b4  jal         func_3012D0
    ctx->pc = 0x300ACCu;
    SET_GPR_U32(ctx, 31, 0x300AD4u);
    ctx->pc = 0x3012D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3012D0u, 0x300ACCu, 0x300AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AD4u;
}
