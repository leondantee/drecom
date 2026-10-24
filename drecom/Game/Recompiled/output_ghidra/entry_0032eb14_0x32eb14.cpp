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

// Function: entry_0032eb14
// Address: 0x32eb14 - 0x32eb38
void entry_0032eb14_0x32eb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032eb14_0x32eb14");
#endif

    ctx->pc = 0x32eb14u;

    // 0x32eb14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb18: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb1c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32eb20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB24u;
    {
        const bool branch_taken_0x32eb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb24) {
            ctx->pc = 0x32EB38u;
            return;
        }
    }
    ctx->pc = 0x32EB2Cu;
    // 0x32eb2c: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32eb30: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x32eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x32eb34: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
    ctx->pc = 0x32eb38u;
}
