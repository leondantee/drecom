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

// Function: entry_001b6b94
// Address: 0x1b6b94 - 0x1b6c24
void entry_001b6b94_0x1b6b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b94_0x1b6b94");
#endif

    ctx->pc = 0x1b6b94u;

    // 0x1b6b94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b98: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b6b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b6b9c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1B6B9Cu;
    {
        const bool branch_taken_0x1b6b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b9c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6BA4u;
    // 0x1b6ba4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ba8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b6bac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1b6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1b6bb0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b6bb4: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B6BB4u;
    {
        const bool branch_taken_0x1b6bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6bb4) {
            ctx->pc = 0x1B6C48u;
            return;
        }
    }
    ctx->pc = 0x1B6BBCu;
    // 0x1b6bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6bc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6bc4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1b6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b6bc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6bcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6bd0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1b6bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6bd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6bd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6bdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6be0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b6be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6be4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6be8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b6bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6bf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6bf4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1b6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6bf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6bfc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b6bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6c00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c04: 0x9065156d  lbu         $a1, 0x156D($v1)
    ctx->pc = 0x1b6c04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1b6c08: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b6c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b6c0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6c10: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6C10u;
    {
        const bool branch_taken_0x1b6c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6c10) {
            ctx->pc = 0x1B6C24u;
            return;
        }
    }
    ctx->pc = 0x1B6C18u;
    // 0x1b6c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6c1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c20: 0xa083156d  sb          $v1, 0x156D($a0)
    ctx->pc = 0x1b6c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5485), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b6c24u;
}
