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

// Function: entry_00133718
// Address: 0x133718 - 0x133740
void entry_00133718_0x133718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133718_0x133718");
#endif

    ctx->pc = 0x133718u;

    // 0x133718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13371c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13371cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133720: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x133724: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x133724u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x133728: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x133728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x13372c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13372Cu;
    {
        const bool branch_taken_0x13372c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13372c) {
            ctx->pc = 0x133740u;
            return;
        }
    }
    ctx->pc = 0x133734u;
    // 0x133734: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133738: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x133738u;
    SET_GPR_U32(ctx, 31, 0x133740u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x133738u, 0x133740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133740u;
}
