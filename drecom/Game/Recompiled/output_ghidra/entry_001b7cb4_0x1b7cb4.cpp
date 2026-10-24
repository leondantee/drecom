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

// Function: entry_001b7cb4
// Address: 0x1b7cb4 - 0x1b7d58
void entry_001b7cb4_0x1b7cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7cb4_0x1b7cb4");
#endif

    ctx->pc = 0x1b7cb4u;

    // 0x1b7cb4: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b7cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7cb8: 0xc6611b5c  lwc1        $f1, 0x1B5C($s3)
    ctx->pc = 0x1b7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7cbc: 0x3c064240  lui         $a2, 0x4240
    ctx->pc = 0x1b7cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16960 << 16));
    // 0x1b7cc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b7cc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7cc4: 0x0  nop
    ctx->pc = 0x1b7cc4u;
    // NOP
    // 0x1b7cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7ccc: 0x0  nop
    ctx->pc = 0x1b7cccu;
    // NOP
    // 0x1b7cd0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B7CD0u;
    {
        const bool branch_taken_0x1b7cd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7cd0) {
            ctx->pc = 0x1B7DB4u;
            return;
        }
    }
    ctx->pc = 0x1B7CD8u;
    // 0x1b7cd8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7cdc: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1b7ce0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b7ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1b7ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7ce8: 0x0  nop
    ctx->pc = 0x1b7ce8u;
    // NOP
    // 0x1b7cec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7cecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7cf0: 0x0  nop
    ctx->pc = 0x1b7cf0u;
    // NOP
    // 0x1b7cf4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7CF4u;
    {
        const bool branch_taken_0x1b7cf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7cf4) {
            ctx->pc = 0x1B7D58u;
            return;
        }
    }
    ctx->pc = 0x1B7CFCu;
    // 0x1b7cfc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7d00: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b7d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d04: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1b7d08: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1b7d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1b7d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d10: 0x0  nop
    ctx->pc = 0x1b7d10u;
    // NOP
    // 0x1b7d14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7d18: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b7d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1b7d1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7d20: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7d28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7d28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d2c: 0x0  nop
    ctx->pc = 0x1b7d2cu;
    // NOP
    // 0x1b7d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7d34: 0x0  nop
    ctx->pc = 0x1b7d34u;
    // NOP
    // 0x1b7d38: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B7D38u;
    {
        const bool branch_taken_0x1b7d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7d38) {
            ctx->pc = 0x1B7DB4u;
            return;
        }
    }
    ctx->pc = 0x1B7D40u;
    // 0x1b7d40: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7d44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7d44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7d4c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b7d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b7d50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7D50u;
    {
        const bool branch_taken_0x1b7d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d50) {
            ctx->pc = 0x1B7DB4u;
            return;
        }
    }
    ctx->pc = 0x1B7D58u;
}
