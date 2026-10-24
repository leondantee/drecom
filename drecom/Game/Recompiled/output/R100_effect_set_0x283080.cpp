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

// Function: R100_effect_set
// Address: 0x283080 - 0x28333c
void R100_effect_set_0x283080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100_effect_set_0x283080");
#endif

    switch (ctx->pc) {
        case 0x283080u: goto label_283080;
        case 0x283084u: goto label_283084;
        case 0x283088u: goto label_283088;
        case 0x28308cu: goto label_28308c;
        case 0x283090u: goto label_283090;
        case 0x283094u: goto label_283094;
        case 0x283098u: goto label_283098;
        case 0x28309cu: goto label_28309c;
        case 0x2830a0u: goto label_2830a0;
        case 0x2830a4u: goto label_2830a4;
        case 0x2830a8u: goto label_2830a8;
        case 0x2830acu: goto label_2830ac;
        case 0x2830b0u: goto label_2830b0;
        case 0x2830b4u: goto label_2830b4;
        case 0x2830b8u: goto label_2830b8;
        case 0x2830bcu: goto label_2830bc;
        case 0x2830c0u: goto label_2830c0;
        case 0x2830c4u: goto label_2830c4;
        case 0x2830c8u: goto label_2830c8;
        case 0x2830ccu: goto label_2830cc;
        case 0x2830d0u: goto label_2830d0;
        case 0x2830d4u: goto label_2830d4;
        case 0x2830d8u: goto label_2830d8;
        case 0x2830dcu: goto label_2830dc;
        case 0x2830e0u: goto label_2830e0;
        case 0x2830e4u: goto label_2830e4;
        case 0x2830e8u: goto label_2830e8;
        case 0x2830ecu: goto label_2830ec;
        case 0x2830f0u: goto label_2830f0;
        case 0x2830f4u: goto label_2830f4;
        case 0x2830f8u: goto label_2830f8;
        case 0x2830fcu: goto label_2830fc;
        case 0x283100u: goto label_283100;
        case 0x283104u: goto label_283104;
        case 0x283108u: goto label_283108;
        case 0x28310cu: goto label_28310c;
        case 0x283110u: goto label_283110;
        case 0x283114u: goto label_283114;
        case 0x283118u: goto label_283118;
        case 0x28311cu: goto label_28311c;
        case 0x283120u: goto label_283120;
        case 0x283124u: goto label_283124;
        case 0x283128u: goto label_283128;
        case 0x28312cu: goto label_28312c;
        case 0x283130u: goto label_283130;
        case 0x283134u: goto label_283134;
        case 0x283138u: goto label_283138;
        case 0x28313cu: goto label_28313c;
        case 0x283140u: goto label_283140;
        case 0x283144u: goto label_283144;
        case 0x283148u: goto label_283148;
        case 0x28314cu: goto label_28314c;
        case 0x283150u: goto label_283150;
        case 0x283154u: goto label_283154;
        case 0x283158u: goto label_283158;
        case 0x28315cu: goto label_28315c;
        case 0x283160u: goto label_283160;
        case 0x283164u: goto label_283164;
        case 0x283168u: goto label_283168;
        case 0x28316cu: goto label_28316c;
        case 0x283170u: goto label_283170;
        case 0x283174u: goto label_283174;
        case 0x283178u: goto label_283178;
        case 0x28317cu: goto label_28317c;
        case 0x283180u: goto label_283180;
        case 0x283184u: goto label_283184;
        case 0x283188u: goto label_283188;
        case 0x28318cu: goto label_28318c;
        case 0x283190u: goto label_283190;
        case 0x283194u: goto label_283194;
        case 0x283198u: goto label_283198;
        case 0x28319cu: goto label_28319c;
        case 0x2831a0u: goto label_2831a0;
        case 0x2831a4u: goto label_2831a4;
        case 0x2831a8u: goto label_2831a8;
        case 0x2831acu: goto label_2831ac;
        case 0x2831b0u: goto label_2831b0;
        case 0x2831b4u: goto label_2831b4;
        case 0x2831b8u: goto label_2831b8;
        case 0x2831bcu: goto label_2831bc;
        case 0x2831c0u: goto label_2831c0;
        case 0x2831c4u: goto label_2831c4;
        case 0x2831c8u: goto label_2831c8;
        case 0x2831ccu: goto label_2831cc;
        case 0x2831d0u: goto label_2831d0;
        case 0x2831d4u: goto label_2831d4;
        case 0x2831d8u: goto label_2831d8;
        case 0x2831dcu: goto label_2831dc;
        case 0x2831e0u: goto label_2831e0;
        case 0x2831e4u: goto label_2831e4;
        case 0x2831e8u: goto label_2831e8;
        case 0x2831ecu: goto label_2831ec;
        case 0x2831f0u: goto label_2831f0;
        case 0x2831f4u: goto label_2831f4;
        case 0x2831f8u: goto label_2831f8;
        case 0x2831fcu: goto label_2831fc;
        case 0x283200u: goto label_283200;
        case 0x283204u: goto label_283204;
        case 0x283208u: goto label_283208;
        case 0x28320cu: goto label_28320c;
        case 0x283210u: goto label_283210;
        case 0x283214u: goto label_283214;
        case 0x283218u: goto label_283218;
        case 0x28321cu: goto label_28321c;
        case 0x283220u: goto label_283220;
        case 0x283224u: goto label_283224;
        case 0x283228u: goto label_283228;
        case 0x28322cu: goto label_28322c;
        case 0x283230u: goto label_283230;
        case 0x283234u: goto label_283234;
        case 0x283238u: goto label_283238;
        case 0x28323cu: goto label_28323c;
        case 0x283240u: goto label_283240;
        case 0x283244u: goto label_283244;
        case 0x283248u: goto label_283248;
        case 0x28324cu: goto label_28324c;
        case 0x283250u: goto label_283250;
        case 0x283254u: goto label_283254;
        case 0x283258u: goto label_283258;
        case 0x28325cu: goto label_28325c;
        case 0x283260u: goto label_283260;
        case 0x283264u: goto label_283264;
        case 0x283268u: goto label_283268;
        case 0x28326cu: goto label_28326c;
        case 0x283270u: goto label_283270;
        case 0x283274u: goto label_283274;
        case 0x283278u: goto label_283278;
        case 0x28327cu: goto label_28327c;
        case 0x283280u: goto label_283280;
        case 0x283284u: goto label_283284;
        case 0x283288u: goto label_283288;
        case 0x28328cu: goto label_28328c;
        case 0x283290u: goto label_283290;
        case 0x283294u: goto label_283294;
        case 0x283298u: goto label_283298;
        case 0x28329cu: goto label_28329c;
        case 0x2832a0u: goto label_2832a0;
        case 0x2832a4u: goto label_2832a4;
        case 0x2832a8u: goto label_2832a8;
        case 0x2832acu: goto label_2832ac;
        case 0x2832b0u: goto label_2832b0;
        case 0x2832b4u: goto label_2832b4;
        case 0x2832b8u: goto label_2832b8;
        case 0x2832bcu: goto label_2832bc;
        case 0x2832c0u: goto label_2832c0;
        case 0x2832c4u: goto label_2832c4;
        case 0x2832c8u: goto label_2832c8;
        case 0x2832ccu: goto label_2832cc;
        case 0x2832d0u: goto label_2832d0;
        case 0x2832d4u: goto label_2832d4;
        case 0x2832d8u: goto label_2832d8;
        case 0x2832dcu: goto label_2832dc;
        case 0x2832e0u: goto label_2832e0;
        case 0x2832e4u: goto label_2832e4;
        case 0x2832e8u: goto label_2832e8;
        case 0x2832ecu: goto label_2832ec;
        case 0x2832f0u: goto label_2832f0;
        case 0x2832f4u: goto label_2832f4;
        case 0x2832f8u: goto label_2832f8;
        case 0x2832fcu: goto label_2832fc;
        case 0x283300u: goto label_283300;
        case 0x283304u: goto label_283304;
        case 0x283308u: goto label_283308;
        case 0x28330cu: goto label_28330c;
        case 0x283310u: goto label_283310;
        case 0x283314u: goto label_283314;
        case 0x283318u: goto label_283318;
        case 0x28331cu: goto label_28331c;
        case 0x283320u: goto label_283320;
        case 0x283324u: goto label_283324;
        case 0x283328u: goto label_283328;
        case 0x28332cu: goto label_28332c;
        case 0x283330u: goto label_283330;
        case 0x283334u: goto label_283334;
        case 0x283338u: goto label_283338;
        default: break;
    }

    ctx->pc = 0x283080u;

