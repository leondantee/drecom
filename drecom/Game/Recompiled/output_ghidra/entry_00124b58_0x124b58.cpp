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

// Function: entry_00124b58
// Address: 0x124b58 - 0x124be8
void entry_00124b58_0x124b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124b58_0x124b58");
#endif

    switch (ctx->pc) {
        case 0x124b78u: goto label_124b78;
        case 0x124b84u: goto label_124b84;
        case 0x124b94u: goto label_124b94;
        case 0x124ba0u: goto label_124ba0;
        case 0x124bd0u: goto label_124bd0;
        default: break;
    }

    ctx->pc = 0x124b58u;

    // 0x124b58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124b60: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x124b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x124b64: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x124b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x124b68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x124b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124b70: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x124B70u;
    SET_GPR_U32(ctx, 31, 0x124B78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x124B70u, 0x124B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B78u;
label_124b78:
    // 0x124b78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b7c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x124B7Cu;
    SET_GPR_U32(ctx, 31, 0x124B84u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x124B7Cu, 0x124B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B84u;
label_124b84:
    // 0x124b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124b8c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x124B8Cu;
    SET_GPR_U32(ctx, 31, 0x124B94u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x124B8Cu, 0x124B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B94u;
label_124b94:
    // 0x124b94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b98: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x124B98u;
    SET_GPR_U32(ctx, 31, 0x124BA0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x124B98u, 0x124BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BA0u;
label_124ba0:
    // 0x124ba0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124ba4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124ba8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x124ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x124bac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124bb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x124BB0u;
    {
        const bool branch_taken_0x124bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124bb0) {
            ctx->pc = 0x124BE8u;
            return;
        }
    }
    ctx->pc = 0x124BB8u;
    // 0x124bb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124bbc: 0x244412b0  addiu       $a0, $v0, 0x12B0
    ctx->pc = 0x124bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x124bc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124bc4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x124bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124bc8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x124BC8u;
    SET_GPR_U32(ctx, 31, 0x124BD0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x124BD0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x124BD0u) { return; }
    ctx->pc = 0x124BD0u;
label_124bd0:
    // 0x124bd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124bd4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124bdc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x124bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124be0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x124BE0u;
    {
        const bool branch_taken_0x124be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124be0) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124BE8u;
}
