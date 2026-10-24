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

// Function: entry_00292570
// Address: 0x292570 - 0x29257c
void entry_00292570_0x292570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292570_0x292570");
#endif

    ctx->pc = 0x292570u;

    // 0x292570: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x292570u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292574u;
    {
        const bool branch_taken_0x292574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292574) {
            ctx->pc = 0x292598u;
            return;
        }
    }
    ctx->pc = 0x29257Cu;
}
