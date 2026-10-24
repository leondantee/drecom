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

// Function: entry_00365f70
// Address: 0x365f70 - 0x365fac
void entry_00365f70_0x365f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365f70_0x365f70");
#endif

    ctx->pc = 0x365f70u;

    // 0x365f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x365f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x365f80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x365fa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365fa4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x365fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365fa8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x365fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x365facu;
}
