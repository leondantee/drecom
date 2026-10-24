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

// Function: Em0b_R1_mv16
// Address: 0x1f4df0 - 0x1f536c
void Em0b_R1_mv16_0x1f4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv16_0x1f4df0");
#endif

    switch (ctx->pc) {
        case 0x1f4e60u: goto label_1f4e60;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4ee8u: goto label_1f4ee8;
        case 0x1f4f90u: goto label_1f4f90;
        case 0x1f4fc4u: goto label_1f4fc4;
        case 0x1f4ff0u: goto label_1f4ff0;
        case 0x1f5044u: goto label_1f5044;
        case 0x1f5060u: goto label_1f5060;
        case 0x1f50c4u: goto label_1f50c4;
        case 0x1f52a0u: goto label_1f52a0;
        case 0x1f52b0u: goto label_1f52b0;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52f4u: goto label_1f52f4;
        default: break;
    }

    ctx->pc = 0x1f4df0u;

    // 0x1f4df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f4df4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1f4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f4df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4dfc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1f4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1f4e00: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f4e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f4e04: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x1f4e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1f4e08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4e0c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f4e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f4e10: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f4e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f4e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4e18: 0x1083007f  beq         $a0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1F4E18u;
    {
        const bool branch_taken_0x1f4e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4e18) {
            ctx->pc = 0x1F5018u;
            goto label_1f5018;
        }
    }
    ctx->pc = 0x1F4E20u;
    // 0x1f4e20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4E20u;
    {
        const bool branch_taken_0x1f4e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e20) {
            ctx->pc = 0x1F4E30u;
            goto label_1f4e30;
        }
    }
    ctx->pc = 0x1F4E28u;
    // 0x1f4e28: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x1F4E28u;
    {
        const bool branch_taken_0x1f4e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e28) {
            ctx->pc = 0x1F5358u;
            goto label_1f5358;
        }
    }
    ctx->pc = 0x1F4E30u;
