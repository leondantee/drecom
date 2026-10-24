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

// Function: Tim2LoadClut
// Address: 0x1792b0 - 0x1797f8
void Tim2LoadClut_0x1792b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tim2LoadClut_0x1792b0");
#endif

    switch (ctx->pc) {
        case 0x1793ecu: goto label_1793ec;
        case 0x179584u: goto label_179584;
        case 0x1795d4u: goto label_1795d4;
        case 0x179608u: goto label_179608;
        case 0x179614u: goto label_179614;
        case 0x179624u: goto label_179624;
        case 0x179634u: goto label_179634;
        case 0x179684u: goto label_179684;
        case 0x1796a0u: goto label_1796a0;
        case 0x1796e8u: goto label_1796e8;
        case 0x1796f4u: goto label_1796f4;
        case 0x179704u: goto label_179704;
        case 0x179714u: goto label_179714;
        default: break;
    }

    ctx->pc = 0x1792b0u;

    // 0x1792b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1792b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1792b4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1792b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1792b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1792b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1792bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1792bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1792c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1792c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1792c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1792c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1792c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1792c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1792cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1792ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1792d0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1792d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1792d4: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x1792d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x1792d8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1792d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1792dc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1792dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1792e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1792e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1792e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1792E4u;
    {
        const bool branch_taken_0x1792e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1792e4) {
            ctx->pc = 0x1792F8u;
            goto label_1792f8;
        }
    }
    ctx->pc = 0x1792ECu;
    // 0x1792ec: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1792ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1792f0: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1792F0u;
    {
        const bool branch_taken_0x1792f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792f0) {
            ctx->pc = 0x1797D0u;
            goto label_1797d0;
        }
    }
    ctx->pc = 0x1792F8u;
label_1792f8:
    // 0x1792f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1792f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1792fc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1792fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179304: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17930c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17930Cu;
    {
        const bool branch_taken_0x17930c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17930c) {
            ctx->pc = 0x179320u;
            goto label_179320;
        }
    }
    ctx->pc = 0x179314u;
    // 0x179314: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x179314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179318: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x179318u;
    {
        const bool branch_taken_0x179318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179318) {
            ctx->pc = 0x17934Cu;
            goto label_17934c;
        }
    }
    ctx->pc = 0x179320u;
label_179320:
    // 0x179320: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179324: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17932c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x17932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179330: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179334: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179334) {
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x17933Cu;
    // 0x17933c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179340u;
    {
        const bool branch_taken_0x179340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179340) {
            ctx->pc = 0x17934Cu;
            goto label_17934c;
        }
    }
    ctx->pc = 0x179348u;
