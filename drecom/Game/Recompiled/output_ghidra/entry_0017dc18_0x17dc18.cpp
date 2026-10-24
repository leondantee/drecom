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

// Function: entry_0017dc18
// Address: 0x17dc18 - 0x17dc34
void entry_0017dc18_0x17dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc18_0x17dc18");
#endif

    ctx->pc = 0x17dc18u;

    // 0x17dc18: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc1c: 0x28630108  slti        $v1, $v1, 0x108
    ctx->pc = 0x17dc1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x17dc20: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17DC20u;
    {
        const bool branch_taken_0x17dc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc20) {
            ctx->pc = 0x17DBDCu;
            return;
        }
    }
    ctx->pc = 0x17DC28u;
    // 0x17dc28: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17dc28u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17dc2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DC2Cu;
    {
        const bool branch_taken_0x17dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc2c) {
            ctx->pc = 0x17DC70u;
            return;
        }
    }
    ctx->pc = 0x17DC34u;
}
