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

// Function: R118_player_light
// Address: 0x278a20 - 0x278ac8
void R118_player_light_0x278a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R118_player_light_0x278a20");
#endif

    switch (ctx->pc) {
        case 0x278a50u: goto label_278a50;
        case 0x278a80u: goto label_278a80;
        case 0x278a88u: goto label_278a88;
        case 0x278a9cu: goto label_278a9c;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ac0u: goto label_278ac0;
        default: break;
    }

    ctx->pc = 0x278a20u;

    // 0x278a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278a24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x278a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x278a28: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x278a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x278a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x278a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278a30: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x278a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x278a34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x278a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x278a38: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x278a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x278a3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x278a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x278a40: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x278a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x278a44: 0xc42fe5d8  lwc1        $f15, -0x1A28($at)
    ctx->pc = 0x278a44u;
    { uint32_t bits = FAST_READ32(0x38E5D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x278a48: 0xc09e2dc  jal         func_278B70
    ctx->pc = 0x278A48u;
    SET_GPR_U32(ctx, 31, 0x278A50u);
    ctx->pc = 0x278B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B70u, 0x278A48u, 0x278A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A50u;
label_278a50:
    // 0x278a50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278a54: 0xac221a88  sw          $v0, 0x1A88($at)
    ctx->pc = 0x278a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A88u, _value); } while (0);
    // 0x278a58: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x278a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x278a5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x278a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278a60: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x278a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x278a64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x278a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x278a68: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x278a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x278a6c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x278a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x278a70: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x278a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x278a74: 0xc42fe5e0  lwc1        $f15, -0x1A20($at)
    ctx->pc = 0x278a74u;
    { uint32_t bits = FAST_READ32(0x38E5E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x278a78: 0xc09e2dc  jal         func_278B70
    ctx->pc = 0x278A78u;
    SET_GPR_U32(ctx, 31, 0x278A80u);
    ctx->pc = 0x278B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B70u, 0x278A78u, 0x278A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A80u;
label_278a80:
    // 0x278a80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278a84: 0xac221a90  sw          $v0, 0x1A90($at)
    ctx->pc = 0x278a84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A90u, _value); } while (0);
label_278a88:
    // 0x278a88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278a8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278a90: 0x8c241a88  lw          $a0, 0x1A88($at)
    ctx->pc = 0x278a90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621A88u));
    // 0x278a94: 0xc09e2b4  jal         func_278AD0
    ctx->pc = 0x278A94u;
    SET_GPR_U32(ctx, 31, 0x278A9Cu);
    ctx->pc = 0x278AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278AD0u, 0x278A94u, 0x278A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A9Cu;
label_278a9c:
    // 0x278a9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278aa0: 0x8c241a90  lw          $a0, 0x1A90($at)
    ctx->pc = 0x278aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621A90u));
    // 0x278aa4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x278aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x278aa8: 0xc42ce5d0  lwc1        $f12, -0x1A30($at)
    ctx->pc = 0x278aa8u;
    { uint32_t bits = FAST_READ32(0x38E5D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278aac: 0xc09e2b4  jal         func_278AD0
    ctx->pc = 0x278AACu;
    SET_GPR_U32(ctx, 31, 0x278AB4u);
    ctx->pc = 0x278AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278AD0u, 0x278AACu, 0x278AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AB4u;
label_278ab4:
    // 0x278ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x278ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278ab8: 0xc084964  jal         func_212590
    ctx->pc = 0x278AB8u;
    SET_GPR_U32(ctx, 31, 0x278AC0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x278AB8u, 0x278AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AC0u;
label_278ac0:
    // 0x278ac0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x278AC0u;
    {
        const bool branch_taken_0x278ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ac0) {
            ctx->pc = 0x278A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278a88;
        }
    }
    ctx->pc = 0x278AC8u;
}
