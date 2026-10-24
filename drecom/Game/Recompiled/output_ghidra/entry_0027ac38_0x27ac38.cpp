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

// Function: entry_0027ac38
// Address: 0x27ac38 - 0x27acb0
void entry_0027ac38_0x27ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ac38_0x27ac38");
#endif

    switch (ctx->pc) {
        case 0x27ac50u: goto label_27ac50;
        case 0x27ac68u: goto label_27ac68;
        case 0x27ac74u: goto label_27ac74;
        case 0x27ac8cu: goto label_27ac8c;
        case 0x27aca4u: goto label_27aca4;
        default: break;
    }

    ctx->pc = 0x27ac38u;

    // 0x27ac38: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac3c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x27ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27ac40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac44: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac48: 0xc04f560  jal         func_13D580
    ctx->pc = 0x27AC48u;
    SET_GPR_U32(ctx, 31, 0x27AC50u);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x27AC48u, 0x27AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC50u;
label_27ac50:
    // 0x27ac50: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac54: 0x92050062  lbu         $a1, 0x62($s0)
    ctx->pc = 0x27ac54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac5c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac60: 0xc04f588  jal         func_13D620
    ctx->pc = 0x27AC60u;
    SET_GPR_U32(ctx, 31, 0x27AC68u);
    ctx->pc = 0x13D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D620u, 0x27AC60u, 0x27AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC68u;
label_27ac68:
    // 0x27ac68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ac6c: 0xc084964  jal         func_212590
    ctx->pc = 0x27AC6Cu;
    SET_GPR_U32(ctx, 31, 0x27AC74u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AC6Cu, 0x27AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC74u;
label_27ac74:
    // 0x27ac74: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac78: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x27ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27ac7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac80: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac84: 0xc04f560  jal         func_13D580
    ctx->pc = 0x27AC84u;
    SET_GPR_U32(ctx, 31, 0x27AC8Cu);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x27AC84u, 0x27AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC8Cu;
label_27ac8c:
    // 0x27ac8c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac90: 0x92050062  lbu         $a1, 0x62($s0)
    ctx->pc = 0x27ac90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac98: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac9c: 0xc04f588  jal         func_13D620
    ctx->pc = 0x27AC9Cu;
    SET_GPR_U32(ctx, 31, 0x27ACA4u);
    ctx->pc = 0x13D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D620u, 0x27AC9Cu, 0x27ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACA4u;
label_27aca4:
    // 0x27aca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aca8: 0xc084964  jal         func_212590
    ctx->pc = 0x27ACA8u;
    SET_GPR_U32(ctx, 31, 0x27ACB0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27ACA8u, 0x27ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACB0u;
}