label_179348:
    // 0x179348: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x179348u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_17934c:
    // 0x17934c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x17934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x179350: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179354: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x179358: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x179358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x17935c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x179360: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x179364: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x179364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x179368: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x179368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17936c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179370: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x179370u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x179374: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179378: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17937c: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x17937cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x179380: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x179380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x179384: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x179384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x179388: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x179388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17938c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x179390: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179394: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x179394u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x179398: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17939c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x17939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1793a0: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x1793a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1793a4: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x1793a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1793a8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1793a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1793ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1793acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1793b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1793b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1793b4: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x1793b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1793b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1793b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1793bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1793bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1793c0: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1793c4: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x1793c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1793c8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1793c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1793cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1793ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1793d0: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1793d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1793d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1793d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1793d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1793dc: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x1793dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1793e0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1793e4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1793E4u;
    SET_GPR_U32(ctx, 31, 0x1793ECu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1793E4u, 0x1793ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793ECu;
label_1793ec:
    // 0x1793ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1793ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1793f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1793f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1793f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1793f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1793f8: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x1793f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1793fc: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x1793fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179400: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x179400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x179404: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x179404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x179408: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x179408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x17940c: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x17940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x179410: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179414: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x179414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x179418: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x179418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17941c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x179420: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179424: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x179428: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x179428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17942c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x17942cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x179430: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179434: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x179434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x179438: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x179438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17943c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179440: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179444: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179448: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x179448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17944c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x17944cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179450: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179454: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17945c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x179460: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179464: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x179464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x179468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17946c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179470: 0x34028305  ori         $v0, $zero, 0x8305
    ctx->pc = 0x179470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33541);
    // 0x179474: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x179474u;
    {
        const bool branch_taken_0x179474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179474) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x17947Cu;
    // 0x17947c: 0x34028205  ori         $v0, $zero, 0x8205
    ctx->pc = 0x17947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33285);
    // 0x179480: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x179480u;
    {
        const bool branch_taken_0x179480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179480) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x179488u;
    // 0x179488: 0x34028105  ori         $v0, $zero, 0x8105
    ctx->pc = 0x179488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33029);
    // 0x17948c: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x17948Cu;
    {
        const bool branch_taken_0x17948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17948c) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x179494u;
    // 0x179494: 0x34028304  ori         $v0, $zero, 0x8304
    ctx->pc = 0x179494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33540);
    // 0x179498: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x179498u;
    {
        const bool branch_taken_0x179498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179498) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x1794A0u;
    // 0x1794a0: 0x34028204  ori         $v0, $zero, 0x8204
    ctx->pc = 0x1794a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33284);
    // 0x1794a4: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1794A4u;
    {
        const bool branch_taken_0x1794a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794a4) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x1794ACu;
    // 0x1794ac: 0x34028104  ori         $v0, $zero, 0x8104
    ctx->pc = 0x1794acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33028);
    // 0x1794b0: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1794B0u;
    {
        const bool branch_taken_0x1794b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794b0) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x1794B8u;
    // 0x1794b8: 0x24020304  addiu       $v0, $zero, 0x304
    ctx->pc = 0x1794b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    // 0x1794bc: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1794BCu;
    {
        const bool branch_taken_0x1794bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794bc) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x1794C4u;
    // 0x1794c4: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x1794c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x1794c8: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1794C8u;
    {
        const bool branch_taken_0x1794c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794c8) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x1794D0u;
    // 0x1794d0: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1794d4: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1794D4u;
    {
        const bool branch_taken_0x1794d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794d4) {
            ctx->pc = 0x179678u;
            goto label_179678;
        }
    }
    ctx->pc = 0x1794DCu;
    // 0x1794dc: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x1794dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x1794e0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x17952Cu;
            goto label_17952c;
        }
    }
    ctx->pc = 0x1794E8u;
    // 0x1794e8: 0x24020205  addiu       $v0, $zero, 0x205
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x1794ec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1794ECu;
    {
        const bool branch_taken_0x1794ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794ec) {
            ctx->pc = 0x17952Cu;
            goto label_17952c;
        }
    }
    ctx->pc = 0x1794F4u;
    // 0x1794f4: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1794f8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1794F8u;
    {
        const bool branch_taken_0x1794f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794f8) {
            ctx->pc = 0x17952Cu;
            goto label_17952c;
        }
    }
    ctx->pc = 0x179500u;
    // 0x179500: 0x24024304  addiu       $v0, $zero, 0x4304
    ctx->pc = 0x179500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17156));
    // 0x179504: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179504u;
    {
        const bool branch_taken_0x179504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179504) {
            ctx->pc = 0x17952Cu;
            goto label_17952c;
        }
    }
    ctx->pc = 0x17950Cu;
    // 0x17950c: 0x24024204  addiu       $v0, $zero, 0x4204
    ctx->pc = 0x17950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16900));
    // 0x179510: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179510) {
            ctx->pc = 0x17952Cu;
            goto label_17952c;
        }
    }
    ctx->pc = 0x179518u;
    // 0x179518: 0x24024104  addiu       $v0, $zero, 0x4104
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16644));
    // 0x17951c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17951Cu;
    {
        const bool branch_taken_0x17951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17951c) {
            ctx->pc = 0x17952Cu;
            goto label_17952c;
        }
    }
    ctx->pc = 0x179524u;
    // 0x179524: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x179524u;
    {
        const bool branch_taken_0x179524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179524) {
            ctx->pc = 0x1797BCu;
            goto label_1797bc;
        }
    }
    ctx->pc = 0x17952Cu;
label_17952c:
    // 0x17952c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x179530: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179530u;
    {
        const bool branch_taken_0x179530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x179530) {
            ctx->pc = 0x179560u;
            goto label_179560;
        }
    }
    ctx->pc = 0x179538u;
    // 0x179538: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17953c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17953Cu;
    {
        const bool branch_taken_0x17953c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x17953c) {
            ctx->pc = 0x179560u;
            goto label_179560;
        }
    }
    ctx->pc = 0x179544u;
    // 0x179544: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x179544u;
    {
        const bool branch_taken_0x179544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x179544) {
            ctx->pc = 0x179554u;
            goto label_179554;
        }
    }
    ctx->pc = 0x17954Cu;
    // 0x17954c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17954Cu;
    {
        const bool branch_taken_0x17954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17954c) {
            ctx->pc = 0x17956Cu;
            goto label_17956c;
        }
    }
    ctx->pc = 0x179554u;
