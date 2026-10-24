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

// Function: entry_00235364
// Address: 0x235364 - 0x235c48
void entry_00235364_0x235364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235364_0x235364");
#endif

    switch (ctx->pc) {
        case 0x2353b4u: goto label_2353b4;
        case 0x2353f8u: goto label_2353f8;
        case 0x23541cu: goto label_23541c;
        case 0x235464u: goto label_235464;
        case 0x235488u: goto label_235488;
        case 0x2354b8u: goto label_2354b8;
        case 0x2354e8u: goto label_2354e8;
        case 0x235530u: goto label_235530;
        case 0x235554u: goto label_235554;
        case 0x235590u: goto label_235590;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355fcu: goto label_2355fc;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356f0u: goto label_2356f0;
        case 0x23574cu: goto label_23574c;
        case 0x235778u: goto label_235778;
        case 0x2357ccu: goto label_2357cc;
        case 0x235828u: goto label_235828;
        case 0x23587cu: goto label_23587c;
        case 0x2358d4u: goto label_2358d4;
        case 0x23592cu: goto label_23592c;
        case 0x235984u: goto label_235984;
        case 0x2359dcu: goto label_2359dc;
        case 0x235a30u: goto label_235a30;
        case 0x235a94u: goto label_235a94;
        case 0x235ac4u: goto label_235ac4;
        case 0x235b10u: goto label_235b10;
        case 0x235b48u: goto label_235b48;
        case 0x235b8cu: goto label_235b8c;
        case 0x235bc8u: goto label_235bc8;
        case 0x235c18u: goto label_235c18;
        default: break;
    }

    ctx->pc = 0x235364u;

    // 0x235364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235368: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235368u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x23536c: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x23536cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235370: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235374: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x235374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x235378: 0x8cd50234  lw          $s5, 0x234($a2)
    ctx->pc = 0x235378u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 564)));
    // 0x23537c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235380: 0x8c510130  lw          $s1, 0x130($v0)
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x235384: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x235384u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x235388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23538c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x23538cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235390: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x235390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x235394: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x235394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x235398: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x235398u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23539c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2353a0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2353a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2353a4: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2353a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x2353a8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2353a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2353ac: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2353ACu;
    SET_GPR_U32(ctx, 31, 0x2353B4u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2353ACu, 0x2353B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353B4u;
label_2353b4:
    // 0x2353b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2353b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2353b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2353bc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2353bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2353c0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2353c4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2353c8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2353c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2353cc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2353d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2353d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2353d4: 0x8c310140  lw          $s1, 0x140($at)
    ctx->pc = 0x2353d4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2353d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2353d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2353dc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2353e0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2353e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2353e4: 0x8c650244  lw          $a1, 0x244($v1)
    ctx->pc = 0x2353e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x2353e8: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x2353e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
    // 0x2353ec: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x2353ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2353f0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2353F0u;
    SET_GPR_U32(ctx, 31, 0x2353F8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2353F0u, 0x2353F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353F8u;
label_2353f8:
    // 0x2353f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2353f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2353fc: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2353fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235400: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x235404: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235408: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x235408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x23540c: 0x8cf30244  lw          $s3, 0x244($a3)
    ctx->pc = 0x23540cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 580)));
    // 0x235410: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x235410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x235414: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x235414u;
    SET_GPR_U32(ctx, 31, 0x23541Cu);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x235414u, 0x23541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23541Cu;
