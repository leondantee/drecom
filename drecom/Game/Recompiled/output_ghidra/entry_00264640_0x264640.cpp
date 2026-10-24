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

// Function: entry_00264640
// Address: 0x264640 - 0x264658
void entry_00264640_0x264640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264640_0x264640");
#endif

    ctx->pc = 0x264640u;

    // 0x264640: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x264640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x264644: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x264644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x264648: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x264648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x26464c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x26464cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264650: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x264650u;
    {
        const bool branch_taken_0x264650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264650) {
            ctx->pc = 0x264688u;
            return;
        }
    }
    ctx->pc = 0x264658u;
}
