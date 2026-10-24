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

// Function: entry_0021fd60
// Address: 0x21fd60 - 0x21fd78
void entry_0021fd60_0x21fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fd60_0x21fd60");
#endif

    ctx->pc = 0x21fd60u;

    // 0x21fd60: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21fd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fd68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21fd6c: 0xe4208b6c  swc1        $f0, -0x7494($at)
    ctx->pc = 0x21fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B6Cu, _value); } while (0); }
    // 0x21fd70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21FD70u;
    {
        const bool branch_taken_0x21fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd70) {
            ctx->pc = 0x21FDB8u;
            return;
        }
    }
    ctx->pc = 0x21FD78u;
}
