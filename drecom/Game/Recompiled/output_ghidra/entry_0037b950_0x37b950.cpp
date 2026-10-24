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

// Function: entry_0037b950
// Address: 0x37b950 - 0x37b980
void entry_0037b950_0x37b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b950_0x37b950");
#endif

    ctx->pc = 0x37b950u;

    // 0x37b950: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x37b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x37b954: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x37b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37b958: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x37B958u;
    {
        const bool branch_taken_0x37b958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b958) {
            ctx->pc = 0x37BBF8u;
            return;
        }
    }
    ctx->pc = 0x37B960u;
    // 0x37b960: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b964: 0x8c220bb0  lw          $v0, 0xBB0($at)
    ctx->pc = 0x37b964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37b968: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x37B968u;
    {
        const bool branch_taken_0x37b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b968) {
            ctx->pc = 0x37BB00u;
            return;
        }
    }
    ctx->pc = 0x37B970u;
    // 0x37b970: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37b970u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b974: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x37b974u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b978: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B978u;
    {
        const bool branch_taken_0x37b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b978) {
            ctx->pc = 0x37B9A0u;
            return;
        }
    }
    ctx->pc = 0x37B980u;
}
