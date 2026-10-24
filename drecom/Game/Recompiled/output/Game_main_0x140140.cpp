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

// Function: Game_main
// Address: 0x140140 - 0x1402ec
void Game_main_0x140140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_main_0x140140");
#endif

    switch (ctx->pc) {
        case 0x140140u: goto label_140140;
        case 0x140144u: goto label_140144;
        case 0x140148u: goto label_140148;
        case 0x14014cu: goto label_14014c;
        case 0x140150u: goto label_140150;
        case 0x140154u: goto label_140154;
        case 0x140158u: goto label_140158;
        case 0x14015cu: goto label_14015c;
        case 0x140160u: goto label_140160;
        case 0x140164u: goto label_140164;
        case 0x140168u: goto label_140168;
        case 0x14016cu: goto label_14016c;
        case 0x140170u: goto label_140170;
        case 0x140174u: goto label_140174;
        case 0x140178u: goto label_140178;
        case 0x14017cu: goto label_14017c;
        case 0x140180u: goto label_140180;
        case 0x140184u: goto label_140184;
        case 0x140188u: goto label_140188;
        case 0x14018cu: goto label_14018c;
        case 0x140190u: goto label_140190;
        case 0x140194u: goto label_140194;
        case 0x140198u: goto label_140198;
        case 0x14019cu: goto label_14019c;
        case 0x1401a0u: goto label_1401a0;
        case 0x1401a4u: goto label_1401a4;
        case 0x1401a8u: goto label_1401a8;
        case 0x1401acu: goto label_1401ac;
        case 0x1401b0u: goto label_1401b0;
        case 0x1401b4u: goto label_1401b4;
        case 0x1401b8u: goto label_1401b8;
        case 0x1401bcu: goto label_1401bc;
        case 0x1401c0u: goto label_1401c0;
        case 0x1401c4u: goto label_1401c4;
        case 0x1401c8u: goto label_1401c8;
        case 0x1401ccu: goto label_1401cc;
        case 0x1401d0u: goto label_1401d0;
        case 0x1401d4u: goto label_1401d4;
        case 0x1401d8u: goto label_1401d8;
        case 0x1401dcu: goto label_1401dc;
        case 0x1401e0u: goto label_1401e0;
        case 0x1401e4u: goto label_1401e4;
        case 0x1401e8u: goto label_1401e8;
        case 0x1401ecu: goto label_1401ec;
        case 0x1401f0u: goto label_1401f0;
        case 0x1401f4u: goto label_1401f4;
        case 0x1401f8u: goto label_1401f8;
        case 0x1401fcu: goto label_1401fc;
        case 0x140200u: goto label_140200;
        case 0x140204u: goto label_140204;
        case 0x140208u: goto label_140208;
        case 0x14020cu: goto label_14020c;
        case 0x140210u: goto label_140210;
        case 0x140214u: goto label_140214;
        case 0x140218u: goto label_140218;
        case 0x14021cu: goto label_14021c;
        case 0x140220u: goto label_140220;
        case 0x140224u: goto label_140224;
        case 0x140228u: goto label_140228;
        case 0x14022cu: goto label_14022c;
        case 0x140230u: goto label_140230;
        case 0x140234u: goto label_140234;
        case 0x140238u: goto label_140238;
        case 0x14023cu: goto label_14023c;
        case 0x140240u: goto label_140240;
        case 0x140244u: goto label_140244;
        case 0x140248u: goto label_140248;
        case 0x14024cu: goto label_14024c;
        case 0x140250u: goto label_140250;
        case 0x140254u: goto label_140254;
        case 0x140258u: goto label_140258;
        case 0x14025cu: goto label_14025c;
        case 0x140260u: goto label_140260;
        case 0x140264u: goto label_140264;
        case 0x140268u: goto label_140268;
        case 0x14026cu: goto label_14026c;
        case 0x140270u: goto label_140270;
        case 0x140274u: goto label_140274;
        case 0x140278u: goto label_140278;
        case 0x14027cu: goto label_14027c;
        case 0x140280u: goto label_140280;
        case 0x140284u: goto label_140284;
        case 0x140288u: goto label_140288;
        case 0x14028cu: goto label_14028c;
        case 0x140290u: goto label_140290;
        case 0x140294u: goto label_140294;
        case 0x140298u: goto label_140298;
        case 0x14029cu: goto label_14029c;
        case 0x1402a0u: goto label_1402a0;
        case 0x1402a4u: goto label_1402a4;
        case 0x1402a8u: goto label_1402a8;
        case 0x1402acu: goto label_1402ac;
        case 0x1402b0u: goto label_1402b0;
        case 0x1402b4u: goto label_1402b4;
        case 0x1402b8u: goto label_1402b8;
        case 0x1402bcu: goto label_1402bc;
        case 0x1402c0u: goto label_1402c0;
        case 0x1402c4u: goto label_1402c4;
        case 0x1402c8u: goto label_1402c8;
        case 0x1402ccu: goto label_1402cc;
        case 0x1402d0u: goto label_1402d0;
        case 0x1402d4u: goto label_1402d4;
        case 0x1402d8u: goto label_1402d8;
        case 0x1402dcu: goto label_1402dc;
        case 0x1402e0u: goto label_1402e0;
        case 0x1402e4u: goto label_1402e4;
        case 0x1402e8u: goto label_1402e8;
        default: break;
    }

    ctx->pc = 0x140140u;