label_283080:
    // 0x283080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_283084:
    // 0x283084: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x283084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_283088:
    // 0x283088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28308c:
    // 0x28308c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28308cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283090:
    // 0x283090: 0x10000057  b           . + 4 + (0x57 << 2)
label_283094:
    if (ctx->pc == 0x283094u) {
        ctx->pc = 0x283098u;
        goto label_283098;
    }
    ctx->pc = 0x283090u;
    {
        const bool branch_taken_0x283090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283090) {
            ctx->pc = 0x2831F0u;
            goto label_2831f0;
        }
    }
    ctx->pc = 0x283098u;
label_283098:
    // 0x283098: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_28309c:
    // 0x28309c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28309cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2830a0:
    // 0x2830a0: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x2830a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
label_2830a4:
    // 0x2830a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2830a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2830a8:
    // 0x2830a8: 0x24045705  addiu       $a0, $zero, 0x5705
    ctx->pc = 0x2830a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22277));
label_2830ac:
    // 0x2830ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2830acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2830b0:
    // 0x2830b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2830b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2830b4:
    // 0x2830b4: 0xc062f5c  jal         func_18BD70
label_2830b8:
    if (ctx->pc == 0x2830B8u) {
        ctx->pc = 0x2830BCu;
        goto label_2830bc;
    }
    ctx->pc = 0x2830B4u;
    SET_GPR_U32(ctx, 31, 0x2830BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2830B4u, 0x2830BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830BCu;
label_2830bc:
    // 0x2830bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2830bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2830c0:
    // 0x2830c0: 0xc0630a8  jal         func_18C2A0
label_2830c4:
    if (ctx->pc == 0x2830C4u) {
        ctx->pc = 0x2830C8u;
        goto label_2830c8;
    }
    ctx->pc = 0x2830C0u;
    SET_GPR_U32(ctx, 31, 0x2830C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2830C0u, 0x2830C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830C8u;
label_2830c8:
    // 0x2830c8: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x2830c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2830cc:
    // 0x2830cc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_2830d0:
    if (ctx->pc == 0x2830D0u) {
        ctx->pc = 0x2830D4u;
        goto label_2830d4;
    }
    ctx->pc = 0x2830CCu;
    {
        const bool branch_taken_0x2830cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2830cc) {
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x2830D4u;
label_2830d4:
    // 0x2830d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2830d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2830d8:
    // 0x2830d8: 0x24431650  addiu       $v1, $v0, 0x1650
    ctx->pc = 0x2830d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5712));
label_2830dc:
    // 0x2830dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2830dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2830e0:
    // 0x2830e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2830e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2830e4:
    // 0x2830e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2830e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2830e8:
    // 0x2830e8: 0x400008  jr          $v0
label_2830ec:
    if (ctx->pc == 0x2830ECu) {
        ctx->pc = 0x2830F0u;
        goto label_2830f0;
    }
    ctx->pc = 0x2830E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2830F0u;
label_2830f0:
    // 0x2830f0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2830f4:
    // 0x2830f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2830f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2830f8:
    // 0x2830f8: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x2830f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
label_2830fc:
    // 0x2830fc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2830fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_283100:
    // 0x283100: 0x24045a03  addiu       $a0, $zero, 0x5A03
    ctx->pc = 0x283100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
label_283104:
    // 0x283104: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283108:
    // 0x283108: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283108u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_28310c:
    // 0x28310c: 0xc062f5c  jal         func_18BD70
label_283110:
    if (ctx->pc == 0x283110u) {
        ctx->pc = 0x283114u;
        goto label_283114;
    }
    ctx->pc = 0x28310Cu;
    SET_GPR_U32(ctx, 31, 0x283114u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28310Cu, 0x283114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283114u;
label_283114:
    // 0x283114: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283114u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_283118:
    // 0x283118: 0xc0630a8  jal         func_18C2A0
label_28311c:
    if (ctx->pc == 0x28311Cu) {
        ctx->pc = 0x283120u;
        goto label_283120;
    }
    ctx->pc = 0x283118u;
    SET_GPR_U32(ctx, 31, 0x283120u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283118u, 0x283120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283120u;
label_283120:
    // 0x283120: 0x10000031  b           . + 4 + (0x31 << 2)
label_283124:
    if (ctx->pc == 0x283124u) {
        ctx->pc = 0x283128u;
        goto label_283128;
    }
    ctx->pc = 0x283120u;
    {
        const bool branch_taken_0x283120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283120) {
            ctx->pc = 0x2831E8u;
            goto label_2831e8;
        }
    }
    ctx->pc = 0x283128u;
label_283128:
    // 0x283128: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_28312c:
    // 0x28312c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x28312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_283130:
    // 0x283130: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_283134:
    // 0x283134: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_283138:
    // 0x283138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28313c:
    // 0x28313c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_283140:
    // 0x283140: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x283140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_283144:
    // 0x283144: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_283148:
    // 0x283148: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_28314c:
    // 0x28314c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_283150:
    // 0x283150: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_283154:
    // 0x283154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_283158:
    // 0x283158: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x283158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_28315c:
    // 0x28315c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x28315cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_283160:
    // 0x283160: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x283160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_283164:
    // 0x283164: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_283168:
    // 0x283168: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x283168u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_28316c:
    // 0x28316c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_283170:
    // 0x283170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_283174:
    // 0x283174: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_283178:
    if (ctx->pc == 0x283178u) {
        ctx->pc = 0x28317Cu;
        goto label_28317c;
    }
    ctx->pc = 0x283174u;
    {
        const bool branch_taken_0x283174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283174) {
            ctx->pc = 0x2831B4u;
            goto label_2831b4;
        }
    }
    ctx->pc = 0x28317Cu;
label_28317c:
    // 0x28317c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x28317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_283180:
    // 0x283180: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_283184:
    // 0x283184: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x283184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
label_283188:
    // 0x283188: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x283188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28318c:
    // 0x28318c: 0x24047303  addiu       $a0, $zero, 0x7303
    ctx->pc = 0x28318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29443));
