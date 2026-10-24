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

// Function: entry_00200420
// Address: 0x200420 - 0x200440
void entry_00200420_0x200420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200420_0x200420");
#endif

    ctx->pc = 0x200420u;

    // 0x200420: 0x0  nop
    ctx->pc = 0x200420u;
    // NOP
    // 0x200424: 0x0  nop
    ctx->pc = 0x200424u;
    // NOP
    // 0x200428: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200428u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20042c: 0x0  nop
    ctx->pc = 0x20042cu;
    // NOP
    // 0x200430: 0x0  nop
    ctx->pc = 0x200430u;
    // NOP
    // 0x200434: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x200434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x200438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200438u;
    {
        const bool branch_taken_0x200438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200438) {
            ctx->pc = 0x20044Cu;
            return;
        }
    }
    ctx->pc = 0x200440u;
}
