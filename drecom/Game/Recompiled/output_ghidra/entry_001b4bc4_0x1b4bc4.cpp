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

// Function: entry_001b4bc4
// Address: 0x1b4bc4 - 0x1b4bf8
void entry_001b4bc4_0x1b4bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4bc4_0x1b4bc4");
#endif

    ctx->pc = 0x1b4bc4u;

    // 0x1b4bc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4bc8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4bcc: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1b4bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1b4bd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4bd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4BD4u;
    {
        const bool branch_taken_0x1b4bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bd4) {
            ctx->pc = 0x1B4BF8u;
            return;
        }
    }
    ctx->pc = 0x1B4BDCu;
    // 0x1b4bdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4be0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4be4: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4bec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4bf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4BF0u;
    {
        const bool branch_taken_0x1b4bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bf0) {
            ctx->pc = 0x1B4C18u;
            return;
        }
    }
    ctx->pc = 0x1B4BF8u;
}
