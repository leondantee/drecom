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

// Function: entry_002e352c
// Address: 0x2e352c - 0x2e3544
void entry_002e352c_0x2e352c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e352c_0x2e352c");
#endif

    ctx->pc = 0x2e352cu;

    // 0x2e352c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e3530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3534: 0x0  nop
    ctx->pc = 0x2e3534u;
    // NOP
    // 0x2e3538: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e3538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e353c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E353Cu;
    {
        const bool branch_taken_0x2e353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e353c) {
            ctx->pc = 0x2E3554u;
            return;
        }
    }
    ctx->pc = 0x2E3544u;
}
