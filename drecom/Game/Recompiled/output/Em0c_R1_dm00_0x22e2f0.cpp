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

// Function: Em0c_R1_dm00
// Address: 0x22e2f0 - 0x22e618
void Em0c_R1_dm00_0x22e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_dm00_0x22e2f0");
#endif

    switch (ctx->pc) {
        case 0x22e378u: goto label_22e378;
        case 0x22e414u: goto label_22e414;
        case 0x22e41cu: goto label_22e41c;
        case 0x22e450u: goto label_22e450;
        case 0x22e47cu: goto label_22e47c;
        case 0x22e540u: goto label_22e540;
        case 0x22e55cu: goto label_22e55c;
        case 0x22e570u: goto label_22e570;
        case 0x22e5b8u: goto label_22e5b8;
        case 0x22e5dcu: goto label_22e5dc;
        default: break;
    }

    ctx->pc = 0x22e2f0u;

    // 0x22e2f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22e2f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x22e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x22e2f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e2fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e304: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x22e304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x22e308: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e30c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22e30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e310: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22e310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22e314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e318: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x22E318u;
    {
        const bool branch_taken_0x22e318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e318) {
            ctx->pc = 0x22E514u;
            goto label_22e514;
        }
    }
    ctx->pc = 0x22E320u;
    // 0x22e320: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E320u;
    {
        const bool branch_taken_0x22e320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e320) {
            ctx->pc = 0x22E330u;
            goto label_22e330;
        }
    }
    ctx->pc = 0x22E328u;
    // 0x22e328: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x22E328u;
    {
        const bool branch_taken_0x22e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e328) {
            ctx->pc = 0x22E5FCu;
            goto label_22e5fc;
        }
    }
    ctx->pc = 0x22E330u;
label_22e330:
    // 0x22e330: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e334: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22e334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e33c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22e33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22e340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e344: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e348: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22e348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x22e34c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e350: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e354: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22e354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22e358: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e35c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e360: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22e360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22e364: 0x2406040d  addiu       $a2, $zero, 0x40D
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x22e368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e36c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22e36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22e370: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22E370u;
    SET_GPR_U32(ctx, 31, 0x22E378u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22E370u, 0x22E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E378u;
label_22e378:
    // 0x22e378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e37c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e380: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e384: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22e384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22e388: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22e388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22e38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e398: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22e398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22e39c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22e3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e3a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e3a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e3ac: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22e3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22e3b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22e3b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e3b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e3bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e3c0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22e3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22e3c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e3c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22e3cc: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x22e3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22e3d0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x22e3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x22e3d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x22e3d8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x22e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x22e3dc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x22e3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x22e3e0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x22e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22e3e4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x22e3e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x22e3ec: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x22e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22e3f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e3f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e3f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e3fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e400: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x22e400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x22e404: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22e408: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e408u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e40c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E40Cu;
    SET_GPR_U32(ctx, 31, 0x22E414u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E40Cu, 0x22E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E414u;
label_22e414:
    // 0x22e414: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E414u;
    SET_GPR_U32(ctx, 31, 0x22E41Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E414u, 0x22E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E41Cu;
label_22e41c:
    // 0x22e41c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e420: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e424: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22E424u;
    {
        const bool branch_taken_0x22e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e424) {
            ctx->pc = 0x22E458u;
            goto label_22e458;
        }
    }
    ctx->pc = 0x22E42Cu;
    // 0x22e42c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e430: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e434: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e438: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e43c: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22e440: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22e444: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e444u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e448: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E448u;
    SET_GPR_U32(ctx, 31, 0x22E450u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E448u, 0x22E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E450u;
label_22e450:
    // 0x22e450: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22E450u;
    {
        const bool branch_taken_0x22e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e450) {
            ctx->pc = 0x22E47Cu;
            goto label_22e47c;
        }
    }
    ctx->pc = 0x22E458u;
label_22e458:
    // 0x22e458: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e45c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e468: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x22e468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x22e46c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22e470: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e470u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e474: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E474u;
    SET_GPR_U32(ctx, 31, 0x22E47Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E474u, 0x22E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E47Cu;
label_22e47c:
    // 0x22e47c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e480: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e484: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e488: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22e48c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e490: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e494: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e498: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e49c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22e4a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22e4a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e4a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E4A8u;
    {
        const bool branch_taken_0x22e4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4a8) {
            ctx->pc = 0x22E4CCu;
            goto label_22e4cc;
        }
    }
    ctx->pc = 0x22E4B0u;
    // 0x22e4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e4b4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22e4b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e4bc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x22e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22e4c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e4c8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22e4c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_22e4cc:
    // 0x22e4cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e4d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22e4d4: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x22e4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22e4d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e4dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22e4e0: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x22e4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x22e4e4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22e4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e4ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e4f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E4F0u;
    {
        const bool branch_taken_0x22e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4f0) {
            ctx->pc = 0x22E514u;
            goto label_22e514;
        }
    }
    ctx->pc = 0x22E4F8u;
    // 0x22e4f8: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x22e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x22e4fc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x22e4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22e500: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22e504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e508: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E508u;
    {
        const bool branch_taken_0x22e508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e508) {
            ctx->pc = 0x22E514u;
            goto label_22e514;
        }
    }
    ctx->pc = 0x22E510u;
    // 0x22e510: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22e510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_22e514:
    // 0x22e514: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22e518: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22e51c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22e51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22e520: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e524: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e528: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22e52c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x22e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22e530: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22e534: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22e538: 0xc05c848  jal         func_172120
    ctx->pc = 0x22E538u;
    SET_GPR_U32(ctx, 31, 0x22E540u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22E538u, 0x22E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E540u;
label_22e540:
    // 0x22e540: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x22e540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22e544: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e548: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e54c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x22e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e550: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22e550u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e554: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22E554u;
    SET_GPR_U32(ctx, 31, 0x22E55Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22E554u, 0x22E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E55Cu;
label_22e55c:
    // 0x22e55c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e560: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22e560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22e564: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e568: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22E568u;
    SET_GPR_U32(ctx, 31, 0x22E570u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22E568u, 0x22E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E570u;
label_22e570:
    // 0x22e570: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e574: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22e574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22e578: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22E578u;
    {
        const bool branch_taken_0x22e578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e578) {
            ctx->pc = 0x22E5FCu;
            goto label_22e5fc;
        }
    }
    ctx->pc = 0x22E580u;
    // 0x22e580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e584: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e588: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e588u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e58c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e590: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e594: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22e594u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e59c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22e59cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e5a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22e5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e5a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22e5b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E5B0u;
    SET_GPR_U32(ctx, 31, 0x22E5B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E5B0u, 0x22E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5B8u;
label_22e5b8:
    // 0x22e5b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e5bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22e5c0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22e5c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22e5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22e5c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22e5c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22e5cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e5d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E5D4u;
    SET_GPR_U32(ctx, 31, 0x22E5DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E5D4u, 0x22E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5DCu;
label_22e5dc:
    // 0x22e5dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e5e0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22e5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22e5e4: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x22e5e8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22e5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22e5ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22e5ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22e5f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e5f8: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_22e5fc:
    // 0x22e5fc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x22e5fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e60c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22e60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22e610: 0x3e00008  jr          $ra
    ctx->pc = 0x22E610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E618u;
}
