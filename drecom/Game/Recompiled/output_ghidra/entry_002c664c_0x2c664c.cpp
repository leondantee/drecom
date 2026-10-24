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

// Function: entry_002c664c
// Address: 0x2c664c - 0x2c6678
void entry_002c664c_0x2c664c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c664c_0x2c664c");
#endif

    ctx->pc = 0x2c664cu;

    // 0x2c664c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6650: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x2c6650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x2c6654: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c6654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c6658: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6658u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c665c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2c665cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c6660: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6660u;
    {
        const bool branch_taken_0x2c6660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6660) {
            ctx->pc = 0x2C6678u;
            return;
        }
    }
    ctx->pc = 0x2C6668u;
    // 0x2c6668: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c666c: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x2c666cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2c6670: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2c6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2c6674: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x2c6674u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c6678u;
}
