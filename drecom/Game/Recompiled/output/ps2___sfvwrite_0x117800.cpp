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

// Function: __sfvwrite
// Address: 0x117800 - 0x117bd8
void ps2___sfvwrite_0x117800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfvwrite_0x117800");
#endif

    switch (ctx->pc) {
        case 0x117800u: goto label_117800;
        case 0x117804u: goto label_117804;
        case 0x117808u: goto label_117808;
        case 0x11780cu: goto label_11780c;
        case 0x117810u: goto label_117810;
        case 0x117814u: goto label_117814;
        case 0x117818u: goto label_117818;
        case 0x11781cu: goto label_11781c;
        case 0x117820u: goto label_117820;
        case 0x117824u: goto label_117824;
        case 0x117828u: goto label_117828;
        case 0x11782cu: goto label_11782c;
        case 0x117830u: goto label_117830;
        case 0x117834u: goto label_117834;
        case 0x117838u: goto label_117838;
        case 0x11783cu: goto label_11783c;
        case 0x117840u: goto label_117840;
        case 0x117844u: goto label_117844;
        case 0x117848u: goto label_117848;
        case 0x11784cu: goto label_11784c;
        case 0x117850u: goto label_117850;
        case 0x117854u: goto label_117854;
        case 0x117858u: goto label_117858;
        case 0x11785cu: goto label_11785c;
        case 0x117860u: goto label_117860;
        case 0x117864u: goto label_117864;
        case 0x117868u: goto label_117868;
        case 0x11786cu: goto label_11786c;
        case 0x117870u: goto label_117870;
        case 0x117874u: goto label_117874;
        case 0x117878u: goto label_117878;
        case 0x11787cu: goto label_11787c;
        case 0x117880u: goto label_117880;
        case 0x117884u: goto label_117884;
        case 0x117888u: goto label_117888;
        case 0x11788cu: goto label_11788c;
        case 0x117890u: goto label_117890;
        case 0x117894u: goto label_117894;
        case 0x117898u: goto label_117898;
        case 0x11789cu: goto label_11789c;
        case 0x1178a0u: goto label_1178a0;
        case 0x1178a4u: goto label_1178a4;
        case 0x1178a8u: goto label_1178a8;
        case 0x1178acu: goto label_1178ac;
        case 0x1178b0u: goto label_1178b0;
        case 0x1178b4u: goto label_1178b4;
        case 0x1178b8u: goto label_1178b8;
        case 0x1178bcu: goto label_1178bc;
        case 0x1178c0u: goto label_1178c0;
        case 0x1178c4u: goto label_1178c4;
        case 0x1178c8u: goto label_1178c8;
        case 0x1178ccu: goto label_1178cc;
        case 0x1178d0u: goto label_1178d0;
        case 0x1178d4u: goto label_1178d4;
        case 0x1178d8u: goto label_1178d8;
        case 0x1178dcu: goto label_1178dc;
        case 0x1178e0u: goto label_1178e0;
        case 0x1178e4u: goto label_1178e4;
        case 0x1178e8u: goto label_1178e8;
        case 0x1178ecu: goto label_1178ec;
        case 0x1178f0u: goto label_1178f0;
        case 0x1178f4u: goto label_1178f4;
        case 0x1178f8u: goto label_1178f8;
        case 0x1178fcu: goto label_1178fc;
        case 0x117900u: goto label_117900;
        case 0x117904u: goto label_117904;
        case 0x117908u: goto label_117908;
        case 0x11790cu: goto label_11790c;
        case 0x117910u: goto label_117910;
        case 0x117914u: goto label_117914;
        case 0x117918u: goto label_117918;
        case 0x11791cu: goto label_11791c;
        case 0x117920u: goto label_117920;
        case 0x117924u: goto label_117924;
        case 0x117928u: goto label_117928;
        case 0x11792cu: goto label_11792c;
        case 0x117930u: goto label_117930;
        case 0x117934u: goto label_117934;
        case 0x117938u: goto label_117938;
        case 0x11793cu: goto label_11793c;
        case 0x117940u: goto label_117940;
        case 0x117944u: goto label_117944;
        case 0x117948u: goto label_117948;
        case 0x11794cu: goto label_11794c;
        case 0x117950u: goto label_117950;
        case 0x117954u: goto label_117954;
        case 0x117958u: goto label_117958;
        case 0x11795cu: goto label_11795c;
        case 0x117960u: goto label_117960;
        case 0x117964u: goto label_117964;
        case 0x117968u: goto label_117968;
        case 0x11796cu: goto label_11796c;
        case 0x117970u: goto label_117970;
        case 0x117974u: goto label_117974;
        case 0x117978u: goto label_117978;
        case 0x11797cu: goto label_11797c;
        case 0x117980u: goto label_117980;
        case 0x117984u: goto label_117984;
        case 0x117988u: goto label_117988;
        case 0x11798cu: goto label_11798c;
        case 0x117990u: goto label_117990;
        case 0x117994u: goto label_117994;
        case 0x117998u: goto label_117998;
        case 0x11799cu: goto label_11799c;
        case 0x1179a0u: goto label_1179a0;
        case 0x1179a4u: goto label_1179a4;
        case 0x1179a8u: goto label_1179a8;
        case 0x1179acu: goto label_1179ac;
        case 0x1179b0u: goto label_1179b0;
        case 0x1179b4u: goto label_1179b4;
        case 0x1179b8u: goto label_1179b8;
        case 0x1179bcu: goto label_1179bc;
        case 0x1179c0u: goto label_1179c0;
        case 0x1179c4u: goto label_1179c4;
        case 0x1179c8u: goto label_1179c8;
        case 0x1179ccu: goto label_1179cc;
        case 0x1179d0u: goto label_1179d0;
        case 0x1179d4u: goto label_1179d4;
        case 0x1179d8u: goto label_1179d8;
        case 0x1179dcu: goto label_1179dc;
        case 0x1179e0u: goto label_1179e0;
        case 0x1179e4u: goto label_1179e4;
        case 0x1179e8u: goto label_1179e8;
        case 0x1179ecu: goto label_1179ec;
        case 0x1179f0u: goto label_1179f0;
        case 0x1179f4u: goto label_1179f4;
        case 0x1179f8u: goto label_1179f8;
        case 0x1179fcu: goto label_1179fc;
        case 0x117a00u: goto label_117a00;
        case 0x117a04u: goto label_117a04;
        case 0x117a08u: goto label_117a08;
        case 0x117a0cu: goto label_117a0c;
        case 0x117a10u: goto label_117a10;
        case 0x117a14u: goto label_117a14;
        case 0x117a18u: goto label_117a18;
        case 0x117a1cu: goto label_117a1c;
        case 0x117a20u: goto label_117a20;
        case 0x117a24u: goto label_117a24;
        case 0x117a28u: goto label_117a28;
        case 0x117a2cu: goto label_117a2c;
        case 0x117a30u: goto label_117a30;
        case 0x117a34u: goto label_117a34;
        case 0x117a38u: goto label_117a38;
        case 0x117a3cu: goto label_117a3c;
        case 0x117a40u: goto label_117a40;
        case 0x117a44u: goto label_117a44;
        case 0x117a48u: goto label_117a48;
        case 0x117a4cu: goto label_117a4c;
        case 0x117a50u: goto label_117a50;
        case 0x117a54u: goto label_117a54;
        case 0x117a58u: goto label_117a58;
        case 0x117a5cu: goto label_117a5c;
        case 0x117a60u: goto label_117a60;
        case 0x117a64u: goto label_117a64;
        case 0x117a68u: goto label_117a68;
        case 0x117a6cu: goto label_117a6c;
        case 0x117a70u: goto label_117a70;
        case 0x117a74u: goto label_117a74;
        case 0x117a78u: goto label_117a78;
        case 0x117a7cu: goto label_117a7c;
        case 0x117a80u: goto label_117a80;
        case 0x117a84u: goto label_117a84;
        case 0x117a88u: goto label_117a88;
        case 0x117a8cu: goto label_117a8c;
        case 0x117a90u: goto label_117a90;
        case 0x117a94u: goto label_117a94;
        case 0x117a98u: goto label_117a98;
        case 0x117a9cu: goto label_117a9c;
        case 0x117aa0u: goto label_117aa0;
        case 0x117aa4u: goto label_117aa4;
        case 0x117aa8u: goto label_117aa8;
        case 0x117aacu: goto label_117aac;
        case 0x117ab0u: goto label_117ab0;
        case 0x117ab4u: goto label_117ab4;
        case 0x117ab8u: goto label_117ab8;
        case 0x117abcu: goto label_117abc;
        case 0x117ac0u: goto label_117ac0;
        case 0x117ac4u: goto label_117ac4;
        case 0x117ac8u: goto label_117ac8;
        case 0x117accu: goto label_117acc;
        case 0x117ad0u: goto label_117ad0;
        case 0x117ad4u: goto label_117ad4;
        case 0x117ad8u: goto label_117ad8;
        case 0x117adcu: goto label_117adc;
        case 0x117ae0u: goto label_117ae0;
        case 0x117ae4u: goto label_117ae4;
        case 0x117ae8u: goto label_117ae8;
        case 0x117aecu: goto label_117aec;
        case 0x117af0u: goto label_117af0;
        case 0x117af4u: goto label_117af4;
        case 0x117af8u: goto label_117af8;
        case 0x117afcu: goto label_117afc;
        case 0x117b00u: goto label_117b00;
        case 0x117b04u: goto label_117b04;
        case 0x117b08u: goto label_117b08;
        case 0x117b0cu: goto label_117b0c;
        case 0x117b10u: goto label_117b10;
        case 0x117b14u: goto label_117b14;
        case 0x117b18u: goto label_117b18;
        case 0x117b1cu: goto label_117b1c;
        case 0x117b20u: goto label_117b20;
        case 0x117b24u: goto label_117b24;
        case 0x117b28u: goto label_117b28;
        case 0x117b2cu: goto label_117b2c;
        case 0x117b30u: goto label_117b30;
        case 0x117b34u: goto label_117b34;
        case 0x117b38u: goto label_117b38;
        case 0x117b3cu: goto label_117b3c;
        case 0x117b40u: goto label_117b40;
        case 0x117b44u: goto label_117b44;
        case 0x117b48u: goto label_117b48;
        case 0x117b4cu: goto label_117b4c;
        case 0x117b50u: goto label_117b50;
        case 0x117b54u: goto label_117b54;
        case 0x117b58u: goto label_117b58;
        case 0x117b5cu: goto label_117b5c;
        case 0x117b60u: goto label_117b60;
        case 0x117b64u: goto label_117b64;
        case 0x117b68u: goto label_117b68;
        case 0x117b6cu: goto label_117b6c;
        case 0x117b70u: goto label_117b70;
        case 0x117b74u: goto label_117b74;
        case 0x117b78u: goto label_117b78;
        case 0x117b7cu: goto label_117b7c;
        case 0x117b80u: goto label_117b80;
        case 0x117b84u: goto label_117b84;
        case 0x117b88u: goto label_117b88;
        case 0x117b8cu: goto label_117b8c;
        case 0x117b90u: goto label_117b90;
        case 0x117b94u: goto label_117b94;
        case 0x117b98u: goto label_117b98;
        case 0x117b9cu: goto label_117b9c;
        case 0x117ba0u: goto label_117ba0;
        case 0x117ba4u: goto label_117ba4;
        case 0x117ba8u: goto label_117ba8;
        case 0x117bacu: goto label_117bac;
        case 0x117bb0u: goto label_117bb0;
        case 0x117bb4u: goto label_117bb4;
        case 0x117bb8u: goto label_117bb8;
        case 0x117bbcu: goto label_117bbc;
        case 0x117bc0u: goto label_117bc0;
        case 0x117bc4u: goto label_117bc4;
        case 0x117bc8u: goto label_117bc8;
        case 0x117bccu: goto label_117bcc;
        case 0x117bd0u: goto label_117bd0;
        case 0x117bd4u: goto label_117bd4;
        default: break;
    }

    ctx->pc = 0x117800u;

