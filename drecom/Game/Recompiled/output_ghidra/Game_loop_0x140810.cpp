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

// Function: Game_loop
// Address: 0x140810 - 0x140d14
void Game_loop_0x140810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_loop_0x140810");
#endif

    switch (ctx->pc) {
        case 0x1408c8u: goto label_1408c8;
        case 0x1408d0u: goto label_1408d0;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408ecu: goto label_1408ec;
        case 0x140940u: goto label_140940;
        case 0x140950u: goto label_140950;
        case 0x140958u: goto label_140958;
        case 0x140994u: goto label_140994;
        case 0x1409ccu: goto label_1409cc;
        case 0x140a0cu: goto label_140a0c;
        case 0x140a4cu: goto label_140a4c;
        case 0x140a54u: goto label_140a54;
        case 0x140a5cu: goto label_140a5c;
        case 0x140a78u: goto label_140a78;
        case 0x140a80u: goto label_140a80;
        case 0x140a88u: goto label_140a88;
        case 0x140ad0u: goto label_140ad0;
        case 0x140b14u: goto label_140b14;
        case 0x140b1cu: goto label_140b1c;
        case 0x140b3cu: goto label_140b3c;
        case 0x140b44u: goto label_140b44;
        case 0x140b4cu: goto label_140b4c;
        case 0x140b6cu: goto label_140b6c;
        case 0x140b8cu: goto label_140b8c;
        case 0x140b94u: goto label_140b94;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba4u: goto label_140ba4;
        case 0x140bc0u: goto label_140bc0;
        case 0x140bc8u: goto label_140bc8;
        case 0x140be4u: goto label_140be4;
        case 0x140c00u: goto label_140c00;
        case 0x140c08u: goto label_140c08;
        case 0x140c10u: goto label_140c10;
        case 0x140c18u: goto label_140c18;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c7cu: goto label_140c7c;
        case 0x140c8cu: goto label_140c8c;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cfcu: goto label_140cfc;
        default: break;
    }

    ctx->pc = 0x140810u;

    // 0x140810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140814: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x140814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x140818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14081c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x14081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x140820: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x140820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x140824: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x140824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x140828: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14082c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14082cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140830: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x140834: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140838: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140838u;
    {
        const bool branch_taken_0x140838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140838) {
            ctx->pc = 0x14085Cu;
            goto label_14085c;
        }
    }
    ctx->pc = 0x140840u;
    // 0x140840: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140844: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140848: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x14084c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x140850: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140854: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140858: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x140858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_14085c:
    // 0x14085c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14085cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140860: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140864: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x140864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x140868: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14086c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14086Cu;
    {
        const bool branch_taken_0x14086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14086c) {
            ctx->pc = 0x1408A8u;
            goto label_1408a8;
        }
    }
    ctx->pc = 0x140874u;
    // 0x140874: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140878: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14087c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x14087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x140880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x140884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140888: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14088c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14088cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x140890: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140894: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140898: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14089c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1408a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1408a4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1408a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1408a8:
    // 0x1408a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1408ac: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1408acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1408b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1408b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1408b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1408b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1408B8u;
    {
        const bool branch_taken_0x1408b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1408b8) {
            ctx->pc = 0x1408C8u;
            goto label_1408c8;
        }
    }
    ctx->pc = 0x1408C0u;
    // 0x1408c0: 0xc06b8cc  jal         func_1AE330
    ctx->pc = 0x1408C0u;
    SET_GPR_U32(ctx, 31, 0x1408C8u);
    ctx->pc = 0x1AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE330u, 0x1408C0u, 0x1408C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408C8u;
label_1408c8:
    // 0x1408c8: 0xc050914  jal         func_142450
    ctx->pc = 0x1408C8u;
    SET_GPR_U32(ctx, 31, 0x1408D0u);
    ctx->pc = 0x142450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142450u, 0x1408C8u, 0x1408D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408D0u;
label_1408d0:
    // 0x1408d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1408d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1408d4: 0xc0505b4  jal         func_1416D0
    ctx->pc = 0x1408D4u;
    SET_GPR_U32(ctx, 31, 0x1408DCu);
    ctx->pc = 0x1416D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416D0u, 0x1408D4u, 0x1408DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408DCu;
