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

// Function: entry_002346ac
// Address: 0x2346ac - 0x234704
void entry_002346ac_0x2346ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002346ac_0x2346ac");
#endif

    switch (ctx->pc) {
        case 0x2346dcu: goto label_2346dc;
        case 0x2346f8u: goto label_2346f8;
        default: break;
    }

    ctx->pc = 0x2346acu;

    // 0x2346ac: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2346acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2346b0: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2346b4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2346b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2346b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2346b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2346bc: 0x4610108  bgez        $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x2346BCu;
    {
        const bool branch_taken_0x2346bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2346bc) {
            ctx->pc = 0x234AE0u;
            return;
        }
    }
    ctx->pc = 0x2346C4u;
    // 0x2346c4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2346c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346c8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2346c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346d0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2346d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2346d4: 0xc065580  jal         func_195600
    ctx->pc = 0x2346D4u;
    SET_GPR_U32(ctx, 31, 0x2346DCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2346D4u, 0x2346DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346DCu;
label_2346dc:
    // 0x2346dc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2346dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2346e0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346e4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2346e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346e8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2346e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346ec: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2346ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2346f0: 0xc0655c0  jal         func_195700
    ctx->pc = 0x2346F0u;
    SET_GPR_U32(ctx, 31, 0x2346F8u);
    ctx->pc = 0x195700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195700u, 0x2346F0u, 0x2346F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346F8u;
label_2346f8:
    // 0x2346f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2346f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2346fc: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2346FCu;
    {
        const bool branch_taken_0x2346fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346fc) {
            ctx->pc = 0x234AE0u;
            return;
        }
    }
    ctx->pc = 0x234704u;
}
