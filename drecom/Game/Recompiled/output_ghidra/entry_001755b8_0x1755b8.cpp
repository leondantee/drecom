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

// Function: entry_001755b8
// Address: 0x1755b8 - 0x1755f0
void entry_001755b8_0x1755b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755b8_0x1755b8");
#endif

    ctx->pc = 0x1755b8u;

    // 0x1755b8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1755b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1755bc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1755bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1755c0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1755c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1755c4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1755c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1755c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1755c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1755cc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1755ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1755d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1755d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1755d4: 0x0  nop
    ctx->pc = 0x1755d4u;
    // NOP
    // 0x1755d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1755D8u;
    {
        const bool branch_taken_0x1755d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1755d8) {
            ctx->pc = 0x1755F0u;
            return;
        }
    }
    ctx->pc = 0x1755E0u;
    // 0x1755e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1755e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1755e4: 0x2444ec00  addiu       $a0, $v0, -0x1400
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962176));
    // 0x1755e8: 0xc046760  jal         func_119D80
    ctx->pc = 0x1755E8u;
    SET_GPR_U32(ctx, 31, 0x1755F0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1755F0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1755F0u) { return; }
    ctx->pc = 0x1755F0u;
}
