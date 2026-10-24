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

// Function: entry_002e3514
// Address: 0x2e3514 - 0x2e352c
void entry_002e3514_0x2e3514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3514_0x2e3514");
#endif

    ctx->pc = 0x2e3514u;

    // 0x2e3514: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e3518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e351c: 0x0  nop
    ctx->pc = 0x2e351cu;
    // NOP
    // 0x2e3520: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e3520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e3524: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3524u;
    {
        const bool branch_taken_0x2e3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3524) {
            ctx->pc = 0x2E3554u;
            return;
        }
    }
    ctx->pc = 0x2E352Cu;
}
