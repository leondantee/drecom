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

// Function: entry_001ad5e0
// Address: 0x1ad5e0 - 0x1ad604
void entry_001ad5e0_0x1ad5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad5e0_0x1ad5e0");
#endif

    ctx->pc = 0x1ad5e0u;

    // 0x1ad5e0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1ad5e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad5e4: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1AD5E4u;
    {
        const bool branch_taken_0x1ad5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5e4) {
            ctx->pc = 0x1AD474u;
            return;
        }
    }
    ctx->pc = 0x1AD5ECu;
    // 0x1ad5ec: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1ad5ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad5f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ad5f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad5f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ad5f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad5f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ad5f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad5fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ad5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ad604u;
}
