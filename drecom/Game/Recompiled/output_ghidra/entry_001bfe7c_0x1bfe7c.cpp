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

// Function: entry_001bfe7c
// Address: 0x1bfe7c - 0x1bfeac
void entry_001bfe7c_0x1bfe7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfe7c_0x1bfe7c");
#endif

    ctx->pc = 0x1bfe7cu;

    // 0x1bfe7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe80: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1bfe80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1bfe84: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BFE84u;
    {
        const bool branch_taken_0x1bfe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe84) {
            ctx->pc = 0x1BFEFCu;
            return;
        }
    }
    ctx->pc = 0x1BFE8Cu;
    // 0x1bfe8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe90: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1bfe90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1bfe94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFE94u;
    {
        const bool branch_taken_0x1bfe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe94) {
            ctx->pc = 0x1BFEACu;
            return;
        }
    }
    ctx->pc = 0x1BFE9Cu;
    // 0x1bfe9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfea0: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1bfea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFEA4u;
    {
        const bool branch_taken_0x1bfea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfea4) {
            ctx->pc = 0x1BFEB8u;
            return;
        }
    }
    ctx->pc = 0x1BFEACu;
}
