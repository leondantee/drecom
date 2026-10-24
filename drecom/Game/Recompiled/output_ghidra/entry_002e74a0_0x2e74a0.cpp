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

// Function: entry_002e74a0
// Address: 0x2e74a0 - 0x2e74b8
void entry_002e74a0_0x2e74a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e74a0_0x2e74a0");
#endif

    ctx->pc = 0x2e74a0u;

    // 0x2e74a0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2e74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2e74a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e74a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e74a8: 0x0  nop
    ctx->pc = 0x2e74a8u;
    // NOP
    // 0x2e74ac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e74acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e74b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E74B0u;
    {
        const bool branch_taken_0x2e74b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74b0) {
            ctx->pc = 0x2E74F8u;
            return;
        }
    }
    ctx->pc = 0x2E74B8u;
}
