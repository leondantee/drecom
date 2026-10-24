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

// Function: entry_002937bc
// Address: 0x2937bc - 0x2937d8
void entry_002937bc_0x2937bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002937bc_0x2937bc");
#endif

    ctx->pc = 0x2937bcu;

    // 0x2937bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2937bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2937c0: 0x245166e8  addiu       $s1, $v0, 0x66E8
    ctx->pc = 0x2937c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26344));
    // 0x2937c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2937c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2937c8: 0x24576810  addiu       $s7, $v0, 0x6810
    ctx->pc = 0x2937c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 26640));
    // 0x2937cc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2937ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2937d0: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x2937D0u;
    {
        const bool branch_taken_0x2937d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2937d0) {
            ctx->pc = 0x293CC8u;
            return;
        }
    }
    ctx->pc = 0x2937D8u;
}