label_23541c:
    // 0x23541c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235420: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x235420u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235424: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x235424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x235428: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x235428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23542c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23542cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x235430: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235434: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x235434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23543c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235440: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x235440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x235444: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x235444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235448: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x235448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x23544c: 0x8d2a024c  lw          $t2, 0x24C($t1)
    ctx->pc = 0x23544cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 588)));
    // 0x235450: 0x24a40204  addiu       $a0, $a1, 0x204
    ctx->pc = 0x235450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 516));
    // 0x235454: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x235454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x235458: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x235458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x23545c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x23545Cu;
    SET_GPR_U32(ctx, 31, 0x235464u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x23545Cu, 0x235464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235464u;
label_235464:
    // 0x235464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235468: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x23546c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23546cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235470: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235474: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x235474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235478: 0x8c93024c  lw          $s3, 0x24C($a0)
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x23547c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x23547cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x235480: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x235480u;
    SET_GPR_U32(ctx, 31, 0x235488u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x235480u, 0x235488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235488u;
label_235488:
    // 0x235488: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23548c: 0x8c73024c  lw          $s3, 0x24C($v1)
    ctx->pc = 0x23548cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x235490: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235494: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x235494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x235498: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x235498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23549c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2354a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2354a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2354a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2354a8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2354a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2354ac: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2354acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2354b0: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x2354B0u;
    SET_GPR_U32(ctx, 31, 0x2354B8u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2354B0u, 0x2354B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354B8u;
label_2354b8:
    // 0x2354b8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2354bc: 0x8cb30250  lw          $s3, 0x250($a1)
    ctx->pc = 0x2354bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x2354c0: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2354c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2354c4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2354c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2354c8: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2354cc: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x2354ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2354d0: 0x25421330  addiu       $v0, $t2, 0x1330
    ctx->pc = 0x2354d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4912));
    // 0x2354d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2354d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2354d8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2354d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2354dc: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2354dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2354e0: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x2354E0u;
    SET_GPR_U32(ctx, 31, 0x2354E8u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2354E0u, 0x2354E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354E8u;
label_2354e8:
    // 0x2354e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2354e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2354ec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2354ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2354f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2354f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2354f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2354f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2354f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2354f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2354fc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235500: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x235504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235508: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x23550c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23550cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235510: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235514: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x235514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x235518: 0x8c860254  lw          $a2, 0x254($a0)
    ctx->pc = 0x235518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x23551c: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
    // 0x235520: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x235520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235524: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x235524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x235528: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235528u;
    SET_GPR_U32(ctx, 31, 0x235530u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235528u, 0x235530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235530u;
label_235530:
    // 0x235530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235534: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235538: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x235538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23553c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x23553cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235540: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x235544: 0x8cf30254  lw          $s3, 0x254($a3)
    ctx->pc = 0x235544u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 596)));
    // 0x235548: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x235548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x23554c: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x23554Cu;
    SET_GPR_U32(ctx, 31, 0x235554u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x23554Cu, 0x235554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235554u;
label_235554:
    // 0x235554: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x235554u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235558: 0x8d530254  lw          $s3, 0x254($t2)
    ctx->pc = 0x235558u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 596)));
    // 0x23555c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235560: 0x24561330  addiu       $s6, $v0, 0x1330
    ctx->pc = 0x235560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x235564: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x235564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x235568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23556c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x23556cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x235570: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235574: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x235574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x235578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23557c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235580: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x235580u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x235584: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x235584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x235588: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x235588u;
    SET_GPR_U32(ctx, 31, 0x235590u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x235588u, 0x235590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235590u;
label_235590:
    // 0x235590: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235594: 0x8ca60258  lw          $a2, 0x258($a1)
    ctx->pc = 0x235594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
    // 0x235598: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x235598u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x23559c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2355a0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2355a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2355a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2355a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2355ac: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x2355acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2355b0: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2355b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2355b4: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2355b8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2355bc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2355bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2355c0: 0x85042  srl         $t2, $t0, 1
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2355c4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2355c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2355c8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2355c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2355cc: 0xc0749a4  jal         func_1D2690
    ctx->pc = 0x2355CCu;
    SET_GPR_U32(ctx, 31, 0x2355D4u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2355CCu, 0x2355D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355D4u;
label_2355d4:
    // 0x2355d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2355d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2355d8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2355d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2355dc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2355dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2355e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2355e4: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2355e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2355e8: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x2355e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2355ec: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2355f0: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x2355f4: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2355F4u;
    SET_GPR_U32(ctx, 31, 0x2355FCu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2355F4u, 0x2355FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355FCu;
label_2355fc:
    // 0x2355fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2355fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235600: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235600u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235604: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x235604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x235608: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23560c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x23560cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235610: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235614: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x235614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x235618: 0xacc0021c  sw          $zero, 0x21C($a2)
    ctx->pc = 0x235618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 540), GPR_U32(ctx, 0));
    // 0x23561c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235620: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x235620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x235624: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x235628: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x235628u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x23562c: 0x6000246  bltz        $s0, . + 4 + (0x246 << 2)
    ctx->pc = 0x23562Cu;
    {
        const bool branch_taken_0x23562c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x23562c) {
            ctx->pc = 0x235F48u;
            return;
        }
    }
    ctx->pc = 0x235634u;
    // 0x235634: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x235634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235638: 0x24e31330  addiu       $v1, $a3, 0x1330
    ctx->pc = 0x235638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23563c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x235640: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x235640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x235644: 0x14400240  bnez        $v0, . + 4 + (0x240 << 2)
    ctx->pc = 0x235644u;
    {
        const bool branch_taken_0x235644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235644) {
            ctx->pc = 0x235F48u;
            return;
        }
    }
    ctx->pc = 0x23564Cu;
    // 0x23564c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235650: 0x8c85121c  lw          $a1, 0x121C($a0)
    ctx->pc = 0x235650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x235654: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x235654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
    // 0x235658: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x23565c: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
    ctx->pc = 0x23565Cu;
    {
        const bool branch_taken_0x23565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23565c) {
            ctx->pc = 0x235F48u;
            return;
        }
    }
    ctx->pc = 0x235664u;
    // 0x235664: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235668: 0x8c300140  lw          $s0, 0x140($at)
    ctx->pc = 0x235668u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0140u));
    // 0x23566c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23566cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x235670: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235678: 0x8c55023c  lw          $s5, 0x23C($v0)
    ctx->pc = 0x235678u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x23567c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235680: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235680u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235684: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x235684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x235688: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x235688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23568c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x23568cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x235690: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x235694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x235698: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x235698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x23569c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x23569cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2356a0: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2356A0u;
    SET_GPR_U32(ctx, 31, 0x2356A8u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2356A0u, 0x2356A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356A8u;
label_2356a8:
    // 0x2356a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2356a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2356ac: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x2356acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2356b0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2356b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2356b4: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2356b8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2356b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2356bc: 0x8c520264  lw          $s2, 0x264($v0)
    ctx->pc = 0x2356bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x2356c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2356c4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2356c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2356c8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2356cc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2356ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2356d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2356d4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2356d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2356dc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2356dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2356e0: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2356e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2356e4: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x2356e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2356e8: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2356E8u;
    SET_GPR_U32(ctx, 31, 0x2356F0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2356E8u, 0x2356F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356F0u;
label_2356f0:
    // 0x2356f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2356f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2356f4: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x2356f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x2356f8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2356f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2356fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2356fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235700: 0x0  nop
    ctx->pc = 0x235700u;
    // NOP
    // 0x235704: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x235708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23570c: 0x0  nop
    ctx->pc = 0x23570cu;
    // NOP
    // 0x235710: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x235714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235718: 0x0  nop
    ctx->pc = 0x235718u;
    // NOP
    // 0x23571c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23571cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x235720: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x235720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x235724: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x235724u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235728: 0x0  nop
    ctx->pc = 0x235728u;
    // NOP
    // 0x23572c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x23572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235730: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235734: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235738: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x23573c: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x23573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x235740: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235744: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235744u;
    SET_GPR_U32(ctx, 31, 0x23574Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23574Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23574Cu) { return; }
    ctx->pc = 0x23574Cu;
label_23574c:
    // 0x23574c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235750: 0x8c440264  lw          $a0, 0x264($v0)
    ctx->pc = 0x235750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x235754: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235758: 0x8c450268  lw          $a1, 0x268($v0)
    ctx->pc = 0x235758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
    // 0x23575c: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x23575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x235760: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x235760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235764: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x235764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x235768: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23576c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x23576cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235770: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x235770u;
    SET_GPR_U32(ctx, 31, 0x235778u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x235770u, 0x235778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235778u;
label_235778:
    // 0x235778: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x23577c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23577cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235780: 0x0  nop
    ctx->pc = 0x235780u;
    // NOP
    // 0x235784: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x235788: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x235788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x23578c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235790: 0x0  nop
    ctx->pc = 0x235790u;
    // NOP
    // 0x235794: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x235798: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x23579c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23579cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357a0: 0x0  nop
    ctx->pc = 0x2357a0u;
    // NOP
    // 0x2357a4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2357a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2357a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2357a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2357ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2357acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357b0: 0x0  nop
    ctx->pc = 0x2357b0u;
    // NOP
    // 0x2357b4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2357b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2357b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2357bc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2357bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2357c0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2357c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2357c4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2357C4u;
    SET_GPR_U32(ctx, 31, 0x2357CCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2357CCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2357CCu) { return; }
    ctx->pc = 0x2357CCu;
label_2357cc:
    // 0x2357cc: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2357ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x2357d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2357d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357d4: 0x0  nop
    ctx->pc = 0x2357d4u;
    // NOP
    // 0x2357d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2357d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2357dc: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x2357dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
    // 0x2357e0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2357e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357e4: 0x0  nop
    ctx->pc = 0x2357e4u;
    // NOP
    // 0x2357e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2357e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2357ec: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x2357f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2357f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357f4: 0x0  nop
    ctx->pc = 0x2357f4u;
    // NOP
    // 0x2357f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2357f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2357fc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x235800: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x235800u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235804: 0x0  nop
    ctx->pc = 0x235804u;
    // NOP
    // 0x235808: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x235808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x23580c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x23580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235810: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235814: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x235814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x235818: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23581c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23581cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235820: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235820u;
    SET_GPR_U32(ctx, 31, 0x235828u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235828u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235828u) { return; }
    ctx->pc = 0x235828u;
label_235828:
    // 0x235828: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x23582c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x23582cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235830: 0x0  nop
    ctx->pc = 0x235830u;
    // NOP
    // 0x235834: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x235834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x235838: 0x3c084416  lui         $t0, 0x4416
    ctx->pc = 0x235838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17430 << 16));
    // 0x23583c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x23583cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235840: 0x0  nop
    ctx->pc = 0x235840u;
    // NOP
    // 0x235844: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x235844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x235848: 0x3c09c47a  lui         $t1, 0xC47A
    ctx->pc = 0x235848u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50298 << 16));
    // 0x23584c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x23584cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235850: 0x0  nop
    ctx->pc = 0x235850u;
    // NOP
    // 0x235854: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x235854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x235858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23585c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23585cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235860: 0x0  nop
    ctx->pc = 0x235860u;
    // NOP
    // 0x235864: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x235864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x235868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x235868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23586c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x23586cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x235870: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x235874: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235874u;
    SET_GPR_U32(ctx, 31, 0x23587Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23587Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23587Cu) { return; }
    ctx->pc = 0x23587Cu;
