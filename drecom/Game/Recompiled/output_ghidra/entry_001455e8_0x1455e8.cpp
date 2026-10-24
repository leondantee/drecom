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

// Function: entry_001455e8
// Address: 0x1455e8 - 0x145618
void entry_001455e8_0x1455e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001455e8_0x1455e8");
#endif

    ctx->pc = 0x1455e8u;

    // 0x1455e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1455f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1455f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1455fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x145600: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145604: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14560c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14560cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145610: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x145618u;
}
