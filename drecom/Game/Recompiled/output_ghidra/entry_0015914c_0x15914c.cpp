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

// Function: entry_0015914c
// Address: 0x15914c - 0x159180
void entry_0015914c_0x15914c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015914c_0x15914c");
#endif

    ctx->pc = 0x15914cu;

    // 0x15914c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159150: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159158: 0x0  nop
    ctx->pc = 0x159158u;
    // NOP
    // 0x15915c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15915Cu;
    {
        const bool branch_taken_0x15915c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15915c) {
            ctx->pc = 0x159180u;
            return;
        }
    }
    ctx->pc = 0x159164u;
    // 0x159164: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159168: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15916c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15916cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159170: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159174: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159178: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x159178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15917c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x159180u;
}
