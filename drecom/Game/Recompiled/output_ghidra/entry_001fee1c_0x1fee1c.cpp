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

// Function: entry_001fee1c
// Address: 0x1fee1c - 0x1fee3c
void entry_001fee1c_0x1fee1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee1c_0x1fee1c");
#endif

    ctx->pc = 0x1fee1cu;

    // 0x1fee1c: 0x0  nop
    ctx->pc = 0x1fee1cu;
    // NOP
    // 0x1fee20: 0x0  nop
    ctx->pc = 0x1fee20u;
    // NOP
    // 0x1fee24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fee24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fee28: 0x0  nop
    ctx->pc = 0x1fee28u;
    // NOP
    // 0x1fee2c: 0x0  nop
    ctx->pc = 0x1fee2cu;
    // NOP
    // 0x1fee30: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1fee30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1fee34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE34u;
    {
        const bool branch_taken_0x1fee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee34) {
            ctx->pc = 0x1FEE48u;
            return;
        }
    }
    ctx->pc = 0x1FEE3Cu;
}
