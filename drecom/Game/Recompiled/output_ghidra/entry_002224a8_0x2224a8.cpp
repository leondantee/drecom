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

// Function: entry_002224a8
// Address: 0x2224a8 - 0x222c90
void entry_002224a8_0x2224a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002224a8_0x2224a8");
#endif

    switch (ctx->pc) {
        case 0x2224c8u: goto label_2224c8;
        case 0x2224ecu: goto label_2224ec;
        case 0x222510u: goto label_222510;
        case 0x22252cu: goto label_22252c;
        case 0x2225a0u: goto label_2225a0;
        case 0x2225e8u: goto label_2225e8;
        case 0x222610u: goto label_222610;
        case 0x222654u: goto label_222654;
        case 0x22267cu: goto label_22267c;
        case 0x2226acu: goto label_2226ac;
        case 0x2226e0u: goto label_2226e0;
        case 0x222708u: goto label_222708;
        case 0x22279cu: goto label_22279c;
        case 0x2227e8u: goto label_2227e8;
        case 0x22284cu: goto label_22284c;
        case 0x222898u: goto label_222898;
        case 0x2228fcu: goto label_2228fc;
        case 0x222964u: goto label_222964;
        case 0x2229a8u: goto label_2229a8;
        case 0x2229f4u: goto label_2229f4;
        case 0x222a5cu: goto label_222a5c;
        case 0x222ac8u: goto label_222ac8;
        case 0x222b08u: goto label_222b08;
        case 0x222b50u: goto label_222b50;
        case 0x222bb8u: goto label_222bb8;
        case 0x222c1cu: goto label_222c1c;
        case 0x222c60u: goto label_222c60;
        case 0x222c8cu: goto label_222c8c;
        default: break;
    }

    ctx->pc = 0x2224a8u;

    // 0x2224a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2224a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2224ac: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2224b0: 0x24750120  addiu       $s5, $v1, 0x120
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2224b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2224b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2224b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2224b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2224bc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2224bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2224c0: 0xc079140  jal         func_1E4500
    ctx->pc = 0x2224C0u;
    SET_GPR_U32(ctx, 31, 0x2224C8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x2224C0u, 0x2224C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224C8u;
label_2224c8:
    // 0x2224c8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2224c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2224cc: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2224d0: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2224d4: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x2224d4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2224d8: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2224d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2224dc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2224dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2224e0: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2224e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2224e4: 0xc079140  jal         func_1E4500
    ctx->pc = 0x2224E4u;
    SET_GPR_U32(ctx, 31, 0x2224ECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x2224E4u, 0x2224ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224ECu;
label_2224ec:
    // 0x2224ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2224f0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2224f4: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2224f8: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x2224f8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2224fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222500: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222504: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x222504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x222508: 0xc079140  jal         func_1E4500
    ctx->pc = 0x222508u;
    SET_GPR_U32(ctx, 31, 0x222510u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x222508u, 0x222510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222510u;
label_222510:
    // 0x222510: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222514: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x222518: 0x24550510  addiu       $s5, $v0, 0x510
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22251c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x22251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222520: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x222520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x222524: 0xc079140  jal         func_1E4500
    ctx->pc = 0x222524u;
    SET_GPR_U32(ctx, 31, 0x22252Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x222524u, 0x22252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22252Cu;
label_22252c:
    // 0x22252c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x22252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222530: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x222534: 0x24d50750  addiu       $s5, $a2, 0x750
    ctx->pc = 0x222534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 1872));
    // 0x222538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22253c: 0x8c280140  lw          $t0, 0x140($at)
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222540: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x222544: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222548: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x222548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22254c: 0x8c5e0234  lw          $fp, 0x234($v0)
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x222550: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222554: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x222558: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x222558u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22255c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222560: 0x8c300140  lw          $s0, 0x140($at)
    ctx->pc = 0x222560u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222564: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x222568: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22256c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222570: 0x8c5e0234  lw          $fp, 0x234($v0)
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x222574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222578: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x22257c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x222580: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x222580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222584: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x222584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x222588: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x222588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22258c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x22258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x222590: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x222590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
    // 0x222594: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x222594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x222598: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x222598u;
    SET_GPR_U32(ctx, 31, 0x2225A0u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x222598u, 0x2225A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225A0u;
label_2225a0:
    // 0x2225a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2225a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2225a4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2225a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2225a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2225a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2225ac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2225b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2225b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2225b8: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2225bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2225c0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2225c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2225c4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2225c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2225c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2225cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2225d0: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x2225d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2225d4: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x2225d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
    // 0x2225d8: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x2225d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2225dc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2225dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2225e0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2225E0u;
    SET_GPR_U32(ctx, 31, 0x2225E8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2225E0u, 0x2225E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225E8u;
label_2225e8:
    // 0x2225e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2225e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2225ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2225ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2225f0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2225f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2225f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2225f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2225f8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2225fc: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x222600: 0x8c570244  lw          $s7, 0x244($v0)
    ctx->pc = 0x222600u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x222604: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x222604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x222608: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x222608u;
    SET_GPR_U32(ctx, 31, 0x222610u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x222608u, 0x222610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222610u;
label_222610:
    // 0x222610: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222614: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222618: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22261c: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x222620: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x222624: 0x8fa900e8  lw          $t1, 0xE8($sp)
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222628: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x22262c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222630: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222634: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x222638: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22263c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222640: 0x8c65024c  lw          $a1, 0x24C($v1)
    ctx->pc = 0x222640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x222644: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x222644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x222648: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x222648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x22264c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x22264Cu;
    SET_GPR_U32(ctx, 31, 0x222654u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x22264Cu, 0x222654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222654u;
label_222654:
    // 0x222654: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x222654u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22265c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x22265cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222660: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x222660u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222664: 0x8fb300e8  lw          $s3, 0xE8($sp)
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222668: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x22266c: 0x8c57024c  lw          $s7, 0x24C($v0)
    ctx->pc = 0x22266cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x222670: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x222670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x222674: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x222674u;
    SET_GPR_U32(ctx, 31, 0x22267Cu);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x222674u, 0x22267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22267Cu;
label_22267c:
    // 0x22267c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22267cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222680: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222684: 0x8c57024c  lw          $s7, 0x24C($v0)
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x222688: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22268c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x222690: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x222690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222694: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222698: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22269c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22269cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2226a0: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x2226a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2226a4: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x2226A4u;
    SET_GPR_U32(ctx, 31, 0x2226ACu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2226A4u, 0x2226ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226ACu;
label_2226ac:
    // 0x2226ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2226acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2226b0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2226b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2226b4: 0x8c570250  lw          $s7, 0x250($v0)
    ctx->pc = 0x2226b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2226b8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2226b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2226bc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x2226bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2226c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2226c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2226c4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2226c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2226c8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2226c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2226cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2226ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2226d0: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x2226d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2226d4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2226d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2226d8: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x2226D8u;
    SET_GPR_U32(ctx, 31, 0x2226E0u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2226D8u, 0x2226E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226E0u;
label_2226e0:
    // 0x2226e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2226e4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2226e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2226e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2226e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2226ec: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2226ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2226f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2226f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2226f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2226f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2226f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2226fc: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2226fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x222700: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x222700u;
    SET_GPR_U32(ctx, 31, 0x222708u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x222700u, 0x222708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222708u;
label_222708:
    // 0x222708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22270c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222710: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x222710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x222714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222718: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x222718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22271c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222724: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x222724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
    // 0x222728: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22272c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x22272cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x222730: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x222730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x222734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x222734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x222738: 0x4600155  bltz        $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x222738u;
    {
        const bool branch_taken_0x222738 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x222738) {
            ctx->pc = 0x222C90u;
            return;
        }
    }
    ctx->pc = 0x222740u;
    // 0x222740: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222744: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x222748: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x222748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22274c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x22274cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x222750: 0x1460014f  bnez        $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x222750u;
    {
        const bool branch_taken_0x222750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222750) {
            ctx->pc = 0x222C90u;
            return;
        }
    }
    ctx->pc = 0x222758u;
    // 0x222758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22275c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x22275cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222760: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x222760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222764: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22276c: 0x8c5e023c  lw          $fp, 0x23C($v0)
    ctx->pc = 0x22276cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x222770: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222774: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222778: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x222778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22277c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222784: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22278c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x22278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x222790: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x222790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x222794: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x222794u;
    SET_GPR_U32(ctx, 31, 0x22279Cu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x222794u, 0x22279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22279Cu;
label_22279c:
    // 0x22279c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2227a0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2227a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2227a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2227a8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2227ac: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2227b0: 0x8c86025c  lw          $a2, 0x25C($a0)
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
    // 0x2227b4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2227b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2227b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2227b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2227bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2227bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2227c0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2227c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2227c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2227c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2227c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2227cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2227d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2227d4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2227d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2227d8: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2227d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2227dc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2227e0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2227E0u;
    SET_GPR_U32(ctx, 31, 0x2227E8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2227E0u, 0x2227E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227E8u;
label_2227e8:
    // 0x2227e8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2227e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2227ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2227ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2227f0: 0x8c86025c  lw          $a2, 0x25C($a0)
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
    // 0x2227f4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2227f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2227f8: 0x26c20970  addiu       $v0, $s6, 0x970
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2416));
    // 0x2227fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2227fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222800: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222804: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x222804u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x222808: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x222808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22280c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x222810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222814: 0x0  nop
    ctx->pc = 0x222814u;
    // NOP
    // 0x222818: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x222818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22281c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22281cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x222820: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222824: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x222824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x222828: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22282c: 0x8c450260  lw          $a1, 0x260($v0)
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x222830: 0x26c60970  addiu       $a2, $s6, 0x970
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2416));
    // 0x222834: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222838: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22283c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222840: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x222840u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222844: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x222844u;
    SET_GPR_U32(ctx, 31, 0x22284Cu);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x222844u, 0x22284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22284Cu;
label_22284c:
    // 0x22284c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222850: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x222850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222854: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x222854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222858: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22285c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222860: 0x8c50026c  lw          $s0, 0x26C($v0)
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x222864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222868: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x22286c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x222870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222874: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x222874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222878: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22287c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x222880: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x222880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x222884: 0x24c4021c  addiu       $a0, $a2, 0x21C
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 540));
    // 0x222888: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x222888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22288c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x222890: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x222890u;
    SET_GPR_U32(ctx, 31, 0x222898u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x222890u, 0x222898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222898u;
label_222898:
    // 0x222898: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22289c: 0x8c50026c  lw          $s0, 0x26C($v0)
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x2228a0: 0x3c02c44d  lui         $v0, 0xC44D
    ctx->pc = 0x2228a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50253 << 16));
    // 0x2228a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2228a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2228a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2228a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2228ac: 0x0  nop
    ctx->pc = 0x2228acu;
    // NOP
    // 0x2228b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2228b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2228b4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2228b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x2228b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2228b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2228bc: 0x0  nop
    ctx->pc = 0x2228bcu;
    // NOP
    // 0x2228c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2228c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2228c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2228c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2228c8: 0x0  nop
    ctx->pc = 0x2228c8u;
    // NOP
    // 0x2228cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2228ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2228d0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2228d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2228d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2228d8: 0x0  nop
    ctx->pc = 0x2228d8u;
    // NOP
    // 0x2228dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2228dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2228e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2228e4: 0x26c60880  addiu       $a2, $s6, 0x880
    ctx->pc = 0x2228e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x2228e8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2228e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2228ec: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2228f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2228f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2228f4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2228F4u;
    SET_GPR_U32(ctx, 31, 0x2228FCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2228FCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2228FCu) { return; }
    ctx->pc = 0x2228FCu;
label_2228fc:
    // 0x2228fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222904: 0x0  nop
    ctx->pc = 0x222904u;
    // NOP
    // 0x222908: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x22290c: 0x3c02c402  lui         $v0, 0xC402
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50178 << 16));
    // 0x222910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222914: 0x0  nop
    ctx->pc = 0x222914u;
    // NOP
    // 0x222918: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x222918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22291c: 0x3c034427  lui         $v1, 0x4427
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17447 << 16));
    // 0x222920: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x222920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x222924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222928: 0x0  nop
    ctx->pc = 0x222928u;
    // NOP
    // 0x22292c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x22292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x222930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222934: 0x0  nop
    ctx->pc = 0x222934u;
    // NOP
    // 0x222938: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x222938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x22293c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222944: 0x0  nop
    ctx->pc = 0x222944u;
    // NOP
    // 0x222948: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x22294c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222950: 0x26c50880  addiu       $a1, $s6, 0x880
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x222954: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222958: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x222958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22295c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x22295Cu;
    SET_GPR_U32(ctx, 31, 0x222964u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222964u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222964u) { return; }
    ctx->pc = 0x222964u;
