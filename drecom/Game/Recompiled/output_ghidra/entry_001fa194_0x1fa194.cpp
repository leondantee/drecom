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

// Function: entry_001fa194
// Address: 0x1fa194 - 0x1fa1c4
void entry_001fa194_0x1fa194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa194_0x1fa194");
#endif

    ctx->pc = 0x1fa194u;

    // 0x1fa194: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa198: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa19c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1fa19cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa1a0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fa1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa1a8: 0x0  nop
    ctx->pc = 0x1fa1a8u;
    // NOP
    // 0x1fa1ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA1ACu;
    {
        const bool branch_taken_0x1fa1ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa1ac) {
            ctx->pc = 0x1FA1C4u;
            return;
        }
    }
    ctx->pc = 0x1FA1B4u;
    // 0x1fa1b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fa1bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa1c0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x1fa1c4u;
}
