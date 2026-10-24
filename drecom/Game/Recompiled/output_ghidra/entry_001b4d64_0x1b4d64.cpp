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

// Function: entry_001b4d64
// Address: 0x1b4d64 - 0x1b4d98
void entry_001b4d64_0x1b4d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4d64_0x1b4d64");
#endif

    ctx->pc = 0x1b4d64u;

    // 0x1b4d64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d68: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4d6c: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1b4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1b4d70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4d74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4D74u;
    {
        const bool branch_taken_0x1b4d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d74) {
            ctx->pc = 0x1B4D98u;
            return;
        }
    }
    ctx->pc = 0x1B4D7Cu;
    // 0x1b4d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4d80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d84: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4d90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4D90u;
    {
        const bool branch_taken_0x1b4d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d90) {
            ctx->pc = 0x1B4E24u;
            return;
        }
    }
    ctx->pc = 0x1B4D98u;
}
