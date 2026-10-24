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

// Function: entry_00115034
// Address: 0x115034 - 0x115044
void entry_00115034_0x115034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115034_0x115034");
#endif

    switch (ctx->pc) {
        case 0x11503cu: goto label_11503c;
        default: break;
    }

    ctx->pc = 0x115034u;

    // 0x115034: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x115034u;
    SET_GPR_U32(ctx, 31, 0x11503Cu);
    ctx->pc = 0x115038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115034u;
    // 0x115038: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x11503Cu;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11503Cu) { return; }
    ctx->pc = 0x11503Cu;
label_11503c:
    // 0x11503c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11503Cu;
    {
        const bool branch_taken_0x11503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11503Cu;
        // 0x115040: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11503c) {
            ctx->pc = 0x115078u;
            return;
        }
    }
    ctx->pc = 0x115044u;
}
