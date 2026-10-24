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

// Function: entry_0011539c
// Address: 0x11539c - 0x1153ac
void entry_0011539c_0x11539c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011539c_0x11539c");
#endif

    ctx->pc = 0x11539cu;

    // 0x11539c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11539Cu;
    {
        const bool branch_taken_0x11539c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1153A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11539Cu;
        // 0x1153a0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11539c) {
            ctx->pc = 0x1153D4u;
            return;
        }
    }
    ctx->pc = 0x1153A4u;
    // 0x1153a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1153A4u;
    {
        const bool branch_taken_0x1153a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1153a4) {
            ctx->pc = 0x1153E8u;
            return;
        }
    }
    ctx->pc = 0x1153ACu;
}
