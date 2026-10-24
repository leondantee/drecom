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

// Function: Em18_R1_dm_big
// Address: 0x2e0760 - 0x2e0ba0
void Em18_R1_dm_big_0x2e0760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_dm_big_0x2e0760");
#endif

    switch (ctx->pc) {
        case 0x2e07ccu: goto label_2e07cc;
        case 0x2e080cu: goto label_2e080c;
        case 0x2e0824u: goto label_2e0824;
        case 0x2e0838u: goto label_2e0838;
        case 0x2e0848u: goto label_2e0848;
        case 0x2e0854u: goto label_2e0854;
        case 0x2e0878u: goto label_2e0878;
        case 0x2e0944u: goto label_2e0944;
        case 0x2e09e4u: goto label_2e09e4;
        case 0x2e09ecu: goto label_2e09ec;
        case 0x2e0ab4u: goto label_2e0ab4;
        case 0x2e0afcu: goto label_2e0afc;
        case 0x2e0b28u: goto label_2e0b28;
        case 0x2e0b34u: goto label_2e0b34;
        case 0x2e0b44u: goto label_2e0b44;
        case 0x2e0b50u: goto label_2e0b50;
        default: break;
    }

    ctx->pc = 0x2e0760u;

    // 0x2e0760: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e0764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e0764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2e0768: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2e0768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2e076c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0770: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e0770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e0774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0778: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e0778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e077c: 0x108300e6  beq         $a0, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2E077Cu;
    {
        const bool branch_taken_0x2e077c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e077c) {
            ctx->pc = 0x2E0B18u;
            goto label_2e0b18;
        }
    }
    ctx->pc = 0x2E0784u;
    // 0x2e0784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e0784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0788: 0x108300d4  beq         $a0, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2E0788u;
    {
        const bool branch_taken_0x2e0788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0788) {
            ctx->pc = 0x2E0ADCu;
            goto label_2e0adc;
        }
    }
    ctx->pc = 0x2E0790u;
    // 0x2e0790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0794: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0794u;
    {
        const bool branch_taken_0x2e0794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0794) {
            ctx->pc = 0x2E07E8u;
            goto label_2e07e8;
        }
    }
    ctx->pc = 0x2E079Cu;
    // 0x2e079c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E079Cu;
    {
        const bool branch_taken_0x2e079c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e079c) {
            ctx->pc = 0x2E07ACu;
            goto label_2e07ac;
        }
    }
    ctx->pc = 0x2E07A4u;
    // 0x2e07a4: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x2E07A4u;
    {
        const bool branch_taken_0x2e07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e07a4) {
            ctx->pc = 0x2E0B90u;
            goto label_2e0b90;
        }
    }
    ctx->pc = 0x2E07ACu;
