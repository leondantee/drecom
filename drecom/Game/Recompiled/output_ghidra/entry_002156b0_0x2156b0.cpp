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

// Function: entry_002156b0
// Address: 0x2156b0 - 0x2156d0
void entry_002156b0_0x2156b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002156b0_0x2156b0");
#endif

    switch (ctx->pc) {
        case 0x2156c8u: goto label_2156c8;
        default: break;
    }

    ctx->pc = 0x2156b0u;

label_2156b0:
    // 0x2156b0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2156b4:
    // 0x2156b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2156b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2156b8:
    // 0x2156b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2156bc:
    if (ctx->pc == 0x2156BCu) {
        ctx->pc = 0x2156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156B8u;
        // 0x2156bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156C0u;
        goto label_2156c0;
    }
    ctx->pc = 0x2156B8u;
    {
        const bool branch_taken_0x2156b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2156b8) {
            ctx->pc = 0x2156BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2156B8u;
            // 0x2156bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2156ECu;
            return;
        }
    }
    ctx->pc = 0x2156C0u;
label_2156c0:
    // 0x2156c0: 0x40f809  jalr        $v0
label_2156c4:
    if (ctx->pc == 0x2156C4u) {
        ctx->pc = 0x2156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C0u;
        // 0x2156c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156C8u;
        goto label_2156c8;
    }
    ctx->pc = 0x2156C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2156C8u);
        ctx->pc = 0x2156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C0u;
        // 0x2156c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156C0u, 0x2156C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2156C8u;
label_2156c8:
    // 0x2156c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2156cc:
    if (ctx->pc == 0x2156CCu) {
        ctx->pc = 0x2156CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C8u;
        // 0x2156cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156D0u;
        goto label_fallthrough_0x2156c8;
    }
    ctx->pc = 0x2156C8u;
    {
        const bool branch_taken_0x2156c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C8u;
        // 0x2156cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156c8) {
            ctx->pc = 0x2156E8u;
            return;
        }
    }
label_fallthrough_0x2156c8:
    ctx->pc = 0x2156D0u;
}
