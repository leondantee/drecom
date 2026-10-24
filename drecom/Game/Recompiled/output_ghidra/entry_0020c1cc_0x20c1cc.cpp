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

// Function: entry_0020c1cc
// Address: 0x20c1cc - 0x20c1fc
void entry_0020c1cc_0x20c1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c1cc_0x20c1cc");
#endif

    ctx->pc = 0x20c1ccu;

    // 0x20c1cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c1d0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c1d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20c1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c1d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20c1dc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c1e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20c1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c1e4: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c1e8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x20c1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c1ec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c1f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20c1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c1f4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c1f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20c1fcu;
}
