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

// Function: entry_00142e6c
// Address: 0x142e6c - 0x142ea0
void entry_00142e6c_0x142e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142e6c_0x142e6c");
#endif

    ctx->pc = 0x142e6cu;

label_142e6c:
    // 0x142e6c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142e70:
    // 0x142e70: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x142e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142e74:
    // 0x142e74: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x142e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_142e78:
    // 0x142e78: 0x102000a7  beqz        $at, . + 4 + (0xA7 << 2)
label_142e7c:
    if (ctx->pc == 0x142E7Cu) {
        ctx->pc = 0x142E80u;
        goto label_142e80;
    }
    ctx->pc = 0x142E78u;
    {
        const bool branch_taken_0x142e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e78) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142E80u;
label_142e80:
    // 0x142e80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x142e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_142e84:
    // 0x142e84: 0x2443e690  addiu       $v1, $v0, -0x1970
    ctx->pc = 0x142e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960784));
label_142e88:
    // 0x142e88: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_142e8c:
    // 0x142e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_142e90:
    // 0x142e90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_142e94:
    // 0x142e94: 0x400008  jr          $v0
label_142e98:
    if (ctx->pc == 0x142E98u) {
        ctx->pc = 0x142E9Cu;
        goto label_142e9c;
    }
    ctx->pc = 0x142E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142E94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x142E9Cu;
label_142e9c:
    // 0x142e9c: 0x0  nop
    ctx->pc = 0x142e9cu;
    // NOP
    ctx->pc = 0x142ea0u;
}
