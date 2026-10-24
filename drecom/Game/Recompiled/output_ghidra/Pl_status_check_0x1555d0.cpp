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

// Function: Pl_status_check
// Address: 0x1555d0 - 0x1557f4
void Pl_status_check_0x1555d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_status_check_0x1555d0");
#endif

    ctx->pc = 0x1555d0u;

    // 0x1555d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1555d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1555d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1555d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1555d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1555d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1555dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1555e0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1555e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1555e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1555e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1555ec: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1555ECu;
    {
        const bool branch_taken_0x1555ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1555ec) {
            ctx->pc = 0x1556D8u;
            goto label_1556d8;
        }
    }
    ctx->pc = 0x1555F4u;
    // 0x1555f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1555f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1555F8u;
    {
        const bool branch_taken_0x1555f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1555f8) {
            ctx->pc = 0x15561Cu;
            goto label_15561c;
        }
    }
    ctx->pc = 0x155600u;
    // 0x155600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155604: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155604u;
    {
        const bool branch_taken_0x155604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155604) {
            ctx->pc = 0x15561Cu;
            goto label_15561c;
        }
    }
    ctx->pc = 0x15560Cu;
    // 0x15560c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15560Cu;
    {
        const bool branch_taken_0x15560c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15560c) {
            ctx->pc = 0x15561Cu;
            goto label_15561c;
        }
    }
    ctx->pc = 0x155614u;
    // 0x155614: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x155614u;
    {
        const bool branch_taken_0x155614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155614) {
            ctx->pc = 0x15561Cu;
            goto label_15561c;
        }
    }
    ctx->pc = 0x15561Cu;
label_15561c:
    // 0x15561c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x15561cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155620: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155628: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155628u;
    {
        const bool branch_taken_0x155628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155628) {
            ctx->pc = 0x15563Cu;
            goto label_15563c;
        }
    }
    ctx->pc = 0x155630u;
    // 0x155630: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155630u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155634: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x155634u;
    {
        const bool branch_taken_0x155634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155634) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x15563Cu;
label_15563c:
    // 0x15563c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x15563cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x155640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155644: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155644u;
    {
        const bool branch_taken_0x155644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155644) {
            ctx->pc = 0x155680u;
            goto label_155680;
        }
    }
    ctx->pc = 0x15564Cu;
    // 0x15564c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x15564cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155650: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155658: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155658u;
    {
        const bool branch_taken_0x155658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155658) {
            ctx->pc = 0x155680u;
            goto label_155680;
        }
    }
    ctx->pc = 0x155660u;
    // 0x155660: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x155660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155664: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15566c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15566Cu;
    {
        const bool branch_taken_0x15566c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15566c) {
            ctx->pc = 0x155680u;
            goto label_155680;
        }
    }
    ctx->pc = 0x155674u;
    // 0x155674: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155674u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155678: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x155678u;
    {
        const bool branch_taken_0x155678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155678) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x155680u;
label_155680:
    // 0x155680: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x155680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x155684: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155684u;
    {
        const bool branch_taken_0x155684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155684) {
            ctx->pc = 0x155698u;
            goto label_155698;
        }
    }
    ctx->pc = 0x15568Cu;
    // 0x15568c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15568cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155690: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x155690u;
    {
        const bool branch_taken_0x155690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155690) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x155698u;
label_155698:
    // 0x155698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15569c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1556a0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1556a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1556a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556A4u;
    {
        const bool branch_taken_0x1556a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556a4) {
            ctx->pc = 0x1556B8u;
            goto label_1556b8;
        }
    }
    ctx->pc = 0x1556ACu;
    // 0x1556ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1556acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1556b0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1556B0u;
    {
        const bool branch_taken_0x1556b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556b0) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x1556B8u;
label_1556b8:
    // 0x1556b8: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1556bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1556bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1556c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1556c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1556c4: 0x4410033  bgez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1556C4u;
    {
        const bool branch_taken_0x1556c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1556c4) {
            ctx->pc = 0x155794u;
            goto label_155794;
        }
    }
    ctx->pc = 0x1556CCu;
    // 0x1556cc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1556ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1556d0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1556D0u;
    {
        const bool branch_taken_0x1556d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556d0) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x1556D8u;
