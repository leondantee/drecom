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

// Function: entry_0025e4dc
// Address: 0x25e4dc - 0x25e4f0
void entry_0025e4dc_0x25e4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e4dc_0x25e4dc");
#endif

    ctx->pc = 0x25e4dcu;

    // 0x25e4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25e4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e4e0: 0x0  nop
    ctx->pc = 0x25e4e0u;
    // NOP
    // 0x25e4e4: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e4e8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25E4E8u;
    {
        const bool branch_taken_0x25e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4e8) {
            ctx->pc = 0x25E584u;
            return;
        }
    }
    ctx->pc = 0x25E4F0u;
}
