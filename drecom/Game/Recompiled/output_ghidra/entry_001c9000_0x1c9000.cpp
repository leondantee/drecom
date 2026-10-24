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

// Function: entry_001c9000
// Address: 0x1c9000 - 0x1c9034
void entry_001c9000_0x1c9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9000_0x1c9000");
#endif

    ctx->pc = 0x1c9000u;

label_1c9000:
    // 0x1c9000: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9004:
    // 0x1c9004: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c9004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c9008:
    // 0x1c9008: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c9008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c900c:
    // 0x1c900c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1c900cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1c9010:
    // 0x1c9010: 0x1020037c  beqz        $at, . + 4 + (0x37C << 2)
label_1c9014:
    if (ctx->pc == 0x1C9014u) {
        ctx->pc = 0x1C9018u;
        goto label_1c9018;
    }
    ctx->pc = 0x1C9010u;
    {
        const bool branch_taken_0x1c9010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9010) {
            ctx->pc = 0x1C9E04u;
            return;
        }
    }
    ctx->pc = 0x1C9018u;
label_1c9018:
    // 0x1c9018: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1c9018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1c901c:
    // 0x1c901c: 0x2465f460  addiu       $a1, $v1, -0xBA0
    ctx->pc = 0x1c901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964320));
label_1c9020:
    // 0x1c9020: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c9024:
    // 0x1c9024: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1c9024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1c9028:
    // 0x1c9028: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1c902c:
    // 0x1c902c: 0x1000008  jr          $t0
label_1c9030:
    if (ctx->pc == 0x1C9030u) {
        ctx->pc = 0x1C9034u;
        goto label_fallthrough_0x1c902c;
    }
    ctx->pc = 0x1C902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C902Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1c902c:
    ctx->pc = 0x1C9034u;
}
