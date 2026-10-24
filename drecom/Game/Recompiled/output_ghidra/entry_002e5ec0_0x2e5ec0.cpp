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

// Function: entry_002e5ec0
// Address: 0x2e5ec0 - 0x2e601c
void entry_002e5ec0_0x2e5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5ec0_0x2e5ec0");
#endif

    switch (ctx->pc) {
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5f14u: goto label_2e5f14;
        case 0x2e5f3cu: goto label_2e5f3c;
        case 0x2e5f58u: goto label_2e5f58;
        case 0x2e5f74u: goto label_2e5f74;
        default: break;
    }

    ctx->pc = 0x2e5ec0u;

    // 0x2e5ec0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2e5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e5ec4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e5ec8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2e5ecc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2e5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2e5ed0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e5ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e5ed4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5edc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5ee0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e5ee4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2e5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5ee8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e5eec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2e5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2e5ef0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2E5EF0u;
    SET_GPR_U32(ctx, 31, 0x2E5EF8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2E5EF0u, 0x2E5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EF8u;
label_2e5ef8:
    // 0x2e5ef8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2e5ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e5efc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5f00: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5f04: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2e5f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e5f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f0c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E5F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F14u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E5F0Cu, 0x2E5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F14u;
label_2e5f14:
    // 0x2e5f14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5f18: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e5f1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5f20: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e5f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e5f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e5f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5f28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2e5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e5f2c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E5F2Cu;
    {
        const bool branch_taken_0x2e5f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f2c) {
            ctx->pc = 0x2E601Cu;
            return;
        }
    }
    ctx->pc = 0x2E5F34u;
    // 0x2e5f34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E5F34u;
    SET_GPR_U32(ctx, 31, 0x2E5F3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E5F34u, 0x2E5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F3Cu;
label_2e5f3c:
    // 0x2e5f3c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e5f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5f44: 0x0  nop
    ctx->pc = 0x2e5f44u;
    // NOP
    // 0x2e5f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e5f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e5f50: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E5F50u;
    SET_GPR_U32(ctx, 31, 0x2E5F58u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E5F50u, 0x2E5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F58u;
label_2e5f58:
    // 0x2e5f58: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e5f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5f60: 0x0  nop
    ctx->pc = 0x2e5f60u;
    // NOP
    // 0x2e5f64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e5f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e5f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E5F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E5F6Cu, 0x2E5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F74u;
label_2e5f74:
    // 0x2e5f74: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e5f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5f7c: 0x0  nop
    ctx->pc = 0x2e5f7cu;
    // NOP
    // 0x2e5f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e5f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f84: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e5f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5f8c: 0x0  nop
    ctx->pc = 0x2e5f8cu;
    // NOP
    // 0x2e5f90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5f94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e5f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fa0: 0x0  nop
    ctx->pc = 0x2e5fa0u;
    // NOP
    // 0x2e5fa4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e5fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e5fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fac: 0x0  nop
    ctx->pc = 0x2e5facu;
    // NOP
    // 0x2e5fb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e5fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e5fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fb8: 0x0  nop
    ctx->pc = 0x2e5fb8u;
    // NOP
    // 0x2e5fbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2e5fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e5fc0: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e5fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fc8: 0x0  nop
    ctx->pc = 0x2e5fc8u;
    // NOP
    // 0x2e5fcc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e5fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e5fd0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2e5fd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e5fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fdc: 0x0  nop
    ctx->pc = 0x2e5fdcu;
    // NOP
    // 0x2e5fe0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e5fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e5fe4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e5fe8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e5fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e5fec: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2e5ff0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5ff4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2e5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2e5ff8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e5ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e5ffc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6000: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e6004: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6008: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e6008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e600c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e600cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6010: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6014: 0xc086584  jal         func_219610
    ctx->pc = 0x2E6014u;
    SET_GPR_U32(ctx, 31, 0x2E601Cu);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x2E6014u, 0x2E601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E601Cu;
}