label_140140:
    // 0x140140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_140144:
    // 0x140144: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x140144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_140148:
    // 0x140148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14014c:
    // 0x14014c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_140150:
    // 0x140150: 0x2450fe10  addiu       $s0, $v0, -0x1F0
    ctx->pc = 0x140150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_140154:
    // 0x140154: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x140154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_140158:
    // 0x140158: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x140158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_14015c:
    // 0x14015c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x14015cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_140160:
    // 0x140160: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x140160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_140164:
    // 0x140164: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x140164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_140168:
    // 0x140168: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x140168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_14016c:
    // 0x14016c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x14016cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
label_140170:
    // 0x140170: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_140174:
    // 0x140174: 0xac20fdf8  sw          $zero, -0x208($at)
    ctx->pc = 0x140174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966776), GPR_U32(ctx, 0));
label_140178:
    // 0x140178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14017c:
    // 0x14017c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x14017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_140180:
    // 0x140180: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x140180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_140184:
    // 0x140184: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_140188:
    // 0x140188: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14018c:
    // 0x14018c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x14018cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 2));
label_140190:
    // 0x140190: 0x10000049  b           . + 4 + (0x49 << 2)
label_140194:
    if (ctx->pc == 0x140194u) {
        ctx->pc = 0x140198u;
        goto label_140198;
    }
    ctx->pc = 0x140190u;
    {
        const bool branch_taken_0x140190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140190) {
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x140198u;
label_140198:
    // 0x140198: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14019c:
    // 0x14019c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x14019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_1401a0:
    // 0x1401a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1401a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1401a4:
    // 0x1401a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1401a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1401a8:
    // 0x1401a8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1401ac:
    if (ctx->pc == 0x1401ACu) {
        ctx->pc = 0x1401B0u;
        goto label_1401b0;
    }
    ctx->pc = 0x1401A8u;
    {
        const bool branch_taken_0x1401a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1401a8) {
            ctx->pc = 0x140250u;
            goto label_140250;
        }
    }
    ctx->pc = 0x1401B0u;
label_1401b0:
    // 0x1401b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1401b4:
    // 0x1401b4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1401b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_1401b8:
    // 0x1401b8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1401b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1401bc:
    // 0x1401bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1401bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1401c0:
    // 0x1401c0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1401c4:
    if (ctx->pc == 0x1401C4u) {
        ctx->pc = 0x1401C8u;
        goto label_1401c8;
    }
    ctx->pc = 0x1401C0u;
    {
        const bool branch_taken_0x1401c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401c0) {
            ctx->pc = 0x140250u;
            goto label_140250;
        }
    }
    ctx->pc = 0x1401C8u;
label_1401c8:
    // 0x1401c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1401cc:
    // 0x1401cc: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1401ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_1401d0:
    // 0x1401d0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1401d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1401d4:
    // 0x1401d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1401d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1401d8:
    // 0x1401d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1401dc:
    if (ctx->pc == 0x1401DCu) {
        ctx->pc = 0x1401E0u;
        goto label_1401e0;
    }
    ctx->pc = 0x1401D8u;
    {
        const bool branch_taken_0x1401d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401d8) {
            ctx->pc = 0x140250u;
            goto label_140250;
        }
    }
    ctx->pc = 0x1401E0u;
label_1401e0:
    // 0x1401e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1401e4:
    // 0x1401e4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1401e8:
    // 0x1401e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1401e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1401ec:
    // 0x1401ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1401f0:
    if (ctx->pc == 0x1401F0u) {
        ctx->pc = 0x1401F4u;
        goto label_1401f4;
    }
    ctx->pc = 0x1401ECu;
    {
        const bool branch_taken_0x1401ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401ec) {
            ctx->pc = 0x140250u;
            goto label_140250;
        }
    }
    ctx->pc = 0x1401F4u;
label_1401f4:
    // 0x1401f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1401f8:
    // 0x1401f8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1401f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1401fc:
    // 0x1401fc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1401fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_140200:
    // 0x140200: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_140204:
    if (ctx->pc == 0x140204u) {
        ctx->pc = 0x140208u;
        goto label_140208;
    }
    ctx->pc = 0x140200u;
    {
        const bool branch_taken_0x140200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140200) {
            ctx->pc = 0x140250u;
            goto label_140250;
        }
    }
    ctx->pc = 0x140208u;
label_140208:
    // 0x140208: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14020c:
    // 0x14020c: 0x9022fe14  lbu         $v0, -0x1EC($at)
    ctx->pc = 0x14020cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966804)));