label_283190:
    // 0x283190: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283194:
    // 0x283194: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283194u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283198:
    // 0x283198: 0xc062f5c  jal         func_18BD70
label_28319c:
    if (ctx->pc == 0x28319Cu) {
        ctx->pc = 0x2831A0u;
        goto label_2831a0;
    }
    ctx->pc = 0x283198u;
    SET_GPR_U32(ctx, 31, 0x2831A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283198u, 0x2831A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831A0u;
label_2831a0:
    // 0x2831a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2831a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2831a4:
    // 0x2831a4: 0xc0630a8  jal         func_18C2A0
label_2831a8:
    if (ctx->pc == 0x2831A8u) {
        ctx->pc = 0x2831ACu;
        goto label_2831ac;
    }
    ctx->pc = 0x2831A4u;
    SET_GPR_U32(ctx, 31, 0x2831ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2831A4u, 0x2831ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831ACu;
label_2831ac:
    // 0x2831ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_2831b0:
    if (ctx->pc == 0x2831B0u) {
        ctx->pc = 0x2831B4u;
        goto label_2831b4;
    }
    ctx->pc = 0x2831ACu;
    {
        const bool branch_taken_0x2831ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831ac) {
            ctx->pc = 0x2831E8u;
            goto label_2831e8;
        }
    }
    ctx->pc = 0x2831B4u;
label_2831b4:
    // 0x2831b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2831b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2831b8:
    // 0x2831b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2831bc:
    // 0x2831bc: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x2831bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
label_2831c0:
    // 0x2831c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2831c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2831c4:
    // 0x2831c4: 0x24047403  addiu       $a0, $zero, 0x7403
    ctx->pc = 0x2831c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29699));
