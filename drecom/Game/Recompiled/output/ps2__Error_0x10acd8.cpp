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

// Function: _Error
// Address: 0x10acd8 - 0x10ad30
void ps2__Error_0x10acd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Error_0x10acd8");
#endif

    switch (ctx->pc) {
        case 0x10ad14u: goto label_10ad14;
        case 0x10ad24u: goto label_10ad24;
        default: break;
    }

    ctx->pc = 0x10acd8u;

    // 0x10acd8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10acdc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x10acdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ace4: 0x8c443bf4  lw          $a0, 0x3BF4($v0)
    ctx->pc = 0x10ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x10ace8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x10ACE8u;
    {
        const bool branch_taken_0x10ace8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACE8u;
        // 0x10acec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ace8) {
            ctx->pc = 0x10AD1Cu;
            goto label_10ad1c;
        }
    }
    ctx->pc = 0x10ACF0u;
    // 0x10acf0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10acf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10ACF4u;
    {
        const bool branch_taken_0x10acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10acf4) {
            ctx->pc = 0x10AD1Cu;
            goto label_10ad1c;
        }
    }
    ctx->pc = 0x10ACFCu;
    // 0x10acfc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10ad00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AD00u;
    {
        const bool branch_taken_0x10ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD00u;
        // 0x10ad04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad00) {
            ctx->pc = 0x10AD1Cu;
            goto label_10ad1c;
        }
    }
    ctx->pc = 0x10AD08u;
    // 0x10ad08: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10ad0c: 0xc042914  jal         func_10A450
    ctx->pc = 0x10AD0Cu;
    SET_GPR_U32(ctx, 31, 0x10AD14u);
    ctx->pc = 0x10AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD0Cu;
    // 0x10ad10: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10AD0Cu, 0x10AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD14u;
    {
        const bool branch_taken_0x10ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad14) {
            ctx->pc = 0x10AD28u;
            goto label_10ad28;
        }
    }
    ctx->pc = 0x10AD1Cu;
label_10ad1c:
    // 0x10ad1c: 0xc042b26  jal         func_10AC98
    ctx->pc = 0x10AD1Cu;
    SET_GPR_U32(ctx, 31, 0x10AD24u);
    ctx->pc = 0x10AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD1Cu;
    // 0x10ad20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC98u, 0x10AD1Cu, 0x10AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD24u;
label_10ad24:
    // 0x10ad24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ad24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ad28:
    // 0x10ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x10AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD28u;
        // 0x10ad2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AD30u;
}
