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

// Function: Regist_search_work
// Address: 0x15b3d0 - 0x15b598
void Regist_search_work_0x15b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Regist_search_work_0x15b3d0");
#endif

    switch (ctx->pc) {
        case 0x15b3fcu: goto label_15b3fc;
        case 0x15b484u: goto label_15b484;
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b540u: goto label_15b540;
        default: break;
    }

    ctx->pc = 0x15b3d0u;

    // 0x15b3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b3d4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x15b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x15b3d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b3e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x15b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x15b3e8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x15b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x15b3ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15b3ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b3f0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15b3f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b3f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15B3F4u;
    {
        const bool branch_taken_0x15b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b3f4) {
            ctx->pc = 0x15B4A8u;
            goto label_15b4a8;
        }
    }
    ctx->pc = 0x15B3FCu;
label_15b3fc:
    // 0x15b3fc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15b400: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15b404: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x15b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x15b408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b40c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x15b40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15b410: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x15b414: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b418: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b41c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15B41Cu;
    {
        const bool branch_taken_0x15b41c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b41c) {
            ctx->pc = 0x15B4A0u;
            goto label_15b4a0;
        }
    }
    ctx->pc = 0x15B424u;
    // 0x15b424: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15b428: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15b42c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15B42Cu;
    {
        const bool branch_taken_0x15b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b42c) {
            ctx->pc = 0x15B4A0u;
            goto label_15b4a0;
        }
    }
    ctx->pc = 0x15B434u;
    // 0x15b434: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b438: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b43c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b440: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x15b440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b444: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b448: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b450: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x15b450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x15b454: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b458: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b45c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b460: 0x922210a9  lbu         $v0, 0x10A9($s1)
    ctx->pc = 0x15b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4265)));
    // 0x15b464: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b468: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b46c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b474: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b478: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15b478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b47c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B47Cu;
    SET_GPR_U32(ctx, 31, 0x15B484u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B47Cu, 0x15B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B484u;
label_15b484:
    // 0x15b484: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15b488: 0x2e020028  sltiu       $v0, $s0, 0x28
    ctx->pc = 0x15b488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x15b48c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B48Cu;
    {
        const bool branch_taken_0x15b48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b48c) {
            ctx->pc = 0x15B4A0u;
            goto label_15b4a0;
        }
    }
    ctx->pc = 0x15B494u;
    // 0x15b494: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x15b494u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b498: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15B498u;
    {
        const bool branch_taken_0x15b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b498) {
            ctx->pc = 0x15B57Cu;
            goto label_15b57c;
        }
    }
    ctx->pc = 0x15B4A0u;
label_15b4a0:
    // 0x15b4a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15b4a4: 0x0  nop
    ctx->pc = 0x15b4a4u;
    // NOP
label_15b4a8:
    // 0x15b4a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x15b4ac: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x15b4b0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x15b4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15b4b4: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x15B4B4u;
    {
        const bool branch_taken_0x15b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b4b4) {
            ctx->pc = 0x15B3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b3fc;
        }
    }
    ctx->pc = 0x15B4BCu;
    // 0x15b4bc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15b4bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b4c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15B4C0u;
    {
        const bool branch_taken_0x15b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4c0) {
            ctx->pc = 0x15B560u;
            goto label_15b560;
        }
    }
    ctx->pc = 0x15B4C8u;
label_15b4c8:
    // 0x15b4c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15b4cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x15b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x15b4d0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x15b4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b4d8: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x15b4dc: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x15b4e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b4e8: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15B4E8u;
    {
        const bool branch_taken_0x15b4e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b4e8) {
            ctx->pc = 0x15B55Cu;
            goto label_15b55c;
        }
    }
    ctx->pc = 0x15B4F0u;
    // 0x15b4f0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b4f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b4fc: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x15b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b500: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b504: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b50c: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x15b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x15b510: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b514: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b518: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b51c: 0x922210a9  lbu         $v0, 0x10A9($s1)
    ctx->pc = 0x15b51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4265)));
    // 0x15b520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b524: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b528: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b530: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b534: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b538: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B538u;
    SET_GPR_U32(ctx, 31, 0x15B540u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B538u, 0x15B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B540u;
label_15b540:
    // 0x15b540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15b544: 0x2e020028  sltiu       $v0, $s0, 0x28
    ctx->pc = 0x15b544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x15b548: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B548u;
    {
        const bool branch_taken_0x15b548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b548) {
            ctx->pc = 0x15B55Cu;
            goto label_15b55c;
        }
    }
    ctx->pc = 0x15B550u;
    // 0x15b550: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x15b550u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b554: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15B554u;
    {
        const bool branch_taken_0x15b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b554) {
            ctx->pc = 0x15B57Cu;
            goto label_15b57c;
        }
    }
    ctx->pc = 0x15B55Cu;
label_15b55c:
    // 0x15b55c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15b55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15b560:
    // 0x15b560: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15b564: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x15b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x15b568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b56c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15b56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b570: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x15B570u;
    {
        const bool branch_taken_0x15b570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b570) {
            ctx->pc = 0x15B4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4c8;
        }
    }
    ctx->pc = 0x15B578u;
    // 0x15b578: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x15b578u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15b57c:
    // 0x15b57c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x15b57cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b58c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b590: 0x3e00008  jr          $ra
    ctx->pc = 0x15B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B598u;
}