label_117800:
    // 0x117800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_117804:
    // 0x117804: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x117804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_117808:
    // 0x117808: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11780c:
    // 0x11780c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11780cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_117810:
    // 0x117810: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x117810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_117814:
    // 0x117814: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x117814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_117818:
    // 0x117818: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x117818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11781c:
    // 0x11781c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_117820:
    // 0x117820: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_117824:
    // 0x117824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_117828:
    // 0x117828: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11782c:
    // 0x11782c: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_117830:
    // 0x117830: 0x124000d8  beqz        $s2, . + 4 + (0xD8 << 2)
label_117834:
    if (ctx->pc == 0x117834u) {
        ctx->pc = 0x117834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117830u;
        // 0x117834: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117838u;
        goto label_117838;
    }
    ctx->pc = 0x117830u;
    {
        const bool branch_taken_0x117830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117830u;
        // 0x117834: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117830) {
            ctx->pc = 0x117B94u;
            goto label_117b94;
        }
    }
    ctx->pc = 0x117838u;
label_117838:
    // 0x117838: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x117838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_11783c:
    // 0x11783c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11783cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_117840:
    // 0x117840: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_117844:
    if (ctx->pc == 0x117844u) {
        ctx->pc = 0x117848u;
        goto label_117848;
    }
    ctx->pc = 0x117840u;
    {
        const bool branch_taken_0x117840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117840) {
            ctx->pc = 0x117854u;
            goto label_117854;
        }
    }
    ctx->pc = 0x117848u;
