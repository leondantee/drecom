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

// Function: entry_002cf510
// Address: 0x2cf510 - 0x2cf6a4
void entry_002cf510_0x2cf510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf510_0x2cf510");
#endif

    switch (ctx->pc) {
        case 0x2cf588u: goto label_2cf588;
        case 0x2cf5d8u: goto label_2cf5d8;
        case 0x2cf628u: goto label_2cf628;
        case 0x2cf674u: goto label_2cf674;
        case 0x2cf6a0u: goto label_2cf6a0;
        default: break;
    }

    ctx->pc = 0x2cf510u;

    // 0x2cf510: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2cf510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf514: 0x8ce301f8  lw          $v1, 0x1F8($a3)
    ctx->pc = 0x2cf514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 504)));
    // 0x2cf518: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2CF518u;
    {
        const bool branch_taken_0x2cf518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf518) {
            ctx->pc = 0x2CF6A4u;
            return;
        }
    }
    ctx->pc = 0x2CF520u;
    // 0x2cf520: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf524: 0x8ca301f8  lw          $v1, 0x1F8($a1)
    ctx->pc = 0x2cf524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 504)));
    // 0x2cf528: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf52c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf52cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf530: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2cf530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cf534: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x2cf534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2cf538: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2cf53c: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x2cf53cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x2cf540: 0x24c7ade0  addiu       $a3, $a2, -0x5220
    ctx->pc = 0x2cf540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946272));
    // 0x2cf544: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x2cf544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2cf548: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf54c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf54cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf550: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2cf550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cf554: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf558: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x2cf558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cf55c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cf55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2cf560: 0x24a48310  addiu       $a0, $a1, -0x7CF0
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935312));
    // 0x2cf564: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2cf564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2cf568: 0x24e582e0  addiu       $a1, $a3, -0x7D20
    ctx->pc = 0x2cf568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935264));
    // 0x2cf56c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2cf56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cf570: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cf570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cf574: 0x246782f8  addiu       $a3, $v1, -0x7D08
    ctx->pc = 0x2cf574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935288));
    // 0x2cf578: 0x8d290244  lw          $t1, 0x244($t1)
    ctx->pc = 0x2cf578u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 580)));
    // 0x2cf57c: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x2cf57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2cf580: 0xc075a78  jal         func_1D69E0
    ctx->pc = 0x2CF580u;
    SET_GPR_U32(ctx, 31, 0x2CF588u);
    ctx->pc = 0x1D69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69E0u, 0x2CF580u, 0x2CF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF588u;
label_2cf588:
    // 0x2cf588: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2cf588u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf58c: 0x12e00045  beqz        $s7, . + 4 + (0x45 << 2)
    ctx->pc = 0x2CF58Cu;
    {
        const bool branch_taken_0x2cf58c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf58c) {
            ctx->pc = 0x2CF6A4u;
            return;
        }
    }
    ctx->pc = 0x2CF594u;
    // 0x2cf594: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf598: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf5a0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf5a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf5a8: 0x8c760234  lw          $s6, 0x234($v1)
    ctx->pc = 0x2cf5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x2cf5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf5b0: 0x8c270140  lw          $a3, 0x140($at)
    ctx->pc = 0x2cf5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf5b4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cf5b8: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2cf5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cf5bc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2cf5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cf5c0: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x2cf5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf5c4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2cf5c8: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x2cf5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
    // 0x2cf5cc: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x2cf5ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2cf5d0: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2CF5D0u;
    SET_GPR_U32(ctx, 31, 0x2CF5D8u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2CF5D0u, 0x2CF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5D8u;
label_2cf5d8:
    // 0x2cf5d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2cf5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf5dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf5e0: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf5e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cf5e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf5ec: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x2cf5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf5f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf5f4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2cf5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cf5f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf5fc: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x2cf5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf600: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2cf600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2cf604: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x2cf604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cf608: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2cf608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2cf60c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x2cf610: 0x2463ade0  addiu       $v1, $v1, -0x5220
    ctx->pc = 0x2cf610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946272));
    // 0x2cf614: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf618: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x2cf618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
    // 0x2cf61c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2cf61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cf620: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2CF620u;
    SET_GPR_U32(ctx, 31, 0x2CF628u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2CF620u, 0x2CF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF628u;
label_2cf628:
    // 0x2cf628: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cf628u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf62c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf630: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf634: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2cf634u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cf638: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2cf638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cf63c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2cf63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cf640: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf644: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf64c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf650: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2cf650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf654: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf658: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2cf658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cf65c: 0x8c670244  lw          $a3, 0x244($v1)
    ctx->pc = 0x2cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x2cf660: 0x24a40204  addiu       $a0, $a1, 0x204
    ctx->pc = 0x2cf660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 516));
    // 0x2cf664: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2cf664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2cf668: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2cf668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2cf66c: 0xc06b0a8  jal         func_1AC2A0
    ctx->pc = 0x2CF66Cu;
    SET_GPR_U32(ctx, 31, 0x2CF674u);
    ctx->pc = 0x1AC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC2A0u, 0x2CF66Cu, 0x2CF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF674u;
label_2cf674:
    // 0x2cf674: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cf674u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cf678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf67c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2cf67cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf680: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2cf680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2cf684: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2cf684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cf688: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf68c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf690: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cf690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cf694: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x2cf694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
    // 0x2cf698: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2CF698u;
    SET_GPR_U32(ctx, 31, 0x2CF6A0u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2CF698u, 0x2CF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6A0u;
label_2cf6a0:
    // 0x2cf6a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cf6a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2cf6a4u;
}
