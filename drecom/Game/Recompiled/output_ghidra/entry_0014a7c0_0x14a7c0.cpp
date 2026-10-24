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

// Function: entry_0014a7c0
// Address: 0x14a7c0 - 0x14a80c
void entry_0014a7c0_0x14a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a7c0_0x14a7c0");
#endif

    ctx->pc = 0x14a7c0u;

    // 0x14a7c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14a7c8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A7C8u;
    {
        const bool branch_taken_0x14a7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7c8) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A7D0u;
    // 0x14a7d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a7d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7d8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a7dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a7e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14a7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a7f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14a7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a800: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14a800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14a804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a808: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14a808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x14a80cu;
}
