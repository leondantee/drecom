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

// Function: entry_00163f70
// Address: 0x163f70 - 0x163f9c
void entry_00163f70_0x163f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f70_0x163f70");
#endif

    ctx->pc = 0x163f70u;

    // 0x163f70: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163f78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x163f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f80: 0x0  nop
    ctx->pc = 0x163f80u;
    // NOP
    // 0x163f84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x163F84u;
    {
        const bool branch_taken_0x163f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f84) {
            ctx->pc = 0x163F9Cu;
            return;
        }
    }
    ctx->pc = 0x163F8Cu;
    // 0x163f8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163f90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x163f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163F94u;
    {
        const bool branch_taken_0x163f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f94) {
            ctx->pc = 0x163FA4u;
            return;
        }
    }
    ctx->pc = 0x163F9Cu;
}
