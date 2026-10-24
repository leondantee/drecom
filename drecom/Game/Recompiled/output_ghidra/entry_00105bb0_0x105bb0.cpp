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

// Function: entry_00105bb0
// Address: 0x105bb0 - 0x105c10
void entry_00105bb0_0x105bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105bb0_0x105bb0");
#endif

    switch (ctx->pc) {
        case 0x105bd4u: goto label_105bd4;
        case 0x105becu: goto label_105bec;
        case 0x105c0cu: goto label_105c0c;
        default: break;
    }

    ctx->pc = 0x105bb0u;

    // 0x105bb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105bb4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x105bbc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105bc0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x105BC0u;
    {
        const bool branch_taken_0x105bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BC0u;
        // 0x105bc4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bc0) {
            ctx->pc = 0x105C80u;
            return;
        }
    }
    ctx->pc = 0x105BC8u;
    // 0x105bc8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x105bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x105bcc: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x105BCCu;
    SET_GPR_U32(ctx, 31, 0x105BD4u);
    ctx->pc = 0x105BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BCCu;
    // 0x105bd0: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x105BCCu, 0x105BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BD4u;
label_105bd4:
    // 0x105bd4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x105bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105bdc: 0x8e043bf4  lw          $a0, 0x3BF4($s0)
    ctx->pc = 0x105bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15348)));
    // 0x105be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105be4: 0xc042914  jal         func_10A450
    ctx->pc = 0x105BE4u;
    SET_GPR_U32(ctx, 31, 0x105BECu);
    ctx->pc = 0x105BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BE4u;
    // 0x105be8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x105BE4u, 0x105BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BECu;
label_105bec:
    // 0x105bec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x105bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105bf4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x105bf8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x105bf8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x105bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c00: 0x8e043bf4  lw          $a0, 0x3BF4($s0)
    ctx->pc = 0x105c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15348)));
    // 0x105c04: 0xc042914  jal         func_10A450
    ctx->pc = 0x105C04u;
    SET_GPR_U32(ctx, 31, 0x105C0Cu);
    ctx->pc = 0x105C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C04u;
    // 0x105c08: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x105C04u, 0x105C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C0Cu;
label_105c0c:
    // 0x105c0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x105c10u;
}
