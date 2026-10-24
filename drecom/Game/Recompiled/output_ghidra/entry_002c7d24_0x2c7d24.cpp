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

// Function: entry_002c7d24
// Address: 0x2c7d24 - 0x2c7e40
void entry_002c7d24_0x2c7d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7d24_0x2c7d24");
#endif

    switch (ctx->pc) {
        case 0x2c7d50u: goto label_2c7d50;
        case 0x2c7d58u: goto label_2c7d58;
        case 0x2c7e04u: goto label_2c7e04;
        default: break;
    }

    ctx->pc = 0x2c7d24u;

    // 0x2c7d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d2c: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x2c7d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c7d30: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d34: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d38: 0x8cc50368  lw          $a1, 0x368($a2)
    ctx->pc = 0x2c7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x2c7d3c: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c7d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c7d40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c7d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c7d48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C7D48u;
    SET_GPR_U32(ctx, 31, 0x2C7D50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C7D48u, 0x2C7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D50u;
label_2c7d50:
    // 0x2c7d50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7D50u;
    SET_GPR_U32(ctx, 31, 0x2C7D58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7D50u, 0x2C7D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D58u;
label_2c7d58:
    // 0x2c7d58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7d5c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c7d60: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x2c7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x2c7d64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c7d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c7d68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7d68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7d6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c7d70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7d78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7d80: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c7d84: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c7d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7d8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7d94: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c7d98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7da0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7da4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7da8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c7dac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7db0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c7db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7db4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c7db8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c7dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c7dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7dc0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c7dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7dc8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7dcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7dd0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c7dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c7dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7dd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ddc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7de0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c7de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c7de4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7de8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7dec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c7df0: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c7df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c7df4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7df8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c7df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c7dfc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C7DFCu;
    SET_GPR_U32(ctx, 31, 0x2C7E04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C7DFCu, 0x2C7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E04u;
label_2c7e04:
    // 0x2c7e04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7e0c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7e10: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e18: 0x0  nop
    ctx->pc = 0x2c7e18u;
    // NOP
    // 0x2c7e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c7e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7e20: 0x0  nop
    ctx->pc = 0x2c7e20u;
    // NOP
    // 0x2c7e24: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7E24u;
    {
        const bool branch_taken_0x2c7e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7e24) {
            ctx->pc = 0x2C7E40u;
            return;
        }
    }
    ctx->pc = 0x2C7E2Cu;
    // 0x2c7e2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c7e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e34: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e38: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7e3c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c7e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    ctx->pc = 0x2c7e40u;
}
