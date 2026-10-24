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

// Function: entry_001fa040
// Address: 0x1fa040 - 0x1fa090
void entry_001fa040_0x1fa040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa040_0x1fa040");
#endif

    ctx->pc = 0x1fa040u;

    // 0x1fa040: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fa040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa044: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1fa044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa048: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1fa048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1fa04c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1fa050: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa054: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1fa054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1fa058: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1fa058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa05c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa060: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1fa060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1fa064: 0xa065007e  sb          $a1, 0x7E($v1)
    ctx->pc = 0x1fa064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fa068: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa06c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa070: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa074: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa078: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x1fa078u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x1fa07c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1fa07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa080: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1fa080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1fa084: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa088: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa08c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa08cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    ctx->pc = 0x1fa090u;
}
