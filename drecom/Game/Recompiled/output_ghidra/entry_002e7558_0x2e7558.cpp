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

// Function: entry_002e7558
// Address: 0x2e7558 - 0x2e7570
void entry_002e7558_0x2e7558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7558_0x2e7558");
#endif

    ctx->pc = 0x2e7558u;

    // 0x2e7558: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e755c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e755cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7560: 0x0  nop
    ctx->pc = 0x2e7560u;
    // NOP
    // 0x2e7564: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e7564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e7568: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E7568u;
    {
        const bool branch_taken_0x2e7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7568) {
            ctx->pc = 0x2E7598u;
            return;
        }
    }
    ctx->pc = 0x2E7570u;
}
