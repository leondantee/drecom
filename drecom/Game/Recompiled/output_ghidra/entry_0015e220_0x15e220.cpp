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

// Function: entry_0015e220
// Address: 0x15e220 - 0x15e238
void entry_0015e220_0x15e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e220_0x15e220");
#endif

    ctx->pc = 0x15e220u;

    // 0x15e220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15e224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e228: 0x0  nop
    ctx->pc = 0x15e228u;
    // NOP
    // 0x15e22c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15e22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15e230: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E230u;
    {
        const bool branch_taken_0x15e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e230) {
            ctx->pc = 0x15E248u;
            return;
        }
    }
    ctx->pc = 0x15E238u;
}
