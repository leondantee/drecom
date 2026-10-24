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

// Function: entry_002cf6f0
// Address: 0x2cf6f0 - 0x2cf880
void entry_002cf6f0_0x2cf6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf6f0_0x2cf6f0");
#endif

    switch (ctx->pc) {
        case 0x2cf768u: goto label_2cf768;
        case 0x2cf7b8u: goto label_2cf7b8;
        case 0x2cf808u: goto label_2cf808;
        case 0x2cf850u: goto label_2cf850;
        case 0x2cf87cu: goto label_2cf87c;
        default: break;
    }

    ctx->pc = 0x2cf6f0u;

    // 0x2cf6f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf6f4: 0x8c6301f8  lw          $v1, 0x1F8($v1)
    ctx->pc = 0x2cf6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2cf6f8: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2CF6F8u;
    {
        const bool branch_taken_0x2cf6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf6f8) {
            ctx->pc = 0x2CF880u;
            return;
        }
    }
    ctx->pc = 0x2CF700u;
    // 0x2cf700: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf704: 0x8c6301f8  lw          $v1, 0x1F8($v1)
    ctx->pc = 0x2cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x2cf708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf70c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x2cf70cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf710: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2cf710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2cf714: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2cf714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2cf718: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x2cf718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2cf71c: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x2cf71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x2cf720: 0x24a4ade0  addiu       $a0, $a1, -0x5220
    ctx->pc = 0x2cf720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946272));
    // 0x2cf724: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x2cf724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2cf728: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf72c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf72cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf730: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2cf730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cf734: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf738: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x2cf738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cf73c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2cf73cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2cf740: 0x24c48310  addiu       $a0, $a2, -0x7CF0
    ctx->pc = 0x2cf740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935312));
    // 0x2cf744: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cf744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2cf748: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x2cf748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x2cf74c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2cf74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cf750: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cf754: 0x246782f8  addiu       $a3, $v1, -0x7D08
    ctx->pc = 0x2cf754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935288));
    // 0x2cf758: 0x8d290244  lw          $t1, 0x244($t1)
    ctx->pc = 0x2cf758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 580)));
    // 0x2cf75c: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x2cf75cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2cf760: 0xc075a78  jal         func_1D69E0
    ctx->pc = 0x2CF760u;
    SET_GPR_U32(ctx, 31, 0x2CF768u);
    ctx->pc = 0x1D69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69E0u, 0x2CF760u, 0x2CF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF768u;
label_2cf768:
    // 0x2cf768: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2cf768u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf76c: 0x12e00044  beqz        $s7, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CF76Cu;
    {
        const bool branch_taken_0x2cf76c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf76c) {
            ctx->pc = 0x2CF880u;
            return;
        }
    }
    ctx->pc = 0x2CF774u;
    // 0x2cf774: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf778: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf778u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf780: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf784: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf788: 0x8c760234  lw          $s6, 0x234($v1)
    ctx->pc = 0x2cf788u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x2cf78c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf790: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x2cf790u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf794: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2cf794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2cf798: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x2cf798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cf79c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2cf79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf7a0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf7a4: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x2cf7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf7a8: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x2cf7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
    // 0x2cf7ac: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x2cf7acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2cf7b0: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2CF7B0u;
    SET_GPR_U32(ctx, 31, 0x2CF7B8u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2CF7B0u, 0x2CF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7B8u;
label_2cf7b8:
    // 0x2cf7b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2cf7b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf7bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf7c0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf7c4: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x2cf7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2cf7c8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2cf7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2cf7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf7d0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf7d4: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x2cf7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cf7d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf7dc: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf7e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf7e4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2cf7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf7e8: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2cf7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2cf7ec: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x2cf7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x2cf7f0: 0x2483ade0  addiu       $v1, $a0, -0x5220
    ctx->pc = 0x2cf7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946272));
    // 0x2cf7f4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cf7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf7f8: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x2cf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
    // 0x2cf7fc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2cf7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cf800: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2CF800u;
    SET_GPR_U32(ctx, 31, 0x2CF808u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2CF800u, 0x2CF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF808u;
label_2cf808:
    // 0x2cf808: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cf808u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf80c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf810: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf810u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf814: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cf814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cf818: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf81c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2cf81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf820: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf824: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cf824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf828: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf82c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf82cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf830: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x2cf830u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf834: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf838: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cf838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cf83c: 0x8c650244  lw          $a1, 0x244($v1)
    ctx->pc = 0x2cf83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x2cf840: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2cf840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x2cf844: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2cf844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2cf848: 0xc06b0a8  jal         func_1AC2A0
    ctx->pc = 0x2CF848u;
    SET_GPR_U32(ctx, 31, 0x2CF850u);
    ctx->pc = 0x1AC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC2A0u, 0x2CF848u, 0x2CF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF850u;
label_2cf850:
    // 0x2cf850: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2cf850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf854: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf858: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf85c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2cf85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cf860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf864: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2cf864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf868: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf86c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cf86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf870: 0x24a40204  addiu       $a0, $a1, 0x204
    ctx->pc = 0x2cf870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 516));
    // 0x2cf874: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2CF874u;
    SET_GPR_U32(ctx, 31, 0x2CF87Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2CF874u, 0x2CF87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF87Cu;
label_2cf87c:
    // 0x2cf87c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cf87cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2cf880u;
}
