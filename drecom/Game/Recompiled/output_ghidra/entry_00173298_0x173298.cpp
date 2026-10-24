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

// Function: entry_00173298
// Address: 0x173298 - 0x1732d0
void entry_00173298_0x173298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173298_0x173298");
#endif

    ctx->pc = 0x173298u;

    // 0x173298: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17329c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x17329cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1732a0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1732a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1732a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1732a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1732a8: 0x0  nop
    ctx->pc = 0x1732a8u;
    // NOP
    // 0x1732ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1732acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1732b0: 0x0  nop
    ctx->pc = 0x1732b0u;
    // NOP
    // 0x1732b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1732B4u;
    {
        const bool branch_taken_0x1732b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1732b4) {
            ctx->pc = 0x1732D0u;
            return;
        }
    }
    ctx->pc = 0x1732BCu;
    // 0x1732bc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1732bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1732c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1732c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1732c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1732c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1732c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1732C8u;
    {
        const bool branch_taken_0x1732c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1732c8) {
            ctx->pc = 0x1732D8u;
            return;
        }
    }
    ctx->pc = 0x1732D0u;
}
