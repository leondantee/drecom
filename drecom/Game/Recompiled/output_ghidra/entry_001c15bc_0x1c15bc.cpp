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

// Function: entry_001c15bc
// Address: 0x1c15bc - 0x1c15ec
void entry_001c15bc_0x1c15bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c15bc_0x1c15bc");
#endif

    ctx->pc = 0x1c15bcu;

    // 0x1c15bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15c0: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c15c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c15c4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C15C4u;
    {
        const bool branch_taken_0x1c15c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15c4) {
            ctx->pc = 0x1C163Cu;
            return;
        }
    }
    ctx->pc = 0x1C15CCu;
    // 0x1c15cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15d0: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1c15d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1c15d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C15D4u;
    {
        const bool branch_taken_0x1c15d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15d4) {
            ctx->pc = 0x1C15ECu;
            return;
        }
    }
    ctx->pc = 0x1C15DCu;
    // 0x1c15dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15e0: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1c15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c15e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C15E4u;
    {
        const bool branch_taken_0x1c15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15e4) {
            ctx->pc = 0x1C15F8u;
            return;
        }
    }
    ctx->pc = 0x1C15ECu;
}
