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

// Function: entry_001b9e30
// Address: 0x1b9e30 - 0x1b9ed4
void entry_001b9e30_0x1b9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9e30_0x1b9e30");
#endif

    ctx->pc = 0x1b9e30u;

    // 0x1b9e30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9e34: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9e38: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1b9e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9e40: 0x0  nop
    ctx->pc = 0x1b9e40u;
    // NOP
    // 0x1b9e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9e48: 0x0  nop
    ctx->pc = 0x1b9e48u;
    // NOP
    // 0x1b9e4c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B9E4Cu;
    {
        const bool branch_taken_0x1b9e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e4c) {
            ctx->pc = 0x1B9F30u;
            return;
        }
    }
    ctx->pc = 0x1B9E54u;
    // 0x1b9e54: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9e58: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1b9e5c: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1b9e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1b9e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9e64: 0x0  nop
    ctx->pc = 0x1b9e64u;
    // NOP
    // 0x1b9e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9e6c: 0x0  nop
    ctx->pc = 0x1b9e6cu;
    // NOP
    // 0x1b9e70: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B9E70u;
    {
        const bool branch_taken_0x1b9e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e70) {
            ctx->pc = 0x1B9ED4u;
            return;
        }
    }
    ctx->pc = 0x1B9E78u;
    // 0x1b9e78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9e7c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b9e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9e80: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b9e84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b9e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9e8c: 0x0  nop
    ctx->pc = 0x1b9e8cu;
    // NOP
    // 0x1b9e90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9e94: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b9e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b9e98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9e9c: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9ea0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ea8: 0x0  nop
    ctx->pc = 0x1b9ea8u;
    // NOP
    // 0x1b9eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9eb0: 0x0  nop
    ctx->pc = 0x1b9eb0u;
    // NOP
    // 0x1b9eb4: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B9EB4u;
    {
        const bool branch_taken_0x1b9eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9eb4) {
            ctx->pc = 0x1B9F30u;
            return;
        }
    }
    ctx->pc = 0x1B9EBCu;
    // 0x1b9ebc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ec8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b9ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b9ecc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B9ECCu;
    {
        const bool branch_taken_0x1b9ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ecc) {
            ctx->pc = 0x1B9F30u;
            return;
        }
    }
    ctx->pc = 0x1B9ED4u;
}
