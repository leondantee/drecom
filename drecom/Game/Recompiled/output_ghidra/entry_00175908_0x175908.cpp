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

// Function: entry_00175908
// Address: 0x175908 - 0x175924
void entry_00175908_0x175908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175908_0x175908");
#endif

    ctx->pc = 0x175908u;

    // 0x175908: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x175908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x17590c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x17590cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x175910: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x175910u;
    {
        const bool branch_taken_0x175910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175910) {
            ctx->pc = 0x175858u;
            return;
        }
    }
    ctx->pc = 0x175918u;
    // 0x175918: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x175918u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17591c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17591Cu;
    {
        const bool branch_taken_0x17591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17591c) {
            ctx->pc = 0x1759A8u;
            return;
        }
    }
    ctx->pc = 0x175924u;
}
