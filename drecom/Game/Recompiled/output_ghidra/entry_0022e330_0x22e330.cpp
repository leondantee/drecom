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

// Function: entry_0022e330
// Address: 0x22e330 - 0x22e458
void entry_0022e330_0x22e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e330_0x22e330");
#endif

    switch (ctx->pc) {
        case 0x22e378u: goto label_22e378;
        case 0x22e414u: goto label_22e414;
        case 0x22e41cu: goto label_22e41c;
        case 0x22e450u: goto label_22e450;
        default: break;
    }

    ctx->pc = 0x22e330u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x22E458u;
}
