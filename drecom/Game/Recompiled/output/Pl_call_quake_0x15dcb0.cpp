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

// Function: Pl_call_quake
// Address: 0x15dcb0 - 0x15dd28
void Pl_call_quake_0x15dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_call_quake_0x15dcb0");
#endif

    switch (ctx->pc) {
        case 0x15dcd4u: goto label_15dcd4;
        case 0x15dcf0u: goto label_15dcf0;
        case 0x15dd00u: goto label_15dd00;
        case 0x15dd14u: goto label_15dd14;
        default: break;
    }

    ctx->pc = 0x15dcb0u;

    // 0x15dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dcb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15dcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15dcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15dcbc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15dcc0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15dcc4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15dcc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15dcc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15dcc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dccc: 0xc0bc448  jal         func_2F1120
    ctx->pc = 0x15DCCCu;
    SET_GPR_U32(ctx, 31, 0x15DCD4u);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x15DCCCu, 0x15DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCD4u;
label_15dcd4:
    // 0x15dcd4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x15dcd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15dcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15dcdc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15dcdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dce0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15dce0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dce4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15dce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15dce8: 0xc0561d4  jal         func_158750
    ctx->pc = 0x15DCE8u;
    SET_GPR_U32(ctx, 31, 0x15DCF0u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x15DCE8u, 0x15DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCF0u;
label_15dcf0:
    // 0x15dcf0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x15dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x15dcf4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x15dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x15dcf8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15DCF8u;
    SET_GPR_U32(ctx, 31, 0x15DD00u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15DCF8u, 0x15DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD00u;
label_15dd00:
    // 0x15dd00: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x15dd04: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x15dd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x15dd08: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x15dd0c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15DD0Cu;
    SET_GPR_U32(ctx, 31, 0x15DD14u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15DD0Cu, 0x15DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD14u;
label_15dd14:
    // 0x15dd14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15dd14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dd18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dd1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15dd1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15dd20: 0x3e00008  jr          $ra
    ctx->pc = 0x15DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DD28u;
}
