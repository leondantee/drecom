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

// Function: asinf
// Address: 0x115698 - 0x115794
void asinf_0x115698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("asinf_0x115698");
#endif

    switch (ctx->pc) {
        case 0x1156b4u: goto label_1156b4;
        case 0x1156d0u: goto label_1156d0;
        case 0x1156e0u: goto label_1156e0;
        case 0x115714u: goto label_115714;
        case 0x115734u: goto label_115734;
        case 0x115744u: goto label_115744;
        case 0x115760u: goto label_115760;
        case 0x115770u: goto label_115770;
        default: break;
    }

    ctx->pc = 0x115698u;

    // 0x115698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x115698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11569c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11569cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1156a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1156a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1156a4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1156a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1156a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1156a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1156ac: 0xc044724  jal         func_111C90
    ctx->pc = 0x1156ACu;
    SET_GPR_U32(ctx, 31, 0x1156B4u);
    ctx->pc = 0x1156B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156ACu;
    // 0x1156b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C90u, 0x1156ACu, 0x1156B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156B4u;
label_1156b4:
    // 0x1156b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1156b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1156b8: 0x8c50d888  lw          $s0, -0x2778($v0)
    ctx->pc = 0x1156b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AD888u));
    // 0x1156bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1156bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1156c0: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1156C0u;
    {
        const bool branch_taken_0x1156c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156C0u;
        // 0x1156c4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156c0) {
            ctx->pc = 0x115778u;
            goto label_115778;
        }
    }
    ctx->pc = 0x1156C8u;
    // 0x1156c8: 0xc045462  jal         func_115188
    ctx->pc = 0x1156C8u;
    SET_GPR_U32(ctx, 31, 0x1156D0u);
    ctx->pc = 0x1156CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156C8u;
    // 0x1156cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115188u, 0x1156C8u, 0x1156D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156D0u;
label_1156d0:
    // 0x1156d0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1156D0u;
    {
        const bool branch_taken_0x1156d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1156D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156D0u;
        // 0x1156d4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156d0) {
            ctx->pc = 0x11577Cu;
            goto label_11577c;
        }
    }
    ctx->pc = 0x1156D8u;
    // 0x1156d8: 0xc045420  jal         func_115080
    ctx->pc = 0x1156D8u;
    SET_GPR_U32(ctx, 31, 0x1156E0u);
    ctx->pc = 0x1156DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156D8u;
    // 0x1156dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x1156D8u, 0x1156E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156E0u;
label_1156e0:
    // 0x1156e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1156e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1156e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1156e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1156e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1156e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1156ec: 0x0  nop
    ctx->pc = 0x1156ecu;
    // NOP
    // 0x1156f0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1156F0u;
    {
        const bool branch_taken_0x1156f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1156F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156F0u;
        // 0x1156f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156f0) {
            ctx->pc = 0x115778u;
            goto label_115778;
        }
    }
    ctx->pc = 0x1156F8u;
    // 0x1156f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1156fc: 0x2442d930  addiu       $v0, $v0, -0x26D0
    ctx->pc = 0x1156fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957360));
    // 0x115700: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x115700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x115704: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x115704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x115708: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11570c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x11570Cu;
    SET_GPR_U32(ctx, 31, 0x115714u);
    ctx->pc = 0x115710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11570Cu;
    // 0x115710: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x11570Cu, 0x115714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115714u;
label_115714:
    // 0x115714: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115718: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x115718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x11571c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x11571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x115720: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x115720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115724: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115724u;
    {
        const bool branch_taken_0x115724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x115728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115724u;
        // 0x115728: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115724) {
            ctx->pc = 0x11573Cu;
            goto label_11573c;
        }
    }
    ctx->pc = 0x11572Cu;
    // 0x11572c: 0xc04527a  jal         func_1149E8
    ctx->pc = 0x11572Cu;
    SET_GPR_U32(ctx, 31, 0x115734u);
    ctx->pc = 0x115730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11572Cu;
    // 0x115730: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149E8u, 0x11572Cu, 0x115734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115734u;
label_115734:
    // 0x115734: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115734u;
    {
        const bool branch_taken_0x115734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115734u;
        // 0x115738: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115734) {
            ctx->pc = 0x115750u;
            goto label_115750;
        }
    }
    ctx->pc = 0x11573Cu;
label_11573c:
    // 0x11573c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11573Cu;
    SET_GPR_U32(ctx, 31, 0x115744u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11573Cu, 0x115744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115744u;
label_115744:
    // 0x115744: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x115744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x115748: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11574c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_115750:
    // 0x115750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115750u;
    {
        const bool branch_taken_0x115750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115750) {
            ctx->pc = 0x115768u;
            goto label_115768;
        }
    }
    ctx->pc = 0x115758u;
    // 0x115758: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115758u;
    SET_GPR_U32(ctx, 31, 0x115760u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115758u, 0x115760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115760u;
label_115760:
    // 0x115760: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115764: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_115768:
    // 0x115768: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x115768u;
    SET_GPR_U32(ctx, 31, 0x115770u);
    ctx->pc = 0x11576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115768u;
    // 0x11576c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x115768u, 0x115770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115770u;
label_115770:
    // 0x115770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115770u;
    {
        const bool branch_taken_0x115770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115770u;
        // 0x115774: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115770) {
            ctx->pc = 0x115780u;
            goto label_115780;
        }
    }
    ctx->pc = 0x115778u;
label_115778:
    // 0x115778: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x115778u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_11577c:
    // 0x11577c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_115780:
    // 0x115780: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x115780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115784: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x115784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x115788: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x115788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11578c: 0x3e00008  jr          $ra
    ctx->pc = 0x11578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11578Cu;
        // 0x115790: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115794u;
}
