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

// Function: entry_00310c60
// Address: 0x310c60 - 0x310c6c
void entry_00310c60_0x310c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310c60_0x310c60");
#endif

    ctx->pc = 0x310c60u;

    // 0x310c60: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x310c60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310c64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x310C64u;
    {
        const bool branch_taken_0x310c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c64) {
            ctx->pc = 0x310CB0u;
            return;
        }
    }
    ctx->pc = 0x310C6Cu;
}
