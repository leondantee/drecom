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

// Function: Om_scr_move
// Address: 0x265320 - 0x2654b4
void Om_scr_move_0x265320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_scr_move_0x265320");
#endif

    switch (ctx->pc) {
        case 0x265320u: goto label_265320;
        case 0x265324u: goto label_265324;
        case 0x265328u: goto label_265328;
        case 0x26532cu: goto label_26532c;
        case 0x265330u: goto label_265330;
        case 0x265334u: goto label_265334;
        case 0x265338u: goto label_265338;
        case 0x26533cu: goto label_26533c;
        case 0x265340u: goto label_265340;
        case 0x265344u: goto label_265344;
        case 0x265348u: goto label_265348;
        case 0x26534cu: goto label_26534c;
        case 0x265350u: goto label_265350;
        case 0x265354u: goto label_265354;
        case 0x265358u: goto label_265358;
        case 0x26535cu: goto label_26535c;
        case 0x265360u: goto label_265360;
        case 0x265364u: goto label_265364;
        case 0x265368u: goto label_265368;
        case 0x26536cu: goto label_26536c;
        case 0x265370u: goto label_265370;
        case 0x265374u: goto label_265374;
        case 0x265378u: goto label_265378;
        case 0x26537cu: goto label_26537c;
        case 0x265380u: goto label_265380;
        case 0x265384u: goto label_265384;
        case 0x265388u: goto label_265388;
        case 0x26538cu: goto label_26538c;
        case 0x265390u: goto label_265390;
        case 0x265394u: goto label_265394;
        case 0x265398u: goto label_265398;
        case 0x26539cu: goto label_26539c;
        case 0x2653a0u: goto label_2653a0;
        case 0x2653a4u: goto label_2653a4;
        case 0x2653a8u: goto label_2653a8;
        case 0x2653acu: goto label_2653ac;
        case 0x2653b0u: goto label_2653b0;
        case 0x2653b4u: goto label_2653b4;
        case 0x2653b8u: goto label_2653b8;
        case 0x2653bcu: goto label_2653bc;
        case 0x2653c0u: goto label_2653c0;
        case 0x2653c4u: goto label_2653c4;
        case 0x2653c8u: goto label_2653c8;
        case 0x2653ccu: goto label_2653cc;
        case 0x2653d0u: goto label_2653d0;
        case 0x2653d4u: goto label_2653d4;
        case 0x2653d8u: goto label_2653d8;
        case 0x2653dcu: goto label_2653dc;
        case 0x2653e0u: goto label_2653e0;
        case 0x2653e4u: goto label_2653e4;
        case 0x2653e8u: goto label_2653e8;
        case 0x2653ecu: goto label_2653ec;
        case 0x2653f0u: goto label_2653f0;
        case 0x2653f4u: goto label_2653f4;
        case 0x2653f8u: goto label_2653f8;
        case 0x2653fcu: goto label_2653fc;
        case 0x265400u: goto label_265400;
        case 0x265404u: goto label_265404;
        case 0x265408u: goto label_265408;
        case 0x26540cu: goto label_26540c;
        case 0x265410u: goto label_265410;
        case 0x265414u: goto label_265414;
        case 0x265418u: goto label_265418;
        case 0x26541cu: goto label_26541c;
        case 0x265420u: goto label_265420;
        case 0x265424u: goto label_265424;
        case 0x265428u: goto label_265428;
        case 0x26542cu: goto label_26542c;
        case 0x265430u: goto label_265430;
        case 0x265434u: goto label_265434;
        case 0x265438u: goto label_265438;
        case 0x26543cu: goto label_26543c;
        case 0x265440u: goto label_265440;
        case 0x265444u: goto label_265444;
        case 0x265448u: goto label_265448;
        case 0x26544cu: goto label_26544c;
        case 0x265450u: goto label_265450;
        case 0x265454u: goto label_265454;
        case 0x265458u: goto label_265458;
        case 0x26545cu: goto label_26545c;
        case 0x265460u: goto label_265460;
        case 0x265464u: goto label_265464;
        case 0x265468u: goto label_265468;
        case 0x26546cu: goto label_26546c;
        case 0x265470u: goto label_265470;
        case 0x265474u: goto label_265474;
        case 0x265478u: goto label_265478;
        case 0x26547cu: goto label_26547c;
        case 0x265480u: goto label_265480;
        case 0x265484u: goto label_265484;
        case 0x265488u: goto label_265488;
        case 0x26548cu: goto label_26548c;
        case 0x265490u: goto label_265490;
        case 0x265494u: goto label_265494;
        case 0x265498u: goto label_265498;
        case 0x26549cu: goto label_26549c;
        case 0x2654a0u: goto label_2654a0;
        case 0x2654a4u: goto label_2654a4;
        case 0x2654a8u: goto label_2654a8;
        case 0x2654acu: goto label_2654ac;
        case 0x2654b0u: goto label_2654b0;
        default: break;
    }

    ctx->pc = 0x265320u;

