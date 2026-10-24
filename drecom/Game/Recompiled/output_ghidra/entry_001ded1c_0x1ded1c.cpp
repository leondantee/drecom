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

// Function: entry_001ded1c
// Address: 0x1ded1c - 0x1ded38
void entry_001ded1c_0x1ded1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ded1c_0x1ded1c");
#endif

    ctx->pc = 0x1ded1cu;

    // 0x1ded1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ded1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ded20: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ded20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ded24: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1ded24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1ded28: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x1ded28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1ded2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ded2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ded30: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1ded30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1ded34: 0x0  nop
    ctx->pc = 0x1ded34u;
    // NOP
    ctx->pc = 0x1ded38u;
}
