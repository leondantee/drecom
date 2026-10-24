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

// Function: Om8b_R1_flash
// Address: 0x340610 - 0x340784
void Om8b_R1_flash_0x340610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R1_flash_0x340610");
#endif

    switch (ctx->pc) {
        case 0x340684u: goto label_340684;
        case 0x340690u: goto label_340690;
        case 0x3406b4u: goto label_3406b4;
        case 0x3406c4u: goto label_3406c4;
        case 0x3406f8u: goto label_3406f8;
        case 0x34071cu: goto label_34071c;
        default: break;
    }

    ctx->pc = 0x340610u;

    // 0x340610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340614: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x340614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x340618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34061c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34061cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x340620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340624: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x340624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x340628: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x340628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34062c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34062cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340630: 0xc46012cc  lwc1        $f0, 0x12CC($v1)
    ctx->pc = 0x340630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x340634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x340638: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x340638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x34063c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340640: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x340640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340644: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x340644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x340648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34064c: 0x0  nop
    ctx->pc = 0x34064cu;
    // NOP
    // 0x340650: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x340650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340654: 0x0  nop
    ctx->pc = 0x340654u;
    // NOP
    // 0x340658: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x340658u;
    {
        const bool branch_taken_0x340658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340658) {
            ctx->pc = 0x340670u;
            goto label_340670;
        }
    }
    ctx->pc = 0x340660u;
    // 0x340660: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x340660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x340664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x340668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34066c: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x34066cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
label_340670:
    // 0x340670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x340670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340678: 0xc44c12cc  lwc1        $f12, 0x12CC($v0)
    ctx->pc = 0x340678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34067c: 0xc0d0358  jal         func_340D60
    ctx->pc = 0x34067Cu;
    SET_GPR_U32(ctx, 31, 0x340684u);
    ctx->pc = 0x340D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D60u, 0x34067Cu, 0x340684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340684u;
label_340684:
    // 0x340684: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340688: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x340688u;
    {
        const bool branch_taken_0x340688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340688) {
            ctx->pc = 0x3406C8u;
            goto label_3406c8;
        }
    }
    ctx->pc = 0x340690u;
label_340690:
    // 0x340690: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340694: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340698: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x340698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34069c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x34069cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3406a0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3406a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3406a4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3406a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3406a8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3406a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3406ac: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3406ACu;
    SET_GPR_U32(ctx, 31, 0x3406B4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3406ACu, 0x3406B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406B4u;
label_3406b4:
    // 0x3406b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3406b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3406b8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3406b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3406bc: 0xc0cfc80  jal         func_33F200
    ctx->pc = 0x3406BCu;
    SET_GPR_U32(ctx, 31, 0x3406C4u);
    ctx->pc = 0x33F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F200u, 0x3406BCu, 0x3406C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406C4u;
label_3406c4:
    // 0x3406c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3406c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3406c8:
    // 0x3406c8: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x3406c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x3406cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3406CCu;
    {
        const bool branch_taken_0x3406cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3406cc) {
            ctx->pc = 0x340690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340690;
        }
    }
    ctx->pc = 0x3406D4u;
    // 0x3406d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3406d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3406d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3406d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3406dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3406dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3406e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3406e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406e8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3406e8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406ec: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3406ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3406f0: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3406F0u;
    SET_GPR_U32(ctx, 31, 0x3406F8u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3406F0u, 0x3406F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406F8u;
label_3406f8:
    // 0x3406f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3406f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3406fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3406fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340700: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340704: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340704u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340708: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340708u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34070c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x34070cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340710: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x340710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340714: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340714u;
    SET_GPR_U32(ctx, 31, 0x34071Cu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340714u, 0x34071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34071Cu;
label_34071c:
    // 0x34071c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340720: 0x8c641290  lw          $a0, 0x1290($v1)
    ctx->pc = 0x340720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x340724: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x340724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340728: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x340728u;
    {
        const bool branch_taken_0x340728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340728) {
            ctx->pc = 0x340770u;
            goto label_340770;
        }
    }
    ctx->pc = 0x340730u;
    // 0x340730: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340734: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x340734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x340738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x340738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34073c: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x34073cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x340740: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x340740u;
    {
        const bool branch_taken_0x340740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340740) {
            ctx->pc = 0x340770u;
            goto label_340770;
        }
    }
    ctx->pc = 0x340748u;
    // 0x340748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34074c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x34074cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x340750: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x340750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340758: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x340758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x34075c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340760: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x340760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340764: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x340764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x340768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34076c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x34076cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_340770:
    // 0x340770: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x340770u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340778: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34077c: 0x3e00008  jr          $ra
    ctx->pc = 0x34077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340784u;
}
