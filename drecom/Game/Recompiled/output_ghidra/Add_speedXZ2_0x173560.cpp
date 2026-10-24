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

// Function: Add_speedXZ2
// Address: 0x173560 - 0x1735e0
void Add_speedXZ2_0x173560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add_speedXZ2_0x173560");
#endif

    switch (ctx->pc) {
        case 0x173580u: goto label_173580;
        case 0x173594u: goto label_173594;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735d0u: goto label_1735d0;
        default: break;
    }

    ctx->pc = 0x173560u;

    // 0x173560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x173560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x173564: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173568: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x173568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x17356c: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x17356cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x173570: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173574: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x173574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173578: 0xc067844  jal         func_19E110
    ctx->pc = 0x173578u;
    SET_GPR_U32(ctx, 31, 0x173580u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x173578u, 0x173580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173580u;
label_173580:
    // 0x173580: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x173580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173584: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173588: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x17358c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x17358Cu;
    SET_GPR_U32(ctx, 31, 0x173594u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173594u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173594u) { return; }
    ctx->pc = 0x173594u;
label_173594:
    // 0x173594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173598: 0x0  nop
    ctx->pc = 0x173598u;
    // NOP
    // 0x17359c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17359cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1735a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1735a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1735a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1735a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1735a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1735ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1735ACu;
    SET_GPR_U32(ctx, 31, 0x1735B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1735B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1735B4u) { return; }
    ctx->pc = 0x1735B4u;
label_1735b4:
    // 0x1735b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1735b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1735b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1735bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1735c0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1735c4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1735c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1735c8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1735C8u;
    SET_GPR_U32(ctx, 31, 0x1735D0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1735C8u, 0x1735D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735D0u;
label_1735d0:
    // 0x1735d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1735d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1735d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1735d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1735d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1735D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1735E0u;
}
