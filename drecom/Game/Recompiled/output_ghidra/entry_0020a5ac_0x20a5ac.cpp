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

// Function: entry_0020a5ac
// Address: 0x20a5ac - 0x20a5d4
void entry_0020a5ac_0x20a5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a5ac_0x20a5ac");
#endif

    ctx->pc = 0x20a5acu;

    // 0x20a5ac: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5b4: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x20a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x20a5b8: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x20a5b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20a5bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A5BCu;
    {
        const bool branch_taken_0x20a5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5bc) {
            ctx->pc = 0x20A5D4u;
            return;
        }
    }
    ctx->pc = 0x20A5C4u;
    // 0x20a5c4: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20a5c8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5cc: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5d0: 0xacb200f4  sw          $s2, 0xF4($a1)
    ctx->pc = 0x20a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 18));
    ctx->pc = 0x20a5d4u;
}
