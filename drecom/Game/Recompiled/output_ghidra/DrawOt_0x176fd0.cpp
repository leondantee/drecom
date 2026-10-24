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

// Function: DrawOt
// Address: 0x176fd0 - 0x1771a4
void DrawOt_0x176fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawOt_0x176fd0");
#endif

    switch (ctx->pc) {
        case 0x176fd0u: goto label_176fd0;
        case 0x176fd4u: goto label_176fd4;
        case 0x176fd8u: goto label_176fd8;
        case 0x176fdcu: goto label_176fdc;
        case 0x176fe0u: goto label_176fe0;
        case 0x176fe4u: goto label_176fe4;
        case 0x176fe8u: goto label_176fe8;
        case 0x176fecu: goto label_176fec;
        case 0x176ff0u: goto label_176ff0;
        case 0x176ff4u: goto label_176ff4;
        case 0x176ff8u: goto label_176ff8;
        case 0x176ffcu: goto label_176ffc;
        case 0x177000u: goto label_177000;
        case 0x177004u: goto label_177004;
        case 0x177008u: goto label_177008;
        case 0x17700cu: goto label_17700c;
        case 0x177010u: goto label_177010;
        case 0x177014u: goto label_177014;
        case 0x177018u: goto label_177018;
        case 0x17701cu: goto label_17701c;
        case 0x177020u: goto label_177020;
        case 0x177024u: goto label_177024;
        case 0x177028u: goto label_177028;
        case 0x17702cu: goto label_17702c;
        case 0x177030u: goto label_177030;
        case 0x177034u: goto label_177034;
        case 0x177038u: goto label_177038;
        case 0x17703cu: goto label_17703c;
        case 0x177040u: goto label_177040;
        case 0x177044u: goto label_177044;
        case 0x177048u: goto label_177048;
        case 0x17704cu: goto label_17704c;
        case 0x177050u: goto label_177050;
        case 0x177054u: goto label_177054;
        case 0x177058u: goto label_177058;
        case 0x17705cu: goto label_17705c;
        case 0x177060u: goto label_177060;
        case 0x177064u: goto label_177064;
        case 0x177068u: goto label_177068;
        case 0x17706cu: goto label_17706c;
        case 0x177070u: goto label_177070;
        case 0x177074u: goto label_177074;
        case 0x177078u: goto label_177078;
        case 0x17707cu: goto label_17707c;
        case 0x177080u: goto label_177080;
        case 0x177084u: goto label_177084;
        case 0x177088u: goto label_177088;
        case 0x17708cu: goto label_17708c;
        case 0x177090u: goto label_177090;
        case 0x177094u: goto label_177094;
        case 0x177098u: goto label_177098;
        case 0x17709cu: goto label_17709c;
        case 0x1770a0u: goto label_1770a0;
        case 0x1770a4u: goto label_1770a4;
        case 0x1770a8u: goto label_1770a8;
        case 0x1770acu: goto label_1770ac;
        case 0x1770b0u: goto label_1770b0;
        case 0x1770b4u: goto label_1770b4;
        case 0x1770b8u: goto label_1770b8;
        case 0x1770bcu: goto label_1770bc;
        case 0x1770c0u: goto label_1770c0;
        case 0x1770c4u: goto label_1770c4;
        case 0x1770c8u: goto label_1770c8;
        case 0x1770ccu: goto label_1770cc;
        case 0x1770d0u: goto label_1770d0;
        case 0x1770d4u: goto label_1770d4;
        case 0x1770d8u: goto label_1770d8;
        case 0x1770dcu: goto label_1770dc;
        case 0x1770e0u: goto label_1770e0;
        case 0x1770e4u: goto label_1770e4;
        case 0x1770e8u: goto label_1770e8;
        case 0x1770ecu: goto label_1770ec;
        case 0x1770f0u: goto label_1770f0;
        case 0x1770f4u: goto label_1770f4;
        case 0x1770f8u: goto label_1770f8;
        case 0x1770fcu: goto label_1770fc;
        case 0x177100u: goto label_177100;
        case 0x177104u: goto label_177104;
        case 0x177108u: goto label_177108;
        case 0x17710cu: goto label_17710c;
        case 0x177110u: goto label_177110;
        case 0x177114u: goto label_177114;
        case 0x177118u: goto label_177118;
        case 0x17711cu: goto label_17711c;
        case 0x177120u: goto label_177120;
        case 0x177124u: goto label_177124;
        case 0x177128u: goto label_177128;
        case 0x17712cu: goto label_17712c;
        case 0x177130u: goto label_177130;
        case 0x177134u: goto label_177134;
        case 0x177138u: goto label_177138;
        case 0x17713cu: goto label_17713c;
        case 0x177140u: goto label_177140;
        case 0x177144u: goto label_177144;
        case 0x177148u: goto label_177148;
        case 0x17714cu: goto label_17714c;
        case 0x177150u: goto label_177150;
        case 0x177154u: goto label_177154;
        case 0x177158u: goto label_177158;
        case 0x17715cu: goto label_17715c;
        case 0x177160u: goto label_177160;
        case 0x177164u: goto label_177164;
        case 0x177168u: goto label_177168;
        case 0x17716cu: goto label_17716c;
        case 0x177170u: goto label_177170;
        case 0x177174u: goto label_177174;
        case 0x177178u: goto label_177178;
        case 0x17717cu: goto label_17717c;
        case 0x177180u: goto label_177180;
        case 0x177184u: goto label_177184;
        case 0x177188u: goto label_177188;
        case 0x17718cu: goto label_17718c;
        case 0x177190u: goto label_177190;
        case 0x177194u: goto label_177194;
        case 0x177198u: goto label_177198;
        case 0x17719cu: goto label_17719c;
        case 0x1771a0u: goto label_1771a0;
        default: break;
    }

    ctx->pc = 0x176fd0u;