label_1f4e30:
    // 0x1f4e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4e34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4e38: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f4e38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4e3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4e40: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f4e44: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f4e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f4e48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4e4c: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f4e50: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f4e54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f4e54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4e58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F4E58u;
    SET_GPR_U32(ctx, 31, 0x1F4E60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F4E58u, 0x1F4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E60u;
label_1f4e60:
    // 0x1f4e60: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1f4e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4e68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4e6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4e70: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1f4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4e74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f4e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f4e78: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x1f4e78u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f4e80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f4e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f4e84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4e88: 0x0  nop
    ctx->pc = 0x1f4e88u;
    // NOP
    // 0x1f4e8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f4e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f4e90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4e94: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1f4e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4e98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f4e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f4e9c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x1f4e9cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4ea0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f4ea4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f4ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f4ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4eb0: 0x0  nop
    ctx->pc = 0x1f4eb0u;
    // NOP
    // 0x1f4eb4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f4eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f4eb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ebc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ec0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f4ec4: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x1f4ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f4ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4ecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f4eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f4ed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F4ED0u;
    SET_GPR_U32(ctx, 31, 0x1F4ED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F4ED0u, 0x1F4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4ED8u;
label_1f4ed8:
    // 0x1f4ed8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f4ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4edc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f4edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4ee0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F4EE0u;
    SET_GPR_U32(ctx, 31, 0x1F4EE8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F4EE8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F4EE8u) { return; }
    ctx->pc = 0x1F4EE8u;
label_1f4ee8:
    // 0x1f4ee8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f4eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4ef0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ef4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4ef8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f4ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1f4efc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4f04: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f4f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4f08: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1f4f08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1f4f0c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f4f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f4f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f4f14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4f1c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f4f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f4f20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4f28: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f4f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4f2c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1f4f2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1f4f30: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4f34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f4f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f4f38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4f40: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f4f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1f4f44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f48: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4f4c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f4f50: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f4f54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f4f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f4f58: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f4f5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f60: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4f64: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f4f68: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f4f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f4f6c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f4f70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4f74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f78: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f4f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f4f7c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f4f80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4f84: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f4f84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4f88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4F88u;
    SET_GPR_U32(ctx, 31, 0x1F4F90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4F88u, 0x1F4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F90u;
label_1f4f90:
    // 0x1f4f90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f4f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4f94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f4f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f4f98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4F98u;
    {
        const bool branch_taken_0x1f4f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f98) {
            ctx->pc = 0x1F4FCCu;
            goto label_1f4fcc;
        }
    }
    ctx->pc = 0x1F4FA0u;
    // 0x1f4fa0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f4fa4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f4fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f4fa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4fac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4fb0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1f4fb4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f4fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f4fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f4fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4fbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F4FBCu;
    SET_GPR_U32(ctx, 31, 0x1F4FC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F4FBCu, 0x1F4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FC4u;
label_1f4fc4:
    // 0x1f4fc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F4FC4u;
    {
        const bool branch_taken_0x1f4fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4fc4) {
            ctx->pc = 0x1F4FF0u;
            goto label_1f4ff0;
        }
    }
    ctx->pc = 0x1F4FCCu;
label_1f4fcc:
    // 0x1f4fcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4fd0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f4fd4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f4fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f4fd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4fdc: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1f4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f4fe0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f4fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f4fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f4fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4fe8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F4FE8u;
    SET_GPR_U32(ctx, 31, 0x1F4FF0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F4FE8u, 0x1F4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FF0u;
label_1f4ff0:
    // 0x1f4ff0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ff4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f4ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f4ff8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ffc: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1f4ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5004: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5008: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1f5008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1f500c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f500cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5010: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5014: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f5014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1f5018:
    // 0x1f5018: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f5018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f501c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5020: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1f5020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x1f5024: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1f5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x1f5028: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f5028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f502c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5030: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f5030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5034: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f5034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f5038: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f5038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f503c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F503Cu;
    SET_GPR_U32(ctx, 31, 0x1F5044u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F503Cu, 0x1F5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5044u;
label_1f5044:
    // 0x1f5044: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f5044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1f5048: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f504c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5050: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f5050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5054: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f5054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5058: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F5058u;
    SET_GPR_U32(ctx, 31, 0x1F5060u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F5058u, 0x1F5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5060u;
label_1f5060:
    // 0x1f5060: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5064: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f5064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f5068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f506c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1f506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5070: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5074: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x1f5074u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5078: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f507c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f507cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f5080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5084: 0x0  nop
    ctx->pc = 0x1f5084u;
    // NOP
    // 0x1f5088: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f5088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f508c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5090: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1f5090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5094: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5098: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x1f5098u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f509c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f509cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f50a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f50a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f50a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f50a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f50a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f50ac: 0x0  nop
    ctx->pc = 0x1f50acu;
    // NOP
    // 0x1f50b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f50b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f50b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f50b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f50b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f50bc: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F50BCu;
    SET_GPR_U32(ctx, 31, 0x1F50C4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F50C4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F50C4u) { return; }
    ctx->pc = 0x1F50C4u;
label_1f50c4:
    // 0x1f50c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f50c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f50cc: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f50ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f50d0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1f50d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1f50d4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f50d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f50d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f50d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f50dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f50e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f50e4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f50e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f50e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f50ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f50f0: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f50f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f50f4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1f50f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1f50f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f50f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f50fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f50fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5100: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5104: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5108: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f5108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1f510c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5110: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1f5110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1f5114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5118: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x1f5118u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f511c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5120: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x1f5120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x1f5124: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f5124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f5128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f512c: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x1f512cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1f5130: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5130u;
    {
        const bool branch_taken_0x1f5130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5130) {
            ctx->pc = 0x1F5158u;
            goto label_1f5158;
        }
    }
    ctx->pc = 0x1F5138u;
    // 0x1f5138: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f513c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5140: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x1f5140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5144: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1f5144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1f5148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f514c: 0x0  nop
    ctx->pc = 0x1f514cu;
    // NOP
    // 0x1f5150: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5154: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f5154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_1f5158:
    // 0x1f5158: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f515c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5160: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5164: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5168: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f5168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f516c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f516cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5170: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f5170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f5174: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5178: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f517c: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x1f517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5184: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1f5184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5188: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f518c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1f518cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1f5190: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5194: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f519c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f51a0: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x1f51a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f51a4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f51a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f51a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f51a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f51ac: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f51acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f51b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f51b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f51b4: 0x0  nop
    ctx->pc = 0x1f51b4u;
    // NOP
    // 0x1f51b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f51b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f51bc: 0x0  nop
    ctx->pc = 0x1f51bcu;
    // NOP
    // 0x1f51c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1F51C0u;
    {
        const bool branch_taken_0x1f51c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f51c0) {
            ctx->pc = 0x1F520Cu;
            goto label_1f520c;
        }
    }
    ctx->pc = 0x1F51C8u;
    // 0x1f51c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f51cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f51d0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1f51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1f51d4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1f51d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x1f51d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f51d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f51dc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f51e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f51e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f51e4: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f51e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1f51e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f51ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f51f0: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1f51f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f51f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f51f8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1f51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f51fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f51fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5200: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f5200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f5204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5204u;
    {
        const bool branch_taken_0x1f5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5204) {
            ctx->pc = 0x1F522Cu;
            goto label_1f522c;
        }
    }
    ctx->pc = 0x1F520Cu;
label_1f520c:
    // 0x1f520c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5210: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5214: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1f5218: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f5218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f521c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f521cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5220: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f5220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5224: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f5224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5228: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f5228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_1f522c:
    // 0x1f522c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5230: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5238: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f523c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x1f523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5240: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5244: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f5244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f5248: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f524c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f524cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5250: 0x0  nop
    ctx->pc = 0x1f5250u;
    // NOP
    // 0x1f5254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5258: 0x0  nop
    ctx->pc = 0x1f5258u;
    // NOP
    // 0x1f525c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F525Cu;
    {
        const bool branch_taken_0x1f525c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f525c) {
            ctx->pc = 0x1F52A0u;
            goto label_1f52a0;
        }
    }
    ctx->pc = 0x1F5264u;
    // 0x1f5264: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5268: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f5268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f526c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F526Cu;
    {
        const bool branch_taken_0x1f526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f526c) {
            ctx->pc = 0x1F52A0u;
            goto label_1f52a0;
        }
    }
    ctx->pc = 0x1F5274u;
    // 0x1f5274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f527c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f527cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5284: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5288: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f5288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f528c: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1f528cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1f5290: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5294: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f5298: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F5298u;
    SET_GPR_U32(ctx, 31, 0x1F52A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F5298u, 0x1F52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52A0u;
label_1f52a0:
    // 0x1f52a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f52a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F52A8u;
    SET_GPR_U32(ctx, 31, 0x1F52B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F52A8u, 0x1F52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52B0u;
label_1f52b0:
    // 0x1f52b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F52B4u;
    SET_GPR_U32(ctx, 31, 0x1F52BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F52B4u, 0x1F52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52BCu;
label_1f52bc:
    // 0x1f52bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1f52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52c0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1f52c4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f52c8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1f52c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f52cc: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F52CCu;
    {
        const bool branch_taken_0x1f52cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f52cc) {
            ctx->pc = 0x1F5358u;
            goto label_1f5358;
        }
    }
    ctx->pc = 0x1F52D4u;
    // 0x1f52d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52d8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f52dc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f52e0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1f52e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f52e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f52e8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f52ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F52ECu;
    SET_GPR_U32(ctx, 31, 0x1F52F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F52ECu, 0x1F52F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52F4u;
label_1f52f4:
    // 0x1f52f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f52f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f52f8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f52fc: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f5300: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f5300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f5304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f5304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f5308: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f530c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f530cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f5310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5318: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f5318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f531c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5320: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5324: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f5324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5328: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f532c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f532cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5334: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f5334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5338: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f533c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f533cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f5340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5344: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5348: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f534c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f534cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5354: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f5358:
    // 0x1f5358: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1f5358u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f535c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f535cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5360: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f5364: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F536Cu;
}