label_222964:
    // 0x222964: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222968: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x22296c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22296cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222970: 0x0  nop
    ctx->pc = 0x222970u;
    // NOP
    // 0x222974: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x222978: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22297c: 0x8c42026c  lw          $v0, 0x26C($v0)
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x222980: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222984: 0x8c650270  lw          $a1, 0x270($v1)
    ctx->pc = 0x222984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x222988: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22298c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222990: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222994: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x222998: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22299c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x22299cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2229a0: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x2229A0u;
    SET_GPR_U32(ctx, 31, 0x2229A8u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x2229A0u, 0x2229A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229A8u;
label_2229a8:
    // 0x2229a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2229a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2229ac: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2229b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2229b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2229b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2229bc: 0x8c500274  lw          $s0, 0x274($v0)
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x2229c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2229c4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2229c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2229c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2229cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2229ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2229d0: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2229d4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2229d8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2229dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2229dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2229e0: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2229e4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2229e8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2229e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2229ec: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2229ECu;
    SET_GPR_U32(ctx, 31, 0x2229F4u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2229ECu, 0x2229F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229F4u;
label_2229f4:
    // 0x2229f4: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2229f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2229f8: 0x8cc20274  lw          $v0, 0x274($a2)
    ctx->pc = 0x2229f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 628)));
    // 0x2229fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2229fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222a00: 0x3c02c402  lui         $v0, 0xC402
    ctx->pc = 0x222a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50178 << 16));
    // 0x222a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a08: 0x0  nop
    ctx->pc = 0x222a08u;
    // NOP
    // 0x222a0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x222a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x222a10: 0x3c034427  lui         $v1, 0x4427
    ctx->pc = 0x222a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17447 << 16));
    // 0x222a14: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x222a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x222a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a1c: 0x0  nop
    ctx->pc = 0x222a1cu;
    // NOP
    // 0x222a20: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x222a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x222a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a28: 0x0  nop
    ctx->pc = 0x222a28u;
    // NOP
    // 0x222a2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x222a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x222a30: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
    // 0x222a34: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x222a34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a38: 0x0  nop
    ctx->pc = 0x222a38u;
    // NOP
    // 0x222a3c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x222a40: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222a44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222a44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222a48: 0x26c20880  addiu       $v0, $s6, 0x880
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x222a4c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x222a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222a50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222a54: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x222A54u;
    SET_GPR_U32(ctx, 31, 0x222A5Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222A5Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222A5Cu) { return; }
    ctx->pc = 0x222A5Cu;