label_176fd0:
    // 0x176fd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x176fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_176fd4:
    // 0x176fd4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x176fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
label_176fd8:
    // 0x176fd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x176fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_176fdc:
    // 0x176fdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x176fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_176fe0:
    // 0x176fe0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_176fe4:
    // 0x176fe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_176fe8:
    // 0x176fe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_176fec:
    // 0x176fec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176ff0:
    // 0x176ff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176ff4:
    // 0x176ff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_176ff8:
    // 0x176ff8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x176ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_176ffc:
    // 0x176ffc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_177000:
    // 0x177000: 0x9023160c  lbu         $v1, 0x160C($at)
    ctx->pc = 0x177000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5644)));
label_177004:
    // 0x177004: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x177004u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_177008:
    // 0x177008: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x177008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_17700c:
    // 0x17700c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_177010:
    // 0x177010: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x177010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
label_177014:
    // 0x177014: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
label_177018:
    // 0x177018: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_17701c:
    if (ctx->pc == 0x17701Cu) {
        ctx->pc = 0x177020u;
        goto label_177020;
    }
    ctx->pc = 0x177018u;
    {
        const bool branch_taken_0x177018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177018) {
            ctx->pc = 0x177174u;
            goto label_177174;
        }
    }
    ctx->pc = 0x177020u;
label_177020:
    // 0x177020: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_177024:
    if (ctx->pc == 0x177024u) {
        ctx->pc = 0x177028u;
        goto label_177028;
    }
    ctx->pc = 0x177020u;
    {
        const bool branch_taken_0x177020 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x177020) {
            ctx->pc = 0x177048u;
            goto label_177048;
        }
    }
    ctx->pc = 0x177028u;
label_177028:
    // 0x177028: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x177028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17702c:
    // 0x17702c: 0x8c24fdf0  lw          $a0, -0x210($at)
    ctx->pc = 0x17702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966768)));
label_177030:
    // 0x177030: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x177030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_177034:
    // 0x177034: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x177034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_177038:
    // 0x177038: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_17703c:
    // 0x17703c: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_177040:
    // 0x177040: 0x10000005  b           . + 4 + (0x5 << 2)
label_177044:
    if (ctx->pc == 0x177044u) {
        ctx->pc = 0x177048u;
        goto label_177048;
    }
    ctx->pc = 0x177040u;
    {
        const bool branch_taken_0x177040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177040) {
            ctx->pc = 0x177058u;
            goto label_177058;
        }
    }
    ctx->pc = 0x177048u;
