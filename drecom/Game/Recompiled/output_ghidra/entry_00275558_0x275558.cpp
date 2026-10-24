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

// Function: entry_00275558
// Address: 0x275558 - 0x275568
void entry_00275558_0x275558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275558_0x275558");
#endif

    ctx->pc = 0x275558u;

    // 0x275558: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x275558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27555c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x27555cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275560: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x275560u;
    {
        const bool branch_taken_0x275560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275560) {
            ctx->pc = 0x275588u;
            return;
        }
    }
    ctx->pc = 0x275568u;
}
