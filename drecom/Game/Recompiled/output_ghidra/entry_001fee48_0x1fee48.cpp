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

// Function: entry_001fee48
// Address: 0x1fee48 - 0x1fee54
void entry_001fee48_0x1fee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee48_0x1fee48");
#endif

    ctx->pc = 0x1fee48u;

    // 0x1fee48: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fee48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fee4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FEE4Cu;
    {
        const bool branch_taken_0x1fee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee4c) {
            ctx->pc = 0x1FEEB8u;
            return;
        }
    }
    ctx->pc = 0x1FEE54u;
}
