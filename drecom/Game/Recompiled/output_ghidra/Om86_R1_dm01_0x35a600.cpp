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

// Function: Om86_R1_dm01
// Address: 0x35a600 - 0x35a7e4
void Om86_R1_dm01_0x35a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_R1_dm01_0x35a600");
#endif

    switch (ctx->pc) {
        case 0x35a658u: goto label_35a658;
        case 0x35a690u: goto label_35a690;
        case 0x35a6b0u: goto label_35a6b0;
        case 0x35a730u: goto label_35a730;
        case 0x35a73cu: goto label_35a73c;
        case 0x35a754u: goto label_35a754;
        case 0x35a78cu: goto label_35a78c;
        case 0x35a798u: goto label_35a798;
        default: break;
    }

    ctx->pc = 0x35a600u;

    // 0x35a600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a604: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35a604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35a608: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35a608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x35a60c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35a610: 0x2463a900  addiu       $v1, $v1, -0x5700
    ctx->pc = 0x35a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945024));
    // 0x35a614: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x35a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35a618: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35a618u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA900u));
    // 0x35a61c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35a620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a624: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35a624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35a628: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35a628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35a62c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a630: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x35A630u;
    {
        const bool branch_taken_0x35a630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35a630) {
            ctx->pc = 0x35A6FCu;
            goto label_35a6fc;
        }
    }
    ctx->pc = 0x35A638u;
    // 0x35a638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A638u;
    {
        const bool branch_taken_0x35a638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a638) {
            ctx->pc = 0x35A648u;
            goto label_35a648;
        }
    }
    ctx->pc = 0x35A640u;
    // 0x35a640: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x35A640u;
    {
        const bool branch_taken_0x35a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a640) {
            ctx->pc = 0x35A7D4u;
            goto label_35a7d4;
        }
    }
    ctx->pc = 0x35A648u;
label_35a648:
    // 0x35a648: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a64c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x35a64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35a650: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x35A650u;
    SET_GPR_U32(ctx, 31, 0x35A658u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x35A650u, 0x35A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A658u;
label_35a658:
    // 0x35a658: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a65c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35a660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a664: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35A664u;
    {
        const bool branch_taken_0x35a664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35a664) {
            ctx->pc = 0x35A6B8u;
            goto label_35a6b8;
        }
    }
    ctx->pc = 0x35A66Cu;
    // 0x35a66c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35a670: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35a670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35a674: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35a674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a678: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a67c: 0x2404042d  addiu       $a0, $zero, 0x42D
    ctx->pc = 0x35a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1069));
    // 0x35a680: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x35a680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a684: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35a684u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a688: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35A688u;
    SET_GPR_U32(ctx, 31, 0x35A690u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35A688u, 0x35A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A690u;
label_35a690:
    // 0x35a690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a698: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35a698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35a69c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35a69cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a6a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35a6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a6a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35a6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35a6a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35A6A8u;
    SET_GPR_U32(ctx, 31, 0x35A6B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35A6A8u, 0x35A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A6B0u;
label_35a6b0:
    // 0x35a6b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35A6B0u;
    {
        const bool branch_taken_0x35a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a6b0) {
            ctx->pc = 0x35A6ECu;
            goto label_35a6ec;
        }
    }
    ctx->pc = 0x35A6B8u;
label_35a6b8:
    // 0x35a6b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a6bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a6c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6c8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a6cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a6d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a6dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35a6e4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x35A6E4u;
    {
        const bool branch_taken_0x35a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a6e4) {
            ctx->pc = 0x35A7D4u;
            goto label_35a7d4;
        }
    }
    ctx->pc = 0x35A6ECu;
label_35a6ec:
    // 0x35a6ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35a6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35a6f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35a6f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35a6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_35a6fc:
    // 0x35a6fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a700: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a708: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x35a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x35a70c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35A70Cu;
    {
        const bool branch_taken_0x35a70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a70c) {
            ctx->pc = 0x35A754u;
            goto label_35a754;
        }
    }
    ctx->pc = 0x35A714u;
    // 0x35a714: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a718: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35a71c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a71cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a720: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a724: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35a724u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a728: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A728u;
    SET_GPR_U32(ctx, 31, 0x35A730u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A728u, 0x35A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A730u;
label_35a730:
    // 0x35a730: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a734: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A734u;
    SET_GPR_U32(ctx, 31, 0x35A73Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A734u, 0x35A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A73Cu;
label_35a73c:
    // 0x35a73c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a740: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35a740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a744: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x35a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a748: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a74c: 0xc0d8840  jal         func_362100
    ctx->pc = 0x35A74Cu;
    SET_GPR_U32(ctx, 31, 0x35A754u);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x35A74Cu, 0x35A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A754u;
label_35a754:
    // 0x35a754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a758: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a75c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35a764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A764u;
    {
        const bool branch_taken_0x35a764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a764) {
            ctx->pc = 0x35A780u;
            goto label_35a780;
        }
    }
    ctx->pc = 0x35A76Cu;
    // 0x35a76c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a770: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35a774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35a774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35a778: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a77c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
label_35a780:
    // 0x35a780: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a784: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35A784u;
    SET_GPR_U32(ctx, 31, 0x35A78Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35A784u, 0x35A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A78Cu;
label_35a78c:
    // 0x35a78c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a790: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35A790u;
    SET_GPR_U32(ctx, 31, 0x35A798u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35A790u, 0x35A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A798u;
label_35a798:
    // 0x35a798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a79c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35a79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35a7a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35A7A0u;
    {
        const bool branch_taken_0x35a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a7a0) {
            ctx->pc = 0x35A7D4u;
            goto label_35a7d4;
        }
    }
    ctx->pc = 0x35A7A8u;
    // 0x35a7a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a7ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a7b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7b8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a7bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a7c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a7cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a7d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_35a7d4:
    // 0x35a7d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a7d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a7d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35a7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A7E4u;
}
