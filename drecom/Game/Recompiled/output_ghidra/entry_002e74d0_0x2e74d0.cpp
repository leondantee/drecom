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

// Function: entry_002e74d0
// Address: 0x2e74d0 - 0x2e74e8
void entry_002e74d0_0x2e74d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e74d0_0x2e74d0");
#endif

    ctx->pc = 0x2e74d0u;

    // 0x2e74d0: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2e74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2e74d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e74d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e74d8: 0x0  nop
    ctx->pc = 0x2e74d8u;
    // NOP
    // 0x2e74dc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e74dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e74e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E74E0u;
    {
        const bool branch_taken_0x2e74e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74e0) {
            ctx->pc = 0x2E74F8u;
            return;
        }
    }
    ctx->pc = 0x2E74E8u;
}
