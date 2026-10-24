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

// Function: caseD_2
// Address: 0x249d3c - 0x249e90
void caseD_2_0x249d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x249d3c");
#endif

    switch (ctx->pc) {
        case 0x249d48u: goto label_249d48;
        case 0x249d70u: goto label_249d70;
        case 0x249d90u: goto label_249d90;
        case 0x249da8u: goto label_249da8;
        case 0x249dd8u: goto label_249dd8;
        case 0x249df0u: goto label_249df0;
        case 0x249e1cu: goto label_249e1c;
        default: break;
    }

    ctx->pc = 0x249d3cu;

    // 0x249d3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249d40: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x249D40u;
    SET_GPR_U32(ctx, 31, 0x249D48u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249D48u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249D48u) { return; }
    ctx->pc = 0x249D48u;
label_249d48:
    // 0x249d48: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x249d48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249d4c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249d50: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x249d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249d54: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x249d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
    // 0x249d58: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x249d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x249d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249d60: 0x0  nop
    ctx->pc = 0x249d60u;
    // NOP
    // 0x249d64: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x249d64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x249d68: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x249D68u;
    SET_GPR_U32(ctx, 31, 0x249D70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249D68u, 0x249D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D70u;
label_249d70:
    // 0x249d70: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249d74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x249d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x249d78: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249d7c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249d80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249d84: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x249d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249d88: 0xc040ce4  jal         func_103390
    ctx->pc = 0x249D88u;
    SET_GPR_U32(ctx, 31, 0x249D90u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x249D90u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249D90u) { return; }
    ctx->pc = 0x249D90u;
label_249d90:
    // 0x249d90: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249d94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249d98: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249d9c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x249d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249da0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x249DA0u;
    SET_GPR_U32(ctx, 31, 0x249DA8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x249DA8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249DA8u) { return; }
    ctx->pc = 0x249DA8u;
label_249da8:
    // 0x249da8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249dac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249db0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x249db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x249db4: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x249db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249db8: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x249db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x249dbc: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x249dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x249dc0: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x249dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x249dc4: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x249dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x249dc8: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x249dcc: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x249dd0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x249DD0u;
    SET_GPR_U32(ctx, 31, 0x249DD8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x249DD0u, 0x249DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DD8u;
label_249dd8:
    // 0x249dd8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249ddc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x249ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249de0: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249de4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x249de4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249de8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x249DE8u;
    SET_GPR_U32(ctx, 31, 0x249DF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249DE8u, 0x249DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DF0u;
label_249df0:
    // 0x249df0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249df4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x249df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x249df8: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249dfc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e00: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x249e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x249e04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e08: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x249e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249e0c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x249e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249e10: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x249e10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249e14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x249E14u;
    SET_GPR_U32(ctx, 31, 0x249E1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249E14u, 0x249E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E1Cu;
label_249e1c:
    // 0x249e1c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e20: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x249e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x249e24: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e28: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x249e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249e2c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x249e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x249e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249e34: 0x0  nop
    ctx->pc = 0x249e34u;
    // NOP
    // 0x249e38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249e3c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x249e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x249e40: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e44: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x249e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249e48: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e4c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x249e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249e50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x249e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x249e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249e58: 0x0  nop
    ctx->pc = 0x249e58u;
    // NOP
    // 0x249e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249e60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x249e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249e64: 0x0  nop
    ctx->pc = 0x249e64u;
    // NOP
    // 0x249e68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x249E68u;
    {
        const bool branch_taken_0x249e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249e68) {
            ctx->pc = 0x249E90u;
            return;
        }
    }
    ctx->pc = 0x249E70u;
    // 0x249e70: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e74: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x249e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249e78: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x249e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249e80: 0x0  nop
    ctx->pc = 0x249e80u;
    // NOP
    // 0x249e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249e88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249e8c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x249e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x249e90u;
}
