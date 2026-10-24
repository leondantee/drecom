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

// Function: entry_001c063c
// Address: 0x1c063c - 0x1c066c
void entry_001c063c_0x1c063c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c063c_0x1c063c");
#endif

    ctx->pc = 0x1c063cu;

    // 0x1c063c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0640: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c0640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c0644: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0644u;
    {
        const bool branch_taken_0x1c0644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0644) {
            ctx->pc = 0x1C06BCu;
            return;
        }
    }
    ctx->pc = 0x1C064Cu;
    // 0x1c064c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0650: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1c0650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1c0654: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0654u;
    {
        const bool branch_taken_0x1c0654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0654) {
            ctx->pc = 0x1C066Cu;
            return;
        }
    }
    ctx->pc = 0x1C065Cu;
    // 0x1c065c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0660: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1c0660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0664u;
    {
        const bool branch_taken_0x1c0664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0664) {
            ctx->pc = 0x1C0678u;
            return;
        }
    }
    ctx->pc = 0x1C066Cu;
}
