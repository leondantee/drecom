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

// Function: entry_00142428
// Address: 0x142428 - 0x142438
void entry_00142428_0x142428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142428_0x142428");
#endif

    ctx->pc = 0x142428u;

    // 0x142428: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x142428u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14242c: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x14242cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x142430: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x142430u;
    {
        const bool branch_taken_0x142430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142430) {
            ctx->pc = 0x1423F8u;
            return;
        }
    }
    ctx->pc = 0x142438u;
}
