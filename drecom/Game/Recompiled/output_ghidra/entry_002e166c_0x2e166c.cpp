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

// Function: entry_002e166c
// Address: 0x2e166c - 0x2e1684
void entry_002e166c_0x2e166c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e166c_0x2e166c");
#endif

    ctx->pc = 0x2e166cu;

    // 0x2e166c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e1670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1674: 0x0  nop
    ctx->pc = 0x2e1674u;
    // NOP
    // 0x2e1678: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e1678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e167c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E167Cu;
    {
        const bool branch_taken_0x2e167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e167c) {
            ctx->pc = 0x2E16C4u;
            return;
        }
    }
    ctx->pc = 0x2E1684u;
}
