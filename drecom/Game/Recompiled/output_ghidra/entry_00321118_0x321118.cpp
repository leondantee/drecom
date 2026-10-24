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

// Function: entry_00321118
// Address: 0x321118 - 0x321124
void entry_00321118_0x321118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321118_0x321118");
#endif

    ctx->pc = 0x321118u;

    // 0x321118: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x321118u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32111c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32111Cu;
    {
        const bool branch_taken_0x32111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32111c) {
            ctx->pc = 0x321188u;
            return;
        }
    }
    ctx->pc = 0x321124u;
}
