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

// Function: entry_001eb534
// Address: 0x1eb534 - 0x1eb974
void entry_001eb534_0x1eb534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb534_0x1eb534");
#endif

    switch (ctx->pc) {
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb730u: goto label_1eb730;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb824u: goto label_1eb824;
        case 0x1eb874u: goto label_1eb874;
        default: break;
    }

    ctx->pc = 0x1eb534u;

    // 0x1eb534: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb538: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb53c: 0x90641308  lbu         $a0, 0x1308($v1)
    ctx->pc = 0x1eb53cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x1eb540: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1eb540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1eb544: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x1eb544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1eb548: 0x2504025c  addiu       $a0, $t0, 0x25C
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 604));
    // 0x1eb54c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x1eb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1eb550: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB550u;
    SET_GPR_U32(ctx, 31, 0x1EB558u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB550u, 0x1EB558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB558u;
label_1eb558:
    // 0x1eb558: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1eb558u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb55c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb560: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1eb564: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1eb564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eb568: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1eb56c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1eb56cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb570: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x1EB570u;
    SET_GPR_U32(ctx, 31, 0x1EB578u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x1EB570u, 0x1EB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB578u;
label_1eb578:
    // 0x1eb578: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb57c: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x1eb57cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1eb580: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1eb580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eb584: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1eb584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb588: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1eb588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1eb58c: 0xfe230080  sd          $v1, 0x80($s1)
    ctx->pc = 0x1eb58cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 3));
    // 0x1eb590: 0xde2301d0  ld          $v1, 0x1D0($s1)
    ctx->pc = 0x1eb590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1eb594: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eb598: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1eb598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1eb59c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1eb59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eb5a0: 0xfe2501d0  sd          $a1, 0x1D0($s1)
    ctx->pc = 0x1eb5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 5));
    // 0x1eb5a4: 0xde270080  ld          $a3, 0x80($s1)
    ctx->pc = 0x1eb5a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1eb5a8: 0x2408ffe7  addiu       $t0, $zero, -0x19
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1eb5ac: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1eb5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb5b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1eb5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1eb5b4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1eb5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1eb5b8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1eb5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1eb5bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb5c0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1eb5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1eb5c4: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x1eb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x1eb5c8: 0xde2501d0  ld          $a1, 0x1D0($s1)
    ctx->pc = 0x1eb5c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1eb5cc: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1eb5d0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb5d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1eb5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1eb5d8: 0x2ac38  dsll        $s5, $v0, 16
    ctx->pc = 0x1eb5d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 16);
    // 0x1eb5dc: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x1eb5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1eb5e0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1eb5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eb5e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1eb5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1eb5e8: 0xfe2201d0  sd          $v0, 0x1D0($s1)
    ctx->pc = 0x1eb5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 2));
    // 0x1eb5ec: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb5f0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1eb5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1eb5f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb5f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb5fc: 0xfe2200b8  sd          $v0, 0xB8($s1)
    ctx->pc = 0x1eb5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 184), GPR_U64(ctx, 2));
    // 0x1eb600: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb604: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb608: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb60c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1eb60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1eb610: 0xfe2300e8  sd          $v1, 0xE8($s1)
    ctx->pc = 0x1eb610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 232), GPR_U64(ctx, 3));
    // 0x1eb614: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1eb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb618: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb61c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1eb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb620: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1eb620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1eb624: 0xfe220208  sd          $v0, 0x208($s1)
    ctx->pc = 0x1eb624u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 2));
    // 0x1eb628: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb62c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1eb62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb630: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1eb630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb634: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1eb634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1eb638: 0xfe240238  sd          $a0, 0x238($s1)
    ctx->pc = 0x1eb638u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 568), GPR_U64(ctx, 4));
    // 0x1eb63c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eb640: 0x34450006  ori         $a1, $v0, 0x6
    ctx->pc = 0x1eb640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1eb644: 0x5a83c  dsll32      $s5, $a1, 0
    ctx->pc = 0x1eb644u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb648: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x1eb64c: 0x34639400  ori         $v1, $v1, 0x9400
    ctx->pc = 0x1eb64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37888);
    // 0x1eb650: 0x752825  or          $a1, $v1, $s5
    ctx->pc = 0x1eb650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x1eb654: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1eb654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb658: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1eb658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1eb65c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1eb65cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1eb660: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eb660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb664: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1eb664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb668: 0xc0958e0  jal         func_256380
    ctx->pc = 0x1EB668u;
    SET_GPR_U32(ctx, 31, 0x1EB670u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x1EB668u, 0x1EB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB670u;
label_1eb670:
    // 0x1eb670: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eb670u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb674: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eb674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb67c: 0xc0958e0  jal         func_256380
    ctx->pc = 0x1EB67Cu;
    SET_GPR_U32(ctx, 31, 0x1EB684u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x1EB67Cu, 0x1EB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB684u;
label_1eb684:
    // 0x1eb684: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eb684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb688: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb68c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb690: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1eb690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb694: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1eb694u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb698: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x1eb698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
    // 0x1eb69c: 0x2464026c  addiu       $a0, $v1, 0x26C
    ctx->pc = 0x1eb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 620));
    // 0x1eb6a0: 0x24100150  addiu       $s0, $zero, 0x150
    ctx->pc = 0x1eb6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1eb6a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1eb6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb6a8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1eb6a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb6ac: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB6ACu;
    SET_GPR_U32(ctx, 31, 0x1EB6B4u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB6ACu, 0x1EB6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6B4u;
label_1eb6b4:
    // 0x1eb6b4: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1eb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1eb6b8: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1eb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1eb6bc: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x1eb6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1eb6c0: 0x24450150  addiu       $a1, $v0, 0x150
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1eb6c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1eb6c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb6c8: 0xc0747f8  jal         func_1D1FE0
    ctx->pc = 0x1EB6C8u;
    SET_GPR_U32(ctx, 31, 0x1EB6D0u);
    ctx->pc = 0x1D1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FE0u, 0x1EB6C8u, 0x1EB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6D0u;
label_1eb6d0:
    // 0x1eb6d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb6d4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb6d8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb6dc: 0x90851308  lbu         $a1, 0x1308($a0)
    ctx->pc = 0x1eb6dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x1eb6e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1eb6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1eb6e4: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x1eb6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1eb6e8: 0x24640264  addiu       $a0, $v1, 0x264
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 612));
    // 0x1eb6ec: 0x241007f0  addiu       $s0, $zero, 0x7F0
    ctx->pc = 0x1eb6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1eb6f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1eb6f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb6f4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB6F4u;
    SET_GPR_U32(ctx, 31, 0x1EB6FCu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB6F4u, 0x1EB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6FCu;
label_1eb6fc:
    // 0x1eb6fc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1eb6fcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb700: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1eb700u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1eb704: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1eb704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1eb708: 0x268507f0  addiu       $a1, $s4, 0x7F0
    ctx->pc = 0x1eb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2032));
    // 0x1eb70c: 0x3c104080  lui         $s0, 0x4080
    ctx->pc = 0x1eb70cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb710: 0x36030006  ori         $v1, $s0, 0x6
    ctx->pc = 0x1eb710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
    // 0x1eb714: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x1eb714u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb718: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb71c: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x1eb71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1eb720: 0x538025  or          $s0, $v0, $s3
    ctx->pc = 0x1eb720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1eb724: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1eb724u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb728: 0xc0749e0  jal         func_1D2780
    ctx->pc = 0x1EB728u;
    SET_GPR_U32(ctx, 31, 0x1EB730u);
    ctx->pc = 0x1D2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2780u, 0x1EB728u, 0x1EB730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB730u;
