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

// Function: Em02_floor_rot
// Address: 0x2a8d50 - 0x2a8df8
void Em02_floor_rot_0x2a8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_floor_rot_0x2a8d50");
#endif

    switch (ctx->pc) {
        case 0x2a8d94u: goto label_2a8d94;
        case 0x2a8dc4u: goto label_2a8dc4;
        case 0x2a8ddcu: goto label_2a8ddc;
        default: break;
    }

    ctx->pc = 0x2a8d50u;

    // 0x2a8d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8d54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a8d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a8d58: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2a8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2a8d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d60: 0x0  nop
    ctx->pc = 0x2a8d60u;
    // NOP
    // 0x2a8d64: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8d68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d70: 0x0  nop
    ctx->pc = 0x2a8d70u;
    // NOP
    // 0x2a8d74: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d7c: 0x0  nop
    ctx->pc = 0x2a8d7cu;
    // NOP
    // 0x2a8d80: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a8d84: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2a8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8d88: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2a8d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8d8c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A8D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D94u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A8D8Cu, 0x2A8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D94u;
label_2a8d94:
    // 0x2a8d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8d98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8d9c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2a8d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a8da0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a8da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8da4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8da8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2a8da8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8dac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a8dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8db0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8db4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8db8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2a8db8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a8dbc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2A8DBCu;
    SET_GPR_U32(ctx, 31, 0x2A8DC4u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2A8DBCu, 0x2A8DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DC4u;
label_2a8dc4:
    // 0x2a8dc4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a8dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a8dc8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8dcc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a8dccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8dd0: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x2a8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8dd4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A8DD4u;
    SET_GPR_U32(ctx, 31, 0x2A8DDCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A8DD4u, 0x2A8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DDCu;
label_2a8ddc:
    // 0x2a8ddc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8de0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8de4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2a8de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2a8de8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a8de8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8dec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a8decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a8df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8DF8u;
}
