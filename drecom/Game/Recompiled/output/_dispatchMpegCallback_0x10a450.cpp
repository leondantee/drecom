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

// Function: _dispatchMpegCallback
// Address: 0x10a450 - 0x10a4a0
void _dispatchMpegCallback_0x10a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispatchMpegCallback_0x10a450");
#endif

    switch (ctx->pc) {
        case 0x10a450u: goto label_10a450;
        case 0x10a454u: goto label_10a454;
        case 0x10a458u: goto label_10a458;
        case 0x10a45cu: goto label_10a45c;
        case 0x10a460u: goto label_10a460;
        case 0x10a464u: goto label_10a464;
        case 0x10a468u: goto label_10a468;
        case 0x10a46cu: goto label_10a46c;
        case 0x10a470u: goto label_10a470;
        case 0x10a474u: goto label_10a474;
        case 0x10a478u: goto label_10a478;
        case 0x10a47cu: goto label_10a47c;
        case 0x10a480u: goto label_10a480;
        case 0x10a484u: goto label_10a484;
        case 0x10a488u: goto label_10a488;
        case 0x10a48cu: goto label_10a48c;
        case 0x10a490u: goto label_10a490;
        case 0x10a494u: goto label_10a494;
        case 0x10a498u: goto label_10a498;
        case 0x10a49cu: goto label_10a49c;
        default: break;
    }

    ctx->pc = 0x10a450u;

label_10a450:
    // 0x10a450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10a454:
    // 0x10a454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10a454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a458:
    // 0x10a458: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_10a45c:
    if (ctx->pc == 0x10A45Cu) {
        ctx->pc = 0x10A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A458u;
        // 0x10a45c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A460u;
        goto label_10a460;
    }
    ctx->pc = 0x10A458u;
    {
        const bool branch_taken_0x10a458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A458u;
        // 0x10a45c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a458) {
            ctx->pc = 0x10A490u;
            goto label_10a490;
        }
    }
    ctx->pc = 0x10A460u;
label_10a460:
    // 0x10a460: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10a460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_10a464:
    // 0x10a464: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_10a468:
    if (ctx->pc == 0x10A468u) {
        ctx->pc = 0x10A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A464u;
        // 0x10a468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A46Cu;
        goto label_10a46c;
    }
    ctx->pc = 0x10A464u;
    {
        const bool branch_taken_0x10a464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A464u;
        // 0x10a468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a464) {
            ctx->pc = 0x10A494u;
            goto label_10a494;
        }
    }
    ctx->pc = 0x10A46Cu;
label_10a46c:
    // 0x10a46c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10a470:
    // 0x10a470: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x10a470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_10a474:
    // 0x10a474: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x10a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_10a478:
    // 0x10a478: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x10a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_10a47c:
    // 0x10a47c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_10a480:
    if (ctx->pc == 0x10A480u) {
        ctx->pc = 0x10A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A47Cu;
        // 0x10a480: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A484u;
        goto label_10a484;
    }
    ctx->pc = 0x10A47Cu;
    {
        const bool branch_taken_0x10a47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A47Cu;
        // 0x10a480: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a47c) {
            ctx->pc = 0x10A494u;
            goto label_10a494;
        }
    }
    ctx->pc = 0x10A484u;
label_10a484:
    // 0x10a484: 0x60f809  jalr        $v1
label_10a488:
    if (ctx->pc == 0x10A488u) {
        ctx->pc = 0x10A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A484u;
        // 0x10a488: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A48Cu;
        goto label_10a48c;
    }
    ctx->pc = 0x10A484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10A48Cu);
        ctx->pc = 0x10A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A484u;
        // 0x10a488: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A484u, 0x10A48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A48Cu;
label_10a48c:
    // 0x10a48c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10a48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a490:
    // 0x10a490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a494:
    // 0x10a494: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x10a494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10a498:
    // 0x10a498: 0x3e00008  jr          $ra
label_10a49c:
    if (ctx->pc == 0x10A49Cu) {
        ctx->pc = 0x10A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A498u;
        // 0x10a49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4A0u;
        goto label_fallthrough_0x10a498;
    }
    ctx->pc = 0x10A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A498u;
        // 0x10a49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a498:
    ctx->pc = 0x10A4A0u;
}
