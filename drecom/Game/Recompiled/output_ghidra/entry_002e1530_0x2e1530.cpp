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

// Function: entry_002e1530
// Address: 0x2e1530 - 0x2e1548
void entry_002e1530_0x2e1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1530_0x2e1530");
#endif

    ctx->pc = 0x2e1530u;

    // 0x2e1530: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e1530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e1534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1538: 0x0  nop
    ctx->pc = 0x2e1538u;
    // NOP
    // 0x2e153c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1540: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E1540u;
    {
        const bool branch_taken_0x2e1540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1540) {
            ctx->pc = 0x2E1570u;
            return;
        }
    }
    ctx->pc = 0x2E1548u;
}
