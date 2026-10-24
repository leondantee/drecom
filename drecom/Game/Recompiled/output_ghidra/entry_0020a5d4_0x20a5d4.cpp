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

// Function: entry_0020a5d4
// Address: 0x20a5d4 - 0x20a5fc
void entry_0020a5d4_0x20a5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a5d4_0x20a5d4");
#endif

    ctx->pc = 0x20a5d4u;

    // 0x20a5d4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5d8: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5dc: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x20a5e0: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20a5e4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A5E4u;
    {
        const bool branch_taken_0x20a5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5e4) {
            ctx->pc = 0x20A5FCu;
            return;
        }
    }
    ctx->pc = 0x20A5ECu;
    // 0x20a5ec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20a5f0: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5f4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5f8: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x20a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
    ctx->pc = 0x20a5fcu;
}