label_117848:
    // 0x117848: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x117848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_11784c:
    // 0x11784c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_117850:
    if (ctx->pc == 0x117850u) {
        ctx->pc = 0x117850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11784Cu;
        // 0x117850: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117854u;
        goto label_117854;
    }
    ctx->pc = 0x11784Cu;
    {
        const bool branch_taken_0x11784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11784c) {
            ctx->pc = 0x117850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11784Cu;
            // 0x117850: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11786Cu;
            goto label_11786c;
        }
    }
    ctx->pc = 0x117854u;
label_117854:
    // 0x117854: 0xc0472e4  jal         func_11CB90
label_117858:
    if (ctx->pc == 0x117858u) {
        ctx->pc = 0x117858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117854u;
        // 0x117858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11785Cu;
        goto label_11785c;
    }
    ctx->pc = 0x117854u;
    SET_GPR_U32(ctx, 31, 0x11785Cu);
    ctx->pc = 0x117858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117854u;
    // 0x117858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CB90u, 0x117854u, 0x11785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11785Cu;
label_11785c:
    // 0x11785c: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_117860:
    if (ctx->pc == 0x117860u) {
        ctx->pc = 0x117860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11785Cu;
        // 0x117860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117864u;
        goto label_117864;
    }
    ctx->pc = 0x11785Cu;
    {
        const bool branch_taken_0x11785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11785Cu;
        // 0x117860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11785c) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117864u;
label_117864:
    // 0x117864: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x117864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_117868:
    // 0x117868: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x117868u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_11786c:
    // 0x11786c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x11786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_117870:
    // 0x117870: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_117874:
    if (ctx->pc == 0x117874u) {
        ctx->pc = 0x117874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117870u;
        // 0x117874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117878u;
        goto label_117878;
    }
    ctx->pc = 0x117870u;
    {
        const bool branch_taken_0x117870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117870u;
        // 0x117874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117870) {
            ctx->pc = 0x1178ECu;
            goto label_1178ec;
        }
    }
    ctx->pc = 0x117878u;
label_117878:
    // 0x117878: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x117878u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_11787c:
    // 0x11787c: 0x0  nop
    ctx->pc = 0x11787cu;
    // NOP
label_117880:
    // 0x117880: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_117884:
    if (ctx->pc == 0x117884u) {
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117888u;
        goto label_117888;
    }
    ctx->pc = 0x117880u;
    {
        const bool branch_taken_0x117880 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117880) {
            ctx->pc = 0x1178ACu;
            goto label_1178ac;
        }
    }
    ctx->pc = 0x117888u;
label_117888:
    // 0x117888: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11788c:
    // 0x11788c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x11788cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_117890:
    // 0x117890: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_117894:
    // 0x117894: 0x0  nop
    ctx->pc = 0x117894u;
    // NOP
label_117898:
    // 0x117898: 0x0  nop
    ctx->pc = 0x117898u;
    // NOP
label_11789c:
    // 0x11789c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1178a0:
    if (ctx->pc == 0x1178A0u) {
        ctx->pc = 0x1178A4u;
        goto label_1178a4;
    }
    ctx->pc = 0x11789Cu;
    {
        const bool branch_taken_0x11789c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11789c) {
            ctx->pc = 0x117888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117888;
        }
    }
    ctx->pc = 0x1178A4u;
label_1178a4:
    // 0x1178a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1178a8:
    if (ctx->pc == 0x1178A8u) {
        ctx->pc = 0x1178A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A4u;
        // 0x1178a8: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178ACu;
        goto label_1178ac;
    }
    ctx->pc = 0x1178A4u;
    {
        const bool branch_taken_0x1178a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A4u;
        // 0x1178a8: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a4) {
            ctx->pc = 0x1178B0u;
            goto label_1178b0;
        }
    }
    ctx->pc = 0x1178ACu;
