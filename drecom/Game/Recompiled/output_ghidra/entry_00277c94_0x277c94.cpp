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

// Function: entry_00277c94
// Address: 0x277c94 - 0x277cc8
void entry_00277c94_0x277c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277c94_0x277c94");
#endif

    ctx->pc = 0x277c94u;

label_277c94:
    // 0x277c94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_277c98:
    // 0x277c98: 0x8c241a38  lw          $a0, 0x1A38($at)
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6712)));
label_277c9c:
    // 0x277c9c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x277c9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_277ca0:
    // 0x277ca0: 0x102000e3  beqz        $at, . + 4 + (0xE3 << 2)
label_277ca4:
    if (ctx->pc == 0x277CA4u) {
        ctx->pc = 0x277CA8u;
        goto label_277ca8;
    }
    ctx->pc = 0x277CA0u;
    {
        const bool branch_taken_0x277ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ca0) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277CA8u;
label_277ca8:
    // 0x277ca8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x277ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_277cac:
    // 0x277cac: 0x24431580  addiu       $v1, $v0, 0x1580
    ctx->pc = 0x277cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
label_277cb0:
    // 0x277cb0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x277cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_277cb4:
    // 0x277cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_277cb8:
    // 0x277cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x277cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277cbc:
    // 0x277cbc: 0x400008  jr          $v0
label_277cc0:
    if (ctx->pc == 0x277CC0u) {
        ctx->pc = 0x277CC4u;
        goto label_277cc4;
    }
    ctx->pc = 0x277CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x277CC4u;
label_277cc4:
    // 0x277cc4: 0x0  nop
    ctx->pc = 0x277cc4u;
    // NOP
    ctx->pc = 0x277cc8u;
}
