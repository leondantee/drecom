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

// Function: entry_002e151c
// Address: 0x2e151c - 0x2e1530
void entry_002e151c_0x2e151c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e151c_0x2e151c");
#endif

    ctx->pc = 0x2e151cu;

    // 0x2e151c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e151cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1520: 0x0  nop
    ctx->pc = 0x2e1520u;
    // NOP
    // 0x2e1524: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e1524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1528: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1528u;
    {
        const bool branch_taken_0x2e1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1528) {
            ctx->pc = 0x2E1570u;
            return;
        }
    }
    ctx->pc = 0x2E1530u;
}
