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

// Function: entry_0012fd3c
// Address: 0x12fd3c - 0x12fd84
void entry_0012fd3c_0x12fd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd3c_0x12fd3c");
#endif

    ctx->pc = 0x12fd3cu;

    // 0x12fd3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fd40: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fd44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fd48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12fd4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fd50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fd54: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd5c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fd60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fd6c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12fd70: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12fd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x12fd74: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12fd78: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12fd78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fd7c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FD7Cu;
    {
        const bool branch_taken_0x12fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd7c) {
            ctx->pc = 0x12FD84u;
            return;
        }
    }
    ctx->pc = 0x12FD84u;
}
