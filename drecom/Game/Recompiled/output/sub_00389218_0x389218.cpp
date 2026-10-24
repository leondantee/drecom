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

// Function: sub_00389218
// Address: 0x389218 - 0x389228
void sub_00389218_0x389218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389218_0x389218");
#endif

    ctx->pc = 0x389218u;

    // 0x389218: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x389218u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x389218 raw=0x437A0000");
    // 0x38921c: 0x1c0b0000  .word       0x1C0B0000                   # bgtz        $zero, . + 4 + (0x0 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_389220:
    if (ctx->pc == 0x389220u) {
        ctx->pc = 0x389220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38921Cu;
        // 0x389220: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389224u;
        goto label_fallthrough_0x38921c;
    }
    ctx->pc = 0x38921Cu;
    {
        const bool branch_taken_0x38921c = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x389220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38921Cu;
        // 0x389220: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38921c) {
            ctx->pc = 0x389220u;
            goto label_389220;
        }
    }
label_fallthrough_0x38921c:
    ctx->pc = 0x389224u;
    // 0x389224: 0x0  nop
    ctx->pc = 0x389224u;
    // NOP
    ctx->pc = 0x389228u;
}
