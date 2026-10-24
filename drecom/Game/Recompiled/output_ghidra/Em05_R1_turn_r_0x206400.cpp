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

// Function: Em05_R1_turn_r
// Address: 0x206400 - 0x206734
void Em05_R1_turn_r_0x206400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_turn_r_0x206400");
#endif

    switch (ctx->pc) {
        case 0x20645cu: goto label_20645c;
        case 0x2064c0u: goto label_2064c0;
        case 0x2064d4u: goto label_2064d4;
        case 0x206534u: goto label_206534;
        case 0x206544u: goto label_206544;
        case 0x206574u: goto label_206574;
        case 0x206584u: goto label_206584;
        case 0x206678u: goto label_206678;
        case 0x20669cu: goto label_20669c;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066c0u: goto label_2066c0;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066dcu: goto label_2066dc;
        default: break;
    }

    ctx->pc = 0x206400u;

    // 0x206400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206404: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x206404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x206408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20640c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206410: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x206410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x206414: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206418: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x206418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20641c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20641cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206424: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x206424u;
    {
        const bool branch_taken_0x206424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x206424) {
            ctx->pc = 0x20646Cu;
            goto label_20646c;
        }
    }
    ctx->pc = 0x20642Cu;
    // 0x20642c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20642Cu;
    {
        const bool branch_taken_0x20642c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20642c) {
            ctx->pc = 0x20643Cu;
            goto label_20643c;
        }
    }
    ctx->pc = 0x206434u;
    // 0x206434: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x206434u;
    {
        const bool branch_taken_0x206434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206434) {
            ctx->pc = 0x20671Cu;
            goto label_20671c;
        }
    }
    ctx->pc = 0x20643Cu;
label_20643c:
    // 0x20643c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206440: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206444: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x206448: 0x24065a1e  addiu       $a2, $zero, 0x5A1E
    ctx->pc = 0x206448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23070));
    // 0x20644c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20644cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206450: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x206454: 0xc0965d0  jal         func_259740
    ctx->pc = 0x206454u;
    SET_GPR_U32(ctx, 31, 0x20645Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x206454u, 0x20645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20645Cu;
label_20645c:
    // 0x20645c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x206460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x206464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x206468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20646c:
    // 0x20646c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206470: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x206470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x206474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206478: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x206478u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x20647c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206480: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x206484: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x206484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x206488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20648c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20648Cu;
    {
        const bool branch_taken_0x20648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20648c) {
            ctx->pc = 0x2064DCu;
            goto label_2064dc;
        }
    }
    ctx->pc = 0x206494u;
    // 0x206494: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206498: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20649c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064a0: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x2064a4: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2064a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2064a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2064a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2064ac: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2064acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2064b0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2064b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2064b4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2064b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2064b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2064B8u;
    SET_GPR_U32(ctx, 31, 0x2064C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2064B8u, 0x2064C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064C0u;
label_2064c0:
    // 0x2064c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2064c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2064c8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2064c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2064cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2064CCu;
    SET_GPR_U32(ctx, 31, 0x2064D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2064CCu, 0x2064D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064D4u;
label_2064d4:
    // 0x2064d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064d8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2064d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2064dc:
    // 0x2064dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2064e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2064e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2064e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2064e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2064e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2064ec: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2064ECu;
    {
        const bool branch_taken_0x2064ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064ec) {
            ctx->pc = 0x206584u;
            goto label_206584;
        }
    }
    ctx->pc = 0x2064F4u;
    // 0x2064f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064f8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2064f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2064fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2064fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206500: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x206500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x206504: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206504u;
    {
        const bool branch_taken_0x206504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206504) {
            ctx->pc = 0x20654Cu;
            goto label_20654c;
        }
    }
    ctx->pc = 0x20650Cu;
    // 0x20650c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206510: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x206514: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206518: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20651c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20651Cu;
    {
        const bool branch_taken_0x20651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20651c) {
            ctx->pc = 0x206534u;
            goto label_206534;
        }
    }
    ctx->pc = 0x206524u;
    // 0x206524: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206528: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20652c: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20652Cu;
    SET_GPR_U32(ctx, 31, 0x206534u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20652Cu, 0x206534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206534u;
label_206534:
    // 0x206534: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206538: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20653c: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20653Cu;
    SET_GPR_U32(ctx, 31, 0x206544u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20653Cu, 0x206544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206544u;
label_206544:
    // 0x206544: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x206544u;
    {
        const bool branch_taken_0x206544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206544) {
            ctx->pc = 0x206584u;
            goto label_206584;
        }
    }
    ctx->pc = 0x20654Cu;
label_20654c:
    // 0x20654c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206550: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x206554: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20655c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20655Cu;
    {
        const bool branch_taken_0x20655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20655c) {
            ctx->pc = 0x206574u;
            goto label_206574;
        }
    }
    ctx->pc = 0x206564u;
    // 0x206564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206568: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x206568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20656c: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20656Cu;
    SET_GPR_U32(ctx, 31, 0x206574u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20656Cu, 0x206574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206574u;
label_206574:
    // 0x206574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206578: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x206578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20657c: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20657Cu;
    SET_GPR_U32(ctx, 31, 0x206584u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20657Cu, 0x206584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206584u;
label_206584:
    // 0x206584: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206588: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20658c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206590: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x206590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x206594: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x206594u;
    {
        const bool branch_taken_0x206594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206594) {
            ctx->pc = 0x206678u;
            goto label_206678;
        }
    }
    ctx->pc = 0x20659Cu;
    // 0x20659c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2065a0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2065a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2065a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2065a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2065a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2065a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2065ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2065ACu;
    {
        const bool branch_taken_0x2065ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065ac) {
            ctx->pc = 0x2065C0u;
            goto label_2065c0;
        }
    }
    ctx->pc = 0x2065B4u;
    // 0x2065b4: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x2065b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2065b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2065B8u;
    {
        const bool branch_taken_0x2065b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065b8) {
            ctx->pc = 0x2065C4u;
            goto label_2065c4;
        }
    }
    ctx->pc = 0x2065C0u;