label_177048:
    // 0x177048: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x177048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17704c:
    // 0x17704c: 0x8c24fdf0  lw          $a0, -0x210($at)
    ctx->pc = 0x17704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966768)));
label_177050:
    // 0x177050: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x177050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_177054:
    // 0x177054: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x177054u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_177058:
    // 0x177058: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x177058u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_17705c:
    // 0x17705c: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x17705cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_177060:
    // 0x177060: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x177060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_177064:
    // 0x177064: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x177064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_177068:
    // 0x177068: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17706c:
    // 0x17706c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_177070:
    // 0x177070: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x177070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_177074:
    // 0x177074: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_177078:
    if (ctx->pc == 0x177078u) {
        ctx->pc = 0x17707Cu;
        goto label_17707c;
    }
    ctx->pc = 0x177074u;
    {
        const bool branch_taken_0x177074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177074) {
            ctx->pc = 0x177138u;
            goto label_177138;
        }
    }
    ctx->pc = 0x17707Cu;
label_17707c:
    // 0x17707c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x17707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_177080:
    // 0x177080: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x177080u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_177084:
    // 0x177084: 0x1412c2  srl         $v0, $s4, 11
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 11));
label_177088:
    // 0x177088: 0x30567fff  andi        $s6, $v0, 0x7FFF
    ctx->pc = 0x177088u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_17708c:
    // 0x17708c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x17708cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_177090:
    // 0x177090: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_177094:
    // 0x177094: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x177094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_177098:
    // 0x177098: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x177098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
label_17709c:
    // 0x17709c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x17709cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1770a0:
    // 0x1770a0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1770a4:
    if (ctx->pc == 0x1770A4u) {
        ctx->pc = 0x1770A8u;
        goto label_1770a8;
    }
    ctx->pc = 0x1770A0u;
    {
        const bool branch_taken_0x1770a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770a0) {
            ctx->pc = 0x177100u;
            goto label_177100;
        }
    }
    ctx->pc = 0x1770A8u;
label_1770a8:
    // 0x1770a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1770a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1770ac:
    // 0x1770ac: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1770acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1770b0:
    // 0x1770b0: 0xc05dc6c  jal         func_1771B0
label_1770b4:
    if (ctx->pc == 0x1770B4u) {
        ctx->pc = 0x1770B8u;
        goto label_1770b8;
    }
    ctx->pc = 0x1770B0u;
    SET_GPR_U32(ctx, 31, 0x1770B8u);
    ctx->pc = 0x1771B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771B0u, 0x1770B0u, 0x1770B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770B8u;
label_1770b8:
    // 0x1770b8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_1770bc:
    if (ctx->pc == 0x1770BCu) {
        ctx->pc = 0x1770C0u;
        goto label_1770c0;
    }
    ctx->pc = 0x1770B8u;
    {
        const bool branch_taken_0x1770b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770b8) {
            ctx->pc = 0x1770E0u;
            goto label_1770e0;
        }
    }
    ctx->pc = 0x1770C0u;
label_1770c0:
    // 0x1770c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1770c4:
    // 0x1770c4: 0x8c23fdf0  lw          $v1, -0x210($at)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966768)));
label_1770c8:
    // 0x1770c8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_1770cc:
    // 0x1770cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1770ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1770d0:
    // 0x1770d0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1770d4:
    // 0x1770d4: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1770d8:
    // 0x1770d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1770dc:
    if (ctx->pc == 0x1770DCu) {
        ctx->pc = 0x1770E0u;
        goto label_1770e0;
    }
    ctx->pc = 0x1770D8u;
    {
        const bool branch_taken_0x1770d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770d8) {
            ctx->pc = 0x1770F0u;
            goto label_1770f0;
        }
    }
    ctx->pc = 0x1770E0u;
label_1770e0:
    // 0x1770e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1770e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1770e4:
    // 0x1770e4: 0x8c23fdf0  lw          $v1, -0x210($at)
    ctx->pc = 0x1770e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966768)));
label_1770e8:
    // 0x1770e8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1770e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_1770ec:
    // 0x1770ec: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x1770ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1770f0:
    // 0x1770f0: 0x72a09628  paddub      $s2, $s5, $zero
    ctx->pc = 0x1770f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1770f4:
    // 0x1770f4: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_1770f8:
    // 0x1770f8: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x1770f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1770fc:
    // 0x1770fc: 0x0  nop
    ctx->pc = 0x1770fcu;
    // NOP
