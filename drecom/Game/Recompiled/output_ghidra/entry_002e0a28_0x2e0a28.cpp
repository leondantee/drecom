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

// Function: entry_002e0a28
// Address: 0x2e0a28 - 0x2e0a40
void entry_002e0a28_0x2e0a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0a28_0x2e0a28");
#endif

    ctx->pc = 0x2e0a28u;

    // 0x2e0a28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e0a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a30: 0x0  nop
    ctx->pc = 0x2e0a30u;
    // NOP
    // 0x2e0a34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e0a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e0a38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0A38u;
    {
        const bool branch_taken_0x2e0a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a38) {
            ctx->pc = 0x2E0A80u;
            return;
        }
    }
    ctx->pc = 0x2E0A40u;
}