label_1178ac:
    // 0x1178ac: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x1178acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1178b0:
    // 0x1178b0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1178b4:
    // 0x1178b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1178b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1178b8:
    // 0x1178b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1178b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1178bc:
    // 0x1178bc: 0x60f809  jalr        $v1
label_1178c0:
    if (ctx->pc == 0x1178C0u) {
        ctx->pc = 0x1178C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178BCu;
        // 0x1178c0: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178C4u;
        goto label_1178c4;
    }
    ctx->pc = 0x1178BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1178C4u);
        ctx->pc = 0x1178C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178BCu;
        // 0x1178c0: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178BCu, 0x1178C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178C4u;
label_1178c4:
    // 0x1178c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1178c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1178c8:
    // 0x1178c8: 0x1a0000b4  blez        $s0, . + 4 + (0xB4 << 2)
label_1178cc:
    if (ctx->pc == 0x1178CCu) {
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178D0u;
        goto label_1178d0;
    }
    ctx->pc = 0x1178C8u;
    {
        const bool branch_taken_0x1178c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178c8) {
            ctx->pc = 0x117B9Cu;
            goto label_117b9c;
        }
    }
    ctx->pc = 0x1178D0u;
label_1178d0:
    // 0x1178d0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1178d4:
    // 0x1178d4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1178d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1178d8:
    // 0x1178d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1178d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1178dc:
    // 0x1178dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1178e0:
    if (ctx->pc == 0x1178E0u) {
        ctx->pc = 0x1178E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178DCu;
        // 0x1178e0: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178E4u;
        goto label_1178e4;
    }
    ctx->pc = 0x1178DCu;
    {
        const bool branch_taken_0x1178dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178DCu;
        // 0x1178e0: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178dc) {
            ctx->pc = 0x117880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117880;
        }
    }
    ctx->pc = 0x1178E4u;
label_1178e4:
    // 0x1178e4: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1178e8:
    if (ctx->pc == 0x1178E8u) {
        ctx->pc = 0x1178E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178E4u;
        // 0x1178e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178ECu;
        goto label_1178ec;
    }
    ctx->pc = 0x1178E4u;
    {
        const bool branch_taken_0x1178e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178E4u;
        // 0x1178e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178e4) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x1178ECu;
label_1178ec:
    // 0x1178ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1178ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1178f0:
    // 0x1178f0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_1178f4:
    if (ctx->pc == 0x1178F4u) {
        ctx->pc = 0x1178F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178F0u;
        // 0x1178f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178F8u;
        goto label_1178f8;
    }
    ctx->pc = 0x1178F0u;
    {
        const bool branch_taken_0x1178f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178F0u;
        // 0x1178f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178f0) {
            ctx->pc = 0x117A40u;
            goto label_117a40;
        }
    }
    ctx->pc = 0x1178F8u;
label_1178f8:
    // 0x1178f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1178fc:
    if (ctx->pc == 0x1178FCu) {
        ctx->pc = 0x117900u;
        goto label_117900;
    }
    ctx->pc = 0x1178F8u;
    {
        const bool branch_taken_0x1178f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1178f8) {
            ctx->pc = 0x117904u;
            goto label_117904;
        }
    }
    ctx->pc = 0x117900u;
label_117900:
    // 0x117900: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x117900u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_117904:
    // 0x117904: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
label_117908:
    if (ctx->pc == 0x117908u) {
        ctx->pc = 0x117908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117904u;
        // 0x117908: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11790Cu;
        goto label_11790c;
    }
    ctx->pc = 0x117904u;
    {
        const bool branch_taken_0x117904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x117908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117904u;
        // 0x117908: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117904) {
            ctx->pc = 0x117934u;
            goto label_117934;
        }
    }
    ctx->pc = 0x11790Cu;
label_11790c:
    // 0x11790c: 0x0  nop
    ctx->pc = 0x11790cu;
    // NOP
label_117910:
    // 0x117910: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x117910u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_117914:
    // 0x117914: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x117914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_117918:
    // 0x117918: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_11791c:
    // 0x11791c: 0x0  nop
    ctx->pc = 0x11791cu;
    // NOP
label_117920:
    // 0x117920: 0x0  nop
    ctx->pc = 0x117920u;
    // NOP
label_117924:
    // 0x117924: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_117928:
    if (ctx->pc == 0x117928u) {
        ctx->pc = 0x11792Cu;
        goto label_11792c;
    }
    ctx->pc = 0x117924u;
    {
        const bool branch_taken_0x117924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117924) {
            ctx->pc = 0x117910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117910;
        }
    }
    ctx->pc = 0x11792Cu;
label_11792c:
    // 0x11792c: 0x10000002  b           . + 4 + (0x2 << 2)
label_117930:
    if (ctx->pc == 0x117930u) {
        ctx->pc = 0x117930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11792Cu;
        // 0x117930: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117934u;
        goto label_117934;
    }
    ctx->pc = 0x11792Cu;
    {
        const bool branch_taken_0x11792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11792Cu;
        // 0x117930: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11792c) {
            ctx->pc = 0x117938u;
            goto label_117938;
        }
    }
    ctx->pc = 0x117934u;
label_117934:
    // 0x117934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117938:
    // 0x117938: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x117938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_11793c:
    // 0x11793c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_117940:
    if (ctx->pc == 0x117940u) {
        ctx->pc = 0x117940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11793Cu;
        // 0x117940: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117944u;
        goto label_117944;
    }
    ctx->pc = 0x11793Cu;
    {
        const bool branch_taken_0x11793c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11793Cu;
        // 0x117940: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11793c) {
            ctx->pc = 0x117978u;
            goto label_117978;
        }
    }
    ctx->pc = 0x117944u;
