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

// Function: entry_002e7540
// Address: 0x2e7540 - 0x2e7558
void entry_002e7540_0x2e7540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7540_0x2e7540");
#endif

    ctx->pc = 0x2e7540u;

    // 0x2e7540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7548: 0x0  nop
    ctx->pc = 0x2e7548u;
    // NOP
    // 0x2e754c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e754cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e7550: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7550u;
    {
        const bool branch_taken_0x2e7550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7550) {
            ctx->pc = 0x2E7598u;
            return;
        }
    }
    ctx->pc = 0x2E7558u;
}
