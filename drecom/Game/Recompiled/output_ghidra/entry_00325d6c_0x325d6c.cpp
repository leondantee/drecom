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

// Function: entry_00325d6c
// Address: 0x325d6c - 0x325db4
void entry_00325d6c_0x325d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325d6c_0x325d6c");
#endif

    ctx->pc = 0x325d6cu;

    // 0x325d6c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x325d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d70: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x325d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x325d74: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325d7c: 0x0  nop
    ctx->pc = 0x325d7cu;
    // NOP
    // 0x325d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x325d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325d84: 0x0  nop
    ctx->pc = 0x325d84u;
    // NOP
    // 0x325d88: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x325D88u;
    {
        const bool branch_taken_0x325d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325d88) {
            ctx->pc = 0x325DB4u;
            return;
        }
    }
    ctx->pc = 0x325D90u;
    // 0x325d90: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x325d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d94: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x325d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
    // 0x325d98: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325da0: 0x0  nop
    ctx->pc = 0x325da0u;
    // NOP
    // 0x325da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325da8: 0x0  nop
    ctx->pc = 0x325da8u;
    // NOP
    // 0x325dac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x325DACu;
    {
        const bool branch_taken_0x325dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325dac) {
            ctx->pc = 0x325DD4u;
            return;
        }
    }
    ctx->pc = 0x325DB4u;
}
