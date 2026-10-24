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

// Function: entry_001bf6b8
// Address: 0x1bf6b8 - 0x1bf6e8
void entry_001bf6b8_0x1bf6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf6b8_0x1bf6b8");
#endif

    ctx->pc = 0x1bf6b8u;

    // 0x1bf6b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6bc: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1bf6bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1bf6c0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BF6C0u;
    {
        const bool branch_taken_0x1bf6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6c0) {
            ctx->pc = 0x1BF738u;
            return;
        }
    }
    ctx->pc = 0x1BF6C8u;
    // 0x1bf6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6cc: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1bf6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1bf6d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF6D0u;
    {
        const bool branch_taken_0x1bf6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6d0) {
            ctx->pc = 0x1BF6E8u;
            return;
        }
    }
    ctx->pc = 0x1BF6D8u;
    // 0x1bf6d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6dc: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1bf6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf6e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF6E0u;
    {
        const bool branch_taken_0x1bf6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6e0) {
            ctx->pc = 0x1BF6F4u;
            return;
        }
    }
    ctx->pc = 0x1BF6E8u;
}
