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

// Function: Em_pos_fall
// Address: 0x173d50 - 0x173df0
void Em_pos_fall_0x173d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_pos_fall_0x173d50");
#endif

    switch (ctx->pc) {
        case 0x173d74u: goto label_173d74;
        default: break;
    }

    ctx->pc = 0x173d50u;

    // 0x173d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173d54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173d58: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x173d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x173d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x173d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173d60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173d64: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x173d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173d68: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x173d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x173d6c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x173D6Cu;
    SET_GPR_U32(ctx, 31, 0x173D74u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x173D6Cu, 0x173D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D74u;
label_173d74:
    // 0x173d74: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x173d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x173d78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173d7c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x173d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173d84: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x173d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x173d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173d8c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x173d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x173d90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173d94: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x173d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173d98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173d9c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x173d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173da0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173da4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x173da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x173da8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173dac: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x173dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173db0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x173db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173db4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x173db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173db8: 0x0  nop
    ctx->pc = 0x173db8u;
    // NOP
    // 0x173dbc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x173DBCu;
    {
        const bool branch_taken_0x173dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173dbc) {
            ctx->pc = 0x173DDCu;
            goto label_173ddc;
        }
    }
    ctx->pc = 0x173DC4u;
    // 0x173dc4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x173dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x173dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173dcc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x173dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x173dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173dd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173DD4u;
    {
        const bool branch_taken_0x173dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173dd4) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173DDCu;
label_173ddc:
    // 0x173ddc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173ddcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_173de0:
    // 0x173de0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173de0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173de4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x173de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173de8: 0x3e00008  jr          $ra
    ctx->pc = 0x173DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173DF0u;
}
