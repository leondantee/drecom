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

// Function: entry_00113aa0
// Address: 0x113aa0 - 0x113ab0
void entry_00113aa0_0x113aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113aa0_0x113aa0");
#endif

    ctx->pc = 0x113aa0u;

    // 0x113aa0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x113aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113aa4: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x113aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x113aa8: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x113AA8u;
    {
        const bool branch_taken_0x113aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AA8u;
        // 0x113aac: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113aa8) {
            ctx->pc = 0x113A38u;
            return;
        }
    }
    ctx->pc = 0x113AB0u;
}
