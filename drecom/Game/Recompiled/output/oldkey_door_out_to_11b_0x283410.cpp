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

// Function: oldkey_door_out_to_11b
// Address: 0x283410 - 0x28348c
void oldkey_door_out_to_11b_0x283410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oldkey_door_out_to_11b_0x283410");
#endif

    switch (ctx->pc) {
        case 0x283470u: goto label_283470;
        case 0x28347cu: goto label_28347c;
        default: break;
    }

    ctx->pc = 0x283410u;

    // 0x283410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283414: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x283414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x283418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x283418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28341c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x283420: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x283420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x283424: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x283424u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x283428: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x283428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x28342c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x28342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x283430: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x283430u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x283434: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x283434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x283438: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x28343c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x28343cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x283440: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x283440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x283444: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x283444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x283448: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x283448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x28344c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x28344cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x283450: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x283450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x283454: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x283454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x283458: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x283458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x28345c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283460: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x283460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283468: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x283468u;
    SET_GPR_U32(ctx, 31, 0x283470u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x283468u, 0x283470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283470u;
label_283470:
    // 0x283470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283474: 0xc084964  jal         func_212590
    ctx->pc = 0x283474u;
    SET_GPR_U32(ctx, 31, 0x28347Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x283474u, 0x28347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28347Cu;
label_28347c:
    // 0x28347c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x28347cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283480: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x283480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x283484: 0x3e00008  jr          $ra
    ctx->pc = 0x283484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28348Cu;
}
