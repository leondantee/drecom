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

// Function: entry_00307bc0
// Address: 0x307bc0 - 0x307c18
void entry_00307bc0_0x307bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307bc0_0x307bc0");
#endif

    switch (ctx->pc) {
        case 0x307c0cu: goto label_307c0c;
        default: break;
    }

    ctx->pc = 0x307bc0u;

    // 0x307bc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307bc4: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x307bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307bc8: 0x30640040  andi        $a0, $v1, 0x40
    ctx->pc = 0x307bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x307bcc: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x307BCCu;
    {
        const bool branch_taken_0x307bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x307bcc) {
            ctx->pc = 0x307C18u;
            return;
        }
    }
    ctx->pc = 0x307BD4u;
    // 0x307bd4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307bd8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x307bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x307bdc: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x307bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x307be0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x307be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x307be4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x307be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x307be8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x307be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307bec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x307becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x307bf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x307bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x307bf4: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x307bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x307bf8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x307bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x307bfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307c00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x307c00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307c04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307C04u;
    SET_GPR_U32(ctx, 31, 0x307C0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307C04u, 0x307C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C0Cu;
label_307c0c:
    // 0x307c0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307c0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307c10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307C10u;
    SET_GPR_U32(ctx, 31, 0x307C18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307C10u, 0x307C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C18u;
}