label_23587c:
    // 0x23587c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x23587cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235880: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
    // 0x235884: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x235884u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235888: 0x0  nop
    ctx->pc = 0x235888u;
    // NOP
    // 0x23588c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x23588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x235890: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x235890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
    // 0x235894: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x235894u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235898: 0x0  nop
    ctx->pc = 0x235898u;
    // NOP
    // 0x23589c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x23589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2358a0: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2358a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x2358a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2358a8: 0x0  nop
    ctx->pc = 0x2358a8u;
    // NOP
    // 0x2358ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2358acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2358b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2358b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2358b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2358b8: 0x0  nop
    ctx->pc = 0x2358b8u;
    // NOP
    // 0x2358bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2358bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2358c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2358c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2358c4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2358c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2358c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2358c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2358cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2358CCu;
    SET_GPR_U32(ctx, 31, 0x2358D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2358D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2358D4u) { return; }
    ctx->pc = 0x2358D4u;
label_2358d4:
    // 0x2358d4: 0x3c11447a  lui         $s1, 0x447A
    ctx->pc = 0x2358d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17530 << 16));
    // 0x2358d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2358d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2358dc: 0x0  nop
    ctx->pc = 0x2358dcu;
    // NOP
    // 0x2358e0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2358e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2358e4: 0x3c04c4af  lui         $a0, 0xC4AF
    ctx->pc = 0x2358e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50351 << 16));
    // 0x2358e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2358e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2358ec: 0x0  nop
    ctx->pc = 0x2358ecu;
    // NOP
    // 0x2358f0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2358f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2358f4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2358f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2358f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2358fc: 0x0  nop
    ctx->pc = 0x2358fcu;
    // NOP
    // 0x235900: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x235900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x235904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x235908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23590c: 0x0  nop
    ctx->pc = 0x23590cu;
    // NOP
    // 0x235910: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x235910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x235914: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x235914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x235918: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x235918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23591c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x23591cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x235920: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x235920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x235924: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235924u;
    SET_GPR_U32(ctx, 31, 0x23592Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23592Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23592Cu) { return; }
    ctx->pc = 0x23592Cu;
