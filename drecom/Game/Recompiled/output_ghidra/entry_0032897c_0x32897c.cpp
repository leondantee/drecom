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

// Function: entry_0032897c
// Address: 0x32897c - 0x32899c
void entry_0032897c_0x32897c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032897c_0x32897c");
#endif

    ctx->pc = 0x32897cu;

    // 0x32897c: 0x0  nop
    ctx->pc = 0x32897cu;
    // NOP
    // 0x328980: 0x0  nop
    ctx->pc = 0x328980u;
    // NOP
    // 0x328984: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x328984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x328988: 0x0  nop
    ctx->pc = 0x328988u;
    // NOP
    // 0x32898c: 0x0  nop
    ctx->pc = 0x32898cu;
    // NOP
    // 0x328990: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x328990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x328994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328994u;
    {
        const bool branch_taken_0x328994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328994) {
            ctx->pc = 0x3289A8u;
            return;
        }
    }
    ctx->pc = 0x32899Cu;
}