label_117944:
    // 0x117944: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x117944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117948:
    // 0x117948: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x117948u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_11794c:
    // 0x11794c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117950:
    // 0x117950: 0xc0462d2  jal         func_118B48
label_117954:
    if (ctx->pc == 0x117954u) {
        ctx->pc = 0x117954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117950u;
        // 0x117954: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117958u;
        goto label_117958;
    }
    ctx->pc = 0x117950u;
    SET_GPR_U32(ctx, 31, 0x117958u);
    ctx->pc = 0x117954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117950u;
    // 0x117954: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117958u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117958u) { return; }
    ctx->pc = 0x117958u;
label_117958:
    // 0x117958: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_11795c:
    // 0x11795c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117960:
    // 0x117960: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_117964:
    // 0x117964: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x117964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_117968:
    // 0x117968: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x117968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_11796c:
    // 0x11796c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11796cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_117970:
    // 0x117970: 0x1000002b  b           . + 4 + (0x2B << 2)
label_117974:
    if (ctx->pc == 0x117974u) {
        ctx->pc = 0x117974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117970u;
        // 0x117974: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117978u;
        goto label_117978;
    }
    ctx->pc = 0x117970u;
    {
        const bool branch_taken_0x117970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117970u;
        // 0x117974: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117970) {
            ctx->pc = 0x117A20u;
            goto label_117a20;
        }
    }
    ctx->pc = 0x117978u;
label_117978:
    // 0x117978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x117978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11797c:
    // 0x11797c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_117980:
    // 0x117980: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x117980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_117984:
    // 0x117984: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_117988:
    if (ctx->pc == 0x117988u) {
        ctx->pc = 0x117988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117984u;
        // 0x117988: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11798Cu;
        goto label_11798c;
    }
    ctx->pc = 0x117984u;
    {
        const bool branch_taken_0x117984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117984u;
        // 0x117988: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117984) {
            ctx->pc = 0x1179C0u;
            goto label_1179c0;
        }
    }
    ctx->pc = 0x11798Cu;
label_11798c:
    // 0x11798c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_117990:
    if (ctx->pc == 0x117990u) {
        ctx->pc = 0x117990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11798Cu;
        // 0x117990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117994u;
        goto label_117994;
    }
    ctx->pc = 0x11798Cu;
    {
        const bool branch_taken_0x11798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11798Cu;
        // 0x117990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11798c) {
            ctx->pc = 0x1179C0u;
            goto label_1179c0;
        }
    }
    ctx->pc = 0x117994u;
label_117994:
    // 0x117994: 0xc0462d2  jal         func_118B48
label_117998:
    if (ctx->pc == 0x117998u) {
        ctx->pc = 0x117998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117994u;
        // 0x117998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11799Cu;
        goto label_11799c;
    }
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 31, 0x11799Cu);
    ctx->pc = 0x117998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117994u;
    // 0x117998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x11799Cu;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11799Cu) { return; }
    ctx->pc = 0x11799Cu;
label_11799c:
    // 0x11799c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1179a0:
    // 0x1179a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1179a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1179a4:
    // 0x1179a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1179a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1179a8:
    // 0x1179a8: 0xc045bec  jal         func_116FB0
label_1179ac:
    if (ctx->pc == 0x1179ACu) {
        ctx->pc = 0x1179ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179A8u;
        // 0x1179ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179B0u;
        goto label_1179b0;
    }
    ctx->pc = 0x1179A8u;
    SET_GPR_U32(ctx, 31, 0x1179B0u);
    ctx->pc = 0x1179ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179A8u;
    // 0x1179ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x1179B0u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1179B0u) { return; }
    ctx->pc = 0x1179B0u;
label_1179b0:
    // 0x1179b0: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_1179b4:
    if (ctx->pc == 0x1179B4u) {
        ctx->pc = 0x1179B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B0u;
        // 0x1179b4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179B8u;
        goto label_1179b8;
    }
    ctx->pc = 0x1179B0u;
    {
        const bool branch_taken_0x1179b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1179b0) {
            ctx->pc = 0x1179B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179B0u;
            // 0x1179b4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117BA0u;
            goto label_117ba0;
        }
    }
    ctx->pc = 0x1179B8u;
label_1179b8:
    // 0x1179b8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1179bc:
    if (ctx->pc == 0x1179BCu) {
        ctx->pc = 0x1179BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B8u;
        // 0x1179bc: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179C0u;
        goto label_1179c0;
    }
    ctx->pc = 0x1179B8u;
    {
        const bool branch_taken_0x1179b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B8u;
        // 0x1179bc: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179b8) {
            ctx->pc = 0x117A24u;
            goto label_117a24;
        }
    }
    ctx->pc = 0x1179C0u;
label_1179c0:
    // 0x1179c0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1179c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1179c4:
    // 0x1179c4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1179c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1179c8:
    // 0x1179c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1179cc:
    if (ctx->pc == 0x1179CCu) {
        ctx->pc = 0x1179CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179C8u;
        // 0x1179cc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179D0u;
        goto label_1179d0;
    }
    ctx->pc = 0x1179C8u;
    {
        const bool branch_taken_0x1179c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1179c8) {
            ctx->pc = 0x1179CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179C8u;
            // 0x1179cc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179F8u;
            goto label_1179f8;
        }
    }
    ctx->pc = 0x1179D0u;
label_1179d0:
    // 0x1179d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1179d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1179d4:
    // 0x1179d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1179d8:
    // 0x1179d8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1179d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1179dc:
    // 0x1179dc: 0x40f809  jalr        $v0
label_1179e0:
    if (ctx->pc == 0x1179E0u) {
        ctx->pc = 0x1179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179DCu;
        // 0x1179e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179E4u;
        goto label_1179e4;
    }
    ctx->pc = 0x1179DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1179E4u);
        ctx->pc = 0x1179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179DCu;
        // 0x1179e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179DCu, 0x1179E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1179E4u;
