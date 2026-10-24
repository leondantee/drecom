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

// Function: entry_0011506c
// Address: 0x11506c - 0x115074
void entry_0011506c_0x11506c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011506c_0x11506c");
#endif

    ctx->pc = 0x11506cu;

    // 0x11506c: 0xc04509a  jal         func_114268
    ctx->pc = 0x11506Cu;
    SET_GPR_U32(ctx, 31, 0x115074u);
    ctx->pc = 0x115070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11506Cu;
    // 0x115070: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x115074u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115074u) { return; }
    ctx->pc = 0x115074u;
}
