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

// Function: entry_003164c4
// Address: 0x3164c4 - 0x3164dc
void entry_003164c4_0x3164c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003164c4_0x3164c4");
#endif

    ctx->pc = 0x3164c4u;

    // 0x3164c4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3164c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3164c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3164c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3164cc: 0x8c320ae8  lw          $s2, 0xAE8($at)
    ctx->pc = 0x3164ccu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3164d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3164d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3164d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3164D4u;
    {
        const bool branch_taken_0x3164d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164d4) {
            ctx->pc = 0x316548u;
            return;
        }
    }
    ctx->pc = 0x3164DCu;
}
