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

// Function: entry_002d931c
// Address: 0x2d931c - 0x2d9334
void entry_002d931c_0x2d931c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d931c_0x2d931c");
#endif

    ctx->pc = 0x2d931cu;

    // 0x2d931c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d9320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9324: 0x0  nop
    ctx->pc = 0x2d9324u;
    // NOP
    // 0x2d9328: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d932c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D932Cu;
    {
        const bool branch_taken_0x2d932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d932c) {
            ctx->pc = 0x2D9344u;
            return;
        }
    }
    ctx->pc = 0x2D9334u;
}
