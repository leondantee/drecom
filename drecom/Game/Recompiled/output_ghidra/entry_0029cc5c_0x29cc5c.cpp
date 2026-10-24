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

// Function: entry_0029cc5c
// Address: 0x29cc5c - 0x29ccb8
void entry_0029cc5c_0x29cc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cc5c_0x29cc5c");
#endif

    switch (ctx->pc) {
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca8u: goto label_29cca8;
        default: break;
    }

    ctx->pc = 0x29cc5cu;

    // 0x29cc5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc60: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29cc64: 0xc040c8c  jal         func_103230
    ctx->pc = 0x29CC64u;
    SET_GPR_U32(ctx, 31, 0x29CC6Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x29CC6Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC6Cu) { return; }
    ctx->pc = 0x29CC6Cu;
label_29cc6c:
    // 0x29cc6c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29cc70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29cc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29cc74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc78: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc7c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29CC7Cu;
    SET_GPR_U32(ctx, 31, 0x29CC84u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29CC84u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC84u) { return; }
    ctx->pc = 0x29CC84u;
label_29cc84:
    // 0x29cc84: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x29cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x29cc88: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cc8c: 0x2445adc0  addiu       $a1, $v0, -0x5240
    ctx->pc = 0x29cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x29cc90: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29cc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc94: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29CC94u;
    SET_GPR_U32(ctx, 31, 0x29CC9Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29CC9Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC9Cu) { return; }
    ctx->pc = 0x29CC9Cu;
label_29cc9c:
    // 0x29cc9c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x29cc9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x29cca0: 0xc056518  jal         func_159460
    ctx->pc = 0x29CCA0u;
    SET_GPR_U32(ctx, 31, 0x29CCA8u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x29CCA0u, 0x29CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCA8u;
label_29cca8:
    // 0x29cca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29cca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ccac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ccb0: 0xc084964  jal         func_212590
    ctx->pc = 0x29CCB0u;
    SET_GPR_U32(ctx, 31, 0x29CCB8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x29CCB0u, 0x29CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCB8u;
}