label_222a5c:
    // 0x222a5c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x222a60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a64: 0x0  nop
    ctx->pc = 0x222a64u;
    // NOP
    // 0x222a68: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x222a6c: 0x3c05c395  lui         $a1, 0xC395
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50069 << 16));
    // 0x222a70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x222a70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a74: 0x0  nop
    ctx->pc = 0x222a74u;
    // NOP
    // 0x222a78: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x222a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x222a7c: 0x3c04442d  lui         $a0, 0x442D
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17453 << 16));
    // 0x222a80: 0x3482c000  ori         $v0, $a0, 0xC000
    ctx->pc = 0x222a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x222a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a88: 0x0  nop
    ctx->pc = 0x222a88u;
    // NOP
    // 0x222a8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x222a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x222a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a94: 0x0  nop
    ctx->pc = 0x222a94u;
    // NOP
    // 0x222a98: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x222a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x222a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222aa4: 0x0  nop
    ctx->pc = 0x222aa4u;
    // NOP
    // 0x222aa8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x222aac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222ab0: 0x26c20880  addiu       $v0, $s6, 0x880
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x222ab4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x222ab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222ab8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x222ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222abc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x222abcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222ac0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x222AC0u;
    SET_GPR_U32(ctx, 31, 0x222AC8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222AC8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222AC8u) { return; }
    ctx->pc = 0x222AC8u;