label_2e07ac:
    // 0x2e07ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e07b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e07b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e07b8: 0x24060509  addiu       $a2, $zero, 0x509
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x2e07bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e07bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e07c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e07c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e07c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E07C4u;
    SET_GPR_U32(ctx, 31, 0x2E07CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E07C4u, 0x2E07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07CCu;
label_2e07cc:
    // 0x2e07cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e07d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07d4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e07d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e07d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e07dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e07e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e07e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e07e8:
    // 0x2e07e8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e07ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e07ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e07f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e07f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e07f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07fc: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0800: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0804: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E0804u;
    SET_GPR_U32(ctx, 31, 0x2E080Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E0804u, 0x2E080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E080Cu;
label_2e080c:
    // 0x2e080c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0810: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e0814: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0818: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e081c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E081Cu;
    SET_GPR_U32(ctx, 31, 0x2E0824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E081Cu, 0x2E0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0824u;
label_2e0824:
    // 0x2e0824: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0828: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e082c: 0xc44c11f8  lwc1        $f12, 0x11F8($v0)
    ctx->pc = 0x2e082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0830: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E0830u;
    SET_GPR_U32(ctx, 31, 0x2E0838u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E0830u, 0x2E0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0838u;
label_2e0838:
    // 0x2e0838: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e083c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e083cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0840: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0840u;
    SET_GPR_U32(ctx, 31, 0x2E0848u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0840u, 0x2E0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0848u;
label_2e0848:
    // 0x2e0848: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e084c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E084Cu;
    SET_GPR_U32(ctx, 31, 0x2E0854u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E084Cu, 0x2E0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0854u;
label_2e0854:
    // 0x2e0854: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0858: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2e0858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2e085c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e085cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0860: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2e0860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2e0864: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2E0864u;
    {
        const bool branch_taken_0x2e0864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0864) {
            ctx->pc = 0x2E0AB4u;
            goto label_2e0ab4;
        }
    }
    ctx->pc = 0x2E086Cu;
    // 0x2e086c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0870: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E0870u;
    SET_GPR_U32(ctx, 31, 0x2E0878u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E0870u, 0x2E0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0878u;
label_2e0878:
    // 0x2e0878: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e087c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e087cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0880: 0x0  nop
    ctx->pc = 0x2e0880u;
    // NOP
    // 0x2e0884: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e0884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e0888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e088c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e088cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0890: 0x0  nop
    ctx->pc = 0x2e0890u;
    // NOP
    // 0x2e0894: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2e0894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e0898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e089c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08a0: 0x0  nop
    ctx->pc = 0x2e08a0u;
    // NOP
    // 0x2e08a4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e08a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e08ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e08acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08b0: 0x0  nop
    ctx->pc = 0x2e08b0u;
    // NOP
    // 0x2e08b4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e08b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e08b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e08bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e08bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08c0: 0x0  nop
    ctx->pc = 0x2e08c0u;
    // NOP
    // 0x2e08c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e08c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e08c8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e08cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e08ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08d0: 0x0  nop
    ctx->pc = 0x2e08d0u;
    // NOP
    // 0x2e08d4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e08d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e08d8: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2e08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2e08dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e08dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08e0: 0x0  nop
    ctx->pc = 0x2e08e0u;
    // NOP
    // 0x2e08e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2e08e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e08e8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e08ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e08ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08f0: 0x0  nop
    ctx->pc = 0x2e08f0u;
    // NOP
    // 0x2e08f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2e08f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e08f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e08fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e08fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0900: 0x0  nop
    ctx->pc = 0x2e0900u;
    // NOP
    // 0x2e0904: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e0904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e0908: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e090c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e090cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0910: 0x0  nop
    ctx->pc = 0x2e0910u;
    // NOP
    // 0x2e0914: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e0914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e0918: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e091c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0920: 0x0  nop
    ctx->pc = 0x2e0920u;
    // NOP
    // 0x2e0924: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e0924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e0928: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e0928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e092c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e0930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0934: 0x0  nop
    ctx->pc = 0x2e0934u;
    // NOP
    // 0x2e0938: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2e0938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2e093c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E093Cu;
    SET_GPR_U32(ctx, 31, 0x2E0944u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E093Cu, 0x2E0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0944u;
label_2e0944:
    // 0x2e0944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0948: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e0948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e094c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0950: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E0950u;
    {
        const bool branch_taken_0x2e0950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0950) {
            ctx->pc = 0x2E09C8u;
            goto label_2e09c8;
        }
    }
    ctx->pc = 0x2E0958u;
    // 0x2e0958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e0958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e095c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E095Cu;
    {
        const bool branch_taken_0x2e095c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e095c) {
            ctx->pc = 0x2E09B0u;
            goto label_2e09b0;
        }
    }
    ctx->pc = 0x2E0964u;
    // 0x2e0964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0968: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0968u;
    {
        const bool branch_taken_0x2e0968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0968) {
            ctx->pc = 0x2E0998u;
            goto label_2e0998;
        }
    }
    ctx->pc = 0x2E0970u;
    // 0x2e0970: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0970u;
    {
        const bool branch_taken_0x2e0970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0970) {
            ctx->pc = 0x2E0980u;
            goto label_2e0980;
        }
    }
    ctx->pc = 0x2E0978u;
    // 0x2e0978: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0978u;
    {
        const bool branch_taken_0x2e0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0978) {
            ctx->pc = 0x2E09D8u;
            goto label_2e09d8;
        }
    }
    ctx->pc = 0x2E0980u;
label_2e0980:
    // 0x2e0980: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2e0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2e0984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0988: 0x0  nop
    ctx->pc = 0x2e0988u;
    // NOP
    // 0x2e098c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e0990: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0990u;
    {
        const bool branch_taken_0x2e0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0990) {
            ctx->pc = 0x2E09D8u;
            goto label_2e09d8;
        }
    }
    ctx->pc = 0x2E0998u;
label_2e0998:
    // 0x2e0998: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2e0998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2e099c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e099cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09a0: 0x0  nop
    ctx->pc = 0x2e09a0u;
    // NOP
    // 0x2e09a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e09a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e09a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E09A8u;
    {
        const bool branch_taken_0x2e09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09a8) {
            ctx->pc = 0x2E09D8u;
            goto label_2e09d8;
        }
    }
    ctx->pc = 0x2E09B0u;
label_2e09b0:
    // 0x2e09b0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2e09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2e09b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e09b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09b8: 0x0  nop
    ctx->pc = 0x2e09b8u;
    // NOP
    // 0x2e09bc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e09c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E09C0u;
    {
        const bool branch_taken_0x2e09c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09c0) {
            ctx->pc = 0x2E09D8u;
            goto label_2e09d8;
        }
    }
    ctx->pc = 0x2E09C8u;
