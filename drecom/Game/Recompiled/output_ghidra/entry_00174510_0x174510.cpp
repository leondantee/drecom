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

// Function: entry_00174510
// Address: 0x174510 - 0x17451c
void entry_00174510_0x174510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174510_0x174510");
#endif

    ctx->pc = 0x174510u;

    // 0x174510: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x174510u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174514: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x174514u;
    {
        const bool branch_taken_0x174514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174514) {
            ctx->pc = 0x1745D8u;
            return;
        }
    }
    ctx->pc = 0x17451Cu;
}
