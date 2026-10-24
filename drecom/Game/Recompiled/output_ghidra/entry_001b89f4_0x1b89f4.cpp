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

// Function: entry_001b89f4
// Address: 0x1b89f4 - 0x1b8a98
void entry_001b89f4_0x1b89f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b89f4_0x1b89f4");
#endif

    ctx->pc = 0x1b89f4u;

    // 0x1b89f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b89f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b89f8: 0xc4a11b5c  lwc1        $f1, 0x1B5C($a1)
    ctx->pc = 0x1b89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b89fc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1b8a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8a04: 0x0  nop
    ctx->pc = 0x1b8a04u;
    // NOP
    // 0x1b8a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8a0c: 0x0  nop
    ctx->pc = 0x1b8a0cu;
    // NOP
    // 0x1b8a10: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B8A10u;
    {
        const bool branch_taken_0x1b8a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8a10) {
            ctx->pc = 0x1B8AF4u;
            return;
        }
    }
    ctx->pc = 0x1B8A18u;
    // 0x1b8a18: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8a1c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b8a20: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b8a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b8a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8a28: 0x0  nop
    ctx->pc = 0x1b8a28u;
    // NOP
    // 0x1b8a2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8a30: 0x0  nop
    ctx->pc = 0x1b8a30u;
    // NOP
    // 0x1b8a34: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B8A34u;
    {
        const bool branch_taken_0x1b8a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8a34) {
            ctx->pc = 0x1B8A98u;
            return;
        }
    }
    ctx->pc = 0x1B8A3Cu;
    // 0x1b8a3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8a40: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b8a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8a44: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b8a48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b8a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8a50: 0x0  nop
    ctx->pc = 0x1b8a50u;
    // NOP
    // 0x1b8a54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b8a58: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b8a5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8a60: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8a64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b8a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8a6c: 0x0  nop
    ctx->pc = 0x1b8a6cu;
    // NOP
    // 0x1b8a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8a74: 0x0  nop
    ctx->pc = 0x1b8a74u;
    // NOP
    // 0x1b8a78: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B8A78u;
    {
        const bool branch_taken_0x1b8a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8a78) {
            ctx->pc = 0x1B8AF4u;
            return;
        }
    }
    ctx->pc = 0x1B8A80u;
    // 0x1b8a80: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b8a84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8a84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8a88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8a8c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b8a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b8a90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B8A90u;
    {
        const bool branch_taken_0x1b8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a90) {
            ctx->pc = 0x1B8AF4u;
            return;
        }
    }
    ctx->pc = 0x1B8A98u;
}
