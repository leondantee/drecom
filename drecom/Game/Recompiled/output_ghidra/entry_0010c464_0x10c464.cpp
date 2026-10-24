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

// Function: entry_0010c464
// Address: 0x10c464 - 0x10c470
void entry_0010c464_0x10c464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c464_0x10c464");
#endif

    switch (ctx->pc) {
        case 0x10c46cu: goto label_10c46c;
        default: break;
    }

    ctx->pc = 0x10c464u;

    // 0x10c464: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x10C464u;
    SET_GPR_U32(ctx, 31, 0x10C46Cu);
    ctx->pc = 0x10C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C464u;
    // 0x10c468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x10C46Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10C46Cu) { return; }
    ctx->pc = 0x10C46Cu;
label_10c46c:
    // 0x10c46c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x10c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x10c470u;
}
