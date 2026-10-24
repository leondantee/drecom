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

// Function: entry_00141d98
// Address: 0x141d98 - 0x141db4
void entry_00141d98_0x141d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d98_0x141d98");
#endif

    ctx->pc = 0x141d98u;

    // 0x141d98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d9c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141da0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x141da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141DA4u;
    {
        const bool branch_taken_0x141da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141da4) {
            ctx->pc = 0x141DB4u;
            return;
        }
    }
    ctx->pc = 0x141DACu;
    // 0x141dac: 0xc06bc24  jal         func_1AF090
    ctx->pc = 0x141DACu;
    SET_GPR_U32(ctx, 31, 0x141DB4u);
    ctx->pc = 0x1AF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF090u, 0x141DACu, 0x141DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DB4u;
}
