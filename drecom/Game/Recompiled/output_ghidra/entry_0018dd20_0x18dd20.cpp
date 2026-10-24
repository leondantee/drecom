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

// Function: entry_0018dd20
// Address: 0x18dd20 - 0x18dd34
void entry_0018dd20_0x18dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd20_0x18dd20");
#endif

    ctx->pc = 0x18dd20u;

    // 0x18dd20: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x18dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x18dd24: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x18dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x18dd28: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x18dd2c: 0xac5000e8  sw          $s0, 0xE8($v0)
    ctx->pc = 0x18dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 16));
    // 0x18dd30: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x18dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    ctx->pc = 0x18dd34u;
}