label_222ac8:
    // 0x222ac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ad0: 0x0  nop
    ctx->pc = 0x222ad0u;
    // NOP
    // 0x222ad4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x222ad8: 0x8fb500e8  lw          $s5, 0xE8($sp)
    ctx->pc = 0x222ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222adc: 0x8ea40274  lw          $a0, 0x274($s5)
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
    // 0x222ae0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222ae4: 0x8c450278  lw          $a1, 0x278($v0)
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x222ae8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222aec: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222af0: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x222af0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x222af4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x222af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222afc: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x222afcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222b00: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x222B00u;
    SET_GPR_U32(ctx, 31, 0x222B08u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x222B00u, 0x222B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B08u;
label_222b08:
    // 0x222b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222b0c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x222b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222b10: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x222b10u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222b14: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222b18: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x222b1c: 0x8c50027c  lw          $s0, 0x27C($v0)
    ctx->pc = 0x222b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x222b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222b24: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222b24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222b28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x222b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x222b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222b30: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222b34: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222b38: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x222b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x222b3c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x222b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x222b40: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x222b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x222b44: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x222b48: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x222B48u;
    SET_GPR_U32(ctx, 31, 0x222B50u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x222B48u, 0x222B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B50u;
label_222b50:
    // 0x222b50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x222b50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222b54: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222b58: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x222b5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x222b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222b60: 0x3c04c395  lui         $a0, 0xC395
    ctx->pc = 0x222b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50069 << 16));
    // 0x222b64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222b64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b68: 0x0  nop
    ctx->pc = 0x222b68u;
    // NOP
    // 0x222b6c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x222b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x222b70: 0x3c02442d  lui         $v0, 0x442D
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17453 << 16));
    // 0x222b74: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x222b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x222b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b7c: 0x0  nop
    ctx->pc = 0x222b7cu;
    // NOP
    // 0x222b80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x222b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x222b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b88: 0x0  nop
    ctx->pc = 0x222b88u;
    // NOP
    // 0x222b8c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x222b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x222b90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b98: 0x0  nop
    ctx->pc = 0x222b98u;
    // NOP
    // 0x222b9c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x222ba0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222ba4: 0x26c70880  addiu       $a3, $s6, 0x880
    ctx->pc = 0x222ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x222ba8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x222ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x222bac: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x222bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222bb0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x222BB0u;
    SET_GPR_U32(ctx, 31, 0x222BB8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222BB8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222BB8u) { return; }
    ctx->pc = 0x222BB8u;
