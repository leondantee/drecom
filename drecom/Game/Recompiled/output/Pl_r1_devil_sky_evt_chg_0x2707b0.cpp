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

// Function: Pl_r1_devil_sky_evt_chg
// Address: 0x2707b0 - 0x270e60
void Pl_r1_devil_sky_evt_chg_0x2707b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_evt_chg_0x2707b0");
#endif

    switch (ctx->pc) {
        case 0x270838u: goto label_270838;
        case 0x270854u: goto label_270854;
        case 0x270884u: goto label_270884;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708e4u: goto label_2708e4;
        case 0x270914u: goto label_270914;
        case 0x27092cu: goto label_27092c;
        case 0x270978u: goto label_270978;
        case 0x270b3cu: goto label_270b3c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270c64u: goto label_270c64;
        case 0x270c74u: goto label_270c74;
        case 0x270c84u: goto label_270c84;
        case 0x270c90u: goto label_270c90;
        case 0x270d20u: goto label_270d20;
        case 0x270d2cu: goto label_270d2c;
        case 0x270d7cu: goto label_270d7c;
        case 0x270da8u: goto label_270da8;
        case 0x270db4u: goto label_270db4;
        case 0x270dc8u: goto label_270dc8;
        case 0x270dd4u: goto label_270dd4;
        case 0x270df8u: goto label_270df8;
        case 0x270e1cu: goto label_270e1c;
        case 0x270e30u: goto label_270e30;
        default: break;
    }

    ctx->pc = 0x2707b0u;

    // 0x2707b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2707b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2707b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2707b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2707b8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2707b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2707bc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2707bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2707c0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2707c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2707c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2707c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2707c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2707c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2707cc: 0x10830172  beq         $a0, $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x2707CCu;
    {
        const bool branch_taken_0x2707cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2707cc) {
            ctx->pc = 0x270D98u;
            goto label_270d98;
        }
    }
    ctx->pc = 0x2707D4u;
    // 0x2707d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2707d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2707d8: 0x10830160  beq         $a0, $v1, . + 4 + (0x160 << 2)
    ctx->pc = 0x2707D8u;
    {
        const bool branch_taken_0x2707d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2707d8) {
            ctx->pc = 0x270D5Cu;
            goto label_270d5c;
        }
    }
    ctx->pc = 0x2707E0u;
    // 0x2707e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2707e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2707e4: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2707E4u;
    {
        const bool branch_taken_0x2707e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2707e4) {
            ctx->pc = 0x2709ECu;
            goto label_2709ec;
        }
    }
    ctx->pc = 0x2707ECu;
    // 0x2707ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2707ECu;
    {
        const bool branch_taken_0x2707ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2707ec) {
            ctx->pc = 0x2707FCu;
            goto label_2707fc;
        }
    }
    ctx->pc = 0x2707F4u;
    // 0x2707f4: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x2707F4u;
    {
        const bool branch_taken_0x2707f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2707f4) {
            ctx->pc = 0x270DD4u;
            goto label_270dd4;
        }
    }
    ctx->pc = 0x2707FCu;
