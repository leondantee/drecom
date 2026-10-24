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

// Function: entry_00297260
// Address: 0x297260 - 0x297294
void entry_00297260_0x297260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297260_0x297260");
#endif

    ctx->pc = 0x297260u;

    // 0x297260: 0x8e0269d8  lw          $v0, 0x69D8($s0)
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x297264: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x297264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x297268: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x297268u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29726c: 0x860269a6  lh          $v0, 0x69A6($s0)
    ctx->pc = 0x29726cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27046)));
    // 0x297270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297274: 0xa60269a6  sh          $v0, 0x69A6($s0)
    ctx->pc = 0x297274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27046), (uint16_t)GPR_U32(ctx, 2));
    // 0x297278: 0x861769ac  lh          $s7, 0x69AC($s0)
    ctx->pc = 0x297278u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x29727c: 0x171c3c  dsll32      $v1, $s7, 16
    ctx->pc = 0x29727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 16));
    // 0x297280: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x297280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x297284: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x297284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297288: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x297288u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29728c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x29728Cu;
    {
        const bool branch_taken_0x29728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29728c) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x297294u;
}