label_1179e4:
    // 0x1179e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1179e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1179e8:
    // 0x1179e8: 0x5a00006d  blezl       $s0, . + 4 + (0x6D << 2)
label_1179ec:
    if (ctx->pc == 0x1179ECu) {
        ctx->pc = 0x1179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179E8u;
        // 0x1179ec: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179F0u;
        goto label_1179f0;
    }
    ctx->pc = 0x1179E8u;
    {
        const bool branch_taken_0x1179e8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1179e8) {
            ctx->pc = 0x1179ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179E8u;
            // 0x1179ec: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117BA0u;
            goto label_117ba0;
        }
    }
    ctx->pc = 0x1179F0u;
label_1179f0:
    // 0x1179f0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1179f4:
    if (ctx->pc == 0x1179F4u) {
        ctx->pc = 0x1179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179F0u;
        // 0x1179f4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179F8u;
        goto label_1179f8;
    }
    ctx->pc = 0x1179F0u;
    {
        const bool branch_taken_0x1179f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179F0u;
        // 0x1179f4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179f0) {
            ctx->pc = 0x117A24u;
            goto label_117a24;
        }
    }
    ctx->pc = 0x1179F8u;
label_1179f8:
    // 0x1179f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1179f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1179fc:
    // 0x1179fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1179fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117a00:
    // 0x117a00: 0xc0462d2  jal         func_118B48
label_117a04:
    if (ctx->pc == 0x117A04u) {
        ctx->pc = 0x117A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A00u;
        // 0x117a04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A08u;
        goto label_117a08;
    }
    ctx->pc = 0x117A00u;
    SET_GPR_U32(ctx, 31, 0x117A08u);
    ctx->pc = 0x117A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A00u;
    // 0x117a04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117A08u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117A08u) { return; }
    ctx->pc = 0x117A08u;
label_117a08:
    // 0x117a08: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_117a0c:
    // 0x117a0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x117a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117a10:
    // 0x117a10: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x117a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_117a14:
    // 0x117a14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x117a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_117a18:
    // 0x117a18: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x117a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_117a1c:
    // 0x117a1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x117a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_117a20:
    // 0x117a20: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x117a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_117a24:
    // 0x117a24: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x117a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_117a28:
    // 0x117a28: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x117a28u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_117a2c:
    // 0x117a2c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x117a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_117a30:
    // 0x117a30: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_117a34:
    if (ctx->pc == 0x117A34u) {
        ctx->pc = 0x117A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A30u;
        // 0x117a34: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A38u;
        goto label_117a38;
    }
    ctx->pc = 0x117A30u;
    {
        const bool branch_taken_0x117a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A30u;
        // 0x117a34: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a30) {
            ctx->pc = 0x117900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117900;
        }
    }
    ctx->pc = 0x117A38u;
label_117a38:
    // 0x117a38: 0x1000005c  b           . + 4 + (0x5C << 2)
label_117a3c:
    if (ctx->pc == 0x117A3Cu) {
        ctx->pc = 0x117A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A38u;
        // 0x117a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A40u;
        goto label_117a40;
    }
    ctx->pc = 0x117A38u;
    {
        const bool branch_taken_0x117a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A38u;
        // 0x117a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a38) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117A40u;
label_117a40:
    // 0x117a40: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_117a44:
    if (ctx->pc == 0x117A44u) {
        ctx->pc = 0x117A48u;
        goto label_117a48;
    }
    ctx->pc = 0x117A40u;
    {
        const bool branch_taken_0x117a40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x117a40) {
            ctx->pc = 0x117A6Cu;
            goto label_117a6c;
        }
    }
    ctx->pc = 0x117A48u;
label_117a48:
    // 0x117a48: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x117a48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117a4c:
    // 0x117a4c: 0x0  nop
    ctx->pc = 0x117a4cu;
    // NOP
label_117a50:
    // 0x117a50: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_117a54:
    // 0x117a54: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_117a58:
    // 0x117a58: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x117a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_117a5c:
    // 0x117a5c: 0x0  nop
    ctx->pc = 0x117a5cu;
    // NOP
label_117a60:
    // 0x117a60: 0x0  nop
    ctx->pc = 0x117a60u;
    // NOP
label_117a64:
    // 0x117a64: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_117a68:
    if (ctx->pc == 0x117A68u) {
        ctx->pc = 0x117A6Cu;
        goto label_117a6c;
    }
    ctx->pc = 0x117A64u;
    {
        const bool branch_taken_0x117a64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117a64) {
            ctx->pc = 0x117A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117a50;
        }
    }
    ctx->pc = 0x117A6Cu;
label_117a6c:
    // 0x117a6c: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_117a70:
    if (ctx->pc == 0x117A70u) {
        ctx->pc = 0x117A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A6Cu;
        // 0x117a70: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A74u;
        goto label_117a74;
    }
    ctx->pc = 0x117A6Cu;
    {
        const bool branch_taken_0x117a6c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x117a6c) {
            ctx->pc = 0x117A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117A6Cu;
            // 0x117a70: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117AA4u;
            goto label_117aa4;
        }
    }
    ctx->pc = 0x117A74u;
label_117a74:
    // 0x117a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x117a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117a78:
    // 0x117a78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x117a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_117a7c:
    // 0x117a7c: 0xc046248  jal         func_118920
