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

// Function: entry_003346c0
// Address: 0x3346c0 - 0x3346e4
void entry_003346c0_0x3346c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003346c0_0x3346c0");
#endif

    ctx->pc = 0x3346c0u;

    // 0x3346c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3346c4: 0x24426760  addiu       $v0, $v0, 0x6760
    ctx->pc = 0x3346c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x3346c8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3346c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3346cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3346d0: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x3346d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x3346d4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3346d4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3346d8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3346d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3346dc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x3346DCu;
    {
        const bool branch_taken_0x3346dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346dc) {
            ctx->pc = 0x334948u;
            return;
        }
    }
    ctx->pc = 0x3346E4u;
}
