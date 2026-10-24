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

// Function: entry_0017e928
// Address: 0x17e928 - 0x17e948
void entry_0017e928_0x17e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e928_0x17e928");
#endif

    ctx->pc = 0x17e928u;

    // 0x17e928: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17e928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17e92c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17E92Cu;
    {
        const bool branch_taken_0x17e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e92c) {
            ctx->pc = 0x17E904u;
            return;
        }
    }
    ctx->pc = 0x17E934u;
    // 0x17e934: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17e934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x17e938: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17e938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e93c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e940: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17e940u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17e944: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x17e948u;
}
