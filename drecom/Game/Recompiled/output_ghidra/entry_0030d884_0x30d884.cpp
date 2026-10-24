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

// Function: entry_0030d884
// Address: 0x30d884 - 0x30d8bc
void entry_0030d884_0x30d884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d884_0x30d884");
#endif

    ctx->pc = 0x30d884u;

    // 0x30d884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d88c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d890: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30d894: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d898: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d89c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d8b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30D8B4u;
    {
        const bool branch_taken_0x30d8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d8b4) {
            ctx->pc = 0x30D8ECu;
            return;
        }
    }
    ctx->pc = 0x30D8BCu;
}