label_1eb730:
    // 0x1eb730: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1eb730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1eb734: 0x268507f0  addiu       $a1, $s4, 0x7F0
    ctx->pc = 0x1eb734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2032));
    // 0x1eb738: 0xc074d28  jal         func_1D34A0
    ctx->pc = 0x1EB738u;
    SET_GPR_U32(ctx, 31, 0x1EB740u);
    ctx->pc = 0x1D34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34A0u, 0x1EB738u, 0x1EB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB740u;
label_1eb740:
    // 0x1eb740: 0x3c134080  lui         $s3, 0x4080
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb744: 0x36700002  ori         $s0, $s3, 0x2
    ctx->pc = 0x1eb744u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x1eb748: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1eb748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1eb74c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1eb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb750: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x1eb750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1eb754: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1eb754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb758: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x1eb758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1eb75c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1eb75cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1eb760: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1eb760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb764: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x1eb764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1eb768: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1eb768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb76c: 0x3c052402  lui         $a1, 0x2402
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb770: 0x34a41400  ori         $a0, $a1, 0x1400
    ctx->pc = 0x1eb770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5120);
    // 0x1eb774: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1eb774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb778: 0x26870840  addiu       $a3, $s4, 0x840
    ctx->pc = 0x1eb778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
    // 0x1eb77c: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1eb77cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1eb780: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb784: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1eb784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb788: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb78c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb790: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x1eb790u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x1eb794: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb798: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1eb798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb79c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1eb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb7a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb7a4: 0xfe820810  sd          $v0, 0x810($s4)
    ctx->pc = 0x1eb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2064), GPR_U64(ctx, 2));
    // 0x1eb7a8: 0x3c120005  lui         $s2, 0x5
    ctx->pc = 0x1eb7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)5 << 16));
    // 0x1eb7ac: 0x36423001  ori         $v0, $s2, 0x3001
    ctx->pc = 0x1eb7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)12289);
    // 0x1eb7b0: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x1eb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x1eb7b4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1eb7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1eb7b8: 0x34a43001  ori         $a0, $a1, 0x3001
    ctx->pc = 0x1eb7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12289);
    // 0x1eb7bc: 0xfe840820  sd          $a0, 0x820($s4)
    ctx->pc = 0x1eb7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2080), GPR_U64(ctx, 4));
    // 0x1eb7c0: 0x3c08510e  lui         $t0, 0x510E
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20750 << 16));
    // 0x1eb7c4: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x1eb7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x1eb7c8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1eb7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eb7cc: 0x34048011  ori         $a0, $zero, 0x8011
    ctx->pc = 0x1eb7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x1eb7d0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1eb7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb7d4: 0xfe830070  sd          $v1, 0x70($s4)
    ctx->pc = 0x1eb7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 3));
    // 0x1eb7d8: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1eb7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1eb7dc: 0x34632512  ori         $v1, $v1, 0x2512
    ctx->pc = 0x1eb7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9490);
    // 0x1eb7e0: 0xfe830078  sd          $v1, 0x78($s4)
    ctx->pc = 0x1eb7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 3));
    // 0x1eb7e4: 0x3c02510e  lui         $v0, 0x510E
    ctx->pc = 0x1eb7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20750 << 16));
    // 0x1eb7e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1eb7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1eb7ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb7f0: 0x34058011  ori         $a1, $zero, 0x8011
    ctx->pc = 0x1eb7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x1eb7f4: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x1eb7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1eb7f8: 0xfe860860  sd          $a2, 0x860($s4)
    ctx->pc = 0x1eb7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2144), GPR_U64(ctx, 6));
    // 0x1eb7fc: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x1eb7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x1eb800: 0x35072512  ori         $a3, $t0, 0x2512
    ctx->pc = 0x1eb800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)9490);
    // 0x1eb804: 0xfe870868  sd          $a3, 0x868($s4)
    ctx->pc = 0x1eb804u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2152), GPR_U64(ctx, 7));
    // 0x1eb808: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb80c: 0x24450274  addiu       $a1, $v0, 0x274
    ctx->pc = 0x1eb80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    // 0x1eb810: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb814: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1eb814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1eb818: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb81c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x1EB81Cu;
    SET_GPR_U32(ctx, 31, 0x1EB824u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x1EB81Cu, 0x1EB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB824u;
label_1eb824:
    // 0x1eb824: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb828: 0x8c850274  lw          $a1, 0x274($a0)
    ctx->pc = 0x1eb828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1eb82c: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x1eb82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x1eb830: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb834: 0x8c430278  lw          $v1, 0x278($v0)
    ctx->pc = 0x1eb834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x1eb838: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x1eb838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x1eb83c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1eb83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1eb840: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x1eb840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1eb844: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1eb844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1eb848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb84c: 0x3c026040  lui         $v0, 0x6040
    ctx->pc = 0x1eb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24640 << 16));
    // 0x1eb850: 0x34474080  ori         $a3, $v0, 0x4080
    ctx->pc = 0x1eb850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16512);
    // 0x1eb854: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1eb854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1eb858: 0x35084080  ori         $t0, $t0, 0x4080
    ctx->pc = 0x1eb858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16512);
    // 0x1eb85c: 0x3c026020  lui         $v0, 0x6020
    ctx->pc = 0x1eb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24608 << 16));
    // 0x1eb860: 0x34492020  ori         $t1, $v0, 0x2020
    ctx->pc = 0x1eb860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1eb864: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1eb868: 0x346a2020  ori         $t2, $v1, 0x2020
    ctx->pc = 0x1eb868u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x1eb86c: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x1EB86Cu;
    SET_GPR_U32(ctx, 31, 0x1EB874u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x1EB86Cu, 0x1EB874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB874u;
label_1eb874:
    // 0x1eb874: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb874u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb878: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1eb878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1eb87c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1eb87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb880: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x1eb880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x1eb884: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x1eb884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1eb888: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1eb888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eb88c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1eb88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1eb890: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb894: 0x34c50002  ori         $a1, $a2, 0x2
    ctx->pc = 0x1eb894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x1eb898: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1eb898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb89c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb8a0: 0x34640700  ori         $a0, $v1, 0x700
    ctx->pc = 0x1eb8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1eb8a4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1eb8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb8a8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1eb8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb8ac: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1eb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1eb8b0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1eb8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1eb8b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1eb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb8b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1eb8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1eb8bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1eb8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb8c0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1eb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb8c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1eb8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb8c8: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x1eb8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb8cc: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x1eb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1eb8d0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1eb8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1eb8d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1eb8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb8d8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1eb8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb8dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1eb8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb8e0: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1eb8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1eb8e4: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x1eb8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb8e8: 0xfd070020  sd          $a3, 0x20($t0)
    ctx->pc = 0x1eb8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 7));
    // 0x1eb8ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1eb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb8f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1eb8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb8f4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb8f8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1eb8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb8fc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb900: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1eb900u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1eb904: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1eb908: 0x34433001  ori         $v1, $v0, 0x3001
    ctx->pc = 0x1eb908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x1eb90c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1eb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb910: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1eb910u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1eb914: 0x3c1e0005  lui         $fp, 0x5
    ctx->pc = 0x1eb914u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)5 << 16));
    // 0x1eb918: 0x37c23001  ori         $v0, $fp, 0x3001
    ctx->pc = 0x1eb918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)12289);
    // 0x1eb91c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb920: 0xfc620030  sd          $v0, 0x30($v1)
    ctx->pc = 0x1eb920u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
    // 0x1eb924: 0x3c04612e  lui         $a0, 0x612E
    ctx->pc = 0x1eb924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24878 << 16));
    // 0x1eb928: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x1eb928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1eb92c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1eb92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb930: 0x34028021  ori         $v0, $zero, 0x8021
    ctx->pc = 0x1eb930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x1eb934: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1eb934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1eb938: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1eb938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb93c: 0xfc430070  sd          $v1, 0x70($v0)
    ctx->pc = 0x1eb93cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 3));
    // 0x1eb940: 0x3c05612e  lui         $a1, 0x612E
    ctx->pc = 0x1eb940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24878 << 16));
    // 0x1eb944: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x1eb944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1eb948: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1eb948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb94c: 0x34048021  ori         $a0, $zero, 0x8021
    ctx->pc = 0x1eb94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x1eb950: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1eb950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb954: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1eb954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb958: 0xfc450070  sd          $a1, 0x70($v0)
    ctx->pc = 0x1eb958u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 5));
    // 0x1eb95c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1eb95cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1eb960: 0x26139d80  addiu       $s3, $s0, -0x6280
    ctx->pc = 0x1eb960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942080));
    // 0x1eb964: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1eb964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eb968: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eb968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eb96c: 0x70a01628  paddub      $v0, $a1, $zero
    ctx->pc = 0x1eb96cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb970: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1eb970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1eb974u;
}
