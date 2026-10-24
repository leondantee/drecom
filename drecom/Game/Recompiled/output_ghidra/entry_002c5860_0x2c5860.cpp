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

// Function: entry_002c5860
// Address: 0x2c5860 - 0x2c58b8
void entry_002c5860_0x2c5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5860_0x2c5860");
#endif

    ctx->pc = 0x2c5860u;

    // 0x2c5860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5864: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5868: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2c5868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c586c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c586cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c5870: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c5870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c5874: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c5874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5878: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c5878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c587c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c587cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c5880: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c5880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c5884: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c5884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c588c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5890: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c5890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5894: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c5894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c589c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c589cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c58a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c58a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c58acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c58b8u;
}
