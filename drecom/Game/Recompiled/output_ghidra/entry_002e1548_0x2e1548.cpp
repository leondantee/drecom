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

// Function: entry_002e1548
// Address: 0x2e1548 - 0x2e1560
void entry_002e1548_0x2e1548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1548_0x2e1548");
#endif

    ctx->pc = 0x2e1548u;

    // 0x2e1548: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e154c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1550: 0x0  nop
    ctx->pc = 0x2e1550u;
    // NOP
    // 0x2e1554: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e1554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1558: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1558u;
    {
        const bool branch_taken_0x2e1558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1558) {
            ctx->pc = 0x2E1570u;
            return;
        }
    }
    ctx->pc = 0x2E1560u;
}
