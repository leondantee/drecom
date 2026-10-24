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

// Function: entry_00366de0
// Address: 0x366de0 - 0x366e74
void entry_00366de0_0x366de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366de0_0x366de0");
#endif

    switch (ctx->pc) {
        case 0x366df0u: goto label_366df0;
        case 0x366dfcu: goto label_366dfc;
        case 0x366e0cu: goto label_366e0c;
        case 0x366e18u: goto label_366e18;
        case 0x366e3cu: goto label_366e3c;
        case 0x366e60u: goto label_366e60;
        default: break;
    }

    ctx->pc = 0x366de0u;

    // 0x366de0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366de4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366de4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366de8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366DE8u;
    SET_GPR_U32(ctx, 31, 0x366DF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366DE8u, 0x366DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DF0u;
label_366df0:
    // 0x366df0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366df4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366DF4u;
    SET_GPR_U32(ctx, 31, 0x366DFCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366DF4u, 0x366DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DFCu;
label_366dfc:
    // 0x366dfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366e04: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366E04u;
    SET_GPR_U32(ctx, 31, 0x366E0Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366E04u, 0x366E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E0Cu;
label_366e0c:
    // 0x366e0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e10: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366E10u;
    SET_GPR_U32(ctx, 31, 0x366E18u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366E10u, 0x366E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E18u;
label_366e18:
    // 0x366e18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e1c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x366e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x366e20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x366e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366e24: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x366e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x366e28: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x366E28u;
    {
        const bool branch_taken_0x366e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e28) {
            ctx->pc = 0x366EACu;
            return;
        }
    }
    ctx->pc = 0x366E30u;
    // 0x366e30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x366e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366e34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x366E34u;
    SET_GPR_U32(ctx, 31, 0x366E3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x366E34u, 0x366E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E3Cu;
label_366e3c:
    // 0x366e3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x366e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x366e48: 0x244507c0  addiu       $a1, $v0, 0x7C0
    ctx->pc = 0x366e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x366e4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x366e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366e50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x366e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x366e54: 0x24478d24  addiu       $a3, $v0, -0x72DC
    ctx->pc = 0x366e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937892));
    // 0x366e58: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x366E58u;
    SET_GPR_U32(ctx, 31, 0x366E60u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x366E58u, 0x366E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E60u;
label_366e60:
    // 0x366e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x366E60u;
    {
        const bool branch_taken_0x366e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e60) {
            ctx->pc = 0x366E74u;
            return;
        }
    }
    ctx->pc = 0x366E68u;
    // 0x366e68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x366e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366e6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e70: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x366e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x366e74u;
}
