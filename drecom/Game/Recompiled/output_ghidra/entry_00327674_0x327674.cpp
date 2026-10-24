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

// Function: entry_00327674
// Address: 0x327674 - 0x327694
void entry_00327674_0x327674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327674_0x327674");
#endif

    ctx->pc = 0x327674u;

    // 0x327674: 0x0  nop
    ctx->pc = 0x327674u;
    // NOP
    // 0x327678: 0x0  nop
    ctx->pc = 0x327678u;
    // NOP
    // 0x32767c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32767cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x327680: 0x0  nop
    ctx->pc = 0x327680u;
    // NOP
    // 0x327684: 0x0  nop
    ctx->pc = 0x327684u;
    // NOP
    // 0x327688: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x327688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32768c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32768Cu;
    {
        const bool branch_taken_0x32768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32768c) {
            ctx->pc = 0x3276A0u;
            return;
        }
    }
    ctx->pc = 0x327694u;
}
