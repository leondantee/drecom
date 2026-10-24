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

// Function: entry_0031b030
// Address: 0x31b030 - 0x31b0d8
void entry_0031b030_0x31b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b030_0x31b030");
#endif

    switch (ctx->pc) {
        case 0x31b04cu: goto label_31b04c;
        case 0x31b058u: goto label_31b058;
        case 0x31b074u: goto label_31b074;
        case 0x31b080u: goto label_31b080;
        case 0x31b09cu: goto label_31b09c;
        case 0x31b0a8u: goto label_31b0a8;
        case 0x31b0c4u: goto label_31b0c4;
        case 0x31b0d0u: goto label_31b0d0;
        default: break;
    }

    ctx->pc = 0x31b030u;

    // 0x31b030: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b034: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b038: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b03c: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b040: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B044u;
    SET_GPR_U32(ctx, 31, 0x31B04Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B044u, 0x31B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B04Cu;
label_31b04c:
    // 0x31b04c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b04cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B050u;
    SET_GPR_U32(ctx, 31, 0x31B058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B050u, 0x31B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B058u;
label_31b058:
    // 0x31b058: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b05c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b060: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b064: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b06c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B06Cu;
    SET_GPR_U32(ctx, 31, 0x31B074u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B06Cu, 0x31B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B074u;
label_31b074:
    // 0x31b074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b078: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B078u;
    SET_GPR_U32(ctx, 31, 0x31B080u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B078u, 0x31B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B080u;
label_31b080:
    // 0x31b080: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b088: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b08c: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b090: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b090u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b094: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B094u;
    SET_GPR_U32(ctx, 31, 0x31B09Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B094u, 0x31B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B09Cu;
label_31b09c:
    // 0x31b09c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b09cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b0a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B0A0u;
    SET_GPR_U32(ctx, 31, 0x31B0A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B0A0u, 0x31B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0A8u;
label_31b0a8:
    // 0x31b0a8: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b0ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b0acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b0b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b0b4: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b0b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b0b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b0bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B0BCu;
    SET_GPR_U32(ctx, 31, 0x31B0C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B0BCu, 0x31B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0C4u;
label_31b0c4:
    // 0x31b0c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b0c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b0c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B0C8u;
    SET_GPR_U32(ctx, 31, 0x31B0D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B0C8u, 0x31B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0D0u;
label_31b0d0:
    // 0x31b0d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31B0D0u;
    {
        const bool branch_taken_0x31b0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b0d0) {
            ctx->pc = 0x31B17Cu;
            return;
        }
    }
    ctx->pc = 0x31B0D8u;
}
