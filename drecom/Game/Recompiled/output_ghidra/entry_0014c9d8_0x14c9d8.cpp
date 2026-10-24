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

// Function: entry_0014c9d8
// Address: 0x14c9d8 - 0x14ca28
void entry_0014c9d8_0x14c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c9d8_0x14c9d8");
#endif

    ctx->pc = 0x14c9d8u;

    // 0x14c9d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c9e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14C9E0u;
    {
        const bool branch_taken_0x14c9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9e0) {
            ctx->pc = 0x14CA28u;
            return;
        }
    }
    ctx->pc = 0x14C9E8u;
    // 0x14c9e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9ec: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c9f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14c9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c9fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca00: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14ca00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ca04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14ca08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ca0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14ca10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ca14: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ca18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca1c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14ca20: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CA20u;
    {
        const bool branch_taken_0x14ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca20) {
            ctx->pc = 0x14CA28u;
            return;
        }
    }
    ctx->pc = 0x14CA28u;
}
