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

// Function: entry_003215e8
// Address: 0x3215e8 - 0x321604
void entry_003215e8_0x3215e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003215e8_0x3215e8");
#endif

    ctx->pc = 0x3215e8u;

    // 0x3215e8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3215ec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3215ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3215f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215f4: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x3215f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3215f8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3215f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3215fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3215FCu;
    {
        const bool branch_taken_0x3215fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3215fc) {
            ctx->pc = 0x321638u;
            return;
        }
    }
    ctx->pc = 0x321604u;
}
