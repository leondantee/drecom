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

// Function: oldkey_door_out_to_10e
// Address: 0x27ee20 - 0x27ee9c
void oldkey_door_out_to_10e_0x27ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oldkey_door_out_to_10e_0x27ee20");
#endif

    switch (ctx->pc) {
        case 0x27ee80u: goto label_27ee80;
        case 0x27ee8cu: goto label_27ee8c;
        default: break;
    }

    ctx->pc = 0x27ee20u;

    // 0x27ee20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ee24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27ee28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27ee30: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27ee34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x27ee34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x27ee38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27ee3c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27ee40: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x27ee40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x27ee44: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27ee48: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27ee4c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x27ee4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x27ee50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27ee54: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27ee58: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x27ee58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x27ee5c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x27ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27ee60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27ee64: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27ee68: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x27ee68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x27ee6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ee74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee78: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x27EE78u;
    SET_GPR_U32(ctx, 31, 0x27EE80u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x27EE78u, 0x27EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE80u;
label_27ee80:
    // 0x27ee80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee84: 0xc084964  jal         func_212590
    ctx->pc = 0x27EE84u;
    SET_GPR_U32(ctx, 31, 0x27EE8Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27EE84u, 0x27EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE8Cu;
label_27ee8c:
    // 0x27ee8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27ee8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ee90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EE9Cu;
}
