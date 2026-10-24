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

// Function: entry_0017eb48
// Address: 0x17eb48 - 0x17eb68
void entry_0017eb48_0x17eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb48_0x17eb48");
#endif

    ctx->pc = 0x17eb48u;

    // 0x17eb48: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17eb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17eb4c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17EB4Cu;
    {
        const bool branch_taken_0x17eb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eb4c) {
            ctx->pc = 0x17EB24u;
            return;
        }
    }
    ctx->pc = 0x17EB54u;
    // 0x17eb54: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x17eb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eb60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17eb60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17eb64: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x17eb68u;
}
