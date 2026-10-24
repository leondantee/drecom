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

// Function: entry_001b3598
// Address: 0x1b3598 - 0x1b35b8
void entry_001b3598_0x1b3598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3598_0x1b3598");
#endif

    ctx->pc = 0x1b3598u;

    // 0x1b3598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b359c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b35a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1b35a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1b35a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B35A4u;
    {
        const bool branch_taken_0x1b35a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35a4) {
            ctx->pc = 0x1B35B8u;
            return;
        }
    }
    ctx->pc = 0x1B35ACu;
    // 0x1b35ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b35acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b35b0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1B35B0u;
    {
        const bool branch_taken_0x1b35b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35b0) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B35B8u;
}