label_1408dc:
    // 0x1408dc: 0xc095ed8  jal         func_257B60
    ctx->pc = 0x1408DCu;
    SET_GPR_U32(ctx, 31, 0x1408E4u);
    ctx->pc = 0x257B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257B60u, 0x1408DCu, 0x1408E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408E4u;
label_1408e4:
    // 0x1408e4: 0xc0792b8  jal         func_1E4AE0
    ctx->pc = 0x1408E4u;
    SET_GPR_U32(ctx, 31, 0x1408ECu);
    ctx->pc = 0x1E4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4AE0u, 0x1408E4u, 0x1408ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408ECu;
label_1408ec:
    // 0x1408ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1408ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1408f0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1408f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1408f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1408f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1408f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1408f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1408fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1408FCu;
    {
        const bool branch_taken_0x1408fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1408fc) {
            ctx->pc = 0x140920u;
            goto label_140920;
        }
    }
    ctx->pc = 0x140904u;
    // 0x140904: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140908: 0x8c220b18  lw          $v0, 0xB18($at)
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0B18u));
    // 0x14090c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14090cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x140910: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140914: 0xac220b18  sw          $v0, 0xB18($at)
    ctx->pc = 0x140914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0B18u, _value); } while (0);
    // 0x140918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x140918u;
    {
        const bool branch_taken_0x140918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140918) {
            ctx->pc = 0x140938u;
            goto label_140938;
        }
    }
    ctx->pc = 0x140920u;
label_140920:
    // 0x140920: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140924: 0x8c230b18  lw          $v1, 0xB18($at)
    ctx->pc = 0x140924u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0B18u));
    // 0x140928: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14092c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140930: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140934: 0xac220b18  sw          $v0, 0xB18($at)
    ctx->pc = 0x140934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0B18u, _value); } while (0);
label_140938:
    // 0x140938: 0xc04eddc  jal         func_13B770
    ctx->pc = 0x140938u;
    SET_GPR_U32(ctx, 31, 0x140940u);
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x140938u, 0x140940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140940u;
label_140940:
    // 0x140940: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x140940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x140944: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x140944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140948: 0xc06adac  jal         func_1AB6B0
    ctx->pc = 0x140948u;
    SET_GPR_U32(ctx, 31, 0x140950u);
    ctx->pc = 0x1AB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6B0u, 0x140948u, 0x140950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140950u;
label_140950:
    // 0x140950: 0xc06aea8  jal         func_1ABAA0
    ctx->pc = 0x140950u;
    SET_GPR_U32(ctx, 31, 0x140958u);
    ctx->pc = 0x1ABAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAA0u, 0x140950u, 0x140958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140958u;
label_140958:
    // 0x140958: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14095c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140960u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140964: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140968: 0xac228ed0  sw          $v0, -0x7130($at)
    ctx->pc = 0x140968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8ED0u, _value); } while (0);
    // 0x14096c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140970: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140974: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x140974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x140978: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14097c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14097Cu;
    {
        const bool branch_taken_0x14097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14097c) {
            ctx->pc = 0x140994u;
            goto label_140994;
        }
    }
    ctx->pc = 0x140984u;
    // 0x140984: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x140988: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x140988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x14098c: 0xc057a00  jal         func_15E800
    ctx->pc = 0x14098Cu;
    SET_GPR_U32(ctx, 31, 0x140994u);
    ctx->pc = 0x15E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E800u, 0x14098Cu, 0x140994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140994u;
label_140994:
    // 0x140994: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140998: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x14099c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x1409a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1409a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1409a4: 0xac228ee8  sw          $v0, -0x7118($at)
    ctx->pc = 0x1409a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EE8u, _value); } while (0);
    // 0x1409a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1409a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1409ac: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1409b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1409b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1409b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1409b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1409B8u;
    {
        const bool branch_taken_0x1409b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409b8) {
            ctx->pc = 0x1409D4u;
            goto label_1409d4;
        }
    }
    ctx->pc = 0x1409C0u;
    // 0x1409c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1409c4: 0xc061c5c  jal         func_187170
    ctx->pc = 0x1409C4u;
    SET_GPR_U32(ctx, 31, 0x1409CCu);
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x1409C4u, 0x1409CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409CCu;
label_1409cc:
    // 0x1409cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1409CCu;
    {
        const bool branch_taken_0x1409cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409cc) {
            ctx->pc = 0x140A0Cu;
            goto label_140a0c;
        }
    }
    ctx->pc = 0x1409D4u;