label_179554:
    // 0x179554: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x179554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x179558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x179558u;
    {
        const bool branch_taken_0x179558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179558) {
            ctx->pc = 0x179578u;
            goto label_179578;
        }
    }
    ctx->pc = 0x179560u;
label_179560:
    // 0x179560: 0x24150200  addiu       $s5, $zero, 0x200
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x179564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179564u;
    {
        const bool branch_taken_0x179564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179564) {
            ctx->pc = 0x179578u;
            goto label_179578;
        }
    }
    ctx->pc = 0x17956Cu;
label_17956c:
    // 0x17956c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x179570: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x179570u;
    {
        const bool branch_taken_0x179570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179570) {
            ctx->pc = 0x1797D0u;
            goto label_1797d0;
        }
    }
    ctx->pc = 0x179578u;
label_179578:
    // 0x179578: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x179578u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17957c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17957Cu;
    {
        const bool branch_taken_0x17957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17957c) {
            ctx->pc = 0x179658u;
            goto label_179658;
        }
    }
    ctx->pc = 0x179584u;
label_179584:
    // 0x179584: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179588: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x179588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x17958c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179590: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179594: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x179594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x179598: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x179598u;
    {
        const bool branch_taken_0x179598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179598) {
            ctx->pc = 0x1795C0u;
            goto label_1795c0;
        }
    }
    ctx->pc = 0x1795A0u;
    // 0x1795a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1795a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1795a4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1795a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1795a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1795a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1795ac: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1795acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1795b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1795b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1795b4: 0x39903  sra         $s3, $v1, 4
    ctx->pc = 0x1795b4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1795b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1795B8u;
    {
        const bool branch_taken_0x1795b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1795b8) {
            ctx->pc = 0x1795C8u;
            goto label_1795c8;
        }
    }
    ctx->pc = 0x1795C0u;
label_1795c0:
    // 0x1795c0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1795c4: 0x0  nop
    ctx->pc = 0x1795c4u;
    // NOP
label_1795c8:
    // 0x1795c8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1795c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1795cc: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1795CCu;
    SET_GPR_U32(ctx, 31, 0x1795D4u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1795CCu, 0x1795D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795D4u;
label_1795d4:
    // 0x1795d4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1795d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1795d8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1795d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1795dc: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x1795dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1795e0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1795e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1795e4: 0x135c3c  dsll32      $t3, $s3, 16
    ctx->pc = 0x1795e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1795e8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1795e8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x1795ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1795f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1795f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1795f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1795f8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1795f8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1795fc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1795fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179600: 0xc040330  jal         func_100CC0
    ctx->pc = 0x179600u;
    SET_GPR_U32(ctx, 31, 0x179608u);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x179608u;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179608u) { return; }
    ctx->pc = 0x179608u;
label_179608:
    // 0x179608: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17960c: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17960Cu;
    SET_GPR_U32(ctx, 31, 0x179614u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x179614u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179614u) { return; }
    ctx->pc = 0x179614u;
label_179614:
    // 0x179614: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x179614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179618: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x179618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17961c: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x17961Cu;
    SET_GPR_U32(ctx, 31, 0x179624u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x179624u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179624u) { return; }
    ctx->pc = 0x179624u;
label_179624:
    // 0x179624: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179628: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17962c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x17962Cu;
    SET_GPR_U32(ctx, 31, 0x179634u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x179634u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179634u) { return; }
    ctx->pc = 0x179634u;
label_179634:
    // 0x179634: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x179634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x179638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17963c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x17963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x179640: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179644: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x179644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
    // 0x179648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17964c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17964cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179650: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x179650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x179654: 0x0  nop
    ctx->pc = 0x179654u;
    // NOP
label_179658:
    // 0x179658: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17965c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x17965cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x179660: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x179660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179664: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x179664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179668: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x179668u;
    {
        const bool branch_taken_0x179668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179668) {
            ctx->pc = 0x179584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179584;
        }
    }
    ctx->pc = 0x179670u;
    // 0x179670: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x179670u;
    {
        const bool branch_taken_0x179670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179670) {
            ctx->pc = 0x1797C8u;
            goto label_1797c8;
        }
    }
    ctx->pc = 0x179678u;
label_179678:
    // 0x179678: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x179678u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17967c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17967Cu;
    {
        const bool branch_taken_0x17967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17967c) {
            ctx->pc = 0x179770u;
            goto label_179770;
        }
    }
    ctx->pc = 0x179684u;
