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

// Function: entry_00238700
// Address: 0x238700 - 0x238728
void entry_00238700_0x238700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238700_0x238700");
#endif

    ctx->pc = 0x238700u;

    // 0x238700: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238704: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238708: 0x84420074  lh          $v0, 0x74($v0)
    ctx->pc = 0x238708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x23870c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23870Cu;
    {
        const bool branch_taken_0x23870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23870c) {
            ctx->pc = 0x238728u;
            return;
        }
    }
    ctx->pc = 0x238714u;
    // 0x238714: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238718: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23871c: 0x84620074  lh          $v0, 0x74($v1)
    ctx->pc = 0x23871cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x238720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x238720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238724: 0xa4620074  sh          $v0, 0x74($v1)
    ctx->pc = 0x238724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x238728u;
}
