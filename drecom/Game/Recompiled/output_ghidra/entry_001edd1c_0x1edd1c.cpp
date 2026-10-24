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

// Function: entry_001edd1c
// Address: 0x1edd1c - 0x1edd2c
void entry_001edd1c_0x1edd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edd1c_0x1edd1c");
#endif

    ctx->pc = 0x1edd1cu;

    // 0x1edd1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1edd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd20: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1edd24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1edd28: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1edd28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1edd2cu;
}
