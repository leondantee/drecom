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

// Function: entry_002d9448
// Address: 0x2d9448 - 0x2d9460
void entry_002d9448_0x2d9448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9448_0x2d9448");
#endif

    ctx->pc = 0x2d9448u;

    // 0x2d9448: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d9448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d944c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d944cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9450: 0x0  nop
    ctx->pc = 0x2d9450u;
    // NOP
    // 0x2d9454: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d9454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d9458: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D9458u;
    {
        const bool branch_taken_0x2d9458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9458) {
            ctx->pc = 0x2D9488u;
            return;
        }
    }
    ctx->pc = 0x2D9460u;
}