label_1409d4:
    // 0x1409d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1409d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1409d8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1409dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1409e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1409e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1409e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1409E4u;
    {
        const bool branch_taken_0x1409e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409e4) {
            ctx->pc = 0x140A0Cu;
            goto label_140a0c;
        }
    }
    ctx->pc = 0x1409ECu;
    // 0x1409ec: 0x8e050a70  lw          $a1, 0xA70($s0)
    ctx->pc = 0x1409ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x1409f0: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x1409f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x1409f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1409f8: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x1409f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x1409fc: 0x24a501a0  addiu       $a1, $a1, 0x1A0
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
    // 0x140a00: 0x24660190  addiu       $a2, $v1, 0x190
    ctx->pc = 0x140a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x140a04: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x140A04u;
    SET_GPR_U32(ctx, 31, 0x140A0Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x140A04u, 0x140A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A0Cu;
label_140a0c:
    // 0x140a0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140a10: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140a1c: 0x8c228ee8  lw          $v0, -0x7118($at)
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8EE8u));
    // 0x140a20: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140a28: 0xac228ed8  sw          $v0, -0x7128($at)
    ctx->pc = 0x140a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8ED8u, _value); } while (0);
    // 0x140a2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140a30: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140a34: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x140a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x140a38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140a3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140A3Cu;
    {
        const bool branch_taken_0x140a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a3c) {
            ctx->pc = 0x140A4Cu;
            goto label_140a4c;
        }
    }
    ctx->pc = 0x140A44u;
    // 0x140a44: 0xc08482c  jal         func_2120B0
    ctx->pc = 0x140A44u;
    SET_GPR_U32(ctx, 31, 0x140A4Cu);
    ctx->pc = 0x2120B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2120B0u, 0x140A44u, 0x140A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A4Cu;
label_140a4c:
    // 0x140a4c: 0xc056a20  jal         func_15A880
    ctx->pc = 0x140A4Cu;
    SET_GPR_U32(ctx, 31, 0x140A54u);
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x140A4Cu, 0x140A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A54u;
label_140a54:
    // 0x140a54: 0xc0994c8  jal         func_265320
    ctx->pc = 0x140A54u;
    SET_GPR_U32(ctx, 31, 0x140A5Cu);
    ctx->pc = 0x265320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265320u, 0x140A54u, 0x140A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A5Cu;
label_140a5c:
    // 0x140a5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140a60: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140a60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140a64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x140a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x140a68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140A68u;
    {
        const bool branch_taken_0x140a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a68) {
            ctx->pc = 0x140A78u;
            goto label_140a78;
        }
    }
    ctx->pc = 0x140A70u;
    // 0x140a70: 0xc056b30  jal         func_15ACC0
    ctx->pc = 0x140A70u;
    SET_GPR_U32(ctx, 31, 0x140A78u);
    ctx->pc = 0x15ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ACC0u, 0x140A70u, 0x140A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A78u;
label_140a78:
    // 0x140a78: 0xc053620  jal         func_14D880
    ctx->pc = 0x140A78u;
    SET_GPR_U32(ctx, 31, 0x140A80u);
    ctx->pc = 0x14D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D880u, 0x140A78u, 0x140A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A80u;
label_140a80:
    // 0x140a80: 0xc050348  jal         func_140D20
    ctx->pc = 0x140A80u;
    SET_GPR_U32(ctx, 31, 0x140A88u);
    ctx->pc = 0x140D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D20u, 0x140A80u, 0x140A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A88u;