label_2831c8:
    // 0x2831c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2831c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2831cc:
    // 0x2831cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2831ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2831d0:
    // 0x2831d0: 0xc062f5c  jal         func_18BD70
label_2831d4:
    if (ctx->pc == 0x2831D4u) {
        ctx->pc = 0x2831D8u;
        goto label_2831d8;
    }
    ctx->pc = 0x2831D0u;
    SET_GPR_U32(ctx, 31, 0x2831D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2831D0u, 0x2831D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831D8u;
label_2831d8:
    // 0x2831d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2831d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2831dc:
    // 0x2831dc: 0xc0630a8  jal         func_18C2A0
label_2831e0:
    if (ctx->pc == 0x2831E0u) {
        ctx->pc = 0x2831E4u;
        goto label_2831e4;
    }
    ctx->pc = 0x2831DCu;
    SET_GPR_U32(ctx, 31, 0x2831E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2831DCu, 0x2831E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831E4u;
label_2831e4:
    // 0x2831e4: 0x0  nop
    ctx->pc = 0x2831e4u;
    // NOP
label_2831e8:
    // 0x2831e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2831e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2831ec:
    // 0x2831ec: 0x0  nop
    ctx->pc = 0x2831ecu;
    // NOP
label_2831f0:
    // 0x2831f0: 0x2e030027  sltiu       $v1, $s0, 0x27
    ctx->pc = 0x2831f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_2831f4:
    // 0x2831f4: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
label_2831f8:
    if (ctx->pc == 0x2831F8u) {
        ctx->pc = 0x2831FCu;
        goto label_2831fc;
    }
    ctx->pc = 0x2831F4u;
    {
        const bool branch_taken_0x2831f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2831f4) {
            ctx->pc = 0x283098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283098;
        }
    }
    ctx->pc = 0x2831FCu;
label_2831fc:
    // 0x2831fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2831fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283200:
    // 0x283200: 0x10000017  b           . + 4 + (0x17 << 2)
label_283204:
    if (ctx->pc == 0x283204u) {
        ctx->pc = 0x283208u;
        goto label_283208;
    }
    ctx->pc = 0x283200u;
    {
        const bool branch_taken_0x283200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283200) {
            ctx->pc = 0x283260u;
            goto label_283260;
        }
    }
    ctx->pc = 0x283208u;