label_2065c0:
    // 0x2065c0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2065c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2065c4:
    // 0x2065c4: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x2065c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2065c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2065cc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2065ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2065d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2065d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2065d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2065d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2065d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2065dc: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x2065dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x2065e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2065e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2065e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2065e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2065e8: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x2065e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x2065ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2065ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2065f0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2065f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2065f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2065f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2065f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2065fc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2065fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206600: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x206600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x206604: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x206604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x206608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20660c: 0x0  nop
    ctx->pc = 0x20660cu;
    // NOP
    // 0x206610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206614: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206618: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x206618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x20661c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20661cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206620: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206624: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x206624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x206628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20662c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20662cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206630: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206634: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x206634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x206638: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x20663c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20663cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206640: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206644: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x206644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x206648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20664c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206650: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x206650u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x206654: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206658: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x206658u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x20665c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206660: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x206660u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x206664: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206668: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20666c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x206670: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x206670u;
    SET_GPR_U32(ctx, 31, 0x206678u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x206670u, 0x206678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206678u;
label_206678:
    // 0x206678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20667c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206680: 0x3c023c80  lui         $v0, 0x3C80
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15488 << 16));
    // 0x206684: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x206684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x206688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20668c: 0x0  nop
    ctx->pc = 0x20668cu;
    // NOP
    // 0x206690: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x206690u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206694: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x206694u;
    SET_GPR_U32(ctx, 31, 0x20669Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x206694u, 0x20669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20669Cu;
label_20669c:
    // 0x20669c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2066a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2066a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2066a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2066ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2066ACu;
    SET_GPR_U32(ctx, 31, 0x2066B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2066ACu, 0x2066B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066B4u;
label_2066b4:
    // 0x2066b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2066B8u;
    SET_GPR_U32(ctx, 31, 0x2066C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2066B8u, 0x2066C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066C0u;
label_2066c0:
    // 0x2066c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2066c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2066c8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2066C8u;
    SET_GPR_U32(ctx, 31, 0x2066D0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2066C8u, 0x2066D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066D0u;
label_2066d0:
    // 0x2066d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066d4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2066D4u;
    SET_GPR_U32(ctx, 31, 0x2066DCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2066D4u, 0x2066DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066DCu;
label_2066dc:
    // 0x2066dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2066e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2066e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2066E4u;
    {
        const bool branch_taken_0x2066e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066e4) {
            ctx->pc = 0x20671Cu;
            goto label_20671c;
        }
    }
    ctx->pc = 0x2066ECu;
    // 0x2066ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2066ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2066f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2066f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2066f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2066f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2066f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2066fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2066fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206700: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206708: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20670c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206710: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206718: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20671c:
    // 0x20671c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x20671cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206728: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x206728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20672c: 0x3e00008  jr          $ra
    ctx->pc = 0x20672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206734u;
}
