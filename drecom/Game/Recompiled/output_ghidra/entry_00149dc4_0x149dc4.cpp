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

// Function: entry_00149dc4
// Address: 0x149dc4 - 0x149e10
void entry_00149dc4_0x149dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149dc4_0x149dc4");
#endif

    ctx->pc = 0x149dc4u;

    // 0x149dc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149dc8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x149dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x149dcc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149DCCu;
    {
        const bool branch_taken_0x149dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149dcc) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149DD4u;
    // 0x149dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ddc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x149ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x149de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149de4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149de8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x149de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x149dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149df0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x149df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149df8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x149df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x149dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x149e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x149e04: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x149e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x149e08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e0c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x149e10u;
}
