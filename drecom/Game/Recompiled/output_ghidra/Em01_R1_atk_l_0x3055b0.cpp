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

// Function: Em01_R1_atk_l
// Address: 0x3055b0 - 0x3058d0
void Em01_R1_atk_l_0x3055b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_l_0x3055b0");
#endif

    switch (ctx->pc) {
        case 0x305624u: goto label_305624;
        case 0x305644u: goto label_305644;
        case 0x305650u: goto label_305650;
        case 0x305660u: goto label_305660;
        case 0x30566cu: goto label_30566c;
        case 0x3056b4u: goto label_3056b4;
        case 0x305734u: goto label_305734;
        case 0x30579cu: goto label_30579c;
        case 0x3057bcu: goto label_3057bc;
        case 0x305838u: goto label_305838;
        case 0x305850u: goto label_305850;
        case 0x30585cu: goto label_30585c;
        case 0x30586cu: goto label_30586c;
        case 0x305878u: goto label_305878;
        default: break;
    }

    ctx->pc = 0x3055b0u;

    // 0x3055b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3055b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3055b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3055b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3055b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3055b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3055bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3055bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3055c0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x3055c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x3055c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3055c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3055c8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3055c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3055cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3055ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3055d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3055d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3055d4: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3055D4u;
    {
        const bool branch_taken_0x3055d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3055d4) {
            ctx->pc = 0x3056D4u;
            goto label_3056d4;
        }
    }
    ctx->pc = 0x3055DCu;
    // 0x3055dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3055dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3055e0: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3055E0u;
    {
        const bool branch_taken_0x3055e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3055e0) {
            ctx->pc = 0x305694u;
            goto label_305694;
        }
    }
    ctx->pc = 0x3055E8u;
    // 0x3055e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3055e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3055ec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3055ECu;
    {
        const bool branch_taken_0x3055ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3055ec) {
            ctx->pc = 0x305634u;
            goto label_305634;
        }
    }
    ctx->pc = 0x3055F4u;
    // 0x3055f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3055F4u;
    {
        const bool branch_taken_0x3055f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3055f4) {
            ctx->pc = 0x305604u;
            goto label_305604;
        }
    }
    ctx->pc = 0x3055FCu;
    // 0x3055fc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x3055FCu;
    {
        const bool branch_taken_0x3055fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3055fc) {
            ctx->pc = 0x3058B8u;
            goto label_3058b8;
        }
    }
    ctx->pc = 0x305604u;
label_305604:
    // 0x305604: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305608: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30560c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305610: 0x24062828  addiu       $a2, $zero, 0x2828
    ctx->pc = 0x305610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10280));
    // 0x305614: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305618: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30561c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30561Cu;
    SET_GPR_U32(ctx, 31, 0x305624u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30561Cu, 0x305624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305624u;
label_305624:
    // 0x305624: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305628: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30562c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305630: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_305634:
    // 0x305634: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305638: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305638u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30563c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30563Cu;
    SET_GPR_U32(ctx, 31, 0x305644u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30563Cu, 0x305644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305644u;
label_305644:
    // 0x305644: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305648: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305648u;
    SET_GPR_U32(ctx, 31, 0x305650u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305648u, 0x305650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305650u;
label_305650:
    // 0x305650: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305654: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305658: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305658u;
    SET_GPR_U32(ctx, 31, 0x305660u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305658u, 0x305660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305660u;
label_305660:
    // 0x305660: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305664: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305664u;
    SET_GPR_U32(ctx, 31, 0x30566Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305664u, 0x30566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30566Cu;
label_30566c:
    // 0x30566c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305670: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305674: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x305674u;
    {
        const bool branch_taken_0x305674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305674) {
            ctx->pc = 0x3058B8u;
            goto label_3058b8;
        }
    }
    ctx->pc = 0x30567Cu;
    // 0x30567c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305680: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x305680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x305684: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305688: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x305688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x30568c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x30568Cu;
    {
        const bool branch_taken_0x30568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30568c) {
            ctx->pc = 0x3058B8u;
            goto label_3058b8;
        }
    }
    ctx->pc = 0x305694u;
label_305694:
    // 0x305694: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305698: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30569c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3056a0: 0x24062813  addiu       $a2, $zero, 0x2813
    ctx->pc = 0x3056a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10259));
    // 0x3056a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3056a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3056a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3056ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3056ACu;
    SET_GPR_U32(ctx, 31, 0x3056B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3056ACu, 0x3056B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056B4u;
label_3056b4:
    // 0x3056b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056b8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3056b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3056bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056c0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3056c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x3056c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3056c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3056c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3056cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3056ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3056d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3056d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3056d4:
    // 0x3056d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056d8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3056d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3056dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3056dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3056e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3056e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3056e4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3056E4u;
    {
        const bool branch_taken_0x3056e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3056e4) {
            ctx->pc = 0x3057BCu;
            goto label_3057bc;
        }
    }
    ctx->pc = 0x3056ECu;
    // 0x3056ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056f0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3056f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3056f4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3056F4u;
    {
        const bool branch_taken_0x3056f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3056f4) {
            ctx->pc = 0x3057BCu;
            goto label_3057bc;
        }
    }
    ctx->pc = 0x3056FCu;
    // 0x3056fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305700: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x305700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x305704: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x305704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305708: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305708u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399620u));
    // 0x30570c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30570cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305710: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305714: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305718: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30571c: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x30571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305720: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305724: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x305724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305728: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x30572c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30572Cu;
    SET_GPR_U32(ctx, 31, 0x305734u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30572Cu, 0x305734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305734u;
label_305734:
    // 0x305734: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x305734u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305738: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305738u;
    {
        const bool branch_taken_0x305738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305738) {
            ctx->pc = 0x3057BCu;
            goto label_3057bc;
        }
    }
    ctx->pc = 0x305740u;
    // 0x305740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305744: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305748: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30574c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305750: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305754: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x305754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305758: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x305758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x30575c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x30575cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305760: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305764: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305768: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x30576c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30576cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305770: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305774: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x305774u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305778: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x30577c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30577cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305780: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305784: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x305784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305788: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30578c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305790: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x305790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305794: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x305794u;
    SET_GPR_U32(ctx, 31, 0x30579Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x30579Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30579Cu) { return; }
    ctx->pc = 0x30579Cu;
