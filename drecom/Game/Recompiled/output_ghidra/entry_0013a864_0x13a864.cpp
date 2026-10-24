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

// Function: entry_0013a864
// Address: 0x13a864 - 0x13a8b4
void entry_0013a864_0x13a864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a864_0x13a864");
#endif

    ctx->pc = 0x13a864u;

label_13a864:
    // 0x13a864: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a868:
    // 0x13a868: 0x8c621b64  lw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_13a86c:
    // 0x13a86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a870:
    // 0x13a870: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_13a874:
    // 0x13a874: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a878:
    // 0x13a878: 0x8c621b64  lw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_13a87c:
    // 0x13a87c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x13a87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_13a880:
    // 0x13a880: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_13a884:
    // 0x13a884: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a888:
    // 0x13a888: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_13a88c:
    // 0x13a88c: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x13a88cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_13a890:
    // 0x13a890: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_13a894:
    if (ctx->pc == 0x13A894u) {
        ctx->pc = 0x13A898u;
        goto label_13a898;
    }
    ctx->pc = 0x13A890u;
    {
        const bool branch_taken_0x13a890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a890) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A898u;
label_13a898:
    // 0x13a898: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13a898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_13a89c:
    // 0x13a89c: 0x2443e620  addiu       $v1, $v0, -0x19E0
    ctx->pc = 0x13a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
label_13a8a0:
    // 0x13a8a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13a8a4:
    // 0x13a8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a8a8:
    // 0x13a8a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a8ac:
    // 0x13a8ac: 0x400008  jr          $v0
label_13a8b0:
    if (ctx->pc == 0x13A8B0u) {
        ctx->pc = 0x13A8B4u;
        goto label_fallthrough_0x13a8ac;
    }
    ctx->pc = 0x13A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A8ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x13a8ac:
    ctx->pc = 0x13A8B4u;
}
