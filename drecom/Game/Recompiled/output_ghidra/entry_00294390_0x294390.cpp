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

// Function: entry_00294390
// Address: 0x294390 - 0x2943b0
void entry_00294390_0x294390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294390_0x294390");
#endif

    ctx->pc = 0x294390u;

    // 0x294390: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294394: 0x0  nop
    ctx->pc = 0x294394u;
    // NOP
    // 0x294398: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x294398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29439c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29439cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943a0: 0x0  nop
    ctx->pc = 0x2943a0u;
    // NOP
    // 0x2943a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2943a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2943a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2943A8u;
    {
        const bool branch_taken_0x2943a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2943a8) {
            ctx->pc = 0x294400u;
            return;
        }
    }
    ctx->pc = 0x2943B0u;
}