label_179684:
    // 0x179684: 0x3234000f  andi        $s4, $s1, 0xF
    ctx->pc = 0x179684u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x179688: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17968c: 0x111903  sra         $v1, $s1, 4
    ctx->pc = 0x17968cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 4));
    // 0x179690: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x179690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x179694: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x179694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179698: 0xc05e990  jal         func_17A640
    ctx->pc = 0x179698u;
    SET_GPR_U32(ctx, 31, 0x1796A0u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x179698u, 0x1796A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796A0u;
label_1796a0:
    // 0x1796a0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1796a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1796a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1796a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1796a8: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x1796a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1796ac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1796acu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1796b0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1796b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1796b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1796b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1796b8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x1796b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1796bc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1796bcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1796c0: 0x141042  srl         $v0, $s4, 1
    ctx->pc = 0x1796c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x1796c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1796c8: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x1796c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1796cc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1796ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1796d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1796d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1796d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796d8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1796d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1796dc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1796dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1796e0: 0xc040330  jal         func_100CC0
    ctx->pc = 0x1796E0u;
    SET_GPR_U32(ctx, 31, 0x1796E8u);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x1796E8u;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1796E8u) { return; }
    ctx->pc = 0x1796E8u;
label_1796e8:
    // 0x1796e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1796e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1796ec: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1796ECu;
    SET_GPR_U32(ctx, 31, 0x1796F4u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1796F4u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1796F4u) { return; }
    ctx->pc = 0x1796F4u;
label_1796f4:
    // 0x1796f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1796f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1796f8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1796f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1796fc: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x1796FCu;
    SET_GPR_U32(ctx, 31, 0x179704u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x179704u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179704u) { return; }
    ctx->pc = 0x179704u;
label_179704:
    // 0x179704: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179708: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17970c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x17970Cu;
    SET_GPR_U32(ctx, 31, 0x179714u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x179714u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179714u) { return; }
    ctx->pc = 0x179714u;
label_179714:
    // 0x179714: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179718: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x17971c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179720: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179728: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179728u;
    {
        const bool branch_taken_0x179728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179728) {
            ctx->pc = 0x17973Cu;
            goto label_17973c;
        }
    }
    ctx->pc = 0x179730u;
    // 0x179730: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x179734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x179734u;
    {
        const bool branch_taken_0x179734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179734) {
            ctx->pc = 0x179768u;
            goto label_179768;
        }
    }
    ctx->pc = 0x17973Cu;
label_17973c:
    // 0x17973c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179740: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179748: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x17974c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179750: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179750u;
    {
        const bool branch_taken_0x179750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179750) {
            ctx->pc = 0x179764u;
            goto label_179764;
        }
    }
    ctx->pc = 0x179758u;
    // 0x179758: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17975c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17975Cu;
    {
        const bool branch_taken_0x17975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17975c) {
            ctx->pc = 0x179768u;
            goto label_179768;
        }
    }
    ctx->pc = 0x179764u;
label_179764:
    // 0x179764: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x179764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_179768:
    // 0x179768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x179768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17976c: 0x0  nop
    ctx->pc = 0x17976cu;
    // NOP
label_179770:
    // 0x179770: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179774: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x179774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x179778: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x179778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17977c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179780: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x179780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x179784: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x179784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179788: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x179788u;
    {
        const bool branch_taken_0x179788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179788) {
            ctx->pc = 0x179684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179684;
        }
    }
    ctx->pc = 0x179790u;
    // 0x179790: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179794: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x179794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x179798: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x179798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17979c: 0x244300ff  addiu       $v1, $v0, 0xFF
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x1797a0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1797a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1797a4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1797a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1797ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1797b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1797b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1797b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1797B4u;
    {
        const bool branch_taken_0x1797b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1797b4) {
            ctx->pc = 0x1797C8u;
            goto label_1797c8;
        }
    }
    ctx->pc = 0x1797BCu;
label_1797bc:
    // 0x1797bc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1797bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1797c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1797C0u;
    {
        const bool branch_taken_0x1797c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1797c0) {
            ctx->pc = 0x1797D0u;
            goto label_1797d0;
        }
    }
    ctx->pc = 0x1797C8u;
label_1797c8:
    // 0x1797c8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1797c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1797cc: 0x0  nop
    ctx->pc = 0x1797ccu;
    // NOP
label_1797d0:
    // 0x1797d0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1797d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1797d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1797d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1797d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1797d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1797dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1797dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1797e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1797e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1797e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1797e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1797e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1797e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1797ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1797ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1797f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1797F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1797F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1797F8u;
}
