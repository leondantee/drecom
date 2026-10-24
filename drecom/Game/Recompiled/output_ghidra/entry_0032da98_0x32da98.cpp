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

// Function: entry_0032da98
// Address: 0x32da98 - 0x32dab8
void entry_0032da98_0x32da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032da98_0x32da98");
#endif

    ctx->pc = 0x32da98u;

    // 0x32da98: 0x82222907  lb          $v0, 0x2907($s1)
    ctx->pc = 0x32da98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10503)));
    // 0x32da9c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32daa0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32daa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32daa4: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x32daa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x32daa8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DAA8u;
    {
        const bool branch_taken_0x32daa8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32daa8) {
            ctx->pc = 0x32DAB8u;
            return;
        }
    }
    ctx->pc = 0x32DAB0u;
    // 0x32dab0: 0xa2202907  sb          $zero, 0x2907($s1)
    ctx->pc = 0x32dab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10503), (uint8_t)GPR_U32(ctx, 0));
    // 0x32dab4: 0xa2202906  sb          $zero, 0x2906($s1)
    ctx->pc = 0x32dab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10502), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32dab8u;
}
