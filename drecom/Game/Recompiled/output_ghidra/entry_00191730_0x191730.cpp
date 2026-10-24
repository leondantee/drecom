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

// Function: entry_00191730
// Address: 0x191730 - 0x191748
void entry_00191730_0x191730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191730_0x191730");
#endif

    ctx->pc = 0x191730u;

    // 0x191730: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x191734: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x191734u;
    {
        const bool branch_taken_0x191734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191734) {
            ctx->pc = 0x191708u;
            return;
        }
    }
    ctx->pc = 0x19173Cu;
    // 0x19173c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19173cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191740: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x191740u;
    {
        const bool branch_taken_0x191740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191740) {
            ctx->pc = 0x1917C8u;
            return;
        }
    }
    ctx->pc = 0x191748u;
}
