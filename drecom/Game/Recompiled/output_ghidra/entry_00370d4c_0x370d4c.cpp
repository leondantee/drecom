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

// Function: entry_00370d4c
// Address: 0x370d4c - 0x370dd0
void entry_00370d4c_0x370d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370d4c_0x370d4c");
#endif

    switch (ctx->pc) {
        case 0x370d5cu: goto label_370d5c;
        case 0x370d68u: goto label_370d68;
        case 0x370d74u: goto label_370d74;
        case 0x370d80u: goto label_370d80;
        case 0x370db0u: goto label_370db0;
        default: break;
    }

    ctx->pc = 0x370d4cu;

    // 0x370d4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370d54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370D54u;
    SET_GPR_U32(ctx, 31, 0x370D5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370D54u, 0x370D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D5Cu;
label_370d5c:
    // 0x370d5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d60: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370D60u;
    SET_GPR_U32(ctx, 31, 0x370D68u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370D60u, 0x370D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D68u;
label_370d68:
    // 0x370d68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d6c: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370D6Cu;
    SET_GPR_U32(ctx, 31, 0x370D74u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370D6Cu, 0x370D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D74u;
label_370d74:
    // 0x370d74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d78: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370D78u;
    SET_GPR_U32(ctx, 31, 0x370D80u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370D78u, 0x370D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D80u;
label_370d80:
    // 0x370d80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d84: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x370d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x370d88: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x370D88u;
    {
        const bool branch_taken_0x370d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370d88) {
            ctx->pc = 0x370EECu;
            return;
        }
    }
    ctx->pc = 0x370D90u;
    // 0x370d90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370d9c: 0x24061e0b  addiu       $a2, $zero, 0x1E0B
    ctx->pc = 0x370d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7691));
    // 0x370da0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370da4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370da8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370DA8u;
    SET_GPR_U32(ctx, 31, 0x370DB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370DA8u, 0x370DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DB0u;
label_370db0:
    // 0x370db0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x370db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x370db4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370db8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x370db8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x370dbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x370dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370dc4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x370dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x370dc8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x370DC8u;
    {
        const bool branch_taken_0x370dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370dc8) {
            ctx->pc = 0x370EECu;
            return;
        }
    }
    ctx->pc = 0x370DD0u;
}
