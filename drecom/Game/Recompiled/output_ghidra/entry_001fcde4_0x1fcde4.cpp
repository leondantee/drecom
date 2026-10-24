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

// Function: entry_001fcde4
// Address: 0x1fcde4 - 0x1fce04
void entry_001fcde4_0x1fcde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcde4_0x1fcde4");
#endif

    ctx->pc = 0x1fcde4u;

    // 0x1fcde4: 0x0  nop
    ctx->pc = 0x1fcde4u;
    // NOP
    // 0x1fcde8: 0x0  nop
    ctx->pc = 0x1fcde8u;
    // NOP
    // 0x1fcdec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fcdecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fcdf0: 0x0  nop
    ctx->pc = 0x1fcdf0u;
    // NOP
    // 0x1fcdf4: 0x0  nop
    ctx->pc = 0x1fcdf4u;
    // NOP
    // 0x1fcdf8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fcdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1fcdfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCDFCu;
    {
        const bool branch_taken_0x1fcdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdfc) {
            ctx->pc = 0x1FCE10u;
            return;
        }
    }
    ctx->pc = 0x1FCE04u;
}
