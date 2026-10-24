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

// Function: entry_0025c978
// Address: 0x25c978 - 0x25c998
void entry_0025c978_0x25c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c978_0x25c978");
#endif

    ctx->pc = 0x25c978u;

    // 0x25c978: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x25c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25c97c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x25c97cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x25c980: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x25c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x25c984: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25c984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x25c988: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x25c988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25c98c: 0x1460ff82  bnez        $v1, . + 4 + (-0x7E << 2)
    ctx->pc = 0x25C98Cu;
    {
        const bool branch_taken_0x25c98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c98c) {
            ctx->pc = 0x25C798u;
            return;
        }
    }
    ctx->pc = 0x25C994u;
    // 0x25c994: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25c994u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25c998u;
}