label_23592c:
    // 0x23592c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23592cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235930: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x235934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235938: 0x0  nop
    ctx->pc = 0x235938u;
    // NOP
    // 0x23593c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x23593cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x235940: 0x3c02c4af  lui         $v0, 0xC4AF
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50351 << 16));
    // 0x235944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235948: 0x0  nop
    ctx->pc = 0x235948u;
    // NOP
    // 0x23594c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x23594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x235950: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x235954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235958: 0x0  nop
    ctx->pc = 0x235958u;
    // NOP
    // 0x23595c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x23595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x235960: 0x3c113f80  lui         $s1, 0x3F80
    ctx->pc = 0x235960u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16256 << 16));
    // 0x235964: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x235964u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235968: 0x0  nop
    ctx->pc = 0x235968u;
    // NOP
    // 0x23596c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x23596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x235970: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x235974: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x235974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x235978: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x235978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23597c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x23597Cu;
    SET_GPR_U32(ctx, 31, 0x235984u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235984u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235984u) { return; }
    ctx->pc = 0x235984u;
label_235984:
    // 0x235984: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x235984u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235988: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x23598c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23598cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235990: 0x0  nop
    ctx->pc = 0x235990u;
    // NOP
    // 0x235994: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x235994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x235998: 0x3c11c4af  lui         $s1, 0xC4AF
    ctx->pc = 0x235998u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50351 << 16));
    // 0x23599c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x23599cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2359a0: 0x0  nop
    ctx->pc = 0x2359a0u;
    // NOP
    // 0x2359a4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2359a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2359a8: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x2359a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
    // 0x2359ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2359acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2359b0: 0x0  nop
    ctx->pc = 0x2359b0u;
    // NOP
    // 0x2359b4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2359b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2359b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2359b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2359bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2359bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2359c0: 0x0  nop
    ctx->pc = 0x2359c0u;
    // NOP
    // 0x2359c4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2359c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2359c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2359c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2359cc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2359ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2359d0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2359d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2359d4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2359D4u;
    SET_GPR_U32(ctx, 31, 0x2359DCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2359DCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2359DCu) { return; }
    ctx->pc = 0x2359DCu;