label_283208:
    // 0x283208: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_28320c:
    // 0x28320c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_283210:
    // 0x283210: 0x244250a0  addiu       $v0, $v0, 0x50A0
    ctx->pc = 0x283210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20640));
label_283214:
    // 0x283214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_283218:
    // 0x283218: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28321c:
    // 0x28321c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_283220:
    // 0x283220: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283220u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_283224:
    // 0x283224: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x283224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_283228:
    // 0x283228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28322c:
    // 0x28322c: 0x0  nop
    ctx->pc = 0x28322cu;
    // NOP
label_283230:
    // 0x283230: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x283230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_283234:
    // 0x283234: 0x24041715  addiu       $a0, $zero, 0x1715
    ctx->pc = 0x283234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5909));
label_283238:
    // 0x283238: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283238u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_28323c:
    // 0x28323c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x28323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_283240:
    // 0x283240: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283240u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283244:
    // 0x283244: 0xc062f5c  jal         func_18BD70
label_283248:
    if (ctx->pc == 0x283248u) {
        ctx->pc = 0x28324Cu;
        goto label_28324c;
    }
    ctx->pc = 0x283244u;
    SET_GPR_U32(ctx, 31, 0x28324Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283244u, 0x28324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28324Cu;
label_28324c:
    // 0x28324c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28324cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_283250:
    // 0x283250: 0xc0630a8  jal         func_18C2A0
label_283254:
    if (ctx->pc == 0x283254u) {
        ctx->pc = 0x283258u;
        goto label_283258;
    }
    ctx->pc = 0x283250u;
    SET_GPR_U32(ctx, 31, 0x283258u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283250u, 0x283258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283258u;
label_283258:
    // 0x283258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x283258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28325c:
    // 0x28325c: 0x0  nop
    ctx->pc = 0x28325cu;
    // NOP
label_283260:
    // 0x283260: 0x2e030022  sltiu       $v1, $s0, 0x22
    ctx->pc = 0x283260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
label_283264:
    // 0x283264: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_283268:
    if (ctx->pc == 0x283268u) {
        ctx->pc = 0x28326Cu;
        goto label_28326c;
    }
    ctx->pc = 0x283264u;
    {
        const bool branch_taken_0x283264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283264) {
            ctx->pc = 0x283208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283208;
        }
    }
    ctx->pc = 0x28326Cu;
label_28326c:
    // 0x28326c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28326cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283270:
    // 0x283270: 0x1000002b  b           . + 4 + (0x2B << 2)
label_283274:
    if (ctx->pc == 0x283274u) {
        ctx->pc = 0x283278u;
        goto label_283278;
    }
    ctx->pc = 0x283270u;
    {
        const bool branch_taken_0x283270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283270) {
            ctx->pc = 0x283320u;
            goto label_283320;
        }
    }
    ctx->pc = 0x283278u;
