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

// Function: entry_0020606c
// Address: 0x20606c - 0x20609c
void entry_0020606c_0x20606c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020606c_0x20606c");
#endif

    ctx->pc = 0x20606cu;

    // 0x20606c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206070: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206074: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206078: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x206078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20607c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206080: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206084: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206088: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20608c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206090: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206098: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20609cu;
}
