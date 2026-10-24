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

// Function: entry_00335b1c
// Address: 0x335b1c - 0x335b40
void entry_00335b1c_0x335b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335b1c_0x335b1c");
#endif

    ctx->pc = 0x335b1cu;

    // 0x335b1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b20: 0xc4213340  lwc1        $f1, 0x3340($at)
    ctx->pc = 0x335b20u;
    { uint32_t bits = FAST_READ32(0x893340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335b24: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b28: 0xc4203364  lwc1        $f0, 0x3364($at)
    ctx->pc = 0x335b28u;
    { uint32_t bits = FAST_READ32(0x893364u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335b2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x335b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x335b30: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b34: 0xe4203340  swc1        $f0, 0x3340($at)
    ctx->pc = 0x335b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893340u, _value); } while (0); }
    // 0x335b38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x335B38u;
    {
        const bool branch_taken_0x335b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b38) {
            ctx->pc = 0x335B74u;
            return;
        }
    }
    ctx->pc = 0x335B40u;
}
