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

// Function: Em01_R1_die_front
// Address: 0x307130 - 0x3073a0
void Em01_R1_die_front_0x307130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_die_front_0x307130");
#endif

    switch (ctx->pc) {
        case 0x307130u: goto label_307130;
        case 0x307134u: goto label_307134;
        case 0x307138u: goto label_307138;
        case 0x30713cu: goto label_30713c;
        case 0x307140u: goto label_307140;
        case 0x307144u: goto label_307144;
        case 0x307148u: goto label_307148;
        case 0x30714cu: goto label_30714c;
        case 0x307150u: goto label_307150;
        case 0x307154u: goto label_307154;
        case 0x307158u: goto label_307158;
        case 0x30715cu: goto label_30715c;
        case 0x307160u: goto label_307160;
        case 0x307164u: goto label_307164;
        case 0x307168u: goto label_307168;
        case 0x30716cu: goto label_30716c;
        case 0x307170u: goto label_307170;
        case 0x307174u: goto label_307174;
        case 0x307178u: goto label_307178;
        case 0x30717cu: goto label_30717c;
        case 0x307180u: goto label_307180;
        case 0x307184u: goto label_307184;
        case 0x307188u: goto label_307188;
        case 0x30718cu: goto label_30718c;
        case 0x307190u: goto label_307190;
        case 0x307194u: goto label_307194;
        case 0x307198u: goto label_307198;
        case 0x30719cu: goto label_30719c;
        case 0x3071a0u: goto label_3071a0;
        case 0x3071a4u: goto label_3071a4;
        case 0x3071a8u: goto label_3071a8;
        case 0x3071acu: goto label_3071ac;
        case 0x3071b0u: goto label_3071b0;
        case 0x3071b4u: goto label_3071b4;
        case 0x3071b8u: goto label_3071b8;
        case 0x3071bcu: goto label_3071bc;
        case 0x3071c0u: goto label_3071c0;
        case 0x3071c4u: goto label_3071c4;
        case 0x3071c8u: goto label_3071c8;
        case 0x3071ccu: goto label_3071cc;
        case 0x3071d0u: goto label_3071d0;
        case 0x3071d4u: goto label_3071d4;
        case 0x3071d8u: goto label_3071d8;
        case 0x3071dcu: goto label_3071dc;
        case 0x3071e0u: goto label_3071e0;
        case 0x3071e4u: goto label_3071e4;
        case 0x3071e8u: goto label_3071e8;
        case 0x3071ecu: goto label_3071ec;
        case 0x3071f0u: goto label_3071f0;
        case 0x3071f4u: goto label_3071f4;
        case 0x3071f8u: goto label_3071f8;
        case 0x3071fcu: goto label_3071fc;
        case 0x307200u: goto label_307200;
        case 0x307204u: goto label_307204;
        case 0x307208u: goto label_307208;
        case 0x30720cu: goto label_30720c;
        case 0x307210u: goto label_307210;
        case 0x307214u: goto label_307214;
        case 0x307218u: goto label_307218;
        case 0x30721cu: goto label_30721c;
        case 0x307220u: goto label_307220;
        case 0x307224u: goto label_307224;
        case 0x307228u: goto label_307228;
        case 0x30722cu: goto label_30722c;
        case 0x307230u: goto label_307230;
        case 0x307234u: goto label_307234;
        case 0x307238u: goto label_307238;
        case 0x30723cu: goto label_30723c;
        case 0x307240u: goto label_307240;
        case 0x307244u: goto label_307244;
        case 0x307248u: goto label_307248;
        case 0x30724cu: goto label_30724c;
        case 0x307250u: goto label_307250;
        case 0x307254u: goto label_307254;
        case 0x307258u: goto label_307258;
        case 0x30725cu: goto label_30725c;
        case 0x307260u: goto label_307260;
        case 0x307264u: goto label_307264;
        case 0x307268u: goto label_307268;
        case 0x30726cu: goto label_30726c;
        case 0x307270u: goto label_307270;
        case 0x307274u: goto label_307274;
        case 0x307278u: goto label_307278;
        case 0x30727cu: goto label_30727c;
        case 0x307280u: goto label_307280;
        case 0x307284u: goto label_307284;
        case 0x307288u: goto label_307288;
        case 0x30728cu: goto label_30728c;
        case 0x307290u: goto label_307290;
        case 0x307294u: goto label_307294;
        case 0x307298u: goto label_307298;
        case 0x30729cu: goto label_30729c;
        case 0x3072a0u: goto label_3072a0;
        case 0x3072a4u: goto label_3072a4;
        case 0x3072a8u: goto label_3072a8;
        case 0x3072acu: goto label_3072ac;
        case 0x3072b0u: goto label_3072b0;
        case 0x3072b4u: goto label_3072b4;
        case 0x3072b8u: goto label_3072b8;
        case 0x3072bcu: goto label_3072bc;
        case 0x3072c0u: goto label_3072c0;
        case 0x3072c4u: goto label_3072c4;
        case 0x3072c8u: goto label_3072c8;
        case 0x3072ccu: goto label_3072cc;
        case 0x3072d0u: goto label_3072d0;
        case 0x3072d4u: goto label_3072d4;
        case 0x3072d8u: goto label_3072d8;
        case 0x3072dcu: goto label_3072dc;
        case 0x3072e0u: goto label_3072e0;
        case 0x3072e4u: goto label_3072e4;
        case 0x3072e8u: goto label_3072e8;
        case 0x3072ecu: goto label_3072ec;
        case 0x3072f0u: goto label_3072f0;
        case 0x3072f4u: goto label_3072f4;
        case 0x3072f8u: goto label_3072f8;
        case 0x3072fcu: goto label_3072fc;
        case 0x307300u: goto label_307300;
        case 0x307304u: goto label_307304;
        case 0x307308u: goto label_307308;
        case 0x30730cu: goto label_30730c;
        case 0x307310u: goto label_307310;
        case 0x307314u: goto label_307314;
        case 0x307318u: goto label_307318;
        case 0x30731cu: goto label_30731c;
        case 0x307320u: goto label_307320;
        case 0x307324u: goto label_307324;
        case 0x307328u: goto label_307328;
        case 0x30732cu: goto label_30732c;
        case 0x307330u: goto label_307330;
        case 0x307334u: goto label_307334;
        case 0x307338u: goto label_307338;
        case 0x30733cu: goto label_30733c;
        case 0x307340u: goto label_307340;
        case 0x307344u: goto label_307344;
        case 0x307348u: goto label_307348;
        case 0x30734cu: goto label_30734c;
        case 0x307350u: goto label_307350;
        case 0x307354u: goto label_307354;
        case 0x307358u: goto label_307358;
        case 0x30735cu: goto label_30735c;
        case 0x307360u: goto label_307360;
        case 0x307364u: goto label_307364;
        case 0x307368u: goto label_307368;
        case 0x30736cu: goto label_30736c;
        case 0x307370u: goto label_307370;
        case 0x307374u: goto label_307374;
        case 0x307378u: goto label_307378;
        case 0x30737cu: goto label_30737c;
        case 0x307380u: goto label_307380;
        case 0x307384u: goto label_307384;
        case 0x307388u: goto label_307388;
        case 0x30738cu: goto label_30738c;
        case 0x307390u: goto label_307390;
        case 0x307394u: goto label_307394;
        case 0x307398u: goto label_307398;
        case 0x30739cu: goto label_30739c;
        default: break;
    }

    ctx->pc = 0x307130u;

