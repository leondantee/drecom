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

// Function: entry_002e1684
// Address: 0x2e1684 - 0x2e169c
void entry_002e1684_0x2e1684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1684_0x2e1684");
#endif

    ctx->pc = 0x2e1684u;

    // 0x2e1684: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2e1688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e168c: 0x0  nop
    ctx->pc = 0x2e168cu;
    // NOP
    // 0x2e1690: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e1690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e1694: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E1694u;
    {
        const bool branch_taken_0x2e1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1694) {
            ctx->pc = 0x2E16C4u;
            return;
        }
    }
    ctx->pc = 0x2E169Cu;
}
