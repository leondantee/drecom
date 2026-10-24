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

// Function: entry_001c0dfc
// Address: 0x1c0dfc - 0x1c0e2c
void entry_001c0dfc_0x1c0dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0dfc_0x1c0dfc");
#endif

    ctx->pc = 0x1c0dfcu;

    // 0x1c0dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e00: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c0e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c0e04: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0E04u;
    {
        const bool branch_taken_0x1c0e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e04) {
            ctx->pc = 0x1C0E7Cu;
            return;
        }
    }
    ctx->pc = 0x1C0E0Cu;
    // 0x1c0e0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e10: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1c0e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1c0e14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0E14u;
    {
        const bool branch_taken_0x1c0e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e14) {
            ctx->pc = 0x1C0E2Cu;
            return;
        }
    }
    ctx->pc = 0x1C0E1Cu;
    // 0x1c0e1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e20: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1c0e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0e24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0E24u;
    {
        const bool branch_taken_0x1c0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e24) {
            ctx->pc = 0x1C0E38u;
            return;
        }
    }
    ctx->pc = 0x1C0E2Cu;
}