label_140a88:
    // 0x140a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140a8c: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x140a90: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x140a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x140a94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140a98: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x140A98u;
    {
        const bool branch_taken_0x140a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a98) {
            ctx->pc = 0x140B0Cu;
            goto label_140b0c;
        }
    }
    ctx->pc = 0x140AA0u;
    // 0x140aa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140aa4: 0x8c225170  lw          $v0, 0x5170($at)
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385170u));
    // 0x140aa8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x140AA8u;
    {
        const bool branch_taken_0x140aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140aa8) {
            ctx->pc = 0x140AF8u;
            goto label_140af8;
        }
    }
    ctx->pc = 0x140AB0u;
    // 0x140ab0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x140ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x140ab4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x140ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x140ab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140abc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140ac0: 0xc420dc94  lwc1        $f0, -0x236C($at)
    ctx->pc = 0x140ac0u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ac4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x140ac4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x140ac8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x140AC8u;
    SET_GPR_U32(ctx, 31, 0x140AD0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x140AC8u, 0x140AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AD0u;
label_140ad0:
    // 0x140ad0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140ad4: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x140ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x140ad8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140adc: 0x8c220110  lw          $v0, 0x110($at)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0110u));
    // 0x140ae0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x140ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140ae8: 0xac220110  sw          $v0, 0x110($at)
    ctx->pc = 0x140ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0110u, _value); } while (0);
    // 0x140aec: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x140aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x140af0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140af4: 0xac225170  sw          $v0, 0x5170($at)
    ctx->pc = 0x140af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385170u, _value); } while (0);
label_140af8:
    // 0x140af8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140afc: 0x8c225170  lw          $v0, 0x5170($at)
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385170u));
    // 0x140b00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140b04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140b08: 0xac225170  sw          $v0, 0x5170($at)
    ctx->pc = 0x140b08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385170u, _value); } while (0);
label_140b0c:
    // 0x140b0c: 0xc099464  jal         func_265190
    ctx->pc = 0x140B0Cu;
    SET_GPR_U32(ctx, 31, 0x140B14u);
    ctx->pc = 0x265190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265190u, 0x140B0Cu, 0x140B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B14u;
label_140b14:
    // 0x140b14: 0xc05d710  jal         func_175C40
    ctx->pc = 0x140B14u;
    SET_GPR_U32(ctx, 31, 0x140B1Cu);
    ctx->pc = 0x175C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C40u, 0x140B14u, 0x140B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B1Cu;
label_140b1c:
    // 0x140b1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140b20: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140b24: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x140b28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140b2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B2Cu;
    {
        const bool branch_taken_0x140b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b2c) {
            ctx->pc = 0x140B3Cu;
            goto label_140b3c;
        }
    }
    ctx->pc = 0x140B34u;
    // 0x140b34: 0xc067148  jal         func_19C520
    ctx->pc = 0x140B34u;
    SET_GPR_U32(ctx, 31, 0x140B3Cu);
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x140B34u, 0x140B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B3Cu;
label_140b3c:
    // 0x140b3c: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x140B3Cu;
    SET_GPR_U32(ctx, 31, 0x140B44u);
    ctx->pc = 0x18DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF60u, 0x140B3Cu, 0x140B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B44u;
label_140b44:
    // 0x140b44: 0xc0a71a4  jal         func_29C690
    ctx->pc = 0x140B44u;
    SET_GPR_U32(ctx, 31, 0x140B4Cu);
    ctx->pc = 0x29C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C690u, 0x140B44u, 0x140B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B4Cu;
label_140b4c:
    // 0x140b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140b50: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140b50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140b54: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x140b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x140b58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140b5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B5Cu;
    {
        const bool branch_taken_0x140b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b5c) {
            ctx->pc = 0x140B6Cu;
            goto label_140b6c;
        }
    }
    ctx->pc = 0x140B64u;
    // 0x140b64: 0xc080650  jal         func_201940
    ctx->pc = 0x140B64u;
    SET_GPR_U32(ctx, 31, 0x140B6Cu);
    ctx->pc = 0x201940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201940u, 0x140B64u, 0x140B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B6Cu;
label_140b6c:
    // 0x140b6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140b70: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140b74: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x140b78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140b7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B7Cu;
    {
        const bool branch_taken_0x140b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b7c) {
            ctx->pc = 0x140B8Cu;
            goto label_140b8c;
        }
    }
    ctx->pc = 0x140B84u;
    // 0x140b84: 0xc0ca9c0  jal         func_32A700
    ctx->pc = 0x140B84u;
    SET_GPR_U32(ctx, 31, 0x140B8Cu);
    ctx->pc = 0x32A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A700u, 0x140B84u, 0x140B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B8Cu;
