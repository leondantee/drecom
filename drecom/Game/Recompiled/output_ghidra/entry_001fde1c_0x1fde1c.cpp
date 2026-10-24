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

// Function: entry_001fde1c
// Address: 0x1fde1c - 0x1fde3c
void entry_001fde1c_0x1fde1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde1c_0x1fde1c");
#endif

    ctx->pc = 0x1fde1cu;

    // 0x1fde1c: 0x0  nop
    ctx->pc = 0x1fde1cu;
    // NOP
    // 0x1fde20: 0x0  nop
    ctx->pc = 0x1fde20u;
    // NOP
    // 0x1fde24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fde24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fde28: 0x0  nop
    ctx->pc = 0x1fde28u;
    // NOP
    // 0x1fde2c: 0x0  nop
    ctx->pc = 0x1fde2cu;
    // NOP
    // 0x1fde30: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fde30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1fde34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDE34u;
    {
        const bool branch_taken_0x1fde34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde34) {
            ctx->pc = 0x1FDE48u;
            return;
        }
    }
    ctx->pc = 0x1FDE3Cu;
}
