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

// Function: entry_0016412c
// Address: 0x16412c - 0x164138
void entry_0016412c_0x16412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016412c_0x16412c");
#endif

    ctx->pc = 0x16412cu;

    // 0x16412c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x16412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164130: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x164130u;
    {
        const bool branch_taken_0x164130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164130) {
            ctx->pc = 0x1641E0u;
            return;
        }
    }
    ctx->pc = 0x164138u;
}
