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

// Function: entry_00104b88
// Address: 0x104b88 - 0x104bb8
void entry_00104b88_0x104b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b88_0x104b88");
#endif

    switch (ctx->pc) {
        case 0x104b94u: goto label_104b94;
        case 0x104ba8u: goto label_104ba8;
        default: break;
    }

    ctx->pc = 0x104b88u;

label_104b88:
    // 0x104b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104b8c:
    // 0x104b8c: 0x40f809  jalr        $v0
label_104b90:
    if (ctx->pc == 0x104B90u) {
        ctx->pc = 0x104B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B8Cu;
        // 0x104b90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104B94u;
        goto label_104b94;
    }
    ctx->pc = 0x104B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104B94u);
        ctx->pc = 0x104B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B8Cu;
        // 0x104b90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B8Cu, 0x104B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104B94u;
label_104b94:
    // 0x104b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x104b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104b98:
    // 0x104b98: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x104b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_104b9c:
    // 0x104b9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_104ba0:
    // 0x104ba0: 0x60f809  jalr        $v1
label_104ba4:
    if (ctx->pc == 0x104BA4u) {
        ctx->pc = 0x104BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BA0u;
        // 0x104ba4: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BA8u;
        goto label_104ba8;
    }
    ctx->pc = 0x104BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x104BA8u);
        ctx->pc = 0x104BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BA0u;
        // 0x104ba4: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104BA0u, 0x104BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104BA8u;
label_104ba8:
    // 0x104ba8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x104ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_104bac:
    // 0x104bac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x104bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_104bb0:
    // 0x104bb0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_104bb4:
    if (ctx->pc == 0x104BB4u) {
        ctx->pc = 0x104BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BB0u;
        // 0x104bb4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BB8u;
        goto label_fallthrough_0x104bb0;
    }
    ctx->pc = 0x104BB0u;
    {
        const bool branch_taken_0x104bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104bb0) {
            ctx->pc = 0x104BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104BB0u;
            // 0x104bb4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104b88;
        }
    }
label_fallthrough_0x104bb0:
    ctx->pc = 0x104BB8u;
}