label_2e09c8:
    // 0x2e09c8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2e09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x2e09cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e09ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09d0: 0x0  nop
    ctx->pc = 0x2e09d0u;
    // NOP
    // 0x2e09d4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e09d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2e09d8:
    // 0x2e09d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e09dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E09DCu;
    SET_GPR_U32(ctx, 31, 0x2E09E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E09DCu, 0x2E09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09E4u;
label_2e09e4:
    // 0x2e09e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E09E4u;
    SET_GPR_U32(ctx, 31, 0x2E09ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E09E4u, 0x2E09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09ECu;
label_2e09ec:
    // 0x2e09ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e09f0: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2e09f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e09f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e09f8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E09F8u;
    {
        const bool branch_taken_0x2e09f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e09f8) {
            ctx->pc = 0x2E0A70u;
            goto label_2e0a70;
        }
    }
    ctx->pc = 0x2E0A00u;
    // 0x2e0a00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0a04: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0A04u;
    {
        const bool branch_taken_0x2e0a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0a04) {
            ctx->pc = 0x2E0A58u;
            goto label_2e0a58;
        }
    }
    ctx->pc = 0x2E0A0Cu;
    // 0x2e0a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0a10: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0A10u;
    {
        const bool branch_taken_0x2e0a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0a10) {
            ctx->pc = 0x2E0A40u;
            goto label_2e0a40;
        }
    }
    ctx->pc = 0x2E0A18u;
    // 0x2e0a18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0A18u;
    {
        const bool branch_taken_0x2e0a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a18) {
            ctx->pc = 0x2E0A28u;
            goto label_2e0a28;
        }
    }
    ctx->pc = 0x2E0A20u;
    // 0x2e0a20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0A20u;
    {
        const bool branch_taken_0x2e0a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a20) {
            ctx->pc = 0x2E0A80u;
            goto label_2e0a80;
        }
    }
    ctx->pc = 0x2E0A28u;
label_2e0a28:
    // 0x2e0a28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e0a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a30: 0x0  nop
    ctx->pc = 0x2e0a30u;
    // NOP
    // 0x2e0a34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e0a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e0a38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0A38u;
    {
        const bool branch_taken_0x2e0a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a38) {
            ctx->pc = 0x2E0A80u;
            goto label_2e0a80;
        }
    }
    ctx->pc = 0x2E0A40u;
label_2e0a40:
    // 0x2e0a40: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x2e0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x2e0a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a48: 0x0  nop
    ctx->pc = 0x2e0a48u;
    // NOP
    // 0x2e0a4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e0a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e0a50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0A50u;
    {
        const bool branch_taken_0x2e0a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a50) {
            ctx->pc = 0x2E0A80u;
            goto label_2e0a80;
        }
    }
    ctx->pc = 0x2E0A58u;
label_2e0a58:
    // 0x2e0a58: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e0a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a60: 0x0  nop
    ctx->pc = 0x2e0a60u;
    // NOP
    // 0x2e0a64: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e0a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e0a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A68u;
    {
        const bool branch_taken_0x2e0a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a68) {
            ctx->pc = 0x2E0A80u;
            goto label_2e0a80;
        }
    }
    ctx->pc = 0x2E0A70u;
label_2e0a70:
    // 0x2e0a70: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x2e0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x2e0a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a78: 0x0  nop
    ctx->pc = 0x2e0a78u;
    // NOP
    // 0x2e0a7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e0a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2e0a80:
    // 0x2e0a80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0a84: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e0a88: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e0a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e0a8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e0a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0a90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0a90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0a94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e0a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0a98: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2e0a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0a9c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2e0a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0aa0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2e0aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0aa4: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2e0aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e0aa8: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0aac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2E0AACu;
    SET_GPR_U32(ctx, 31, 0x2E0AB4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E0AACu, 0x2E0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AB4u;
label_2e0ab4:
    // 0x2e0ab4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ab8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0abc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E0ABCu;
    {
        const bool branch_taken_0x2e0abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0abc) {
            ctx->pc = 0x2E0B90u;
            goto label_2e0b90;
        }
    }
    ctx->pc = 0x2E0AC4u;
    // 0x2e0ac4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ac8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e0ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e0acc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0ad0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e0ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0ad4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E0AD4u;
    {
        const bool branch_taken_0x2e0ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ad4) {
            ctx->pc = 0x2E0B90u;
            goto label_2e0b90;
        }
    }
    ctx->pc = 0x2E0ADCu;
label_2e0adc:
    // 0x2e0adc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ae0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ae4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0ae8: 0x2406050a  addiu       $a2, $zero, 0x50A
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x2e0aec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0af0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0af4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0AF4u;
    SET_GPR_U32(ctx, 31, 0x2E0AFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0AF4u, 0x2E0AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AFCu;
label_2e0afc:
    // 0x2e0afc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e0b00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b04: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e0b04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0b08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e0b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0b14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e0b18:
    // 0x2e0b18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0b20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0B20u;
    SET_GPR_U32(ctx, 31, 0x2E0B28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0B20u, 0x2E0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B28u;
label_2e0b28:
    // 0x2e0b28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E0B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E0B2Cu, 0x2E0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B34u;
label_2e0b34:
    // 0x2e0b34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0b3c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B44u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0B3Cu, 0x2E0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B44u;
label_2e0b44:
    // 0x2e0b44: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E0B48u;
    SET_GPR_U32(ctx, 31, 0x2E0B50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E0B48u, 0x2E0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0b58: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0B58u;
    {
        const bool branch_taken_0x2e0b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b58) {
            ctx->pc = 0x2E0B90u;
            goto label_2e0b90;
        }
    }
    ctx->pc = 0x2E0B60u;
    // 0x2e0b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e0b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0b78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0b80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0b88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e0b90:
    // 0x2e0b90: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e0b90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0b94: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2e0b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e0b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0BA0u;
}
