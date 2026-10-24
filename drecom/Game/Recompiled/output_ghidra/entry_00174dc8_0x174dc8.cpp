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

// Function: entry_00174dc8
// Address: 0x174dc8 - 0x174de4
void entry_00174dc8_0x174dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174dc8_0x174dc8");
#endif

    ctx->pc = 0x174dc8u;

    // 0x174dc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x174dcc: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x174dccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174dd0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x174dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174dd4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x174DD4u;
    {
        const bool branch_taken_0x174dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174dd4) {
            ctx->pc = 0x174D38u;
            return;
        }
    }
    ctx->pc = 0x174DDCu;
    // 0x174ddc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174DDCu;
    {
        const bool branch_taken_0x174ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174ddc) {
            ctx->pc = 0x174E80u;
            return;
        }
    }
    ctx->pc = 0x174DE4u;
}