label_307130:
    // 0x307130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_307134:
    // 0x307134: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x307134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_307138:
    // 0x307138: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x307138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30713c:
    // 0x30713c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307140:
    // 0x307140: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x307140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_307144:
    // 0x307144: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x307144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_307148:
    // 0x307148: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x307148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_30714c:
    // 0x30714c: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
label_307150:
    if (ctx->pc == 0x307150u) {
        ctx->pc = 0x307154u;
        goto label_307154;
    }
    ctx->pc = 0x30714Cu;
    {
        const bool branch_taken_0x30714c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30714c) {
            ctx->pc = 0x307390u;
            goto label_307390;
        }
    }
    ctx->pc = 0x307154u;
label_307154:
    // 0x307154: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x307154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_307158:
    // 0x307158: 0x24641b90  addiu       $a0, $v1, 0x1B90
    ctx->pc = 0x307158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7056));
label_30715c:
    // 0x30715c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30715cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_307160:
    // 0x307160: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x307160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_307164:
    // 0x307164: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_307168:
    // 0x307168: 0x600008  jr          $v1
label_30716c:
    if (ctx->pc == 0x30716Cu) {
        ctx->pc = 0x307170u;
        goto label_307170;
    }
    ctx->pc = 0x307168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307168u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x307170u;
