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

// Function: entry_001b8e84
// Address: 0x1b8e84 - 0x1b8f28
void entry_001b8e84_0x1b8e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8e84_0x1b8e84");
#endif

    ctx->pc = 0x1b8e84u;

    // 0x1b8e84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8e88: 0xc4811b5c  lwc1        $f1, 0x1B5C($a0)
    ctx->pc = 0x1b8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8e8c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1b8e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e94: 0x0  nop
    ctx->pc = 0x1b8e94u;
    // NOP
    // 0x1b8e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8e9c: 0x0  nop
    ctx->pc = 0x1b8e9cu;
    // NOP
    // 0x1b8ea0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B8EA0u;
    {
        const bool branch_taken_0x1b8ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ea0) {
            ctx->pc = 0x1B8F84u;
            return;
        }
    }
    ctx->pc = 0x1B8EA8u;
    // 0x1b8ea8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8eac: 0x3c063fc9  lui         $a2, 0x3FC9
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16329 << 16));
    // 0x1b8eb0: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x1b8eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x1b8eb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b8eb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8eb8: 0x0  nop
    ctx->pc = 0x1b8eb8u;
    // NOP
    // 0x1b8ebc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8ec0: 0x0  nop
    ctx->pc = 0x1b8ec0u;
    // NOP
    // 0x1b8ec4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B8EC4u;
    {
        const bool branch_taken_0x1b8ec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ec4) {
            ctx->pc = 0x1B8F28u;
            return;
        }
    }
    ctx->pc = 0x1B8ECCu;
    // 0x1b8ecc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b8eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8ed0: 0xc4e11b50  lwc1        $f1, 0x1B50($a3)
    ctx->pc = 0x1b8ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8ed4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b8ed8: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x1b8ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b8edc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b8edcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8ee0: 0x0  nop
    ctx->pc = 0x1b8ee0u;
    // NOP
    // 0x1b8ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b8ee8: 0xe4e01b50  swc1        $f0, 0x1B50($a3)
    ctx->pc = 0x1b8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 6992), bits); }
    // 0x1b8eec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8ef0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8ef4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b8ef8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8ef8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8efc: 0x0  nop
    ctx->pc = 0x1b8efcu;
    // NOP
    // 0x1b8f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8f04: 0x0  nop
    ctx->pc = 0x1b8f04u;
    // NOP
    // 0x1b8f08: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B8F08u;
    {
        const bool branch_taken_0x1b8f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8f08) {
            ctx->pc = 0x1B8F84u;
            return;
        }
    }
    ctx->pc = 0x1B8F10u;
    // 0x1b8f10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b8f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f1c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b8f20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B8F20u;
    {
        const bool branch_taken_0x1b8f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f20) {
            ctx->pc = 0x1B8F84u;
            return;
        }
    }
    ctx->pc = 0x1B8F28u;
}
