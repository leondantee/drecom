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

// Function: entry_002530fc
// Address: 0x2530fc - 0x253144
void entry_002530fc_0x2530fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002530fc_0x2530fc");
#endif

    ctx->pc = 0x2530fcu;

    // 0x2530fc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2530fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253100: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x253100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x253104: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x253104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253108: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x253108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25310c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25310cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253114: 0x0  nop
    ctx->pc = 0x253114u;
    // NOP
    // 0x253118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25311c: 0x0  nop
    ctx->pc = 0x25311cu;
    // NOP
    // 0x253120: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x253120u;
    {
        const bool branch_taken_0x253120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253120) {
            ctx->pc = 0x253144u;
            return;
        }
    }
    ctx->pc = 0x253128u;
    // 0x253128: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x253128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25312c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x25312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x253130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253134: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x253134u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x253138: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x253138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x25313c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25313Cu;
    {
        const bool branch_taken_0x25313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25313c) {
            ctx->pc = 0x253154u;
            return;
        }
    }
    ctx->pc = 0x253144u;
}
