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

// Function: entry_0015df80
// Address: 0x15df80 - 0x15df98
void entry_0015df80_0x15df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df80_0x15df80");
#endif

    ctx->pc = 0x15df80u;

    // 0x15df80: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15df84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df88: 0x0  nop
    ctx->pc = 0x15df88u;
    // NOP
    // 0x15df8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15df90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15DF90u;
    {
        const bool branch_taken_0x15df90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df90) {
            ctx->pc = 0x15DFD8u;
            return;
        }
    }
    ctx->pc = 0x15DF98u;
}
