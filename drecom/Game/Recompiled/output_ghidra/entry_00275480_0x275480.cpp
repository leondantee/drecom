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

// Function: entry_00275480
// Address: 0x275480 - 0x275490
void entry_00275480_0x275480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275480_0x275480");
#endif

    ctx->pc = 0x275480u;

    // 0x275480: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x275484: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x275484u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x275488: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x275488u;
    {
        const bool branch_taken_0x275488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275488) {
            ctx->pc = 0x2754E0u;
            return;
        }
    }
    ctx->pc = 0x275490u;
}
