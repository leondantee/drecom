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

// Function: entry_002f5dec
// Address: 0x2f5dec - 0x2f5f2c
void entry_002f5dec_0x2f5dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5dec_0x2f5dec");
#endif

    switch (ctx->pc) {
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5ef8u: goto label_2f5ef8;
        default: break;
    }

    ctx->pc = 0x2f5decu;

    // 0x2f5dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5df0: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f5df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5df4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F5DF4u;
    SET_GPR_U32(ctx, 31, 0x2F5DFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F5DF4u, 0x2F5DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DFCu;
label_2f5dfc:
    // 0x2f5dfc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f5e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5e04: 0x0  nop
    ctx->pc = 0x2f5e04u;
    // NOP
    // 0x2f5e08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5e0c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e14: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f5e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x2f5e18: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5E18u;
    SET_GPR_U32(ctx, 31, 0x2F5E20u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5E18u, 0x2F5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E20u;
label_2f5e20:
    // 0x2f5e20: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f5e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5e28: 0x0  nop
    ctx->pc = 0x2f5e28u;
    // NOP
    // 0x2f5e2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5e30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e38: 0x0  nop
    ctx->pc = 0x2f5e38u;
    // NOP
    // 0x2f5e3c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2f5e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e48: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f5e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x2f5e4c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E54u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5E4Cu, 0x2F5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E54u;
label_2f5e54:
    // 0x2f5e54: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2f5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2f5e58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5e5c: 0x0  nop
    ctx->pc = 0x2f5e5cu;
    // NOP
    // 0x2f5e60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5e64: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f5e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e6c: 0x0  nop
    ctx->pc = 0x2f5e6cu;
    // NOP
    // 0x2f5e70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2f5e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e7c: 0xe60002f8  swc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f5e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2f5e80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e88: 0x0  nop
    ctx->pc = 0x2f5e88u;
    // NOP
    // 0x2f5e8c: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f5e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e94: 0x0  nop
    ctx->pc = 0x2f5e94u;
    // NOP
    // 0x2f5e98: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x2f5e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x2f5e9c: 0x3c02bfa6  lui         $v0, 0xBFA6
    ctx->pc = 0x2f5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49062 << 16));
    // 0x2f5ea0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f5ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f5ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ea8: 0x0  nop
    ctx->pc = 0x2f5ea8u;
    // NOP
    // 0x2f5eac: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x2f5eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x2f5eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5eb4: 0x0  nop
    ctx->pc = 0x2f5eb4u;
    // NOP
    // 0x2f5eb8: 0xe6000308  swc1        $f0, 0x308($s0)
    ctx->pc = 0x2f5eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x2f5ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ec4: 0x0  nop
    ctx->pc = 0x2f5ec4u;
    // NOP
    // 0x2f5ec8: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f5ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    // 0x2f5ecc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f5ed0: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f5ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5ed4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2f5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5ed8: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x2f5edc: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2f5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5ee0: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x2f5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x2f5ee4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2f5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5ee8: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f5eec: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x2f5eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f5ef0: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x2F5EF0u;
    SET_GPR_U32(ctx, 31, 0x2F5EF8u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x2F5EF0u, 0x2F5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EF8u;
label_2f5ef8:
    // 0x2f5ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5efc: 0x0  nop
    ctx->pc = 0x2f5efcu;
    // NOP
    // 0x2f5f00: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x2f5f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x2f5f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5f08: 0x0  nop
    ctx->pc = 0x2f5f08u;
    // NOP
    // 0x2f5f0c: 0xe6000314  swc1        $f0, 0x314($s0)
    ctx->pc = 0x2f5f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 788), bits); }
    // 0x2f5f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5f14: 0x0  nop
    ctx->pc = 0x2f5f14u;
    // NOP
    // 0x2f5f18: 0xe6000318  swc1        $f0, 0x318($s0)
    ctx->pc = 0x2f5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x2f5f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5f24: 0x0  nop
    ctx->pc = 0x2f5f24u;
    // NOP
    // 0x2f5f28: 0xe600031c  swc1        $f0, 0x31C($s0)
    ctx->pc = 0x2f5f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
    ctx->pc = 0x2f5f2cu;
}
