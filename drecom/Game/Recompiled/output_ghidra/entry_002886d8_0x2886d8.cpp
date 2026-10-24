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

// Function: entry_002886d8
// Address: 0x2886d8 - 0x288708
void entry_002886d8_0x2886d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002886d8_0x2886d8");
#endif

    ctx->pc = 0x2886d8u;

    // 0x2886d8: 0x2ae20007  slti        $v0, $s7, 0x7
    ctx->pc = 0x2886d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2886dc: 0x1440ff38  bnez        $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x2886DCu;
    {
        const bool branch_taken_0x2886dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2886dc) {
            ctx->pc = 0x2883C0u;
            return;
        }
    }
    ctx->pc = 0x2886E4u;
    // 0x2886e4: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x2886e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x2886e8: 0x2507674c  addiu       $a3, $t0, 0x674C
    ctx->pc = 0x2886e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 26444));
    // 0x2886ec: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x2886ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2886f0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2886f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2886f4: 0x24c86240  addiu       $t0, $a2, 0x6240
    ctx->pc = 0x2886f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
    // 0x2886f8: 0xafa80138  sw          $t0, 0x138($sp)
    ctx->pc = 0x2886f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 8));
    // 0x2886fc: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2886fcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x288700: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x288700u;
    {
        const bool branch_taken_0x288700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288700) {
            ctx->pc = 0x288A18u;
            return;
        }
    }
    ctx->pc = 0x288708u;
}
