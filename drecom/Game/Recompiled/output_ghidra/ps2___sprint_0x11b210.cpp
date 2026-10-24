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

// Function: __sprint
// Address: 0x11b210 - 0x11b254
void ps2___sprint_0x11b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sprint_0x11b210");
#endif

    switch (ctx->pc) {
        case 0x11b23cu: goto label_11b23c;
        default: break;
    }

    ctx->pc = 0x11b210u;

    // 0x11b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b21c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b220: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B224u;
    {
        const bool branch_taken_0x11b224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B224u;
        // 0x11b228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b224) {
            ctx->pc = 0x11B234u;
            goto label_11b234;
        }
    }
    ctx->pc = 0x11B22Cu;
    // 0x11b22c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B22Cu;
    {
        const bool branch_taken_0x11b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B22Cu;
        // 0x11b230: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b22c) {
            ctx->pc = 0x11B244u;
            goto label_11b244;
        }
    }
    ctx->pc = 0x11B234u;
label_11b234:
    // 0x11b234: 0xc045e00  jal         func_117800
    ctx->pc = 0x11B234u;
    SET_GPR_U32(ctx, 31, 0x11B23Cu);
    ctx->pc = 0x11B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B234u;
    // 0x11b238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117800u, 0x11B234u, 0x11B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B23Cu;
label_11b23c:
    // 0x11b23c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11b240: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_11b244:
    // 0x11b244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b24c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B24Cu;
        // 0x11b250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B254u;
}
