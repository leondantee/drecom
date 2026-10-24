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

// Function: entry_00174de4
// Address: 0x174de4 - 0x174df0
void entry_00174de4_0x174de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174de4_0x174de4");
#endif

    ctx->pc = 0x174de4u;

    // 0x174de4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x174de4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174de8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x174DE8u;
    {
        const bool branch_taken_0x174de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174de8) {
            ctx->pc = 0x174E68u;
            return;
        }
    }
    ctx->pc = 0x174DF0u;
}
