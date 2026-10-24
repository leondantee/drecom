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

// Function: entry_00232fdc
// Address: 0x232fdc - 0x233010
void entry_00232fdc_0x232fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232fdc_0x232fdc");
#endif

    ctx->pc = 0x232fdcu;

    // 0x232fdc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232fe0: 0x844410a6  lh          $a0, 0x10A6($v0)
    ctx->pc = 0x232fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x232fe4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x232fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x232fe8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x232fe8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x232fec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232ff0: 0x8444138c  lh          $a0, 0x138C($v0)
    ctx->pc = 0x232ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
    // 0x232ff4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x232ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x232ff8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232ff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232ffc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x232ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x233000: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x233000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x233004: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x233004u;
    {
        const bool branch_taken_0x233004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x233004) {
            ctx->pc = 0x233010u;
            return;
        }
    }
    ctx->pc = 0x23300Cu;
    // 0x23300c: 0x241101e0  addiu       $s1, $zero, 0x1E0
    ctx->pc = 0x23300cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->pc = 0x233010u;
}
