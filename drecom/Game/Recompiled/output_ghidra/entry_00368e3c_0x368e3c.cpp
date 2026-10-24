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

// Function: entry_00368e3c
// Address: 0x368e3c - 0x368ef8
void entry_00368e3c_0x368e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368e3c_0x368e3c");
#endif

    switch (ctx->pc) {
        case 0x368e80u: goto label_368e80;
        default: break;
    }

    ctx->pc = 0x368e3cu;

    // 0x368e3c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e40: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x368e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x368e44: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x368e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x368e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e4c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x368e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e54: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x368e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x368e58: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e5c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x368e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x368e60: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x368e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x368e64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e68: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x368e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e70: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x368e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x368e74: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x368e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x368e78: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x368E78u;
    SET_GPR_U32(ctx, 31, 0x368E80u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x368E78u, 0x368E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E80u;
label_368e80:
    // 0x368e80: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x368e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x368e84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x368e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e88: 0x0  nop
    ctx->pc = 0x368e88u;
    // NOP
    // 0x368e8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x368e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368e90: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x368e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x368e94: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368e98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x368e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368e9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x368e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x368ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x368ea4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x368ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x368ea8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x368ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368eac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x368eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368eb0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x368eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x368eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368eb8: 0x0  nop
    ctx->pc = 0x368eb8u;
    // NOP
    // 0x368ebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x368ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x368ec0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x368ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x368ec4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x368ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368ec8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x368ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ecc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x368eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368ed0: 0x0  nop
    ctx->pc = 0x368ed0u;
    // NOP
    // 0x368ed4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x368ED4u;
    {
        const bool branch_taken_0x368ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368ed4) {
            ctx->pc = 0x368EF8u;
            return;
        }
    }
    ctx->pc = 0x368EDCu;
    // 0x368edc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x368edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ee0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x368ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x368ee4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x368ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368ee8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368eec: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x368eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x368ef0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368ef4: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x368ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x368ef8u;
}
