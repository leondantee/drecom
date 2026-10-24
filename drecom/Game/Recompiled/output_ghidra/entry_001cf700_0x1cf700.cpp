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

// Function: entry_001cf700
// Address: 0x1cf700 - 0x1cf730
void entry_001cf700_0x1cf700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf700_0x1cf700");
#endif

    ctx->pc = 0x1cf700u;

    // 0x1cf700: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf708: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cf708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf70c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf710: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1cf710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf714: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf718: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1cf718u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf71c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf720: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1cf720u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf724: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cf728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf72c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1cf72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf730u;
}
