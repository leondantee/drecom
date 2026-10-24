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

// Function: Em20_R0_init
// Address: 0x359740 - 0x359910
void Em20_R0_init_0x359740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em20_R0_init_0x359740");
#endif

    switch (ctx->pc) {
        case 0x359790u: goto label_359790;
        case 0x359864u: goto label_359864;
        case 0x359884u: goto label_359884;
        case 0x3598a4u: goto label_3598a4;
        case 0x3598c4u: goto label_3598c4;
        default: break;
    }

    ctx->pc = 0x359740u;

    // 0x359740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x359740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x359744: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x359744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x359748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35974c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359750: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x359750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x359754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359758: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x359758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x35975c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x35975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x359760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359768: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x359768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x35976c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x35976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x359770: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x359770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x359774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35977c: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x35977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x359780: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x359780u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x359784: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359784u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359788: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x359788u;
    SET_GPR_U32(ctx, 31, 0x359790u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x359788u, 0x359790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359790u;
label_359790:
    // 0x359790: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x359790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x359794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359798: 0x0  nop
    ctx->pc = 0x359798u;
    // NOP
    // 0x35979c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x35979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x3597a0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x3597a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x3597a4: 0x3c0243e7  lui         $v0, 0x43E7
    ctx->pc = 0x3597a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17383 << 16));
    // 0x3597a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3597a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3597ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3597acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3597b0: 0x0  nop
    ctx->pc = 0x3597b0u;
    // NOP
    // 0x3597b4: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x3597b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x3597b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597bc: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3597bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3597c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3597c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3597c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3597c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3597c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597cc: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x3597ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x3597d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3597d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3597d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3597d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3597d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597dc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3597dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3597e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597e4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x3597e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3597e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597ec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3597ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3597f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597f4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3597f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3597f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3597f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3597fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3597fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x359800: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x359804: 0x2443a7f0  addiu       $v1, $v0, -0x5810
    ctx->pc = 0x359804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
    // 0x359808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35980c: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x35980cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x359810: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x359810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x359814: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359818: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x359818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x35981c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359820: 0xa0401219  sb          $zero, 0x1219($v0)
    ctx->pc = 0x359820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x359824: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x359824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35982c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35982cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x359830: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359834: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x359834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x359838: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x359838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x35983c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x35983cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x359840: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x359840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x359844: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x359844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x359848: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35984c: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35984cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x359850: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x359850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x359854: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x359854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x359858: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x359858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x35985c: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x35985Cu;
    SET_GPR_U32(ctx, 31, 0x359864u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x35985Cu, 0x359864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359864u;
label_359864:
    // 0x359864: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359868: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x359868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35986c: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x35986cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x359870: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x359870u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x359874: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x359874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x359878: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x359878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x35987c: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x35987Cu;
    SET_GPR_U32(ctx, 31, 0x359884u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x35987Cu, 0x359884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359884u;
label_359884:
    // 0x359884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359888: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x359888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35988c: 0x24510240  addiu       $s1, $v0, 0x240
    ctx->pc = 0x35988cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x359890: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x359890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x359894: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x359894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x359898: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x359898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x35989c: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x35989Cu;
    SET_GPR_U32(ctx, 31, 0x3598A4u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x35989Cu, 0x3598A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598A4u;
label_3598a4:
    // 0x3598a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3598a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3598a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3598a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3598ac: 0x24510360  addiu       $s1, $v0, 0x360
    ctx->pc = 0x3598acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x3598b0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3598b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3598b4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3598b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x3598b8: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x3598b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x3598bc: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x3598BCu;
    SET_GPR_U32(ctx, 31, 0x3598C4u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x3598BCu, 0x3598C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598C4u;
label_3598c4:
    // 0x3598c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3598c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3598c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3598c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3598cc: 0xac23efb4  sw          $v1, -0x104C($at)
    ctx->pc = 0x3598ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x3598d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3598d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3598d4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3598d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3598d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3598d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3598dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3598dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3598e0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3598e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3598e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3598e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3598e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3598e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3598ec: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x3598ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x3598f0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x3598f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x3598f4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3598f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3598f8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3598f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3598fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3598fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359904: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x359904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359908: 0x3e00008  jr          $ra
    ctx->pc = 0x359908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359910u;
}
