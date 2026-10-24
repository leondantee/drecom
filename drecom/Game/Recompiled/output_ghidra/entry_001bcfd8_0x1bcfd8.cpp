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

// Function: entry_001bcfd8
// Address: 0x1bcfd8 - 0x1bd068
void entry_001bcfd8_0x1bcfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcfd8_0x1bcfd8");
#endif

    ctx->pc = 0x1bcfd8u;

    // 0x1bcfd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcfdc: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1bcfdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bcfe0: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1BCFE0u;
    {
        const bool branch_taken_0x1bcfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfe0) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCFE8u;
    // 0x1bcfe8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcfec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bcfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bcff0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bcff4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bcff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bcff8: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BCFF8u;
    {
        const bool branch_taken_0x1bcff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcff8) {
            ctx->pc = 0x1BD08Cu;
            return;
        }
    }
    ctx->pc = 0x1BD000u;
    // 0x1bd000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd004: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd008: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd00c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd010: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd014: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1bd014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd018: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd01c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd020: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd024: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd028: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd02c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bd02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bd030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd034: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd038: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1bd038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd03c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd040: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1bd040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd044: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd048: 0x9083156d  lbu         $v1, 0x156D($a0)
    ctx->pc = 0x1bd048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5485)));
    // 0x1bd04c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd050: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd054: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD054u;
    {
        const bool branch_taken_0x1bd054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bd054) {
            ctx->pc = 0x1BD068u;
            return;
        }
    }
    ctx->pc = 0x1BD05Cu;
    // 0x1bd05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd060: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd064: 0xa065156d  sb          $a1, 0x156D($v1)
    ctx->pc = 0x1bd064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1bd068u;
}