label_177100:
    // 0x177100: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_177104:
    // 0x177104: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x177104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_177108:
    // 0x177108: 0x141682  srl         $v0, $s4, 26
    ctx->pc = 0x177108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 26));
label_17710c:
    // 0x17710c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_177110:
    // 0x177110: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x177110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_177114:
    // 0x177114: 0x24425820  addiu       $v0, $v0, 0x5820
    ctx->pc = 0x177114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22560));
label_177118:
    // 0x177118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17711c:
    // 0x17711c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177120:
    // 0x177120: 0x40f809  jalr        $v0
label_177124:
    if (ctx->pc == 0x177124u) {
        ctx->pc = 0x177128u;
        goto label_177128;
    }
    ctx->pc = 0x177120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177120u, 0x177128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177128u;
label_177128:
    // 0x177128: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x177128u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_17712c:
    // 0x17712c: 0x10807c  dsll32      $s0, $s0, 1
    ctx->pc = 0x17712cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 1));
label_177130:
    // 0x177130: 0x10807e  dsrl32      $s0, $s0, 1
    ctx->pc = 0x177130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 1));
label_177134:
    // 0x177134: 0x0  nop
    ctx->pc = 0x177134u;
    // NOP
label_177138:
    // 0x177138: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_17713c:
    if (ctx->pc == 0x17713Cu) {
        ctx->pc = 0x177140u;
        goto label_177140;
    }
    ctx->pc = 0x177138u;
    {
        const bool branch_taken_0x177138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177138) {
            ctx->pc = 0x17714Cu;
            goto label_17714c;
        }
    }
    ctx->pc = 0x177140u;
label_177140:
    // 0x177140: 0xafb00098  sw          $s0, 0x98($sp)
    ctx->pc = 0x177140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
label_177144:
    // 0x177144: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_177148:
    if (ctx->pc == 0x177148u) {
        ctx->pc = 0x17714Cu;
        goto label_17714c;
    }
    ctx->pc = 0x177144u;
    {
        const bool branch_taken_0x177144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177144) {
            ctx->pc = 0x177064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177064;
        }
    }
    ctx->pc = 0x17714Cu;
label_17714c:
    // 0x17714c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x17714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_177150:
    // 0x177150: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
label_177154:
    if (ctx->pc == 0x177154u) {
        ctx->pc = 0x177158u;
        goto label_177158;
    }
    ctx->pc = 0x177150u;
    {
        const bool branch_taken_0x177150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x177150) {
            ctx->pc = 0x177168u;
            goto label_177168;
        }
    }
    ctx->pc = 0x177158u;
label_177158:
    // 0x177158: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x177158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_17715c:
    // 0x17715c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x17715cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_177160:
    // 0x177160: 0xc05dc6c  jal         func_1771B0
label_177164:
    if (ctx->pc == 0x177164u) {
        ctx->pc = 0x177168u;
        goto label_177168;
    }
    ctx->pc = 0x177160u;
    SET_GPR_U32(ctx, 31, 0x177168u);
    ctx->pc = 0x1771B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771B0u, 0x177160u, 0x177168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177168u;
label_177168:
    // 0x177168: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x177168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_17716c:
    // 0x17716c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_177170:
    // 0x177170: 0xa023160c  sb          $v1, 0x160C($at)
    ctx->pc = 0x177170u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 5644), (uint8_t)GPR_U32(ctx, 3));
label_177174:
    // 0x177174: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x177174u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_177178:
    // 0x177178: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177178u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17717c:
    // 0x17717c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17717cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177180:
    // 0x177180: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177184:
    // 0x177184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177188:
    // 0x177188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17718c:
    // 0x17718c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17718cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177190:
    // 0x177190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177194:
    // 0x177194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_177198:
    // 0x177198: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x177198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17719c:
    // 0x17719c: 0x3e00008  jr          $ra
label_1771a0:
    if (ctx->pc == 0x1771A0u) {
        ctx->pc = 0x1771A4u;
        goto label_fallthrough_0x17719c;
    }
    ctx->pc = 0x17719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17719c:
    ctx->pc = 0x1771A4u;
}
