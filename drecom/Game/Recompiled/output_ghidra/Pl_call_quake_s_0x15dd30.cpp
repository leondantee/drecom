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

// Function: Pl_call_quake_s
// Address: 0x15dd30 - 0x15dda8
void Pl_call_quake_s_0x15dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_call_quake_s_0x15dd30");
#endif

    switch (ctx->pc) {
        case 0x15dd54u: goto label_15dd54;
        case 0x15dd70u: goto label_15dd70;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd94u: goto label_15dd94;
        default: break;
    }

    ctx->pc = 0x15dd30u;

    // 0x15dd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dd34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15dd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15dd3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15dd40: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15dd40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15dd44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15dd44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15dd48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15dd48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dd4c: 0xc0bc650  jal         func_2F1940
    ctx->pc = 0x15DD4Cu;
    SET_GPR_U32(ctx, 31, 0x15DD54u);
    ctx->pc = 0x2F1940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1940u, 0x15DD4Cu, 0x15DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD54u;
label_15dd54:
    // 0x15dd54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15dd58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15dd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15dd5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15dd5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dd60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15dd60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dd64: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15dd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15dd68: 0xc0561d4  jal         func_158750
    ctx->pc = 0x15DD68u;
    SET_GPR_U32(ctx, 31, 0x15DD70u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x15DD68u, 0x15DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD70u;
label_15dd70:
    // 0x15dd70: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x15dd74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x15dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x15dd78: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15DD78u;
    SET_GPR_U32(ctx, 31, 0x15DD80u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15DD78u, 0x15DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD80u;
label_15dd80:
    // 0x15dd80: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x15dd84: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x15dd84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x15dd88: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x15dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x15dd8c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15DD8Cu;
    SET_GPR_U32(ctx, 31, 0x15DD94u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15DD8Cu, 0x15DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD94u;
label_15dd94:
    // 0x15dd94: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15dd94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dd98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dd9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15dda0: 0x3e00008  jr          $ra
    ctx->pc = 0x15DDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DDA8u;
}