label_265320:
    // 0x265320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_265324:
    // 0x265324: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x265324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_265328:
    // 0x265328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26532c:
    // 0x26532c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_265330:
    // 0x265330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_265334:
    // 0x265334: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x265334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_265338:
    // 0x265338: 0x2471f9e0  addiu       $s1, $v1, -0x620
    ctx->pc = 0x265338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965728));
label_26533c:
    // 0x26533c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_265340:
    // 0x265340: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x265340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960720)));
label_265344:
    // 0x265344: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_265348:
    // 0x265348: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_26534c:
    if (ctx->pc == 0x26534Cu) {
        ctx->pc = 0x265350u;
        goto label_265350;
    }
    ctx->pc = 0x265348u;
    {
        const bool branch_taken_0x265348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265348) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265350u;
label_265350:
    // 0x265350: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x265350u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_265354:
    // 0x265354: 0x1000004a  b           . + 4 + (0x4A << 2)
label_265358:
    if (ctx->pc == 0x265358u) {
        ctx->pc = 0x26535Cu;
        goto label_26535c;
    }
    ctx->pc = 0x265354u;
    {
        const bool branch_taken_0x265354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265354) {
            ctx->pc = 0x265480u;
            goto label_265480;
        }
    }
    ctx->pc = 0x26535Cu;
label_26535c:
    // 0x26535c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x26535cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_265360:
    // 0x265360: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_265364:
    // 0x265364: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x265364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_265368:
    // 0x265368: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_26536c:
    if (ctx->pc == 0x26536Cu) {
        ctx->pc = 0x265370u;
        goto label_265370;
    }
    ctx->pc = 0x265368u;
    {
        const bool branch_taken_0x265368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265368) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x265370u;
label_265370:
    // 0x265370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_265374:
    // 0x265374: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x265374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_265378:
    // 0x265378: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x265378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_26537c:
    // 0x26537c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26537cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_265380:
    // 0x265380: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_265384:
    if (ctx->pc == 0x265384u) {
        ctx->pc = 0x265388u;
        goto label_265388;
    }
    ctx->pc = 0x265380u;
    {
        const bool branch_taken_0x265380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265380) {
            ctx->pc = 0x26545Cu;
            goto label_26545c;
        }
    }
    ctx->pc = 0x265388u;
label_265388:
    // 0x265388: 0x8e031338  lw          $v1, 0x1338($s0)
    ctx->pc = 0x265388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_26538c:
    // 0x26538c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_265390:
    // 0x265390: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_265394:
    if (ctx->pc == 0x265394u) {
        ctx->pc = 0x265398u;
        goto label_265398;
    }
    ctx->pc = 0x265390u;
    {
        const bool branch_taken_0x265390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265390) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x265398u;
label_265398:
    // 0x265398: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x265398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_26539c:
    // 0x26539c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x26539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2653a0:
    // 0x2653a0: 0xc040c9e  jal         func_103278
label_2653a4:
    if (ctx->pc == 0x2653A4u) {
        ctx->pc = 0x2653A8u;
        goto label_2653a8;
    }
    ctx->pc = 0x2653A0u;
    SET_GPR_U32(ctx, 31, 0x2653A8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2653A8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2653A8u) { return; }
    ctx->pc = 0x2653A8u;
label_2653a8:
    // 0x2653a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2653a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2653ac:
    // 0x2653ac: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x2653acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_2653b0:
    // 0x2653b0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2653b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_2653b4:
    // 0x2653b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2653b8:
    // 0x2653b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2653b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2653bc:
    // 0x2653bc: 0x2442b8a0  addiu       $v0, $v0, -0x4760
    ctx->pc = 0x2653bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
label_2653c0:
    // 0x2653c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2653c4:
    // 0x2653c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2653c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2653c8:
    // 0x2653c8: 0x40f809  jalr        $v0
label_2653cc:
    if (ctx->pc == 0x2653CCu) {
        ctx->pc = 0x2653D0u;
        goto label_2653d0;
    }
    ctx->pc = 0x2653C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2653D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2653C8u, 0x2653D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2653D0u;
label_2653d0:
    // 0x2653d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2653d4:
    // 0x2653d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2653d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2653d8:
    // 0x2653d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2653dc:
    if (ctx->pc == 0x2653DCu) {
        ctx->pc = 0x2653E0u;
        goto label_2653e0;
    }
    ctx->pc = 0x2653D8u;
    {
        const bool branch_taken_0x2653d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653d8) {
            ctx->pc = 0x2653F0u;
            goto label_2653f0;
        }
    }
    ctx->pc = 0x2653E0u;
