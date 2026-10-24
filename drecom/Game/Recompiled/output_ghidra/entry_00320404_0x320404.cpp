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

// Function: entry_00320404
// Address: 0x320404 - 0x320424
void entry_00320404_0x320404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320404_0x320404");
#endif

    ctx->pc = 0x320404u;

    // 0x320404: 0x0  nop
    ctx->pc = 0x320404u;
    // NOP
    // 0x320408: 0x0  nop
    ctx->pc = 0x320408u;
    // NOP
    // 0x32040c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32040cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x320410: 0x0  nop
    ctx->pc = 0x320410u;
    // NOP
    // 0x320414: 0x0  nop
    ctx->pc = 0x320414u;
    // NOP
    // 0x320418: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x320418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x32041c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32041Cu;
    {
        const bool branch_taken_0x32041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32041c) {
            ctx->pc = 0x320430u;
            return;
        }
    }
    ctx->pc = 0x320424u;
}
