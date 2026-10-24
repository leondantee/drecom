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

// Function: entry_00189f4c
// Address: 0x189f4c - 0x189f78
void entry_00189f4c_0x189f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f4c_0x189f4c");
#endif

    ctx->pc = 0x189f4cu;

    // 0x189f4c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f54: 0x0  nop
    ctx->pc = 0x189f54u;
    // NOP
    // 0x189f58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189f5c: 0x0  nop
    ctx->pc = 0x189f5cu;
    // NOP
    // 0x189f60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189F60u;
    {
        const bool branch_taken_0x189f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189f60) {
            ctx->pc = 0x189F78u;
            return;
        }
    }
    ctx->pc = 0x189F68u;
    // 0x189f68: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x189f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f6c: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x189f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x189f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189F70u;
    {
        const bool branch_taken_0x189f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f70) {
            ctx->pc = 0x189F84u;
            return;
        }
    }
    ctx->pc = 0x189F78u;
}