label_222bb8:
    // 0x222bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x222bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x222bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222bc0: 0x0  nop
    ctx->pc = 0x222bc0u;
    // NOP
    // 0x222bc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x222bc8: 0x3c02c30a  lui         $v0, 0xC30A
    ctx->pc = 0x222bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49930 << 16));
    // 0x222bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222bd0: 0x0  nop
    ctx->pc = 0x222bd0u;
    // NOP
    // 0x222bd4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x222bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x222bd8: 0x3c05441b  lui         $a1, 0x441B
    ctx->pc = 0x222bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17435 << 16));
    // 0x222bdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x222bdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222be0: 0x0  nop
    ctx->pc = 0x222be0u;
    // NOP
    // 0x222be4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x222be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x222be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222bec: 0x0  nop
    ctx->pc = 0x222becu;
    // NOP
    // 0x222bf0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x222bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x222bf4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x222bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x222bf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222bfc: 0x0  nop
    ctx->pc = 0x222bfcu;
    // NOP
    // 0x222c00: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x222c04: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x222c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222c08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222c0c: 0x26c50880  addiu       $a1, $s6, 0x880
    ctx->pc = 0x222c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x222c10: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x222c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222c14: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x222C14u;
    SET_GPR_U32(ctx, 31, 0x222C1Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222C1Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222C1Cu) { return; }
    ctx->pc = 0x222C1Cu;
label_222c1c:
    // 0x222c1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x222c1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222c20: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x222c24: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x222c24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222c28: 0x0  nop
    ctx->pc = 0x222c28u;
    // NOP
    // 0x222c2c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x222c30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222c34: 0x8c57027c  lw          $s7, 0x27C($v0)
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x222c38: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222c3c: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x222c40: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x222c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x222c44: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x222c48: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222c4c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x222c50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222c54: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x222c54u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222c58: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x222C58u;
    SET_GPR_U32(ctx, 31, 0x222C60u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x222C58u, 0x222C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C60u;
label_222c60:
    // 0x222c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222c64: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222c64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x222c68: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x222c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x222c6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x222c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x222c70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x222c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x222c74: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x222c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222c78: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x222c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x222c7c: 0x2486021c  addiu       $a2, $a0, 0x21C
    ctx->pc = 0x222c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x222c80: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x222c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x222c84: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x222C84u;
    SET_GPR_U32(ctx, 31, 0x222C8Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x222C84u, 0x222C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C8Cu;
label_222c8c:
    // 0x222c8c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x222c8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x222c90u;
}