label_117a80:
    if (ctx->pc == 0x117A80u) {
        ctx->pc = 0x117A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A7Cu;
        // 0x117a80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A84u;
        goto label_117a84;
    }
    ctx->pc = 0x117A7Cu;
    SET_GPR_U32(ctx, 31, 0x117A84u);
    ctx->pc = 0x117A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A7Cu;
    // 0x117a80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118920u;
    {
        ctx->pc = 0x117A84u;
        ps2_stubs::memchr(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117A84u) { return; }
    ctx->pc = 0x117A84u;
label_117a84:
    // 0x117a84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117a88:
    // 0x117a88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_117a8c:
    if (ctx->pc == 0x117A8Cu) {
        ctx->pc = 0x117A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A88u;
        // 0x117a8c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A90u;
        goto label_117a90;
    }
    ctx->pc = 0x117A88u;
    {
        const bool branch_taken_0x117a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A88u;
        // 0x117a8c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a88) {
            ctx->pc = 0x117A98u;
            goto label_117a98;
        }
    }
    ctx->pc = 0x117A90u;
label_117a90:
    // 0x117a90: 0x10000002  b           . + 4 + (0x2 << 2)
label_117a94:
    if (ctx->pc == 0x117A94u) {
        ctx->pc = 0x117A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A90u;
        // 0x117a94: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A98u;
        goto label_117a98;
    }
    ctx->pc = 0x117A90u;
    {
        const bool branch_taken_0x117a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A90u;
        // 0x117a94: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a90) {
            ctx->pc = 0x117A9Cu;
            goto label_117a9c;
        }
    }
    ctx->pc = 0x117A98u;
label_117a98:
    // 0x117a98: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x117a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_117a9c:
    // 0x117a9c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117aa0:
    // 0x117aa0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x117aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_117aa4:
    // 0x117aa4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x117aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_117aa8:
    // 0x117aa8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x117aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_117aac:
    // 0x117aac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117ab0:
    // 0x117ab0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x117ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117ab4:
    // 0x117ab4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x117ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_117ab8:
    // 0x117ab8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x117ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_117abc:
    // 0x117abc: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x117abcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_117ac0:
    // 0x117ac0: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x117ac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_117ac4:
    // 0x117ac4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_117ac8:
    if (ctx->pc == 0x117AC8u) {
        ctx->pc = 0x117AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AC4u;
        // 0x117ac8: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117ACCu;
        goto label_117acc;
    }
    ctx->pc = 0x117AC4u;
    {
        const bool branch_taken_0x117ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AC4u;
        // 0x117ac8: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ac4) {
            ctx->pc = 0x117B08u;
            goto label_117b08;
        }
    }
    ctx->pc = 0x117ACCu;
label_117acc:
    // 0x117acc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_117ad0:
    // 0x117ad0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_117ad4:
    if (ctx->pc == 0x117AD4u) {
        ctx->pc = 0x117AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AD0u;
        // 0x117ad4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117AD8u;
        goto label_117ad8;
    }
    ctx->pc = 0x117AD0u;
    {
        const bool branch_taken_0x117ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AD0u;
        // 0x117ad4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ad0) {
            ctx->pc = 0x117B08u;
            goto label_117b08;
        }
    }
    ctx->pc = 0x117AD8u;
label_117ad8:
    // 0x117ad8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117adc:
    // 0x117adc: 0xc0462d2  jal         func_118B48
label_117ae0:
    if (ctx->pc == 0x117AE0u) {
        ctx->pc = 0x117AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117ADCu;
        // 0x117ae0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117AE4u;
        goto label_117ae4;
    }
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x117AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117ADCu;
    // 0x117ae0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117AE4u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117AE4u) { return; }
    ctx->pc = 0x117AE4u;
label_117ae4:
    // 0x117ae4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x117ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117ae8:
    // 0x117ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117aec:
    // 0x117aec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x117aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_117af0:
    // 0x117af0: 0xc045bec  jal         func_116FB0
label_117af4:
    if (ctx->pc == 0x117AF4u) {
        ctx->pc = 0x117AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AF0u;
        // 0x117af4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117AF8u;
        goto label_117af8;
    }
    ctx->pc = 0x117AF0u;
    SET_GPR_U32(ctx, 31, 0x117AF8u);
    ctx->pc = 0x117AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AF0u;
    // 0x117af4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x117AF8u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117AF8u) { return; }
    ctx->pc = 0x117AF8u;
label_117af8:
    // 0x117af8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_117afc:
    if (ctx->pc == 0x117AFCu) {
        ctx->pc = 0x117AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AF8u;
        // 0x117afc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B00u;
        goto label_117b00;
    }
    ctx->pc = 0x117AF8u;
    {
        const bool branch_taken_0x117af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AF8u;
        // 0x117afc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117af8) {
            ctx->pc = 0x117B9Cu;
            goto label_117b9c;
        }
    }
    ctx->pc = 0x117B00u;
label_117b00:
    // 0x117b00: 0x10000018  b           . + 4 + (0x18 << 2)
label_117b04:
    if (ctx->pc == 0x117B04u) {
        ctx->pc = 0x117B08u;
        goto label_117b08;
    }
    ctx->pc = 0x117B00u;
    {
        const bool branch_taken_0x117b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b00) {
            ctx->pc = 0x117B64u;
            goto label_117b64;
        }
    }
    ctx->pc = 0x117B08u;
label_117b08:
    // 0x117b08: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x117b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_117b0c:
    // 0x117b0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_117b10:
    if (ctx->pc == 0x117B10u) {
        ctx->pc = 0x117B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B0Cu;
        // 0x117b10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B14u;
        goto label_117b14;
    }
    ctx->pc = 0x117B0Cu;
    {
        const bool branch_taken_0x117b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B0Cu;
        // 0x117b10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b0c) {
            ctx->pc = 0x117B38u;
            goto label_117b38;
        }
    }
    ctx->pc = 0x117B14u;
label_117b14:
    // 0x117b14: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x117b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_117b18:
    // 0x117b18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117b1c:
    // 0x117b1c: 0x40f809  jalr        $v0
label_117b20:
    if (ctx->pc == 0x117B20u) {
        ctx->pc = 0x117B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B1Cu;
        // 0x117b20: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B24u;
        goto label_117b24;
    }
    ctx->pc = 0x117B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117B24u);
        ctx->pc = 0x117B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B1Cu;
        // 0x117b20: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117B1Cu, 0x117B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117B24u;
