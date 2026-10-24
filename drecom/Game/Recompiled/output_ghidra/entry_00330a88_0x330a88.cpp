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

// Function: entry_00330a88
// Address: 0x330a88 - 0x330ab8
void entry_00330a88_0x330a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330a88_0x330a88");
#endif

    ctx->pc = 0x330a88u;

label_330a88:
    // 0x330a88: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x330a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_330a8c:
    // 0x330a8c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x330a8cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_330a90:
    // 0x330a90: 0x2ee10006  sltiu       $at, $s7, 0x6
    ctx->pc = 0x330a90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_330a94:
    // 0x330a94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_330a98:
    if (ctx->pc == 0x330A98u) {
        ctx->pc = 0x330A9Cu;
        goto label_330a9c;
    }
    ctx->pc = 0x330A94u;
    {
        const bool branch_taken_0x330a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a94) {
            ctx->pc = 0x330AD8u;
            return;
        }
    }
    ctx->pc = 0x330A9Cu;
label_330a9c:
    // 0x330a9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x330a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_330aa0:
    // 0x330aa0: 0x244320b0  addiu       $v1, $v0, 0x20B0
    ctx->pc = 0x330aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8368));
label_330aa4:
    // 0x330aa4: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x330aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_330aa8:
    // 0x330aa8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x330aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_330aac:
    // 0x330aac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_330ab0:
    // 0x330ab0: 0x400008  jr          $v0
label_330ab4:
    if (ctx->pc == 0x330AB4u) {
        ctx->pc = 0x330AB8u;
        goto label_fallthrough_0x330ab0;
    }
    ctx->pc = 0x330AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330AB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x330ab0:
    ctx->pc = 0x330AB8u;
}
