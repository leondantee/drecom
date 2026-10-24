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

// Function: _request_end
// Address: 0x215668 - 0x21571c
void _request_end_0x215668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_end_0x215668");
#endif

    switch (ctx->pc) {
        case 0x215668u: goto label_215668;
        case 0x21566cu: goto label_21566c;
        case 0x215670u: goto label_215670;
        case 0x215674u: goto label_215674;
        case 0x215678u: goto label_215678;
        case 0x21567cu: goto label_21567c;
        case 0x215680u: goto label_215680;
        case 0x215684u: goto label_215684;
        case 0x215688u: goto label_215688;
        case 0x21568cu: goto label_21568c;
        case 0x215690u: goto label_215690;
        case 0x215694u: goto label_215694;
        case 0x215698u: goto label_215698;
        case 0x21569cu: goto label_21569c;
        case 0x2156a0u: goto label_2156a0;
        case 0x2156a4u: goto label_2156a4;
        case 0x2156a8u: goto label_2156a8;
        case 0x2156acu: goto label_2156ac;
        case 0x2156b0u: goto label_2156b0;
        case 0x2156b4u: goto label_2156b4;
        case 0x2156b8u: goto label_2156b8;
        case 0x2156bcu: goto label_2156bc;
        case 0x2156c0u: goto label_2156c0;
        case 0x2156c4u: goto label_2156c4;
        case 0x2156c8u: goto label_2156c8;
        case 0x2156ccu: goto label_2156cc;
        case 0x2156d0u: goto label_2156d0;
        case 0x2156d4u: goto label_2156d4;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156dcu: goto label_2156dc;
        case 0x2156e0u: goto label_2156e0;
        case 0x2156e4u: goto label_2156e4;
        case 0x2156e8u: goto label_2156e8;
        case 0x2156ecu: goto label_2156ec;
        case 0x2156f0u: goto label_2156f0;
        case 0x2156f4u: goto label_2156f4;
        case 0x2156f8u: goto label_2156f8;
        case 0x2156fcu: goto label_2156fc;
        case 0x215700u: goto label_215700;
        case 0x215704u: goto label_215704;
        case 0x215708u: goto label_215708;
        case 0x21570cu: goto label_21570c;
        case 0x215710u: goto label_215710;
        case 0x215714u: goto label_215714;
        case 0x215718u: goto label_215718;
        default: break;
    }

    ctx->pc = 0x215668u;

label_215668:
    // 0x215668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21566c:
    // 0x21566c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_215670:
    // 0x215670: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x215670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_215674:
    // 0x215674: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x215674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_215678:
    // 0x215678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x215678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21567c:
    // 0x21567c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21567cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215680:
    // 0x215680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_215684:
    // 0x215684: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x215684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_215688:
    // 0x215688: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_21568c:
    if (ctx->pc == 0x21568Cu) {
        ctx->pc = 0x21568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215688u;
        // 0x21568c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215690u;
        goto label_215690;
    }
    ctx->pc = 0x215688u;
    {
        const bool branch_taken_0x215688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215688u;
        // 0x21568c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215688) {
            ctx->pc = 0x2156B0u;
            goto label_2156b0;
        }
    }
    ctx->pc = 0x215690u;
label_215690:
    // 0x215690: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_215694:
    if (ctx->pc == 0x215694u) {
        ctx->pc = 0x215694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215690u;
        // 0x215694: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215698u;
        goto label_215698;
    }
    ctx->pc = 0x215690u;
    {
        const bool branch_taken_0x215690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215690) {
            ctx->pc = 0x215694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215690u;
            // 0x215694: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2156E8u;
            goto label_2156e8;
        }
    }
    ctx->pc = 0x215698u;
label_215698:
    // 0x215698: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21569c:
    // 0x21569c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x21569cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_2156a0:
    // 0x2156a0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_2156a4:
    if (ctx->pc == 0x2156A4u) {
        ctx->pc = 0x2156A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156A0u;
        // 0x2156a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156A8u;
        goto label_2156a8;
    }
    ctx->pc = 0x2156A0u;
    {
        const bool branch_taken_0x2156a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2156a0) {
            ctx->pc = 0x2156A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2156A0u;
            // 0x2156a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2156D0u;
            goto label_2156d0;
        }
    }
    ctx->pc = 0x2156A8u;
label_2156a8:
    // 0x2156a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2156ac:
    if (ctx->pc == 0x2156ACu) {
        ctx->pc = 0x2156ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156A8u;
        // 0x2156ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156B0u;
        goto label_2156b0;
    }
    ctx->pc = 0x2156A8u;
    {
        const bool branch_taken_0x2156a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156A8u;
        // 0x2156ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156a8) {
            ctx->pc = 0x2156E8u;
            goto label_2156e8;
        }
    }
    ctx->pc = 0x2156B0u;
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
            goto label_2156ec;
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
        goto label_2156d0;
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
            goto label_2156e8;
        }
    }
    ctx->pc = 0x2156D0u;
label_2156d0:
    // 0x2156d0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2156d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2156d4:
    // 0x2156d4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2156d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2156d8:
    // 0x2156d8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2156d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2156dc:
    // 0x2156dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2156dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2156e0:
    // 0x2156e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2156e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2156e4:
    // 0x2156e4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2156e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2156e8:
    // 0x2156e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2156ec:
    // 0x2156ec: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_2156f0:
    if (ctx->pc == 0x2156F0u) {
        ctx->pc = 0x2156F4u;
        goto label_2156f4;
    }
    ctx->pc = 0x2156ECu;
    {
        const bool branch_taken_0x2156ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2156ec) {
            ctx->pc = 0x2156FCu;
            goto label_2156fc;
        }
    }
    ctx->pc = 0x2156F4u;
label_2156f4:
    // 0x2156f4: 0xc084a94  jal         func_212A50
label_2156f8:
    if (ctx->pc == 0x2156F8u) {
        ctx->pc = 0x2156FCu;
        goto label_2156fc;
    }
    ctx->pc = 0x2156F4u;
    SET_GPR_U32(ctx, 31, 0x2156FCu);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x2156FCu;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2156FCu) { return; }
    ctx->pc = 0x2156FCu;
label_2156fc:
    // 0x2156fc: 0xc085576  jal         func_2155D8
label_215700:
    if (ctx->pc == 0x215700u) {
        ctx->pc = 0x215700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156FCu;
        // 0x215700: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215704u;
        goto label_215704;
    }
    ctx->pc = 0x2156FCu;
    SET_GPR_U32(ctx, 31, 0x215704u);
    ctx->pc = 0x215700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156FCu;
    // 0x215700: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x2156FCu, 0x215704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215704u;
label_215704:
    // 0x215704: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x215704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_215708:
    // 0x215708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21570c:
    // 0x21570c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21570cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215710:
    // 0x215710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_215714:
    // 0x215714: 0x3e00008  jr          $ra
label_215718:
    if (ctx->pc == 0x215718u) {
        ctx->pc = 0x215718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215714u;
        // 0x215718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21571Cu;
        goto label_fallthrough_0x215714;
    }
    ctx->pc = 0x215714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215714u;
        // 0x215718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x215714:
    ctx->pc = 0x21571Cu;
}
