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

// Function: entry_0026abc0
// Address: 0x26abc0 - 0x26abf8
void entry_0026abc0_0x26abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026abc0_0x26abc0");
#endif

    ctx->pc = 0x26abc0u;

    // 0x26abc0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x26abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26abc4: 0x3c02bfaf  lui         $v0, 0xBFAF
    ctx->pc = 0x26abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49071 << 16));
    // 0x26abc8: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26abcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abd0: 0x0  nop
    ctx->pc = 0x26abd0u;
    // NOP
    // 0x26abd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26abd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26abd8: 0x0  nop
    ctx->pc = 0x26abd8u;
    // NOP
    // 0x26abdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26ABDCu;
    {
        const bool branch_taken_0x26abdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26abdc) {
            ctx->pc = 0x26ABF8u;
            return;
        }
    }
    ctx->pc = 0x26ABE4u;
    // 0x26abe4: 0x3c02bfaf  lui         $v0, 0xBFAF
    ctx->pc = 0x26abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49071 << 16));
    // 0x26abe8: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26abec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abf0: 0x0  nop
    ctx->pc = 0x26abf0u;
    // NOP
    // 0x26abf4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x26abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    ctx->pc = 0x26abf8u;
}
