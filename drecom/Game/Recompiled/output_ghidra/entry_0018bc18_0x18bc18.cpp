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

// Function: entry_0018bc18
// Address: 0x18bc18 - 0x18bc28
void entry_0018bc18_0x18bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bc18_0x18bc18");
#endif

    ctx->pc = 0x18bc18u;

    // 0x18bc18: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x18bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18bc1c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x18bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x18bc20: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18bc24: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    ctx->pc = 0x18bc28u;
}
