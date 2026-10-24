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

// Function: entry_001b3538
// Address: 0x1b3538 - 0x1b3558
void entry_001b3538_0x1b3538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3538_0x1b3538");
#endif

    ctx->pc = 0x1b3538u;

    // 0x1b3538: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1b353c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3540: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b3544: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3544u;
    {
        const bool branch_taken_0x1b3544 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b3544) {
            ctx->pc = 0x1B3558u;
            return;
        }
    }
    ctx->pc = 0x1B354Cu;
    // 0x1b354c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b354cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3550: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1B3550u;
    {
        const bool branch_taken_0x1b3550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3550) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B3558u;
}
