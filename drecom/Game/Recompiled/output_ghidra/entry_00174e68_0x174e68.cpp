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

// Function: entry_00174e68
// Address: 0x174e68 - 0x174e80
void entry_00174e68_0x174e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e68_0x174e68");
#endif

    ctx->pc = 0x174e68u;

    // 0x174e68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x174e6c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x174e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174e70: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x174e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174e74: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x174E74u;
    {
        const bool branch_taken_0x174e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e74) {
            ctx->pc = 0x174DF0u;
            return;
        }
    }
    ctx->pc = 0x174E7Cu;
    // 0x174e7c: 0x0  nop
    ctx->pc = 0x174e7cu;
    // NOP
    ctx->pc = 0x174e80u;
}
