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

// Function: entry_002e3658
// Address: 0x2e3658 - 0x2e3670
void entry_002e3658_0x2e3658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3658_0x2e3658");
#endif

    ctx->pc = 0x2e3658u;

    // 0x2e3658: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e3658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3660: 0x0  nop
    ctx->pc = 0x2e3660u;
    // NOP
    // 0x2e3664: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e3664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e3668: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3668u;
    {
        const bool branch_taken_0x2e3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3668) {
            ctx->pc = 0x2E3698u;
            return;
        }
    }
    ctx->pc = 0x2E3670u;
}
