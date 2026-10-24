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

// Function: entry_001cac84
// Address: 0x1cac84 - 0x1caca8
void entry_001cac84_0x1cac84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac84_0x1cac84");
#endif

    ctx->pc = 0x1cac84u;

    // 0x1cac84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac88: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1cac88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1cac8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1cac90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cac90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cac94: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1cac94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1cac98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAC98u;
    {
        const bool branch_taken_0x1cac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cac98) {
            ctx->pc = 0x1CACA8u;
            return;
        }
    }
    ctx->pc = 0x1CACA0u;
    // 0x1caca0: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x1CACA0u;
    SET_GPR_U32(ctx, 31, 0x1CACA8u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x1CACA0u, 0x1CACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACA8u;
}
