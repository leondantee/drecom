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

// Function: entry_002860c0
// Address: 0x2860c0 - 0x2860cc
void entry_002860c0_0x2860c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002860c0_0x2860c0");
#endif

    ctx->pc = 0x2860c0u;

    // 0x2860c0: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x2860c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x2860c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2860c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2860c8: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x2860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    ctx->pc = 0x2860ccu;
}
