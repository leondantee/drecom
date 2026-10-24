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

// Function: Em0f_R1_wait
// Address: 0x30c4b0 - 0x30c668
void Em0f_R1_wait_0x30c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_wait_0x30c4b0");
#endif

    switch (ctx->pc) {
        case 0x30c518u: goto label_30c518;
        case 0x30c580u: goto label_30c580;
        case 0x30c58cu: goto label_30c58c;
        case 0x30c5c4u: goto label_30c5c4;
        case 0x30c5d0u: goto label_30c5d0;
        case 0x30c5f0u: goto label_30c5f0;
        case 0x30c5fcu: goto label_30c5fc;
        case 0x30c60cu: goto label_30c60c;
        case 0x30c618u: goto label_30c618;
        default: break;
    }

    ctx->pc = 0x30c4b0u;

    // 0x30c4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c4b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30c4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30c4b8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30c4bc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30c4c0: 0x24639930  addiu       $v1, $v1, -0x66D0
    ctx->pc = 0x30c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940976));
    // 0x30c4c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c4c8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30c4c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399930u));
    // 0x30c4cc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30c4d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c4d4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30c4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30c4d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30c4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30c4dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c4e0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30C4E0u;
    {
        const bool branch_taken_0x30c4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c4e0) {
            ctx->pc = 0x30C530u;
            goto label_30c530;
        }
    }
    ctx->pc = 0x30C4E8u;
    // 0x30c4e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C4E8u;
    {
        const bool branch_taken_0x30c4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c4e8) {
            ctx->pc = 0x30C4F8u;
            goto label_30c4f8;
        }
    }
    ctx->pc = 0x30C4F0u;
    // 0x30c4f0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x30C4F0u;
    {
        const bool branch_taken_0x30c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c4f0) {
            ctx->pc = 0x30C658u;
            goto label_30c658;
        }
    }
    ctx->pc = 0x30C4F8u;
label_30c4f8:
    // 0x30c4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c4fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30c504: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x30c504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x30c508: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30c508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c50c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30c50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c510: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30C510u;
    SET_GPR_U32(ctx, 31, 0x30C518u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30C510u, 0x30C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C518u;
label_30c518:
    // 0x30c518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c51c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30c51cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30c520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c524: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30c524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30c528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c52c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30c52cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30c530:
    // 0x30c530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c534: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30c534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30c538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30c53c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x30c540: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30C540u;
    {
        const bool branch_taken_0x30c540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c540) {
            ctx->pc = 0x30C5D0u;
            goto label_30c5d0;
        }
    }
    ctx->pc = 0x30C548u;
    // 0x30c548: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c54c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c550: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30c554: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c558: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c55c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30c560: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c568: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30c568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c56c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30c570: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c570u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c574: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30c574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c578: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30C578u;
    SET_GPR_U32(ctx, 31, 0x30C580u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30C578u, 0x30C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C580u;
label_30c580:
    // 0x30c580: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30c580u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c584: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30C584u;
    SET_GPR_U32(ctx, 31, 0x30C58Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30C584u, 0x30C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C58Cu;
label_30c58c:
    // 0x30c58c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c590: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c594: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30c598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c59c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c5a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30c5a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c5a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c5ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30c5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c5b0: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30c5b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c5b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c5bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30C5BCu;
    SET_GPR_U32(ctx, 31, 0x30C5C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30C5BCu, 0x30C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5C4u;
label_30c5c4:
    // 0x30c5c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30c5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c5c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30C5C8u;
    SET_GPR_U32(ctx, 31, 0x30C5D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30C5C8u, 0x30C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5D0u;
label_30c5d0:
    // 0x30c5d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c5d4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30c5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30c5d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c5dc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30c5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c5e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c5e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c5e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c5e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30C5E8u;
    SET_GPR_U32(ctx, 31, 0x30C5F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30C5E8u, 0x30C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5F0u;
label_30c5f0:
    // 0x30c5f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c5f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30C5F4u;
    SET_GPR_U32(ctx, 31, 0x30C5FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30C5F4u, 0x30C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5FCu;
label_30c5fc:
    // 0x30c5fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c604: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30C604u;
    SET_GPR_U32(ctx, 31, 0x30C60Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30C604u, 0x30C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C60Cu;
label_30c60c:
    // 0x30c60c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c610: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30C610u;
    SET_GPR_U32(ctx, 31, 0x30C618u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30C610u, 0x30C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C618u;
label_30c618:
    // 0x30c618: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c61c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30c61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30c620: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30C620u;
    {
        const bool branch_taken_0x30c620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c620) {
            ctx->pc = 0x30C658u;
            goto label_30c658;
        }
    }
    ctx->pc = 0x30C628u;
    // 0x30c628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c62c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c630: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c63c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c644: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c64c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c654: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30c658:
    // 0x30c658: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30c658u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c65c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30c65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30c660: 0x3e00008  jr          $ra
    ctx->pc = 0x30C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C668u;
}