label_1556d8:
    // 0x1556d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1556d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1556dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1556dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1556e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1556e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556E4u;
    {
        const bool branch_taken_0x1556e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1556e4) {
            ctx->pc = 0x1556F8u;
            goto label_1556f8;
        }
    }
    ctx->pc = 0x1556ECu;
    // 0x1556ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1556ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1556f0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1556F0u;
    {
        const bool branch_taken_0x1556f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556f0) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x1556F8u;
label_1556f8:
    // 0x1556f8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1556f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1556fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1556fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155700: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155700u;
    {
        const bool branch_taken_0x155700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155700) {
            ctx->pc = 0x15573Cu;
            goto label_15573c;
        }
    }
    ctx->pc = 0x155708u;
    // 0x155708: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x155708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15570c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155714: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155714u;
    {
        const bool branch_taken_0x155714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155714) {
            ctx->pc = 0x15573Cu;
            goto label_15573c;
        }
    }
    ctx->pc = 0x15571Cu;
    // 0x15571c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x15571cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155728: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155728u;
    {
        const bool branch_taken_0x155728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155728) {
            ctx->pc = 0x15573Cu;
            goto label_15573c;
        }
    }
    ctx->pc = 0x155730u;
    // 0x155730: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155730u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155734: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x155734u;
    {
        const bool branch_taken_0x155734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155734) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x15573Cu;
label_15573c:
    // 0x15573c: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15573cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x155740: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155740u;
    {
        const bool branch_taken_0x155740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155740) {
            ctx->pc = 0x155754u;
            goto label_155754;
        }
    }
    ctx->pc = 0x155748u;
    // 0x155748: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155748u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15574c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15574Cu;
    {
        const bool branch_taken_0x15574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15574c) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x155754u;
label_155754:
    // 0x155754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155758: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15575c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x155760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155760u;
    {
        const bool branch_taken_0x155760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155760) {
            ctx->pc = 0x155774u;
            goto label_155774;
        }
    }
    ctx->pc = 0x155768u;
    // 0x155768: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155768u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15576c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15576Cu;
    {
        const bool branch_taken_0x15576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15576c) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x155774u;
label_155774:
    // 0x155774: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x155774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x155778: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x155778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15577c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15577cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x155780: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155780u;
    {
        const bool branch_taken_0x155780 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x155780) {
            ctx->pc = 0x155794u;
            goto label_155794;
        }
    }
    ctx->pc = 0x155788u;
    // 0x155788: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155788u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15578c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15578Cu;
    {
        const bool branch_taken_0x15578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15578c) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x155794u;
label_155794:
    // 0x155794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155798: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15579c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15579Cu;
    {
        const bool branch_taken_0x15579c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15579c) {
            ctx->pc = 0x1557C0u;
            goto label_1557c0;
        }
    }
    ctx->pc = 0x1557A4u;
    // 0x1557a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1557a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1557a8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1557A8u;
    {
        const bool branch_taken_0x1557a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1557a8) {
            ctx->pc = 0x1557E0u;
            goto label_1557e0;
        }
    }
    ctx->pc = 0x1557B0u;
    // 0x1557b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1557B0u;
    {
        const bool branch_taken_0x1557b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557b0) {
            ctx->pc = 0x1557E0u;
            goto label_1557e0;
        }
    }
    ctx->pc = 0x1557B8u;
    // 0x1557b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x1557E0u;
            goto label_1557e0;
        }
    }
    ctx->pc = 0x1557C0u;
label_1557c0:
    // 0x1557c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1557c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1557c4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1557c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1557c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1557cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1557CCu;
    {
        const bool branch_taken_0x1557cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557cc) {
            ctx->pc = 0x1557E0u;
            goto label_1557e0;
        }
    }
    ctx->pc = 0x1557D4u;
    // 0x1557d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1557d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1557d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1557D8u;
    {
        const bool branch_taken_0x1557d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557d8) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x1557E0u;
label_1557e0:
    // 0x1557e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1557e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1557e4:
    // 0x1557e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1557e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1557e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1557e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1557ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1557ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1557F4u;
}
