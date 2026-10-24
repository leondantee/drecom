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

// Function: entry_002e07e8
// Address: 0x2e07e8 - 0x2e0980
void entry_002e07e8_0x2e07e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e07e8_0x2e07e8");
#endif

    switch (ctx->pc) {
        case 0x2e080cu: goto label_2e080c;
        case 0x2e0824u: goto label_2e0824;
        case 0x2e0838u: goto label_2e0838;
        case 0x2e0848u: goto label_2e0848;
        case 0x2e0854u: goto label_2e0854;
        case 0x2e0878u: goto label_2e0878;
        case 0x2e0944u: goto label_2e0944;
        default: break;
    }

    ctx->pc = 0x2e07e8u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x2E0970u;
    // 0x2e0970: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0970u;
    {
        const bool branch_taken_0x2e0970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0970) {
            ctx->pc = 0x2E0980u;
            return;
        }
    }
    ctx->pc = 0x2E0978u;
    // 0x2e0978: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0978u;
    {
        const bool branch_taken_0x2e0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0978) {
            ctx->pc = 0x2E09D8u;
            return;
        }
    }
    ctx->pc = 0x2E0980u;
}
