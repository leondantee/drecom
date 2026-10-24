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

// Function: entry_002e169c
// Address: 0x2e169c - 0x2e16b4
void entry_002e169c_0x2e169c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e169c_0x2e169c");
#endif

    ctx->pc = 0x2e169cu;

    // 0x2e169c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2e169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2e16a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e16a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e16a4: 0x0  nop
    ctx->pc = 0x2e16a4u;
    // NOP
    // 0x2e16a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e16a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e16ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E16ACu;
    {
        const bool branch_taken_0x2e16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16ac) {
            ctx->pc = 0x2E16C4u;
            return;
        }
    }
    ctx->pc = 0x2E16B4u;
}