label_307170:
    // 0x307170: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307174:
    // 0x307174: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_307178:
    // 0x307178: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x307178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30717c:
    // 0x30717c: 0xc0c7a0c  jal         func_31E830
label_307180:
    if (ctx->pc == 0x307180u) {
        ctx->pc = 0x307184u;
        goto label_307184;
    }
    ctx->pc = 0x30717Cu;
    SET_GPR_U32(ctx, 31, 0x307184u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x30717Cu, 0x307184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307184u;
label_307184:
    // 0x307184: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307188:
    // 0x307188: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x307188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
label_30718c:
    // 0x30718c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_307190:
    // 0x307190: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x307190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_307194:
    // 0x307194: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x307194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_307198:
    // 0x307198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30719c:
    // 0x30719c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3071a0:
    // 0x3071a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3071a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_3071a4:
    // 0x3071a4: 0x24065a18  addiu       $a2, $zero, 0x5A18
    ctx->pc = 0x3071a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23064));
label_3071a8:
    // 0x3071a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3071a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3071ac:
    // 0x3071ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3071acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3071b0:
    // 0x3071b0: 0xc0965d0  jal         func_259740
label_3071b4:
    if (ctx->pc == 0x3071B4u) {
        ctx->pc = 0x3071B8u;
        goto label_3071b8;
    }
    ctx->pc = 0x3071B0u;
    SET_GPR_U32(ctx, 31, 0x3071B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3071B0u, 0x3071B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071B8u;
label_3071b8:
    // 0x3071b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3071b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3071bc:
    // 0x3071bc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3071bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_3071c0:
    // 0x3071c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3071c4:
    // 0x3071c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3071c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3071c8:
    // 0x3071c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3071c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3071cc:
    // 0x3071cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3071ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3071d0:
    // 0x3071d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3071d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3071d4:
    // 0x3071d4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3071d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_3071d8:
    // 0x3071d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3071d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3071dc:
    // 0x3071dc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3071dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_3071e0:
    // 0x3071e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3071e4:
    // 0x3071e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3071e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3071e8:
    // 0x3071e8: 0xc096b40  jal         func_25AD00
label_3071ec:
    if (ctx->pc == 0x3071ECu) {
        ctx->pc = 0x3071F0u;
        goto label_3071f0;
    }
    ctx->pc = 0x3071E8u;
    SET_GPR_U32(ctx, 31, 0x3071F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3071E8u, 0x3071F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071F0u;
label_3071f0:
    // 0x3071f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3071f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3071f4:
    // 0x3071f4: 0xc05cd10  jal         func_173440
label_3071f8:
    if (ctx->pc == 0x3071F8u) {
        ctx->pc = 0x3071FCu;
        goto label_3071fc;
    }
    ctx->pc = 0x3071F4u;
    SET_GPR_U32(ctx, 31, 0x3071FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3071F4u, 0x3071FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071FCu;
label_3071fc:
    // 0x3071fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3071fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307200:
    // 0x307200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_307204:
    // 0x307204: 0xc05cec4  jal         func_173B10
label_307208:
    if (ctx->pc == 0x307208u) {
        ctx->pc = 0x30720Cu;
        goto label_30720c;
    }
    ctx->pc = 0x307204u;
    SET_GPR_U32(ctx, 31, 0x30720Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x307204u, 0x30720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30720Cu;
label_30720c:
    // 0x30720c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307210:
    // 0x307210: 0xc0974c8  jal         func_25D320
label_307214:
    if (ctx->pc == 0x307214u) {
        ctx->pc = 0x307218u;
        goto label_307218;
    }
    ctx->pc = 0x307210u;
    SET_GPR_U32(ctx, 31, 0x307218u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307210u, 0x307218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307218u;
label_307218:
    // 0x307218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30721c:
    // 0x30721c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30721cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_307220:
    // 0x307220: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_307224:
    if (ctx->pc == 0x307224u) {
        ctx->pc = 0x307228u;
        goto label_307228;
    }
    ctx->pc = 0x307220u;
    {
        const bool branch_taken_0x307220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307220) {
            ctx->pc = 0x307390u;
            goto label_307390;
        }
    }
    ctx->pc = 0x307228u;
label_307228:
    // 0x307228: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30722c:
    // 0x30722c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30722cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_307230:
    // 0x307230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_307234:
    // 0x307234: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x307234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_307238:
    // 0x307238: 0x10000055  b           . + 4 + (0x55 << 2)
label_30723c:
    if (ctx->pc == 0x30723Cu) {
        ctx->pc = 0x307240u;
        goto label_307240;
    }
    ctx->pc = 0x307238u;
    {
        const bool branch_taken_0x307238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307238) {
            ctx->pc = 0x307390u;
            goto label_307390;
        }
    }
    ctx->pc = 0x307240u;
label_307240:
    // 0x307240: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x307240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_307244:
    // 0x307244: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x307244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_307248:
    // 0x307248: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x307248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30724c:
    // 0x30724c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_307250:
    // 0x307250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307254:
    // 0x307254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_307258:
    // 0x307258: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x307258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_30725c:
    // 0x30725c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_307260:
    // 0x307260: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x307260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_307264:
    // 0x307264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x307264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_307268:
    // 0x307268: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x307268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30726c:
    // 0x30726c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307270:
    // 0x307270: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x307270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_307274:
    // 0x307274: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x307274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_307278:
    // 0x307278: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x307278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_30727c:
    // 0x30727c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_307280:
    // 0x307280: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x307280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_307284:
    // 0x307284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_307288:
    // 0x307288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30728c:
    // 0x30728c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_307290:
    // 0x307290: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_307294:
    // 0x307294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307298:
    // 0x307298: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x307298u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_30729c:
    // 0x30729c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3072a0:
    // 0x3072a0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3072a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_3072a4:
    // 0x3072a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3072a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3072a8:
    // 0x3072a8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3072a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_3072ac:
    // 0x3072ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3072acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3072b0:
    // 0x3072b0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3072b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_3072b4:
    // 0x3072b4: 0x2442001a  addiu       $v0, $v0, 0x1A
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
label_3072b8:
    // 0x3072b8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3072b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_3072bc:
    // 0x3072bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3072bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3072c0:
    // 0x3072c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3072c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3072c4:
    // 0x3072c4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3072c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_3072c8:
    // 0x3072c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3072c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3072cc:
    // 0x3072cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3072ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3072d0:
    // 0x3072d0: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x3072d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
label_3072d4:
    // 0x3072d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3072d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3072d8:
    // 0x3072d8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3072d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_3072dc:
    // 0x3072dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3072dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3072e0:
    // 0x3072e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3072e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3072e4:
    // 0x3072e4: 0xc0965d0  jal         func_259740
label_3072e8:
    if (ctx->pc == 0x3072E8u) {
        ctx->pc = 0x3072ECu;
        goto label_3072ec;
    }
    ctx->pc = 0x3072E4u;
    SET_GPR_U32(ctx, 31, 0x3072ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3072E4u, 0x3072ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072ECu;
label_3072ec:
    // 0x3072ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3072ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3072f0:
    // 0x3072f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3072f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3072f4:
    // 0x3072f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3072f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3072f8:
    // 0x3072f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3072f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3072fc:
    // 0x3072fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307300:
    // 0x307300: 0xc0974c8  jal         func_25D320
label_307304:
    if (ctx->pc == 0x307304u) {
        ctx->pc = 0x307308u;
        goto label_307308;
    }
    ctx->pc = 0x307300u;
    SET_GPR_U32(ctx, 31, 0x307308u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307300u, 0x307308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307308u;
label_307308:
    // 0x307308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30730c:
    // 0x30730c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30730cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_307310:
    // 0x307310: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_307314:
    if (ctx->pc == 0x307314u) {
        ctx->pc = 0x307318u;
        goto label_307318;
    }
    ctx->pc = 0x307310u;
    {
        const bool branch_taken_0x307310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307310) {
            ctx->pc = 0x307390u;
            goto label_307390;
        }
    }
    ctx->pc = 0x307318u;
label_307318:
    // 0x307318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30731c:
    // 0x30731c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30731cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_307320:
    // 0x307320: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_307324:
    // 0x307324: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x307324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_307328:
    // 0x307328: 0x10000019  b           . + 4 + (0x19 << 2)
label_30732c:
    if (ctx->pc == 0x30732Cu) {
        ctx->pc = 0x307330u;
        goto label_307330;
    }
    ctx->pc = 0x307328u;
    {
        const bool branch_taken_0x307328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307328) {
            ctx->pc = 0x307390u;
            goto label_307390;
        }
    }
    ctx->pc = 0x307330u;
label_307330:
    // 0x307330: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307334:
    // 0x307334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307338:
    // 0x307338: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x307338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_30733c:
    // 0x30733c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_307340:
    // 0x307340: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x307340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_307344:
    // 0x307344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_307348:
    // 0x307348: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x307348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
label_30734c:
    // 0x30734c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307350:
    // 0x307350: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x307350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_307354:
    // 0x307354: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x307354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307358:
    // 0x307358: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x307358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_30735c:
    // 0x30735c: 0xc0965d0  jal         func_259740
label_307360:
    if (ctx->pc == 0x307360u) {
        ctx->pc = 0x307364u;
        goto label_307364;
    }
    ctx->pc = 0x30735Cu;
    SET_GPR_U32(ctx, 31, 0x307364u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30735Cu, 0x307364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307364u;
label_307364:
    // 0x307364: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307368:
    // 0x307368: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x307368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30736c:
    // 0x30736c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x30736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_307370:
    // 0x307370: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x307370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_307374:
    // 0x307374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307378:
    // 0x307378: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_30737c:
    // 0x30737c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_307380:
    // 0x307380: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x307380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_307384:
    // 0x307384: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307388:
    // 0x307388: 0xc0974c8  jal         func_25D320
label_30738c:
    if (ctx->pc == 0x30738Cu) {
        ctx->pc = 0x307390u;
        goto label_307390;
    }
    ctx->pc = 0x307388u;
    SET_GPR_U32(ctx, 31, 0x307390u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307388u, 0x307390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307390u;
label_307390:
    // 0x307390: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x307390u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307394:
    // 0x307394: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x307394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_307398:
    // 0x307398: 0x3e00008  jr          $ra
label_30739c:
    if (ctx->pc == 0x30739Cu) {
        ctx->pc = 0x3073A0u;
        goto label_fallthrough_0x307398;
    }
    ctx->pc = 0x307398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x307398:
    ctx->pc = 0x3073A0u;
}
