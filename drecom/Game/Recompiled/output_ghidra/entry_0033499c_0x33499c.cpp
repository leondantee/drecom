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

// Function: entry_0033499c
// Address: 0x33499c - 0x3349c0
void entry_0033499c_0x33499c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033499c_0x33499c");
#endif

    ctx->pc = 0x33499cu;

    // 0x33499c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x33499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3349a0: 0x2466674c  addiu       $a2, $v1, 0x674C
    ctx->pc = 0x3349a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 26444));
    // 0x3349a4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x3349a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3349a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3349a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3349ac: 0x244299f8  addiu       $v0, $v0, -0x6608
    ctx->pc = 0x3349acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941176));
    // 0x3349b0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3349b0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3349b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3349b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3349b8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3349B8u;
    {
        const bool branch_taken_0x3349b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3349b8) {
            ctx->pc = 0x334C38u;
            return;
        }
    }
    ctx->pc = 0x3349C0u;
}
