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

// Function: entry_00233010
// Address: 0x233010 - 0x233044
void entry_00233010_0x233010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233010_0x233010");
#endif

    ctx->pc = 0x233010u;

    // 0x233010: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233014: 0x848510a6  lh          $a1, 0x10A6($a0)
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x233018: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x233018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x23301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x233020: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233024: 0x8444138c  lh          $a0, 0x138C($v0)
    ctx->pc = 0x233024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
    // 0x233028: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x233028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x23302c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x23302cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x233030: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x233030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x233034: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x233034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x233038: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x233038u;
    {
        const bool branch_taken_0x233038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x233038) {
            ctx->pc = 0x233044u;
            return;
        }
    }
    ctx->pc = 0x233040u;
    // 0x233040: 0x241104b0  addiu       $s1, $zero, 0x4B0
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    ctx->pc = 0x233044u;
}
