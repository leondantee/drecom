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

// Function: entry_0012b728
// Address: 0x12b728 - 0x12b768
void entry_0012b728_0x12b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b728_0x12b728");
#endif

    ctx->pc = 0x12b728u;

    // 0x12b728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b72c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b730: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b734: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b738: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b73c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b740: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b744: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b748: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b74c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b750: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b754: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b758: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12b75c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12b75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x12b760: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12b764: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12b764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12b768u;
}
