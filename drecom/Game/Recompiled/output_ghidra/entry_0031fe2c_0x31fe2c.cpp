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

// Function: entry_0031fe2c
// Address: 0x31fe2c - 0x31fe48
void entry_0031fe2c_0x31fe2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fe2c_0x31fe2c");
#endif

    ctx->pc = 0x31fe2cu;

    // 0x31fe2c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fe30: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fe30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fe34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe38: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x31fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x31fe3c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fe40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31FE40u;
    {
        const bool branch_taken_0x31fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe40) {
            ctx->pc = 0x31FE7Cu;
            return;
        }
    }
    ctx->pc = 0x31FE48u;
}