label_283278:
    // 0x283278: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_28327c:
    // 0x28327c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_283280:
    // 0x283280: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x283280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_283284:
    // 0x283284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_283288:
    // 0x283288: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28328c:
    // 0x28328c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_283290:
    // 0x283290: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283290u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_283294:
    // 0x283294: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_283298:
    // 0x283298: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_28329c:
    // 0x28329c: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x28329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_2832a0:
    // 0x2832a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2832a4:
    // 0x2832a4: 0x24041c00  addiu       $a0, $zero, 0x1C00
    ctx->pc = 0x2832a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
label_2832a8:
    // 0x2832a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2832a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2832ac:
    // 0x2832ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2832acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2832b0:
    // 0x2832b0: 0xc062f5c  jal         func_18BD70
label_2832b4:
    if (ctx->pc == 0x2832B4u) {
        ctx->pc = 0x2832B8u;
        goto label_2832b8;
    }
    ctx->pc = 0x2832B0u;
    SET_GPR_U32(ctx, 31, 0x2832B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2832B0u, 0x2832B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832B8u;
label_2832b8:
    // 0x2832b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2832b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2832bc:
    // 0x2832bc: 0xc0630a8  jal         func_18C2A0
label_2832c0:
    if (ctx->pc == 0x2832C0u) {
        ctx->pc = 0x2832C4u;
        goto label_2832c4;
    }
    ctx->pc = 0x2832BCu;
    SET_GPR_U32(ctx, 31, 0x2832C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2832BCu, 0x2832C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832C4u;
label_2832c4:
    // 0x2832c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2832c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2832c8:
    // 0x2832c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2832cc:
    // 0x2832cc: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x2832ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_2832d0:
    // 0x2832d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2832d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2832d4:
    // 0x2832d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2832d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2832d8:
    // 0x2832d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2832d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2832dc:
    // 0x2832dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2832dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2832e0:
    // 0x2832e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2832e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2832e4:
    // 0x2832e4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2832e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2832e8:
    // 0x2832e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2832e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2832ec:
    // 0x2832ec: 0x0  nop
    ctx->pc = 0x2832ecu;
    // NOP
label_2832f0:
    // 0x2832f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2832f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2832f4:
    // 0x2832f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2832f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2832f8:
    // 0x2832f8: 0x24041716  addiu       $a0, $zero, 0x1716
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5910));
label_2832fc:
    // 0x2832fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2832fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283300:
    // 0x283300: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x283300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_283304:
    // 0x283304: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283304u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_283308:
    // 0x283308: 0xc062f5c  jal         func_18BD70
label_28330c:
    if (ctx->pc == 0x28330Cu) {
        ctx->pc = 0x283310u;
        goto label_283310;
    }
    ctx->pc = 0x283308u;
    SET_GPR_U32(ctx, 31, 0x283310u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283308u, 0x283310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283310u;
label_283310:
    // 0x283310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_283314:
    // 0x283314: 0xc0630a8  jal         func_18C2A0
label_283318:
    if (ctx->pc == 0x283318u) {
        ctx->pc = 0x28331Cu;
        goto label_28331c;
    }
    ctx->pc = 0x283314u;
    SET_GPR_U32(ctx, 31, 0x28331Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283314u, 0x28331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28331Cu;
label_28331c:
    // 0x28331c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_283320:
    // 0x283320: 0x1200ffd5  beqz        $s0, . + 4 + (-0x2B << 2)
label_283324:
    if (ctx->pc == 0x283324u) {
        ctx->pc = 0x283328u;
        goto label_283328;
    }
    ctx->pc = 0x283320u;
    {
        const bool branch_taken_0x283320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x283320) {
            ctx->pc = 0x283278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283278;
        }
    }
    ctx->pc = 0x283328u;
label_283328:
    // 0x283328: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x283328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28332c:
    // 0x28332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_283330:
    // 0x283330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x283330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_283334:
    // 0x283334: 0x3e00008  jr          $ra
label_283338:
    if (ctx->pc == 0x283338u) {
        ctx->pc = 0x28333Cu;
        goto label_fallthrough_0x283334;
    }
    ctx->pc = 0x283334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283334:
    ctx->pc = 0x28333Cu;
}
