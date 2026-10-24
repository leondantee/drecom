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

// Function: entry_001e98a4
// Address: 0x1e98a4 - 0x1e98f4
void entry_001e98a4_0x1e98a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e98a4_0x1e98a4");
#endif

    switch (ctx->pc) {
        case 0x1e98c8u: goto label_1e98c8;
        default: break;
    }

    ctx->pc = 0x1e98a4u;

    // 0x1e98a4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e98a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e98ac: 0x8462005e  lh          $v0, 0x5E($v1)
    ctx->pc = 0x1e98acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x1e98b0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1e98b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e98b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e98b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1e98b8: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E98B8u;
    {
        const bool branch_taken_0x1e98b8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e98b8) {
            ctx->pc = 0x1E98F4u;
            return;
        }
    }
    ctx->pc = 0x1E98C0u;
    // 0x1e98c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E98C0u;
    SET_GPR_U32(ctx, 31, 0x1E98C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E98C0u, 0x1E98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98C8u;
label_1e98c8:
    // 0x1e98c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e98c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e98cc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1e98ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e98d0: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x1e98d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1e98d4: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1e98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e98d8: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x1e98d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1e98dc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1e98dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1e98e0: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e98e4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e98e8: 0xa466005e  sh          $a2, 0x5E($v1)
    ctx->pc = 0x1e98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e98ec: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1E98ECu;
    {
        const bool branch_taken_0x1e98ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e98ec) {
            ctx->pc = 0x1E9A80u;
            return;
        }
    }
    ctx->pc = 0x1E98F4u;
}