label_140b8c:
    // 0x140b8c: 0xc067fd0  jal         func_19FF40
    ctx->pc = 0x140B8Cu;
    SET_GPR_U32(ctx, 31, 0x140B94u);
    ctx->pc = 0x19FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF40u, 0x140B8Cu, 0x140B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B94u;
label_140b94:
    // 0x140b94: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x140B94u;
    SET_GPR_U32(ctx, 31, 0x140B9Cu);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x140B94u, 0x140B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B9Cu;
label_140b9c:
    // 0x140b9c: 0xc0a5c44  jal         func_297110
    ctx->pc = 0x140B9Cu;
    SET_GPR_U32(ctx, 31, 0x140BA4u);
    ctx->pc = 0x297110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297110u, 0x140B9Cu, 0x140BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BA4u;
label_140ba4:
    // 0x140ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140ba8: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140bac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x140bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x140bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140BB0u;
    {
        const bool branch_taken_0x140bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bb0) {
            ctx->pc = 0x140BC0u;
            goto label_140bc0;
        }
    }
    ctx->pc = 0x140BB8u;
    // 0x140bb8: 0xc0cb80c  jal         func_32E030
    ctx->pc = 0x140BB8u;
    SET_GPR_U32(ctx, 31, 0x140BC0u);
    ctx->pc = 0x32E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E030u, 0x140BB8u, 0x140BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BC0u;
label_140bc0:
    // 0x140bc0: 0xc0806b4  jal         func_201AD0
    ctx->pc = 0x140BC0u;
    SET_GPR_U32(ctx, 31, 0x140BC8u);
    ctx->pc = 0x201AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AD0u, 0x140BC0u, 0x140BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BC8u;
label_140bc8:
    // 0x140bc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140bcc: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140bd0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140BD4u;
    {
        const bool branch_taken_0x140bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bd4) {
            ctx->pc = 0x140BE4u;
            goto label_140be4;
        }
    }
    ctx->pc = 0x140BDCu;
    // 0x140bdc: 0xc099534  jal         func_2654D0
    ctx->pc = 0x140BDCu;
    SET_GPR_U32(ctx, 31, 0x140BE4u);
    ctx->pc = 0x2654D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2654D0u, 0x140BDCu, 0x140BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BE4u;
label_140be4:
    // 0x140be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140be8: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140bec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x140becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x140bf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140BF0u;
    {
        const bool branch_taken_0x140bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bf0) {
            ctx->pc = 0x140C10u;
            goto label_140c10;
        }
    }
    ctx->pc = 0x140BF8u;
    // 0x140bf8: 0xc0639ec  jal         func_18E7B0
    ctx->pc = 0x140BF8u;
    SET_GPR_U32(ctx, 31, 0x140C00u);
    ctx->pc = 0x18E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7B0u, 0x140BF8u, 0x140C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C00u;
label_140c00:
    // 0x140c00: 0xc0a71dc  jal         func_29C770
    ctx->pc = 0x140C00u;
    SET_GPR_U32(ctx, 31, 0x140C08u);
    ctx->pc = 0x29C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C770u, 0x140C00u, 0x140C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C08u;
label_140c08:
    // 0x140c08: 0xc050738  jal         func_141CE0
    ctx->pc = 0x140C08u;
    SET_GPR_U32(ctx, 31, 0x140C10u);
    ctx->pc = 0x141CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141CE0u, 0x140C08u, 0x140C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C10u;
label_140c10:
    // 0x140c10: 0xc050780  jal         func_141E00
    ctx->pc = 0x140C10u;
    SET_GPR_U32(ctx, 31, 0x140C18u);
    ctx->pc = 0x141E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E00u, 0x140C10u, 0x140C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C18u;
label_140c18:
    // 0x140c18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140c1c: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x140c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x140c20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x140c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x140c24: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140c28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140c2c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140c30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140c34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140c38: 0xac228ee8  sw          $v0, -0x7118($at)
    ctx->pc = 0x140c38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EE8u, _value); } while (0);
    // 0x140c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140c40: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140c44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x140c48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140c4c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x140C4Cu;
    {
        const bool branch_taken_0x140c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c4c) {
            ctx->pc = 0x140C8Cu;
            goto label_140c8c;
        }
    }
    ctx->pc = 0x140C54u;
    // 0x140c54: 0xc061028  jal         func_1840A0
    ctx->pc = 0x140C54u;
    SET_GPR_U32(ctx, 31, 0x140C5Cu);
    ctx->pc = 0x1840A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1840A0u, 0x140C54u, 0x140C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C5Cu;
