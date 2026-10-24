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

// Function: entry_002d9304
// Address: 0x2d9304 - 0x2d931c
void entry_002d9304_0x2d9304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9304_0x2d9304");
#endif

    ctx->pc = 0x2d9304u;

    // 0x2d9304: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d9304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d9308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d930c: 0x0  nop
    ctx->pc = 0x2d930cu;
    // NOP
    // 0x2d9310: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d9314: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D9314u;
    {
        const bool branch_taken_0x2d9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9314) {
            ctx->pc = 0x2D9344u;
            return;
        }
    }
    ctx->pc = 0x2D931Cu;
}
