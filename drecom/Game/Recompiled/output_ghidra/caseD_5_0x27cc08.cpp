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

// Function: caseD_5
// Address: 0x27cc08 - 0x27cc6c
void caseD_5_0x27cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x27cc08");
#endif

    switch (ctx->pc) {
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc50u: goto label_27cc50;
        default: break;
    }

    ctx->pc = 0x27cc08u;

    // 0x27cc08: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x27cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x27cc0c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cc10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cc14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cc18: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CC18u;
    SET_GPR_U32(ctx, 31, 0x27CC20u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CC18u, 0x27CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC20u;
label_27cc20:
    // 0x27cc20: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x27cc24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cc28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cc2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cc30: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CC30u;
    SET_GPR_U32(ctx, 31, 0x27CC38u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CC30u, 0x27CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC38u;
label_27cc38:
    // 0x27cc38: 0x24040414  addiu       $a0, $zero, 0x414
    ctx->pc = 0x27cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x27cc3c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cc40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cc44: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cc48: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CC48u;
    SET_GPR_U32(ctx, 31, 0x27CC50u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CC48u, 0x27CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27cc54: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27cc58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cc5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27cc60: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cc60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27cc64: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x27CC64u;
    {
        const bool branch_taken_0x27cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc64) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CC6Cu;
}