label_2653e0:
    // 0x2653e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2653e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2653e4:
    // 0x2653e4: 0xc097a68  jal         func_25E9A0
label_2653e8:
    if (ctx->pc == 0x2653E8u) {
        ctx->pc = 0x2653ECu;
        goto label_2653ec;
    }
    ctx->pc = 0x2653E4u;
    SET_GPR_U32(ctx, 31, 0x2653ECu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2653E4u, 0x2653ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653ECu;
label_2653ec:
    // 0x2653ec: 0x0  nop
    ctx->pc = 0x2653ecu;
    // NOP
label_2653f0:
    // 0x2653f0: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x2653f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_2653f4:
    // 0x2653f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2653f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2653f8:
    // 0x2653f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2653f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2653fc:
    // 0x2653fc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_265400:
    if (ctx->pc == 0x265400u) {
        ctx->pc = 0x265404u;
        goto label_265404;
    }
    ctx->pc = 0x2653FCu;
    {
        const bool branch_taken_0x2653fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653fc) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x265404u;
label_265404:
    // 0x265404: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x265404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_265408:
    // 0x265408: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x265408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26540c:
    // 0x26540c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x26540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_265410:
    // 0x265410: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_265414:
    if (ctx->pc == 0x265414u) {
        ctx->pc = 0x265418u;
        goto label_265418;
    }
    ctx->pc = 0x265410u;
    {
        const bool branch_taken_0x265410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265410) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x265418u;
label_265418:
    // 0x265418: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x265418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26541c:
    // 0x26541c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26541cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_265420:
    // 0x265420: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x265420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_265424:
    // 0x265424: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x265424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_265428:
    // 0x265428: 0x832806  srlv        $a1, $v1, $a0
    ctx->pc = 0x265428u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_26542c:
    // 0x26542c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x26542cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_265430:
    // 0x265430: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_265434:
    // 0x265434: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_265438:
    // 0x265438: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26543c:
    // 0x26543c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_265440:
    // 0x265440: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x265440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_265444:
    // 0x265444: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x265444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_265448:
    // 0x265448: 0x8c831a84  lw          $v1, 0x1A84($a0)
    ctx->pc = 0x265448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6788)));
label_26544c:
    // 0x26544c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x26544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_265450:
    // 0x265450: 0xac831a84  sw          $v1, 0x1A84($a0)
    ctx->pc = 0x265450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6788), GPR_U32(ctx, 3));
label_265454:
    // 0x265454: 0x10000008  b           . + 4 + (0x8 << 2)
label_265458:
    if (ctx->pc == 0x265458u) {
        ctx->pc = 0x26545Cu;
        goto label_26545c;
    }
    ctx->pc = 0x265454u;
    {
        const bool branch_taken_0x265454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265454) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x26545Cu;
label_26545c:
    // 0x26545c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_265460:
    // 0x265460: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x265460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_265464:
    // 0x265464: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_265468:
    if (ctx->pc == 0x265468u) {
        ctx->pc = 0x26546Cu;
        goto label_26546c;
    }
    ctx->pc = 0x265464u;
    {
        const bool branch_taken_0x265464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265464) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x26546Cu;
label_26546c:
    // 0x26546c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26546cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_265470:
    // 0x265470: 0xc097a68  jal         func_25E9A0
label_265474:
    if (ctx->pc == 0x265474u) {
        ctx->pc = 0x265478u;
        goto label_265478;
    }
    ctx->pc = 0x265470u;
    SET_GPR_U32(ctx, 31, 0x265478u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x265470u, 0x265478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265478u;
label_265478:
    // 0x265478: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26547c:
    // 0x26547c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26547cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_265480:
    // 0x265480: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_265484:
    // 0x265484: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x265484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960720)));
label_265488:
    // 0x265488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26548c:
    // 0x26548c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x26548cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_265490:
    // 0x265490: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_265494:
    if (ctx->pc == 0x265494u) {
        ctx->pc = 0x265498u;
        goto label_265498;
    }
    ctx->pc = 0x265490u;
    {
        const bool branch_taken_0x265490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265490) {
            ctx->pc = 0x26535Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26535c;
        }
    }
    ctx->pc = 0x265498u;
label_265498:
    // 0x265498: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x265498u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26549c:
    // 0x26549c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26549cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2654a0:
    // 0x2654a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2654a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2654a4:
    // 0x2654a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2654a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2654a8:
    // 0x2654a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2654a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2654ac:
    // 0x2654ac: 0x3e00008  jr          $ra
label_2654b0:
    if (ctx->pc == 0x2654B0u) {
        ctx->pc = 0x2654B4u;
        goto label_fallthrough_0x2654ac;
    }
    ctx->pc = 0x2654ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2654ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2654ac:
    ctx->pc = 0x2654B4u;
}