label_140c5c:
    // 0x140c5c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140C5Cu;
    {
        const bool branch_taken_0x140c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c5c) {
            ctx->pc = 0x140C8Cu;
            goto label_140c8c;
        }
    }
    ctx->pc = 0x140C64u;
    // 0x140c64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140c68: 0x902295a0  lbu         $v0, -0x6A60($at)
    ctx->pc = 0x140c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6195A0u));
    // 0x140c6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140C6Cu;
    {
        const bool branch_taken_0x140c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c6c) {
            ctx->pc = 0x140C84u;
            goto label_140c84;
        }
    }
    ctx->pc = 0x140C74u;
    // 0x140c74: 0xc0a1148  jal         func_284520
    ctx->pc = 0x140C74u;
    SET_GPR_U32(ctx, 31, 0x140C7Cu);
    ctx->pc = 0x284520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284520u, 0x140C74u, 0x140C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C7Cu;
label_140c7c:
    // 0x140c7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140C7Cu;
    {
        const bool branch_taken_0x140c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c7c) {
            ctx->pc = 0x140C8Cu;
            goto label_140c8c;
        }
    }
    ctx->pc = 0x140C84u;
label_140c84:
    // 0x140c84: 0xc05f838  jal         func_17E0E0
    ctx->pc = 0x140C84u;
    SET_GPR_U32(ctx, 31, 0x140C8Cu);
    ctx->pc = 0x17E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E0E0u, 0x140C84u, 0x140C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C8Cu;
label_140c8c:
    // 0x140c8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140c90: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140c94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140c98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140c9c: 0x8c228ee8  lw          $v0, -0x7118($at)
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8EE8u));
    // 0x140ca0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140ca4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140ca8: 0xac228ee0  sw          $v0, -0x7120($at)
    ctx->pc = 0x140ca8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EE0u, _value); } while (0);
    // 0x140cac: 0xc0cee0c  jal         func_33B830
    ctx->pc = 0x140CACu;
    SET_GPR_U32(ctx, 31, 0x140CB4u);
    ctx->pc = 0x33B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B830u, 0x140CACu, 0x140CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0xc056190  jal         func_158640
    ctx->pc = 0x140CB4u;
    SET_GPR_U32(ctx, 31, 0x140CBCu);
    ctx->pc = 0x158640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158640u, 0x140CB4u, 0x140CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CBCu;
label_140cbc:
    // 0x140cbc: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x140CBCu;
    SET_GPR_U32(ctx, 31, 0x140CC4u);
    ctx->pc = 0x141B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B30u, 0x140CBCu, 0x140CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CC4u;
label_140cc4:
    // 0x140cc4: 0xc0562c0  jal         func_158B00
    ctx->pc = 0x140CC4u;
    SET_GPR_U32(ctx, 31, 0x140CCCu);
    ctx->pc = 0x158B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B00u, 0x140CC4u, 0x140CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CCCu;
label_140ccc:
    // 0x140ccc: 0xc0506c8  jal         func_141B20
    ctx->pc = 0x140CCCu;
    SET_GPR_U32(ctx, 31, 0x140CD4u);
    ctx->pc = 0x141B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B20u, 0x140CCCu, 0x140CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CD4u;
label_140cd4:
    // 0x140cd4: 0x92030d84  lbu         $v1, 0xD84($s0)
    ctx->pc = 0x140cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x140cd8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x140cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x140cdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140ce0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140CE0u;
    {
        const bool branch_taken_0x140ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140ce0) {
            ctx->pc = 0x140D00u;
            goto label_140d00;
        }
    }
    ctx->pc = 0x140CE8u;
    // 0x140ce8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x140ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x140cec: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x140cf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x140cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140cf4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x140CF4u;
    SET_GPR_U32(ctx, 31, 0x140CFCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x140CF4u, 0x140CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CFCu;
label_140cfc:
    // 0x140cfc: 0xe6000d80  swc1        $f0, 0xD80($s0)
    ctx->pc = 0x140cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3456), bits); }
label_140d00:
    // 0x140d00: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x140d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140d08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x140d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x140D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140D14u;
}
