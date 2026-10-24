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

// Function: entry_0014dab4
// Address: 0x14dab4 - 0x14dac8
void entry_0014dab4_0x14dab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dab4_0x14dab4");
#endif

    ctx->pc = 0x14dab4u;

    // 0x14dab4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14dab8: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x14dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x14dabc: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x14dabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14dac0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14dac4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x14dac8u;
}
