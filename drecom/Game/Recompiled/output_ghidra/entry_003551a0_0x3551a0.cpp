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

// Function: entry_003551a0
// Address: 0x3551a0 - 0x3551b8
void entry_003551a0_0x3551a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003551a0_0x3551a0");
#endif

    ctx->pc = 0x3551a0u;

    // 0x3551a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3551a4: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3551A4u;
    {
        const bool branch_taken_0x3551a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3551a4) {
            ctx->pc = 0x3551B8u;
            return;
        }
    }
    ctx->pc = 0x3551ACu;
    // 0x3551ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3551acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3551b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551b4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x3551b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3551b8u;
}
