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

// Function: entry_0015df98
// Address: 0x15df98 - 0x15dfb0
void entry_0015df98_0x15df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df98_0x15df98");
#endif

    ctx->pc = 0x15df98u;

    // 0x15df98: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15df9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dfa0: 0x0  nop
    ctx->pc = 0x15dfa0u;
    // NOP
    // 0x15dfa4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15dfa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DFA8u;
    {
        const bool branch_taken_0x15dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dfa8) {
            ctx->pc = 0x15DFD8u;
            return;
        }
    }
    ctx->pc = 0x15DFB0u;
}
