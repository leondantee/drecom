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

// Function: entry_002f767c
// Address: 0x2f767c - 0x2f7690
void entry_002f767c_0x2f767c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f767c_0x2f767c");
#endif

    ctx->pc = 0x2f767cu;

    // 0x2f767c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7680: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7684: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f7684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f7688: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f768c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f768cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f7690u;
}
