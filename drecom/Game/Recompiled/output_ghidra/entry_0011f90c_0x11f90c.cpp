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

// Function: entry_0011f90c
// Address: 0x11f90c - 0x11f914
void entry_0011f90c_0x11f90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f90c_0x11f90c");
#endif

    ctx->pc = 0x11f90cu;

    // 0x11f90c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F90Cu;
    {
        const bool branch_taken_0x11f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F90Cu;
        // 0x11f910: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f90c) {
            ctx->pc = 0x11F930u;
            return;
        }
    }
    ctx->pc = 0x11F914u;
}
