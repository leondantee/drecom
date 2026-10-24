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

// Function: entry_0012b848
// Address: 0x12b848 - 0x12b888
void entry_0012b848_0x12b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b848_0x12b848");
#endif

    ctx->pc = 0x12b848u;

    // 0x12b848: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b84c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b84cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12b850: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x12B850u;
    {
        const bool branch_taken_0x12b850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b850) {
            ctx->pc = 0x12B888u;
            return;
        }
    }
    ctx->pc = 0x12B858u;
    // 0x12b858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b85c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b860: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b864: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x12b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b868: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b86c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b870: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b874: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b87c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b884: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12b888u;
}
