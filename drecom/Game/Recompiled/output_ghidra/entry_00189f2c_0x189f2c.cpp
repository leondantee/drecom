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

// Function: entry_00189f2c
// Address: 0x189f2c - 0x189f4c
void entry_00189f2c_0x189f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f2c_0x189f2c");
#endif

    ctx->pc = 0x189f2cu;

    // 0x189f2c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x189f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f30: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f34: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x189f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f3c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f40: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x189f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x189f44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x189F44u;
    {
        const bool branch_taken_0x189f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f44) {
            ctx->pc = 0x189F9Cu;
            return;
        }
    }
    ctx->pc = 0x189F4Cu;
}
