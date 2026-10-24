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

// Function: entry_001b5cf0
// Address: 0x1b5cf0 - 0x1b5d94
void entry_001b5cf0_0x1b5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5cf0_0x1b5cf0");
#endif

    ctx->pc = 0x1b5cf0u;

    // 0x1b5cf0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5cf4: 0xc4811b5c  lwc1        $f1, 0x1B5C($a0)
    ctx->pc = 0x1b5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5cf8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1b5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1b5cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d00: 0x0  nop
    ctx->pc = 0x1b5d00u;
    // NOP
    // 0x1b5d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5d08: 0x0  nop
    ctx->pc = 0x1b5d08u;
    // NOP
    // 0x1b5d0c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B5D0Cu;
    {
        const bool branch_taken_0x1b5d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5d0c) {
            ctx->pc = 0x1B5DF0u;
            return;
        }
    }
    ctx->pc = 0x1B5D14u;
    // 0x1b5d14: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b5d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5d18: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1b5d1c: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b5d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1b5d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d24: 0x0  nop
    ctx->pc = 0x1b5d24u;
    // NOP
    // 0x1b5d28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5d2c: 0x0  nop
    ctx->pc = 0x1b5d2cu;
    // NOP
    // 0x1b5d30: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B5D30u;
    {
        const bool branch_taken_0x1b5d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5d30) {
            ctx->pc = 0x1B5D94u;
            return;
        }
    }
    ctx->pc = 0x1B5D38u;
    // 0x1b5d38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5d3c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5d40: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x1b5d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x1b5d44: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x1b5d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1b5d48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b5d48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d4c: 0x0  nop
    ctx->pc = 0x1b5d4cu;
    // NOP
    // 0x1b5d50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b5d54: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b5d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b5d58: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b5d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5d5c: 0xc4e11b50  lwc1        $f1, 0x1B50($a3)
    ctx->pc = 0x1b5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5d60: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x1b5d60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x1b5d64: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b5d64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d68: 0x0  nop
    ctx->pc = 0x1b5d68u;
    // NOP
    // 0x1b5d6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5d70: 0x0  nop
    ctx->pc = 0x1b5d70u;
    // NOP
    // 0x1b5d74: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B5D74u;
    {
        const bool branch_taken_0x1b5d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5d74) {
            ctx->pc = 0x1B5DF0u;
            return;
        }
    }
    ctx->pc = 0x1B5D7Cu;
    // 0x1b5d7c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b5d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5d88: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b5d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b5d8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B5D8Cu;
    {
        const bool branch_taken_0x1b5d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d8c) {
            ctx->pc = 0x1B5DF0u;
            return;
        }
    }
    ctx->pc = 0x1B5D94u;
}