label_117b24:
    // 0x117b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117b28:
    // 0x117b28: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_117b2c:
    if (ctx->pc == 0x117B2Cu) {
        ctx->pc = 0x117B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B28u;
        // 0x117b2c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B30u;
        goto label_117b30;
    }
    ctx->pc = 0x117B28u;
    {
        const bool branch_taken_0x117b28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x117B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B28u;
        // 0x117b2c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b28) {
            ctx->pc = 0x117B9Cu;
            goto label_117b9c;
        }
    }
    ctx->pc = 0x117B30u;
label_117b30:
    // 0x117b30: 0x1000000c  b           . + 4 + (0xC << 2)
label_117b34:
    if (ctx->pc == 0x117B34u) {
        ctx->pc = 0x117B38u;
        goto label_117b38;
    }
    ctx->pc = 0x117B30u;
    {
        const bool branch_taken_0x117b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b30) {
            ctx->pc = 0x117B64u;
            goto label_117b64;
        }
    }
    ctx->pc = 0x117B38u;
label_117b38:
    // 0x117b38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x117b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117b3c:
    // 0x117b3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117b40:
    // 0x117b40: 0xc0462d2  jal         func_118B48
label_117b44:
    if (ctx->pc == 0x117B44u) {
        ctx->pc = 0x117B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B40u;
        // 0x117b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B48u;
        goto label_117b48;
    }
    ctx->pc = 0x117B40u;
    SET_GPR_U32(ctx, 31, 0x117B48u);
    ctx->pc = 0x117B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B40u;
    // 0x117b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117B48u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117B48u) { return; }
    ctx->pc = 0x117B48u;
label_117b48:
    // 0x117b48: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_117b4c:
    // 0x117b4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x117b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_117b50:
    // 0x117b50: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x117b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_117b54:
    // 0x117b54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x117b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_117b58:
    // 0x117b58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x117b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_117b5c:
    // 0x117b5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x117b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_117b60:
    // 0x117b60: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x117b60u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_117b64:
    // 0x117b64: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_117b68:
    if (ctx->pc == 0x117B68u) {
        ctx->pc = 0x117B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B64u;
        // 0x117b68: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B6Cu;
        goto label_117b6c;
    }
    ctx->pc = 0x117B64u;
    {
        const bool branch_taken_0x117b64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x117b64) {
            ctx->pc = 0x117B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117B64u;
            // 0x117b68: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117B80u;
            goto label_117b80;
        }
    }
    ctx->pc = 0x117B6Cu;
label_117b6c:
    // 0x117b6c: 0xc045bec  jal         func_116FB0
label_117b70:
    if (ctx->pc == 0x117B70u) {
        ctx->pc = 0x117B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B6Cu;
        // 0x117b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B74u;
        goto label_117b74;
    }
    ctx->pc = 0x117B6Cu;
    SET_GPR_U32(ctx, 31, 0x117B74u);
    ctx->pc = 0x117B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B6Cu;
    // 0x117b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x117B74u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117B74u) { return; }
    ctx->pc = 0x117B74u;
label_117b74:
    // 0x117b74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_117b78:
    if (ctx->pc == 0x117B78u) {
        ctx->pc = 0x117B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B74u;
        // 0x117b78: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B7Cu;
        goto label_117b7c;
    }
    ctx->pc = 0x117B74u;
    {
        const bool branch_taken_0x117b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B74u;
        // 0x117b78: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b74) {
            ctx->pc = 0x117B9Cu;
            goto label_117b9c;
        }
    }
    ctx->pc = 0x117B7Cu;
label_117b7c:
    // 0x117b7c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x117b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_117b80:
    // 0x117b80: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_117b84:
    // 0x117b84: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x117b84u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_117b88:
    // 0x117b88: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x117b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_117b8c:
    // 0x117b8c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_117b90:
    if (ctx->pc == 0x117B90u) {
        ctx->pc = 0x117B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B8Cu;
        // 0x117b90: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B94u;
        goto label_117b94;
    }
    ctx->pc = 0x117B8Cu;
    {
        const bool branch_taken_0x117b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B8Cu;
        // 0x117b90: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b8c) {
            ctx->pc = 0x117A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117a40;
        }
    }
    ctx->pc = 0x117B94u;
label_117b94:
    // 0x117b94: 0x10000005  b           . + 4 + (0x5 << 2)
label_117b98:
    if (ctx->pc == 0x117B98u) {
        ctx->pc = 0x117B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B94u;
        // 0x117b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B9Cu;
        goto label_117b9c;
    }
    ctx->pc = 0x117B94u;
    {
        const bool branch_taken_0x117b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B94u;
        // 0x117b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b94) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117B9Cu;
label_117b9c:
    // 0x117b9c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x117b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_117ba0:
    // 0x117ba0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117ba4:
    // 0x117ba4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x117ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_117ba8:
    // 0x117ba8: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x117ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_117bac:
    // 0x117bac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x117bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_117bb0:
    // 0x117bb0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x117bb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_117bb4:
    // 0x117bb4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x117bb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_117bb8:
    // 0x117bb8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x117bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_117bbc:
    // 0x117bbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117bbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_117bc0:
    // 0x117bc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_117bc4:
    // 0x117bc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_117bc8:
    // 0x117bc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_117bcc:
    // 0x117bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117bd0:
    // 0x117bd0: 0x3e00008  jr          $ra
label_117bd4:
    if (ctx->pc == 0x117BD4u) {
        ctx->pc = 0x117BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BD0u;
        // 0x117bd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117BD8u;
        goto label_fallthrough_0x117bd0;
    }
    ctx->pc = 0x117BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BD0u;
        // 0x117bd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x117bd0:
    ctx->pc = 0x117BD8u;
}
