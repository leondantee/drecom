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

// Function: entry_0028a9e8
// Address: 0x28a9e8 - 0x28aa18
void entry_0028a9e8_0x28a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a9e8_0x28a9e8");
#endif

    ctx->pc = 0x28a9e8u;

    // 0x28a9e8: 0x2aea0004  slti        $t2, $s7, 0x4
    ctx->pc = 0x28a9e8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a9ec: 0x1540ff32  bnez        $t2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x28A9ECu;
    {
        const bool branch_taken_0x28a9ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a9ec) {
            ctx->pc = 0x28A6B8u;
            return;
        }
    }
    ctx->pc = 0x28A9F4u;
    // 0x28a9f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28a9f8: 0x2449674c  addiu       $t1, $v0, 0x674C
    ctx->pc = 0x28a9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 26444));
    // 0x28a9fc: 0x71208e28  paddub      $s1, $t1, $zero
    ctx->pc = 0x28a9fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28aa00: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28aa04: 0x24676240  addiu       $a3, $v1, 0x6240
    ctx->pc = 0x28aa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25152));
    // 0x28aa08: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x28aa0c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28aa0cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28aa10: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28AA10u;
    {
        const bool branch_taken_0x28aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa10) {
            ctx->pc = 0x28AD48u;
            return;
        }
    }
    ctx->pc = 0x28AA18u;
}
