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

// Function: entry_001b7db4
// Address: 0x1b7db4 - 0x1b7e8c
void entry_001b7db4_0x1b7db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7db4_0x1b7db4");
#endif

    switch (ctx->pc) {
        case 0x1b7dd8u: goto label_1b7dd8;
        case 0x1b7decu: goto label_1b7dec;
        case 0x1b7e08u: goto label_1b7e08;
        case 0x1b7e24u: goto label_1b7e24;
        default: break;
    }

    ctx->pc = 0x1b7db4u;

    // 0x1b7db4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7db8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7dbc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7dc0: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b7dc4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b7dc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b7dc8: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1b7dcc: 0xc4cc1b50  lwc1        $f12, 0x1B50($a2)
    ctx->pc = 0x1b7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7dd0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B7DD0u;
    SET_GPR_U32(ctx, 31, 0x1B7DD8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7DD8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7DD8u) { return; }
    ctx->pc = 0x1B7DD8u;
label_1b7dd8:
    // 0x1b7dd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b7dd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7ddc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7de0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b7de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1b7de4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B7DE4u;
    SET_GPR_U32(ctx, 31, 0x1B7DECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B7DE4u, 0x1B7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DECu;
label_1b7dec:
    // 0x1b7dec: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b7decu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7df4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7df8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7dfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b7e00: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B7E00u;
    SET_GPR_U32(ctx, 31, 0x1B7E08u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B7E00u, 0x1B7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E08u;
label_1b7e08:
    // 0x1b7e08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e10: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1b7e14: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b7e14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b7e18: 0x24a512c0  addiu       $a1, $a1, 0x12C0
    ctx->pc = 0x1b7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
    // 0x1b7e1c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E24u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B7E1Cu, 0x1B7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E24u;
label_1b7e24:
    // 0x1b7e24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b7e28: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e2c: 0xc4c11284  lwc1        $f1, 0x1284($a2)
    ctx->pc = 0x1b7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e30: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e34: 0xc4e00124  lwc1        $f0, 0x124($a3)
    ctx->pc = 0x1b7e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7e3c: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x1b7e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    // 0x1b7e40: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7e40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e44: 0xc5011280  lwc1        $f1, 0x1280($t0)
    ctx->pc = 0x1b7e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e4c: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b7e54: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b7e58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e5c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7e68: 0x0  nop
    ctx->pc = 0x1b7e68u;
    // NOP
    // 0x1b7e6c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7E6Cu;
    {
        const bool branch_taken_0x1b7e6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7e6c) {
            ctx->pc = 0x1B7E8Cu;
            return;
        }
    }
    ctx->pc = 0x1B7E74u;
    // 0x1b7e74: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e7c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b7e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1b7e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7e84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7e88: 0xaca31b60  sw          $v1, 0x1B60($a1)
    ctx->pc = 0x1b7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1b7e8cu;
}
