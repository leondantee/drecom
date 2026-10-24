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

// Function: entry_002e09b0
// Address: 0x2e09b0 - 0x2e09c8
void entry_002e09b0_0x2e09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e09b0_0x2e09b0");
#endif

    ctx->pc = 0x2e09b0u;

    // 0x2e09b0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2e09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2e09b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e09b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09b8: 0x0  nop
    ctx->pc = 0x2e09b8u;
    // NOP
    // 0x2e09bc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e09c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E09C0u;
    {
        const bool branch_taken_0x2e09c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09c0) {
            ctx->pc = 0x2E09D8u;
            return;
        }
    }
    ctx->pc = 0x2E09C8u;
}