label_2359dc:
    // 0x2359dc: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x2359dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
    // 0x2359e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2359e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2359e4: 0x0  nop
    ctx->pc = 0x2359e4u;
    // NOP
    // 0x2359e8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2359e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2359ec: 0x3c04c4af  lui         $a0, 0xC4AF
    ctx->pc = 0x2359ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50351 << 16));
    // 0x2359f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2359f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2359f4: 0x0  nop
    ctx->pc = 0x2359f4u;
    // NOP
    // 0x2359f8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2359f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2359fc: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2359fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x235a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235a04: 0x0  nop
    ctx->pc = 0x235a04u;
    // NOP
    // 0x235a08: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x235a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x235a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x235a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235a14: 0x0  nop
    ctx->pc = 0x235a14u;
    // NOP
    // 0x235a18: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x235a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x235a1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x235a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x235a20: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x235a20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x235a24: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x235a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x235a28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235A28u;
    SET_GPR_U32(ctx, 31, 0x235A30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235A30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235A30u) { return; }
    ctx->pc = 0x235A30u;
label_235a30:
    // 0x235a30: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235a34: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x235a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x235a38: 0x8cd10030  lw          $s1, 0x30($a2)
    ctx->pc = 0x235a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x235a3c: 0x32240800  andi        $a0, $s1, 0x800
    ctx->pc = 0x235a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
    // 0x235a40: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x235A40u;
    {
        const bool branch_taken_0x235a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a40) {
            ctx->pc = 0x235C48u;
            return;
        }
    }
    ctx->pc = 0x235A48u;
    // 0x235a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235a4c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235a50: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x235a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x235a54: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x235a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235a58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x235a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x235a5c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235a60: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x235a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x235a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235a68: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235a6c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x235a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x235a70: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235a74: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x235a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x235a78: 0x8cf3026c  lw          $s3, 0x26C($a3)
    ctx->pc = 0x235a78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 620)));
    // 0x235a7c: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x235a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x235a80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235a80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235a84: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x235a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x235a88: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x235a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x235a8c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235A8Cu;
    SET_GPR_U32(ctx, 31, 0x235A94u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235A8Cu, 0x235A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A94u;
label_235a94:
    // 0x235a94: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235a98: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235a9c: 0x8c64026c  lw          $a0, 0x26C($v1)
    ctx->pc = 0x235a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x235aa0: 0x8c450270  lw          $a1, 0x270($v0)
    ctx->pc = 0x235aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x235aa4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x235aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x235aa8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x235aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x235aac: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x235aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235ab0: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x235ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235ab8: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235abc: 0xc0755b4  jal         func_1D56D0
    ctx->pc = 0x235ABCu;
    SET_GPR_U32(ctx, 31, 0x235AC4u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235ABCu, 0x235AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AC4u;
label_235ac4:
    // 0x235ac4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235ac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235acc: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x235accu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235ad0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x235ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x235ad4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x235ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x235ad8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235adc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235ae0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x235ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235ae8: 0x8c330140  lw          $s3, 0x140($at)
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235aec: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x235aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x235af0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235af4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x235af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235af8: 0x8e65028c  lw          $a1, 0x28C($s3)
    ctx->pc = 0x235af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x235afc: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x235afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x235b00: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x235b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x235b04: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x235b04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x235b08: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235B08u;
    SET_GPR_U32(ctx, 31, 0x235B10u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235B08u, 0x235B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B10u;
label_235b10:
    // 0x235b10: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235b14: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235b18: 0x8c42028c  lw          $v0, 0x28C($v0)
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
    // 0x235b1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235b1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235b20: 0x8cc50290  lw          $a1, 0x290($a2)
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 656)));
    // 0x235b24: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x235b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x235b28: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x235b28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x235b2c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x235b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x235b30: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x235b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235b34: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x235b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x235b38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235b3c: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235b40: 0xc0755b4  jal         func_1D56D0
    ctx->pc = 0x235B40u;
    SET_GPR_U32(ctx, 31, 0x235B48u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235B40u, 0x235B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B48u;
label_235b48:
    // 0x235b48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235b4c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x235b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235b50: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x235b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x235b54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x235b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x235b58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235b5c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235b60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x235b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235b64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235b68: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235b68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235b6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235b70: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235b78: 0x8c450294  lw          $a1, 0x294($v0)
    ctx->pc = 0x235b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x235b7c: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x235b80: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x235b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x235b84: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235B84u;
    SET_GPR_U32(ctx, 31, 0x235B8Cu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235B84u, 0x235B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B8Cu;
label_235b8c:
    // 0x235b8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235b90: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235b94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235b98: 0x8cc40294  lw          $a0, 0x294($a2)
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
    // 0x235b9c: 0x8c450298  lw          $a1, 0x298($v0)
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
    // 0x235ba0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x235ba4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x235ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x235ba8: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x235ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x235bac: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x235bacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x235bb0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235bb4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x235bb4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235bb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235bbc: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235bbcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235bc0: 0xc0755b4  jal         func_1D56D0
    ctx->pc = 0x235BC0u;
    SET_GPR_U32(ctx, 31, 0x235BC8u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235BC0u, 0x235BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BC8u;
label_235bc8:
    // 0x235bc8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x235bc8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235bcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235bd0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235bd4: 0x2b040  sll         $s6, $v0, 1
    ctx->pc = 0x235bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x235bd8: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x235bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x235bdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x235bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x235be0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235be4: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x235be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x235be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235bec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235bf0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235bf4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235bf8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x235bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235bfc: 0x8cc2029c  lw          $v0, 0x29C($a2)
    ctx->pc = 0x235bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 668)));
    // 0x235c00: 0x2485021c  addiu       $a1, $a0, 0x21C
    ctx->pc = 0x235c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x235c04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x235c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x235c08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x235c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235c0c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x235c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x235c10: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235C10u;
    SET_GPR_U32(ctx, 31, 0x235C18u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235C10u, 0x235C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C18u;
label_235c18:
    // 0x235c18: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235c1c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235c20: 0x8c84029c  lw          $a0, 0x29C($a0)
    ctx->pc = 0x235c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x235c24: 0x8c4502a0  lw          $a1, 0x2A0($v0)
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x235c28: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x235c2c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x235c30: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x235c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x235c34: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x235c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x235c38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235c3c: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235c40: 0xc0755b4  jal         func_1D56D0
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235C40u, 0x235C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C48u;
}
