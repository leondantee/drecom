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

// Function: entry_00225d78
// Address: 0x225d78 - 0x225dcc
void entry_00225d78_0x225d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225d78_0x225d78");
#endif

    ctx->pc = 0x225d78u;

    // 0x225d78: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x225d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x225d7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225d84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225d8c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x225d90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d94: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x225d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225d98: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x225d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x225d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225da0: 0x0  nop
    ctx->pc = 0x225da0u;
    // NOP
    // 0x225da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225da8: 0x0  nop
    ctx->pc = 0x225da8u;
    // NOP
    // 0x225dac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x225DACu;
    {
        const bool branch_taken_0x225dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225dac) {
            ctx->pc = 0x225DCCu;
            return;
        }
    }
    ctx->pc = 0x225DB4u;
    // 0x225db4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x225db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x225db8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225dc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dc4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225dc8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x225dccu;
}