label_30579c:
    // 0x30579c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x30579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x3057a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3057a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3057a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3057a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3057a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3057a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3057ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3057acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3057b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3057b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3057b4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x3057B4u;
    SET_GPR_U32(ctx, 31, 0x3057BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x3057B4u, 0x3057BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057BCu;
label_3057bc:
    // 0x3057bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3057bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3057c0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x3057c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x3057c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3057C4u;
    {
        const bool branch_taken_0x3057c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057c4) {
            ctx->pc = 0x305840u;
            goto label_305840;
        }
    }
    ctx->pc = 0x3057CCu;
    // 0x3057cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3057ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3057d0: 0x24429630  addiu       $v0, $v0, -0x69D0
    ctx->pc = 0x3057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
    // 0x3057d4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3057d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3057d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3057d8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399630u));
    // 0x3057dc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3057dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3057e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3057e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3057e4: 0x24429640  addiu       $v0, $v0, -0x69C0
    ctx->pc = 0x3057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940224));
    // 0x3057e8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3057e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3057ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3057ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399640u));
    // 0x3057f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3057f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3057f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3057f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3057f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3057f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3057fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3057fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x305804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30580c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305814: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x305814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305818: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30581c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305820: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305824: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x305824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305828: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x305828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30582c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30582cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305830: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x305830u;
    SET_GPR_U32(ctx, 31, 0x305838u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x305830u, 0x305838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305838u;
label_305838:
    // 0x305838: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30583c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30583cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_305840:
    // 0x305840: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305844: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305848: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305848u;
    SET_GPR_U32(ctx, 31, 0x305850u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305848u, 0x305850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305850u;
label_305850:
    // 0x305850: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305854: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305854u;
    SET_GPR_U32(ctx, 31, 0x30585Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305854u, 0x30585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30585Cu;
label_30585c:
    // 0x30585c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30585cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305864: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305864u;
    SET_GPR_U32(ctx, 31, 0x30586Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305864u, 0x30586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30586Cu;
label_30586c:
    // 0x30586c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305870: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305870u;
    SET_GPR_U32(ctx, 31, 0x305878u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305870u, 0x305878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305878u;
label_305878:
    // 0x305878: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30587c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30587cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305880: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305880u;
    {
        const bool branch_taken_0x305880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305880) {
            ctx->pc = 0x3058B8u;
            goto label_3058b8;
        }
    }
    ctx->pc = 0x305888u;
    // 0x305888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30588c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305890: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x305894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305898: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30589c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30589cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3058a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3058a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3058a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3058acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3058b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3058b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3058b8:
    // 0x3058b8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3058b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3058bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3058bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3058c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3058c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3058c4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3058c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3058c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3058C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3058C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3058D0u;
}
