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

// Function: acosf
// Address: 0x115598 - 0x115694
void acosf_0x115598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("acosf_0x115598");
#endif

    switch (ctx->pc) {
        case 0x1155b4u: goto label_1155b4;
        case 0x1155d0u: goto label_1155d0;
        case 0x1155e0u: goto label_1155e0;
        case 0x115614u: goto label_115614;
        case 0x115634u: goto label_115634;
        case 0x115644u: goto label_115644;
        case 0x115660u: goto label_115660;
        case 0x115670u: goto label_115670;
        default: break;
    }

    ctx->pc = 0x115598u;

    // 0x115598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x115598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11559c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11559cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1155a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1155a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1155a4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1155a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1155a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1155a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1155ac: 0xc044618  jal         func_111860
    ctx->pc = 0x1155ACu;
    SET_GPR_U32(ctx, 31, 0x1155B4u);
    ctx->pc = 0x1155B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155ACu;
    // 0x1155b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111860u, 0x1155ACu, 0x1155B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155B4u;
label_1155b4:
    // 0x1155b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1155b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1155b8: 0x8c50d888  lw          $s0, -0x2778($v0)
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AD888u));
    // 0x1155bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1155bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1155c0: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1155C0u;
    {
        const bool branch_taken_0x1155c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155c0) {
            ctx->pc = 0x115678u;
            goto label_115678;
        }
    }
    ctx->pc = 0x1155C8u;
    // 0x1155c8: 0xc045462  jal         func_115188
    ctx->pc = 0x1155C8u;
    SET_GPR_U32(ctx, 31, 0x1155D0u);
    ctx->pc = 0x1155CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155C8u;
    // 0x1155cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115188u, 0x1155C8u, 0x1155D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155D0u;
label_1155d0:
    // 0x1155d0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1155D0u;
    {
        const bool branch_taken_0x1155d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1155D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155D0u;
        // 0x1155d4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155d0) {
            ctx->pc = 0x11567Cu;
            goto label_11567c;
        }
    }
    ctx->pc = 0x1155D8u;
    // 0x1155d8: 0xc045420  jal         func_115080
    ctx->pc = 0x1155D8u;
    SET_GPR_U32(ctx, 31, 0x1155E0u);
    ctx->pc = 0x1155DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155D8u;
    // 0x1155dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x1155D8u, 0x1155E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155E0u;
label_1155e0:
    // 0x1155e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1155e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1155e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1155e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1155e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1155e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1155ec: 0x0  nop
    ctx->pc = 0x1155ecu;
    // NOP
    // 0x1155f0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1155F0u;
    {
        const bool branch_taken_0x1155f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1155F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155F0u;
        // 0x1155f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155f0) {
            ctx->pc = 0x115678u;
            goto label_115678;
        }
    }
    ctx->pc = 0x1155F8u;
    // 0x1155f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1155fc: 0x2442d928  addiu       $v0, $v0, -0x26D8
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957352));
    // 0x115600: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x115600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x115604: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x115604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x115608: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115608u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11560c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x11560Cu;
    SET_GPR_U32(ctx, 31, 0x115614u);
    ctx->pc = 0x115610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11560Cu;
    // 0x115610: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x11560Cu, 0x115614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115614u;
label_115614:
    // 0x115614: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115618: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x115618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x11561c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x11561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x115620: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x115620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115624: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115624u;
    {
        const bool branch_taken_0x115624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x115628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115624u;
        // 0x115628: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115624) {
            ctx->pc = 0x11563Cu;
            goto label_11563c;
        }
    }
    ctx->pc = 0x11562Cu;
    // 0x11562c: 0xc04527a  jal         func_1149E8
    ctx->pc = 0x11562Cu;
    SET_GPR_U32(ctx, 31, 0x115634u);
    ctx->pc = 0x115630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11562Cu;
    // 0x115630: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149E8u, 0x11562Cu, 0x115634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115634u;
label_115634:
    // 0x115634: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115634u;
    {
        const bool branch_taken_0x115634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115634u;
        // 0x115638: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115634) {
            ctx->pc = 0x115650u;
            goto label_115650;
        }
    }
    ctx->pc = 0x11563Cu;
label_11563c:
    // 0x11563c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11563Cu;
    SET_GPR_U32(ctx, 31, 0x115644u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11563Cu, 0x115644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115644u;
label_115644:
    // 0x115644: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x115644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x115648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11564c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_115650:
    // 0x115650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115650u;
    {
        const bool branch_taken_0x115650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115650) {
            ctx->pc = 0x115668u;
            goto label_115668;
        }
    }
    ctx->pc = 0x115658u;
    // 0x115658: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115658u;
    SET_GPR_U32(ctx, 31, 0x115660u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115658u, 0x115660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115660u;
label_115660:
    // 0x115660: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115664: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_115668:
    // 0x115668: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x115668u;
    SET_GPR_U32(ctx, 31, 0x115670u);
    ctx->pc = 0x11566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115668u;
    // 0x11566c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x115668u, 0x115670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115670u;
label_115670:
    // 0x115670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115670u;
    {
        const bool branch_taken_0x115670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115670u;
        // 0x115674: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115670) {
            ctx->pc = 0x115680u;
            goto label_115680;
        }
    }
    ctx->pc = 0x115678u;
label_115678:
    // 0x115678: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x115678u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_11567c:
    // 0x11567c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11567cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_115680:
    // 0x115680: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x115680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115684: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x115684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x115688: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x115688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11568c: 0x3e00008  jr          $ra
    ctx->pc = 0x11568Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11568Cu;
        // 0x115690: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11568Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115694u;
}
