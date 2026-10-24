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

// Function: entry_002c5d0c
// Address: 0x2c5d0c - 0x2c5f28
void entry_002c5d0c_0x2c5d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5d0c_0x2c5d0c");
#endif

    switch (ctx->pc) {
        case 0x2c5d1cu: goto label_2c5d1c;
        case 0x2c5d50u: goto label_2c5d50;
        case 0x2c5d60u: goto label_2c5d60;
        case 0x2c5d6cu: goto label_2c5d6c;
        case 0x2c5e10u: goto label_2c5e10;
        case 0x2c5e24u: goto label_2c5e24;
        case 0x2c5e6cu: goto label_2c5e6c;
        case 0x2c5e7cu: goto label_2c5e7c;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5ec4u: goto label_2c5ec4;
        default: break;
    }

    ctx->pc = 0x2c5d0cu;

    // 0x2c5d0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c5d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c5d14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C5D14u;
    SET_GPR_U32(ctx, 31, 0x2C5D1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C5D14u, 0x2C5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D1Cu;
label_2c5d1c:
    // 0x2c5d1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d24: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d2c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c5d30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d38: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c5d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d40: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c5d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c5d44: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C5D48u;
    SET_GPR_U32(ctx, 31, 0x2C5D50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C5D48u, 0x2C5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D50u;
label_2c5d50:
    // 0x2c5d50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c5d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c5d58: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C5D58u;
    SET_GPR_U32(ctx, 31, 0x2C5D60u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C5D58u, 0x2C5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D60u;
label_2c5d60:
    // 0x2c5d60: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d64: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C5D64u;
    SET_GPR_U32(ctx, 31, 0x2C5D6Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C5D64u, 0x2C5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D6Cu;
label_2c5d6c:
    // 0x2c5d6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5d74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5d78: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C5D78u;
    {
        const bool branch_taken_0x2c5d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d78) {
            ctx->pc = 0x2C5F28u;
            return;
        }
    }
    ctx->pc = 0x2C5D80u;
    // 0x2c5d80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5d8c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c5d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d90: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c5d94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5da0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5da4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c5da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c5da8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5dac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5db4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2c5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5db8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c5db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c5dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5dc4: 0x0  nop
    ctx->pc = 0x2c5dc4u;
    // NOP
    // 0x2c5dc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c5dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c5dcc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5dd0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2c5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5dd4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c5dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c5dd8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ddc: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2c5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5de0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c5de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c5de4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5de8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5dec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c5df0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5df8: 0x0  nop
    ctx->pc = 0x2c5df8u;
    // NOP
    // 0x2c5dfc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c5dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c5e00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c5e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e08: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C5E08u;
    SET_GPR_U32(ctx, 31, 0x2C5E10u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C5E10u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C5E10u) { return; }
    ctx->pc = 0x2C5E10u;
label_2c5e10:
    // 0x2c5e10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c5e18: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c5e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e1c: 0xc040c86  jal         func_103218
    ctx->pc = 0x2C5E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5E24u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x2C5E24u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C5E24u) { return; }
    ctx->pc = 0x2C5E24u;
label_2c5e24:
    // 0x2c5e24: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5e28: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2c5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e2c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2c5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c5e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5e34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c5e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c5e38: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c5e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c5e3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5e40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5e44: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x2c5e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c5e48: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C5E48u;
    {
        const bool branch_taken_0x2c5e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e48) {
            ctx->pc = 0x2C5F28u;
            return;
        }
    }
    ctx->pc = 0x2C5E50u;
    // 0x2c5e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5e58: 0x0  nop
    ctx->pc = 0x2c5e58u;
    // NOP
    // 0x2c5e5c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c5e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c5e60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c5e64: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C5E64u;
    SET_GPR_U32(ctx, 31, 0x2C5E6Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C5E64u, 0x2C5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E6Cu;
label_2c5e6c:
    // 0x2c5e6c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2c5e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5e70: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2c5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c5e74: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C5E74u;
    SET_GPR_U32(ctx, 31, 0x2C5E7Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C5E74u, 0x2C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E7Cu;
label_2c5e7c:
    // 0x2c5e7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5e80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5e84: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2c5e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c5e88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c5e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e8c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c5e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e90: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2c5e90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5e94: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2c5e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e98: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c5e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5ea0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c5ea0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c5ea4: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2C5EA4u;
    SET_GPR_U32(ctx, 31, 0x2C5EACu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2C5EA4u, 0x2C5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EACu;
label_2c5eac:
    // 0x2c5eac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c5eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c5eb0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5eb4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c5eb4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c5eb8: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2c5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c5ebc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C5EBCu;
    SET_GPR_U32(ctx, 31, 0x2C5EC4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C5EBCu, 0x2C5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EC4u;
label_2c5ec4:
    // 0x2c5ec4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5ecc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c5eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c5ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ed4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c5ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ee0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c5ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5ee8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c5eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5ef0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c5ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5ef8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c5f00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c5f04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5f08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5f0c: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c5f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5f10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5f14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5f18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5f1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5f20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5f24: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x2c5f28u;
}
