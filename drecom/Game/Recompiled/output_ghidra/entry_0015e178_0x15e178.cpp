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

// Function: entry_0015e178
// Address: 0x15e178 - 0x15e190
void entry_0015e178_0x15e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e178_0x15e178");
#endif

    ctx->pc = 0x15e178u;

    // 0x15e178: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15e17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e180: 0x0  nop
    ctx->pc = 0x15e180u;
    // NOP
    // 0x15e184: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E188u;
    {
        const bool branch_taken_0x15e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e188) {
            ctx->pc = 0x15E1A0u;
            return;
        }
    }
    ctx->pc = 0x15E190u;
}
