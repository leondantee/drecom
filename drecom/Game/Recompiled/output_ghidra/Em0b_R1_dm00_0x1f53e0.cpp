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

// Function: Em0b_R1_dm00
// Address: 0x1f53e0 - 0x1f5b88
void Em0b_R1_dm00_0x1f53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_dm00_0x1f53e0");
#endif

    switch (ctx->pc) {
        case 0x1f5464u: goto label_1f5464;
        case 0x1f5530u: goto label_1f5530;
        case 0x1f5538u: goto label_1f5538;
        case 0x1f556cu: goto label_1f556c;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f5640u: goto label_1f5640;
        case 0x1f568cu: goto label_1f568c;
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56ccu: goto label_1f56cc;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5738u: goto label_1f5738;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f5800u: goto label_1f5800;
        default: break;
    }

    ctx->pc = 0x1f53e0u;

    // 0x1f53e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f53e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1f53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1f53e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f53ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f53f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f53f4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1f53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1f53f8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f53fc: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x1f53fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1f5400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5404: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f5404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f5408: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f5408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f540c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5410: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x1F5410u;
    {
        const bool branch_taken_0x1f5410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5410) {
            ctx->pc = 0x1F55FCu;
            goto label_1f55fc;
        }
    }
    ctx->pc = 0x1F5418u;
    // 0x1f5418: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5418u;
    {
        const bool branch_taken_0x1f5418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5418) {
            ctx->pc = 0x1F5428u;
            goto label_1f5428;
        }
    }
    ctx->pc = 0x1F5420u;
    // 0x1f5420: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1F5420u;
    {
        const bool branch_taken_0x1f5420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5420) {
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F5428u;
label_1f5428:
    // 0x1f5428: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f542c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1f542cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1f5430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f5430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f5434: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1f5434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f543c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5440: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f5444: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5448: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f544c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f5450: 0x2406040e  addiu       $a2, $zero, 0x40E
    ctx->pc = 0x1f5450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x1f5454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f545c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F545Cu;
    SET_GPR_U32(ctx, 31, 0x1F5464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F545Cu, 0x1F5464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5464u;
label_1f5464:
    // 0x1f5464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5468: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f546c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5470: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f5470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f5474: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f5474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f5478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f547c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5484: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f5484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f5488: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5490: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5494: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5498: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f5498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f549c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f54a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f54a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f54a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f54ac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f54acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f54b0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1f54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1f54b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f54b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f54b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f54b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f54bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f54c4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f54c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f54c8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f54cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f54ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f54d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f54d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f54d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f54dc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f54dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f54e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f54e8: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x1f54e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f54ec: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1f54ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f54f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f54f4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1f54f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1f54f8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1f54f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1f54fc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f5500: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f5504: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f5504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f5508: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f5508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f550c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f5510: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f5510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f5514: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f5514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f551c: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1f551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x1f5520: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f5520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f5524: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f5524u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5528: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F5528u;
    SET_GPR_U32(ctx, 31, 0x1F5530u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F5528u, 0x1F5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5530u;
label_1f5530:
    // 0x1f5530: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5530u;
    SET_GPR_U32(ctx, 31, 0x1F5538u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5530u, 0x1F5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5538u;
label_1f5538:
    // 0x1f5538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f553c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f5540: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5540u;
    {
        const bool branch_taken_0x1f5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5540) {
            ctx->pc = 0x1F5574u;
            goto label_1f5574;
        }
    }
    ctx->pc = 0x1F5548u;
    // 0x1f5548: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f554c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f5550: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f5550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f5554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f5554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5558: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f5558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f555c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f5560: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f5560u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5564: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F5564u;
    SET_GPR_U32(ctx, 31, 0x1F556Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F5564u, 0x1F556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F556Cu;
label_1f556c:
    // 0x1f556c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F556Cu;
    {
        const bool branch_taken_0x1f556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f556c) {
            ctx->pc = 0x1F5598u;
            goto label_1f5598;
        }
    }
    ctx->pc = 0x1F5574u;
label_1f5574:
    // 0x1f5574: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5578: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f5578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f557c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f5580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f5580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5584: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1f5584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x1f5588: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f5588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f558c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f558cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5590: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F5590u;
    SET_GPR_U32(ctx, 31, 0x1F5598u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F5590u, 0x1F5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5598u;
label_1f5598:
    // 0x1f5598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f559c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f55a0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f55a4: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f55a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f55a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f55ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f55acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f55b0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1f55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1f55b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f55b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f55b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f55bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f55c0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f55c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f55c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f55c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f55cc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f55d0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f55d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f55d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F55D8u;
    {
        const bool branch_taken_0x1f55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f55d8) {
            ctx->pc = 0x1F55FCu;
            goto label_1f55fc;
        }
    }
    ctx->pc = 0x1F55E0u;
    // 0x1f55e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f55e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f55e4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f55e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f55ec: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f55ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f55f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f55f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f55f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f55f8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f55f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1f55fc:
    // 0x1f55fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5600: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5604: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f5608: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f560c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F560Cu;
    {
        const bool branch_taken_0x1f560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f560c) {
            ctx->pc = 0x1F564Cu;
            goto label_1f564c;
        }
    }
    ctx->pc = 0x1F5614u;
    // 0x1f5614: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5618: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1f5618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f561c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5620: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5624: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f5624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5628: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f562c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f5630: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f5630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f5634: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f5634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5638: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F5638u;
    SET_GPR_U32(ctx, 31, 0x1F5640u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F5638u, 0x1F5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5640u;
label_1f5640:
    // 0x1f5640: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f5640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f5644: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5644u;
    {
        const bool branch_taken_0x1f5644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5644) {
            ctx->pc = 0x1F5690u;
            goto label_1f5690;
        }
    }
    ctx->pc = 0x1F564Cu;
label_1f564c:
    // 0x1f564c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5650: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f5650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5654: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f5654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f5658: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f5658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f565c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f565cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5660: 0x0  nop
    ctx->pc = 0x1f5660u;
    // NOP
    // 0x1f5664: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f5664u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5668: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f566c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5670: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5674: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5678: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f5678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f567c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f5680: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f5680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5684: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F5684u;
    SET_GPR_U32(ctx, 31, 0x1F568Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F5684u, 0x1F568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F568Cu;
label_1f568c:
    // 0x1f568c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1f5690:
    // 0x1f5690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5694: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f5694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5698: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f5698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f569c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f569cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f56a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F56A0u;
    SET_GPR_U32(ctx, 31, 0x1F56A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F56A0u, 0x1F56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56A8u;
label_1f56a8:
    // 0x1f56a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56ac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f56acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f56b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f56b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F56B8u;
    SET_GPR_U32(ctx, 31, 0x1F56C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F56B8u, 0x1F56C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56C0u;
label_1f56c0:
    // 0x1f56c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56c4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F56C4u;
    SET_GPR_U32(ctx, 31, 0x1F56CCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F56C4u, 0x1F56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56CCu;
label_1f56cc:
    // 0x1f56cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f56d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f56d4: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F56D4u;
    {
        const bool branch_taken_0x1f56d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f56d4) {
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F56DCu;
    // 0x1f56dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f56e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f56e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f56e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f56ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f56f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f56f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f56f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f56fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5700: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f5700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5704: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5708: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f570c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F570Cu;
    SET_GPR_U32(ctx, 31, 0x1F5714u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F570Cu, 0x1F5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5714u;
label_1f5714:
    // 0x1f5714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5718: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f5718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f571c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5720: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5724: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5724u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f5728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f572c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f572cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5730: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5730u;
    SET_GPR_U32(ctx, 31, 0x1F5738u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5730u, 0x1F5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5738u;
label_1f5738:
    // 0x1f5738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f573c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f5740: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f5740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5744: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5748: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f574c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5754: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f5754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5758: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f575c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5760: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1f5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1f5764: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f5764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f5768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f5768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f576c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5770: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f5770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5774: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x1f5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x1f5778: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1F5778u;
    SET_GPR_U32(ctx, 31, 0x1F5780u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1F5778u, 0x1F5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5780u;
label_1f5780:
    // 0x1f5780: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F5780u;
    {
        const bool branch_taken_0x1f5780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5780) {
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F5788u;
    // 0x1f5788: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f578c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5790: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x1f5790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x1f5794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f5794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5798: 0x0  nop
    ctx->pc = 0x1f5798u;
    // NOP
    // 0x1f579c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f579cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f57a0: 0x0  nop
    ctx->pc = 0x1f57a0u;
    // NOP
    // 0x1f57a4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1F57A4u;
    {
        const bool branch_taken_0x1f57a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f57a4) {
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F57ACu;
    // 0x1f57ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F57ACu;
    SET_GPR_U32(ctx, 31, 0x1F57B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F57ACu, 0x1F57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57B4u;
label_1f57b4:
    // 0x1f57b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f57b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f57b8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f57b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f57bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57c0: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F57C0u;
    {
        const bool branch_taken_0x1f57c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f57c0) {
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F57C8u;
    // 0x1f57c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f57d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f57d4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1f57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f57d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57dc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f57e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57e4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f57e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f57e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57ec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f57ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f57f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f57f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F57F8u;
    SET_GPR_U32(ctx, 31, 0x1F5800u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F57F8u, 0x1F5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5800u;
label_1f5800:
    // 0x1f5800: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f5800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5804: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1f5804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f5808: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5808u;
    {
        const bool branch_taken_0x1f5808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5808) {
            ctx->pc = 0x1F5840u;
            goto label_1f5840;
        }
    }
    ctx->pc = 0x1F5810u;
    // 0x1f5810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5814: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f5818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f581c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5820: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f5824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5828: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f582c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f582cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5830: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f5834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5838: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f583c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f583cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f5840:
    // 0x1f5840: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5844: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f5844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5848: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f584c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f584cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5850: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5854: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f5854u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f585c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f585cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5860: 0x0  nop
    ctx->pc = 0x1f5860u;
    // NOP
    // 0x1f5864: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5864u;
    {
        const bool branch_taken_0x1f5864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5864) {
            ctx->pc = 0x1F5888u;
            goto label_1f5888;
        }
    }
    ctx->pc = 0x1F586Cu;
    // 0x1f586c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5870: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5874: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f5874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5878: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f587c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5884: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f5888:
    // 0x1f5888: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f588c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5890: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1f5894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5898: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f589c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f589cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f58a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f58a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f58a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f58a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f58a8: 0x0  nop
    ctx->pc = 0x1f58a8u;
    // NOP
    // 0x1f58ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F58ACu;
    {
        const bool branch_taken_0x1f58ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f58ac) {
            ctx->pc = 0x1F58D0u;
            goto label_1f58d0;
        }
    }
    ctx->pc = 0x1F58B4u;
    // 0x1f58b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f58bc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f58bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f58c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58c4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f58c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f58c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f58c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f58cc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f58ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f58d0:
    // 0x1f58d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f58d8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1f58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1f58dc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1f58dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1f58e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f58e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f58e4: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f58e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f58e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f58e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f58ec: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1f58ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1f58f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f58f8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f58f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f58fc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f5900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f5900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5904: 0x0  nop
    ctx->pc = 0x1f5904u;
    // NOP
    // 0x1f5908: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f590c: 0x0  nop
    ctx->pc = 0x1f590cu;
    // NOP
    // 0x1f5910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5910u;
    {
        const bool branch_taken_0x1f5910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5910) {
            ctx->pc = 0x1F592Cu;
            goto label_1f592c;
        }
    }
    ctx->pc = 0x1F5918u;
    // 0x1f5918: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f591c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f591cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5920: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5924: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5928: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f5928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_1f592c:
    // 0x1f592c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5930: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5934: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f5938: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f5938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f593c: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F593Cu;
    {
        const bool branch_taken_0x1f593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f593c) {
            ctx->pc = 0x1F5B6Cu;
            goto label_1f5b6c;
        }
    }
    ctx->pc = 0x1F5944u;
    // 0x1f5944: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5948: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f594c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5950: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5954: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f5958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f595c: 0x0  nop
    ctx->pc = 0x1f595cu;
    // NOP
    // 0x1f5960: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F5960u;
    {
        const bool branch_taken_0x1f5960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5960) {
            ctx->pc = 0x1F5A58u;
            goto label_1f5a58;
        }
    }
    ctx->pc = 0x1F5968u;
    // 0x1f5968: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f596c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5970: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5974: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5978: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f597c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f597cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5980: 0x0  nop
    ctx->pc = 0x1f5980u;
    // NOP
    // 0x1f5984: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5984u;
    {
        const bool branch_taken_0x1f5984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5984) {
            ctx->pc = 0x1F59E0u;
            goto label_1f59e0;
        }
    }
    ctx->pc = 0x1F598Cu;
    // 0x1f598c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5990: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5994: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f5994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5998: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f599c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f59a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f59a4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f59a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f59b0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f59b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f59b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59b8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f59bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f59c0: 0x0  nop
    ctx->pc = 0x1f59c0u;
    // NOP
    // 0x1f59c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F59C4u;
    {
        const bool branch_taken_0x1f59c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f59c4) {
            ctx->pc = 0x1F59E0u;
            goto label_1f59e0;
        }
    }
    ctx->pc = 0x1F59CCu;
    // 0x1f59cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f59d4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59dc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f59e0:
    // 0x1f59e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f59e8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f59e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f59ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59f0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f59f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f59f8: 0x0  nop
    ctx->pc = 0x1f59f8u;
    // NOP
    // 0x1f59fc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F59FCu;
    {
        const bool branch_taken_0x1f59fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f59fc) {
            ctx->pc = 0x1F5A58u;
            goto label_1f5a58;
        }
    }
    ctx->pc = 0x1F5A04u;
    // 0x1f5a04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a0c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a14: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5a1c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f5a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a28: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a30: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5a38: 0x0  nop
    ctx->pc = 0x1f5a38u;
    // NOP
    // 0x1f5a3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5A3Cu;
    {
        const bool branch_taken_0x1f5a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5a3c) {
            ctx->pc = 0x1F5A58u;
            goto label_1f5a58;
        }
    }
    ctx->pc = 0x1F5A44u;
    // 0x1f5a44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a4c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a54: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f5a58:
    // 0x1f5a58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a60: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a68: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f5a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5a70: 0x0  nop
    ctx->pc = 0x1f5a70u;
    // NOP
    // 0x1f5a74: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F5A74u;
    {
        const bool branch_taken_0x1f5a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5a74) {
            ctx->pc = 0x1F5B6Cu;
            goto label_1f5b6c;
        }
    }
    ctx->pc = 0x1F5A7Cu;
    // 0x1f5a7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a84: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a8c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5a94: 0x0  nop
    ctx->pc = 0x1f5a94u;
    // NOP
    // 0x1f5a98: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5A98u;
    {
        const bool branch_taken_0x1f5a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5a98) {
            ctx->pc = 0x1F5AF4u;
            goto label_1f5af4;
        }
    }
    ctx->pc = 0x1F5AA0u;
    // 0x1f5aa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5aa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5aa8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1f5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5aac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5ab0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5ab4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5ab8: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f5abc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5ac0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5ac4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ac8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5acc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5ad4: 0x0  nop
    ctx->pc = 0x1f5ad4u;
    // NOP
    // 0x1f5ad8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5AD8u;
    {
        const bool branch_taken_0x1f5ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5ad8) {
            ctx->pc = 0x1F5AF4u;
            goto label_1f5af4;
        }
    }
    ctx->pc = 0x1F5AE0u;
    // 0x1f5ae0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5ae4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5ae8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f5ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5aec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5af0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f5af4:
    // 0x1f5af4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5af8: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x1f5af8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5afc: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1f5afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5b00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b04: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5b0c: 0x0  nop
    ctx->pc = 0x1f5b0cu;
    // NOP
    // 0x1f5b10: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5B10u;
    {
        const bool branch_taken_0x1f5b10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5b10) {
            ctx->pc = 0x1F5B6Cu;
            goto label_1f5b6c;
        }
    }
    ctx->pc = 0x1F5B18u;
    // 0x1f5b18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5b20: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1f5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5b24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b28: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5b30: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f5b34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b38: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f5b3c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5b40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b44: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5b4c: 0x0  nop
    ctx->pc = 0x1f5b4cu;
    // NOP
    // 0x1f5b50: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5B50u;
    {
        const bool branch_taken_0x1f5b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5b50) {
            ctx->pc = 0x1F5B6Cu;
            goto label_1f5b6c;
        }
    }
    ctx->pc = 0x1F5B58u;
    // 0x1f5b58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5b60: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b68: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f5b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_1f5b6c:
    // 0x1f5b6c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1f5b6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5b7c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f5b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f5b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5B88u;
}
