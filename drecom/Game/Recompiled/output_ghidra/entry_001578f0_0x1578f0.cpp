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

// Function: entry_001578f0
// Address: 0x1578f0 - 0x15790c
void entry_001578f0_0x1578f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001578f0_0x1578f0");
#endif

    ctx->pc = 0x1578f0u;

    // 0x1578f0: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x1578f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1578f4: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x1578F4u;
    {
        const bool branch_taken_0x1578f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1578f4) {
            ctx->pc = 0x157744u;
            return;
        }
    }
    ctx->pc = 0x1578FCu;
    // 0x1578fc: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1578fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x157900: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x157900u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157904: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x157904u;
    {
        const bool branch_taken_0x157904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157904) {
            ctx->pc = 0x158100u;
            return;
        }
    }
    ctx->pc = 0x15790Cu;
}
