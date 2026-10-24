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

// Function: entry_0030d8bc
// Address: 0x30d8bc - 0x30d8ec
void entry_0030d8bc_0x30d8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d8bc_0x30d8bc");
#endif

    ctx->pc = 0x30d8bcu;

    // 0x30d8bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d8c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d8c8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30d8cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d8d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30d8ecu;
}