label_140210:
    // 0x140210: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140214:
    // 0x140214: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_140218:
    if (ctx->pc == 0x140218u) {
        ctx->pc = 0x14021Cu;
        goto label_14021c;
    }
    ctx->pc = 0x140214u;
    {
        const bool branch_taken_0x140214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140214) {
            ctx->pc = 0x140250u;
            goto label_140250;
        }
    }
    ctx->pc = 0x14021Cu;
label_14021c:
    // 0x14021c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_140220:
    // 0x140220: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_140224:
    // 0x140224: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x140224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
label_140228:
    // 0x140228: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x140228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14022c:
    // 0x14022c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_140230:
    // 0x140230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_140234:
    // 0x140234: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x140234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 2));
label_140238:
    // 0x140238: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x140238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_14023c:
    // 0x14023c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140240:
    // 0x140240: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
label_140244:
    // 0x140244: 0x24450ea0  addiu       $a1, $v0, 0xEA0
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
label_140248:
    // 0x140248: 0xc067478  jal         func_19D1E0
label_14024c:
    if (ctx->pc == 0x14024Cu) {
        ctx->pc = 0x140250u;
        goto label_140250;
    }
    ctx->pc = 0x140248u;
    SET_GPR_U32(ctx, 31, 0x140250u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x140248u, 0x140250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140250u;
label_140250:
    // 0x140250: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x140250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_140254:
    // 0x140254: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x140254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_140258:
    // 0x140258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14025c:
    // 0x14025c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14025cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_140260:
    // 0x140260: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_140264:
    // 0x140264: 0x24425160  addiu       $v0, $v0, 0x5160
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20832));
label_140268:
    // 0x140268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14026c:
    // 0x14026c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140270:
    // 0x140270: 0x40f809  jalr        $v0
label_140274:
    if (ctx->pc == 0x140274u) {
        ctx->pc = 0x140278u;
        goto label_140278;
    }
    ctx->pc = 0x140270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140278u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140270u, 0x140278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140278u;
label_140278:
    // 0x140278: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14027c:
    // 0x14027c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_140280:
    // 0x140280: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_140284:
    // 0x140284: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140288:
    // 0x140288: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_14028c:
    if (ctx->pc == 0x14028Cu) {
        ctx->pc = 0x140290u;
        goto label_140290;
    }
    ctx->pc = 0x140288u;
    {
        const bool branch_taken_0x140288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140288) {
            ctx->pc = 0x1402A8u;
            goto label_1402a8;
        }
    }
    ctx->pc = 0x140290u;
label_140290:
    // 0x140290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_140294:
    // 0x140294: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x140294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_140298:
    // 0x140298: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x140298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14029c:
    // 0x14029c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1402a0:
    // 0x1402a0: 0xe4209228  swc1        $f0, -0x6DD8($at)
    ctx->pc = 0x1402a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939176), bits); }
label_1402a4:
    // 0x1402a4: 0x0  nop
    ctx->pc = 0x1402a4u;
    // NOP
label_1402a8:
    // 0x1402a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1402ac:
    // 0x1402ac: 0xc06750c  jal         func_19D430
label_1402b0:
    if (ctx->pc == 0x1402B0u) {
        ctx->pc = 0x1402B4u;
        goto label_1402b4;
    }
    ctx->pc = 0x1402ACu;
    SET_GPR_U32(ctx, 31, 0x1402B4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1402ACu, 0x1402B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402B4u;
label_1402b4:
    // 0x1402b4: 0x0  nop
    ctx->pc = 0x1402b4u;
    // NOP
label_1402b8:
    // 0x1402b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1402b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1402bc:
    // 0x1402bc: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1402bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_1402c0:
    // 0x1402c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1402c4:
    // 0x1402c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1402c8:
    // 0x1402c8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_1402cc:
    if (ctx->pc == 0x1402CCu) {
        ctx->pc = 0x1402D0u;
        goto label_1402d0;
    }
    ctx->pc = 0x1402C8u;
    {
        const bool branch_taken_0x1402c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1402c8) {
            ctx->pc = 0x140198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140198;
        }
    }
    ctx->pc = 0x1402D0u;
label_1402d0:
    // 0x1402d0: 0xc0674dc  jal         func_19D370
label_1402d4:
    if (ctx->pc == 0x1402D4u) {
        ctx->pc = 0x1402D8u;
        goto label_1402d8;
    }
    ctx->pc = 0x1402D0u;
    SET_GPR_U32(ctx, 31, 0x1402D8u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1402D0u, 0x1402D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402D8u;
label_1402d8:
    // 0x1402d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1402d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1402dc:
    // 0x1402dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1402dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1402e0:
    // 0x1402e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1402e4:
    // 0x1402e4: 0x3e00008  jr          $ra
label_1402e8:
    if (ctx->pc == 0x1402E8u) {
        ctx->pc = 0x1402ECu;
        goto label_fallthrough_0x1402e4;
    }
    ctx->pc = 0x1402E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1402E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1402e4:
    ctx->pc = 0x1402ECu;
}
