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

// Function: entry_002079e0
// Address: 0x2079e0 - 0x207a04
void entry_002079e0_0x2079e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002079e0_0x2079e0");
#endif

    ctx->pc = 0x2079e0u;

    // 0x2079e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2079e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2079e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2079e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2079ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2079ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2079f0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2079f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079f4: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2079f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2079f8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079fc: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2079fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x207a00: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    ctx->pc = 0x207a04u;
}
