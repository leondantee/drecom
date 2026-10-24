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

// Function: entry_00233044
// Address: 0x233044 - 0x233064
void entry_00233044_0x233044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233044_0x233044");
#endif

    ctx->pc = 0x233044u;

    // 0x233044: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233048: 0x848510a6  lh          $a1, 0x10A6($a0)
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x23304c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x23304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x233050: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x233050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x233054: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x233054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x233058: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x233058u;
    {
        const bool branch_taken_0x233058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x233058) {
            ctx->pc = 0x233064u;
            return;
        }
    }
    ctx->pc = 0x233060u;
    // 0x233060: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->pc = 0x233064u;
}
