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

// Function: entry_0011505c
// Address: 0x11505c - 0x11506c
void entry_0011505c_0x11505c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011505c_0x11505c");
#endif

    switch (ctx->pc) {
        case 0x115064u: goto label_115064;
        default: break;
    }

    ctx->pc = 0x11505cu;

    // 0x11505c: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x11505Cu;
    SET_GPR_U32(ctx, 31, 0x115064u);
    ctx->pc = 0x115060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11505Cu;
    // 0x115060: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x115064u;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115064u) { return; }
    ctx->pc = 0x115064u;
label_115064:
    // 0x115064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115064u;
    {
        const bool branch_taken_0x115064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115064u;
        // 0x115068: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115064) {
            ctx->pc = 0x115074u;
            return;
        }
    }
    ctx->pc = 0x11506Cu;
}
