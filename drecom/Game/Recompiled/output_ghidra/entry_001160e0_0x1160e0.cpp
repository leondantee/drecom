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

// Function: entry_001160e0
// Address: 0x1160e0 - 0x116110
void entry_001160e0_0x1160e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001160e0_0x1160e0");
#endif

    ctx->pc = 0x1160e0u;

label_1160e0:
    // 0x1160e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1160e4:
    // 0x1160e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1160e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1160e8:
    // 0x1160e8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1160e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1160ec:
    // 0x1160ec: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1160ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1160f0:
    // 0x1160f0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1160f4:
    if (ctx->pc == 0x1160F4u) {
        ctx->pc = 0x1160F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160F0u;
        // 0x1160f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1160F8u;
        goto label_1160f8;
    }
    ctx->pc = 0x1160F0u;
    {
        const bool branch_taken_0x1160f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160F0u;
        // 0x1160f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160f0) {
            ctx->pc = 0x116174u;
            return;
        }
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1160fc:
    // 0x1160fc: 0x2442d990  addiu       $v0, $v0, -0x2670
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957456));
label_116100:
    // 0x116100: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_116104:
    // 0x116104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_116108:
    // 0x116108: 0x800008  jr          $a0
label_11610c:
    if (ctx->pc == 0x11610Cu) {
        ctx->pc = 0x116110u;
        goto label_fallthrough_0x116108;
    }
    ctx->pc = 0x116108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x116108:
    ctx->pc = 0x116110u;
}
