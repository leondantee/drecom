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

// Function: entry_0027668c
// Address: 0x27668c - 0x2766a4
void entry_0027668c_0x27668c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027668c_0x27668c");
#endif

    ctx->pc = 0x27668cu;

    // 0x27668c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x27668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x276690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276694: 0x0  nop
    ctx->pc = 0x276694u;
    // NOP
    // 0x276698: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x27669c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27669Cu;
    {
        const bool branch_taken_0x27669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27669c) {
            ctx->pc = 0x2766B8u;
            return;
        }
    }
    ctx->pc = 0x2766A4u;
}
