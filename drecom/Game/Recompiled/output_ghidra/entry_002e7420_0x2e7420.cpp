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

// Function: entry_002e7420
// Address: 0x2e7420 - 0x2e7438
void entry_002e7420_0x2e7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7420_0x2e7420");
#endif

    ctx->pc = 0x2e7420u;

    // 0x2e7420: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e7420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e7424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7428: 0x0  nop
    ctx->pc = 0x2e7428u;
    // NOP
    // 0x2e742c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e7430: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7430u;
    {
        const bool branch_taken_0x2e7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7430) {
            ctx->pc = 0x2E7448u;
            return;
        }
    }
    ctx->pc = 0x2E7438u;
}
