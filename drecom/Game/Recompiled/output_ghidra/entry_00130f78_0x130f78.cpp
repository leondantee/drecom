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

// Function: entry_00130f78
// Address: 0x130f78 - 0x130fb4
void entry_00130f78_0x130f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f78_0x130f78");
#endif

    ctx->pc = 0x130f78u;

    // 0x130f78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f84: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x130f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x130f88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130fa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x130fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130fa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fa8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x130fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x130fac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x130FACu;
    {
        const bool branch_taken_0x130fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130fac) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130FB4u;
}