label_2707fc:
    // 0x2707fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2707fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270800: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x270800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x270804: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x270804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270808: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x27080c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x270810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270814: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x270814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x270818: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27081c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x27081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270824: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x270824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x270828: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x270828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x27082c: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x27082cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x270830: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x270830u;
    SET_GPR_U32(ctx, 31, 0x270838u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x270830u, 0x270838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270838u;
label_270838:
    // 0x270838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27083c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x27083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270840: 0xa0400090  sb          $zero, 0x90($v0)
    ctx->pc = 0x270840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x270844: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270848: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x270848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x27084c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27084Cu;
    SET_GPR_U32(ctx, 31, 0x270854u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27084Cu, 0x270854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270854u;
label_270854:
    // 0x270854: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x270858: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x270858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27085c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x27085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270864: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x270868: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x270868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27086c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x270870: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x270870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x270874: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x270874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x270878: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x270878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27087c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x27087Cu;
    SET_GPR_U32(ctx, 31, 0x270884u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x27087Cu, 0x270884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270884u;
label_270884:
    // 0x270884: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x270884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x270888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x270888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27088c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x270890: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x270890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x270894: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27089c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2708a0: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x2708a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x2708a4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2708a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2708a8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2708a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2708ac: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x2708ACu;
    SET_GPR_U32(ctx, 31, 0x2708B4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x2708ACu, 0x2708B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708B4u;
label_2708b4:
    // 0x2708b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2708b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2708b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708bc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2708bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2708c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2708c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2708c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2708c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2708c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2708c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2708cc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2708ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2708d0: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x2708d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x2708d4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2708d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2708d8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2708d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2708dc: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x2708DCu;
    SET_GPR_U32(ctx, 31, 0x2708E4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x2708DCu, 0x2708E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708E4u;
label_2708e4:
    // 0x2708e4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2708e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2708e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2708ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2708ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2708f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708f4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2708f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2708f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2708fc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2708fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x270900: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x270900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x270904: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x270904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x270908: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x270908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27090c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x27090Cu;
    SET_GPR_U32(ctx, 31, 0x270914u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x27090Cu, 0x270914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270914u;
label_270914:
    // 0x270914: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270918: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x270918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x27091c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x270920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x270920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270924: 0xc045630  jal         func_1158C0
    ctx->pc = 0x270924u;
    SET_GPR_U32(ctx, 31, 0x27092Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x270924u, 0x27092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27092Cu;
label_27092c:
    // 0x27092c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x27092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x270930: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x270930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x270934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270938: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x270938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27093c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27093cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x270940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270944: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x270944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x270948: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x270948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27094c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27094cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270950: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270954: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x270954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x270958: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27095c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270960: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270964: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x270964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x270968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27096c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27096cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270970: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270970u;
    SET_GPR_U32(ctx, 31, 0x270978u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270970u, 0x270978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270978u;
label_270978:
    // 0x270978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27097c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270980: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x270980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x270984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270988: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27098c: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x27098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x270990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270994: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270998: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x270998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x27099c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709a0: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x2709a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x2709a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709a8: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x2709a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x2709ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709b0: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x2709b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x2709b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2709b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2709b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2709bc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2709c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2709c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2709c4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2709c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2709c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709cc: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x2709ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x2709d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2709d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2709d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709d8: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x2709d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x2709dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2709dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2709e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2709e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2709e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2709e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2709e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2709ec:
    // 0x2709ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709f0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2709f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2709f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2709f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2709f8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2709f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2709fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2709FCu;
    {
        const bool branch_taken_0x2709fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709fc) {
            ctx->pc = 0x270A10u;
            goto label_270a10;
        }
    }
    ctx->pc = 0x270A04u;
    // 0x270a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270a08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a0c: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x270a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
label_270a10:
    // 0x270a10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a14: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x270a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x270a18: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x270A18u;
    {
        const bool branch_taken_0x270a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a18) {
            ctx->pc = 0x270B3Cu;
            goto label_270b3c;
        }
    }
    ctx->pc = 0x270A20u;
    // 0x270a20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a24: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x270a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a28: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x270a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x270a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a30: 0x0  nop
    ctx->pc = 0x270a30u;
    // NOP
    // 0x270a34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x270a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270a38: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x270a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x270a3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a40: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x270a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x270a44: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270A44u;
    {
        const bool branch_taken_0x270a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a44) {
            ctx->pc = 0x270A9Cu;
            goto label_270a9c;
        }
    }
    ctx->pc = 0x270A4Cu;
    // 0x270a4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a50: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x270a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a54: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x270a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a5c: 0x0  nop
    ctx->pc = 0x270a5cu;
    // NOP
    // 0x270a60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x270a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270a64: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x270a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    // 0x270a68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a6c: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x270a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a74: 0x0  nop
    ctx->pc = 0x270a74u;
    // NOP
    // 0x270a78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a7c: 0x0  nop
    ctx->pc = 0x270a7cu;
    // NOP
    // 0x270a80: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x270A80u;
    {
        const bool branch_taken_0x270a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270a80) {
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270A88u;
    // 0x270a88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a90: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x270a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x270a94: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x270A94u;
    {
        const bool branch_taken_0x270a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a94) {
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270A9Cu;
label_270a9c:
    // 0x270a9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270aa0: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x270aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270aa4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x270aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x270aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270aac: 0x0  nop
    ctx->pc = 0x270aacu;
    // NOP
    // 0x270ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x270ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270ab4: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x270ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    // 0x270ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270abc: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x270abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ac0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x270ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x270ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270ac8: 0x0  nop
    ctx->pc = 0x270ac8u;
    // NOP
    // 0x270acc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ad0: 0x0  nop
    ctx->pc = 0x270ad0u;
    // NOP
    // 0x270ad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x270AD4u;
    {
        const bool branch_taken_0x270ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270ad4) {
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270ADCu;
    // 0x270adc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x270adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x270ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270ae4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ae8: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x270ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_270aec:
    // 0x270aec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270af0: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x270af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270af8: 0x0  nop
    ctx->pc = 0x270af8u;
    // NOP
    // 0x270afc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b00: 0x0  nop
    ctx->pc = 0x270b00u;
    // NOP
    // 0x270b04: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x270B04u;
    {
        const bool branch_taken_0x270b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270b04) {
            ctx->pc = 0x270B3Cu;
            goto label_270b3c;
        }
    }
    ctx->pc = 0x270B0Cu;
    // 0x270b0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b1c: 0xc4ac1b54  lwc1        $f12, 0x1B54($a1)
    ctx->pc = 0x270b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270b20: 0xc48d1b58  lwc1        $f13, 0x1B58($a0)
    ctx->pc = 0x270b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x270b24: 0xc46e1b58  lwc1        $f14, 0x1B58($v1)
    ctx->pc = 0x270b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x270b28: 0xc44f1b58  lwc1        $f15, 0x1B58($v0)
    ctx->pc = 0x270b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x270b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x270b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270b34: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x270B34u;
    SET_GPR_U32(ctx, 31, 0x270B3Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x270B34u, 0x270B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B3Cu;
label_270b3c:
    // 0x270b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x270b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x270b44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x270b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270b48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x270b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x270b4c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x270B4Cu;
    {
        const bool branch_taken_0x270b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b4c) {
            ctx->pc = 0x270C20u;
            goto label_270c20;
        }
    }
    ctx->pc = 0x270B54u;
    // 0x270b54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b58: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x270b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x270b5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x270b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x270b60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b64: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x270b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x270b68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b6c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x270b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x270b70: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x270b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x270b74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x270b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x270b78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b7c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x270b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x270b80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b8c: 0x8c841344  lw          $a0, 0x1344($a0)
    ctx->pc = 0x270b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x270b90: 0x8c651334  lw          $a1, 0x1334($v1)
    ctx->pc = 0x270b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x270b94: 0x8c46133c  lw          $a2, 0x133C($v0)
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x270b98: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x270B98u;
    SET_GPR_U32(ctx, 31, 0x270BA0u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x270B98u, 0x270BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BA0u;
label_270ba0:
    // 0x270ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270ba4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ba8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bac: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x270bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bb4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bb8: 0xa0400630  sb          $zero, 0x630($v0)
    ctx->pc = 0x270bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1584), (uint8_t)GPR_U32(ctx, 0));
    // 0x270bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bc4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bc8: 0xa04307e0  sb          $v1, 0x7E0($v0)
    ctx->pc = 0x270bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2016), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270bd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bd4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bd8: 0xa0430870  sb          $v1, 0x870($v0)
    ctx->pc = 0x270bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2160), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270be0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270be4: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x270be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x270be8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x270bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bf0: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x270bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
    // 0x270bf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bf8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x270bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x270bfc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x270bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x270c00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x270c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270c04: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x270c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x270c08: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x270c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x270c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c10: 0xa44313c0  sh          $v1, 0x13C0($v0)
    ctx->pc = 0x270c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 3));
    // 0x270c14: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x270c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x270c18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c1c: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x270c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
label_270c20:
    // 0x270c20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x270c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x270c28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x270c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270c2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x270c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x270c30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x270C30u;
    {
        const bool branch_taken_0x270c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c30) {
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270C38u;
    // 0x270c38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270c38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270c3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x270c40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270c48: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x270c4c: 0x3448c0c0  ori         $t0, $v0, 0xC0C0
    ctx->pc = 0x270c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49344);
    // 0x270c50: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x270c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x270c54: 0x34494040  ori         $t1, $v0, 0x4040
    ctx->pc = 0x270c54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x270c58: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x270c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x270c5c: 0xc059190  jal         func_164640
    ctx->pc = 0x270C5Cu;
    SET_GPR_U32(ctx, 31, 0x270C64u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x270C5Cu, 0x270C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C64u;
label_270c64:
    // 0x270c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270C6Cu;
    SET_GPR_U32(ctx, 31, 0x270C74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270C6Cu, 0x270C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C74u;
label_270c74:
    // 0x270c74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c78: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x270c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x270c7c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x270C7Cu;
    SET_GPR_U32(ctx, 31, 0x270C84u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x270C7Cu, 0x270C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C84u;
label_270c84:
    // 0x270c84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c88: 0xc05cd10  jal         func_173440
    ctx->pc = 0x270C88u;
    SET_GPR_U32(ctx, 31, 0x270C90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x270C88u, 0x270C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C90u;
label_270c90:
    // 0x270c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c94: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270c9c: 0x0  nop
    ctx->pc = 0x270c9cu;
    // NOP
    // 0x270ca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ca4: 0x0  nop
    ctx->pc = 0x270ca4u;
    // NOP
    // 0x270ca8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x270CA8u;
    {
        const bool branch_taken_0x270ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270ca8) {
            ctx->pc = 0x270D0Cu;
            goto label_270d0c;
        }
    }
    ctx->pc = 0x270CB0u;
    // 0x270cb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270cb4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270cb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270cbc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x270cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x270cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270cc4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x270cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x270cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ccc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x270cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270cd4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x270cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x270cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270cdc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x270cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x270ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ce4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270cec: 0x0  nop
    ctx->pc = 0x270cecu;
    // NOP
    // 0x270cf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270cf4: 0x0  nop
    ctx->pc = 0x270cf4u;
    // NOP
    // 0x270cf8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x270CF8u;
    {
        const bool branch_taken_0x270cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270cf8) {
            ctx->pc = 0x270D0Cu;
            goto label_270d0c;
        }
    }
    ctx->pc = 0x270D00u;
    // 0x270d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270d04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d08: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x270d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_270d0c:
    // 0x270d0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270d10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270d14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270d18: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x270D18u;
    SET_GPR_U32(ctx, 31, 0x270D20u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270D18u, 0x270D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D20u;
label_270d20:
    // 0x270d20: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270d24: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x270D24u;
    SET_GPR_U32(ctx, 31, 0x270D2Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x270D24u, 0x270D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D2Cu;
label_270d2c:
    // 0x270d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x270d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x270d34: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x270D34u;
    {
        const bool branch_taken_0x270d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d34) {
            ctx->pc = 0x270DD4u;
            goto label_270dd4;
        }
    }
    ctx->pc = 0x270D3Cu;
    // 0x270d3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d40: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x270d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x270d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d48: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x270d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270d50: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x270d50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x270d54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x270D54u;
    {
        const bool branch_taken_0x270d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d54) {
            ctx->pc = 0x270DD4u;
            goto label_270dd4;
        }
    }
    ctx->pc = 0x270D5Cu;
label_270d5c:
    // 0x270d5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d64: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270d68: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x270d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
    // 0x270d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270d70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x270d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270d74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270D74u;
    SET_GPR_U32(ctx, 31, 0x270D7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270D74u, 0x270D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D7Cu;
label_270d7c:
    // 0x270d7c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x270d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x270d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d84: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x270d84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x270d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d8c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x270d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270d94: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x270d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_270d98:
    // 0x270d98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d9c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270da0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270DA0u;
    SET_GPR_U32(ctx, 31, 0x270DA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270DA0u, 0x270DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DA8u;
label_270da8:
    // 0x270da8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dac: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x270DACu;
    SET_GPR_U32(ctx, 31, 0x270DB4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x270DACu, 0x270DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DB4u;
label_270db4:
    // 0x270db4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270db8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270dc0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x270DC0u;
    SET_GPR_U32(ctx, 31, 0x270DC8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270DC0u, 0x270DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DC8u;
label_270dc8:
    // 0x270dc8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270dcc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x270DCCu;
    SET_GPR_U32(ctx, 31, 0x270DD4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x270DCCu, 0x270DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DD4u;
label_270dd4:
    // 0x270dd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dd8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x270dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x270ddc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x270ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x270de0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x270de0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x270de4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x270de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x270de8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270DE8u;
    {
        const bool branch_taken_0x270de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270de8) {
            ctx->pc = 0x270DF8u;
            goto label_270df8;
        }
    }
    ctx->pc = 0x270DF0u;
    // 0x270df0: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x270DF0u;
    SET_GPR_U32(ctx, 31, 0x270DF8u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x270DF0u, 0x270DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DF8u;
label_270df8:
    // 0x270df8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dfc: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x270dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x270e00: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x270E00u;
    {
        const bool branch_taken_0x270e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e00) {
            ctx->pc = 0x270E50u;
            goto label_270e50;
        }
    }
    ctx->pc = 0x270E08u;
    // 0x270e08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270e0c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x270e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x270e10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x270e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270e14: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x270E14u;
    SET_GPR_U32(ctx, 31, 0x270E1Cu);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x270E14u, 0x270E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E1Cu;
label_270e1c:
    // 0x270e1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270e20: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x270e24: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x270e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270e28: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x270E28u;
    SET_GPR_U32(ctx, 31, 0x270E30u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x270E28u, 0x270E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E30u;
label_270e30:
    // 0x270e30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270e34: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x270e34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x270e38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270E38u;
    {
        const bool branch_taken_0x270e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e38) {
            ctx->pc = 0x270E50u;
            goto label_270e50;
        }
    }
    ctx->pc = 0x270E40u;
    // 0x270e40: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x270e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270e44: 0x8ca31b6c  lw          $v1, 0x1B6C($a1)
    ctx->pc = 0x270e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
    // 0x270e48: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x270e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x270e4c: 0xaca41b6c  sw          $a0, 0x1B6C($a1)
    ctx->pc = 0x270e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 4));
label_270e50:
    // 0x270e50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x270e50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270e54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x270e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x270e58: 0x3e00008  jr          $ra
    ctx->pc = 0x270E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270E60u;
}
