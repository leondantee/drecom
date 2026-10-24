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

// Function: entry_0036dc44
// Address: 0x36dc44 - 0x36dc58
void entry_0036dc44_0x36dc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036dc44_0x36dc44");
#endif

    ctx->pc = 0x36dc44u;

    // 0x36dc44: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x36dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36dc48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36dc4c: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x36dc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x36dc50: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x36dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36dc54: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x36dc58u;
}
