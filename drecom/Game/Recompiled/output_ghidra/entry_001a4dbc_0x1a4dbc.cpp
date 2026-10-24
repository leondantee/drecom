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

// Function: entry_001a4dbc
// Address: 0x1a4dbc - 0x1a4dec
void entry_001a4dbc_0x1a4dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4dbc_0x1a4dbc");
#endif

    ctx->pc = 0x1a4dbcu;

    // 0x1a4dbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4dc0: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4dc4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4dc8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4dcc: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a4dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4dd0: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A4DD0u;
    {
        const bool branch_taken_0x1a4dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dd0) {
            ctx->pc = 0x1A4E7Cu;
            return;
        }
    }
    ctx->pc = 0x1A4DD8u;
    // 0x1a4dd8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a4ddc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4de0: 0xa0640305  sb          $a0, 0x305($v1)
    ctx->pc = 0x1a4de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4de4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4DE4u;
    {
        const bool branch_taken_0x1a4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4de4) {
            ctx->pc = 0x1A4E7Cu;
            return;
        }
    }
    ctx->pc = 0x1A4DECu;
}
