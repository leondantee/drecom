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

// Function: BTL_pl_screen_check
// Address: 0x186cd0 - 0x186efc
void BTL_pl_screen_check_0x186cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_pl_screen_check_0x186cd0");
#endif

    switch (ctx->pc) {
        case 0x186d08u: goto label_186d08;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d58u: goto label_186d58;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d84u: goto label_186d84;
        case 0x186da8u: goto label_186da8;
        default: break;
    }

    ctx->pc = 0x186cd0u;

    // 0x186cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x186cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x186cd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x186cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x186cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186ce0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x186ce4: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x186ce8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x186ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x186cec: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x186cecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x186cf0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x186cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x186cf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186cf8: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x186cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x186cfc: 0x244600f0  addiu       $a2, $v0, 0xF0
    ctx->pc = 0x186cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x186d00: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x186D00u;
    SET_GPR_U32(ctx, 31, 0x186D08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x186D08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186D08u) { return; }
    ctx->pc = 0x186D08u;
label_186d08:
    // 0x186d08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186d0c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186d10: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x186d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186d14: 0xc040c60  jal         func_103180
    ctx->pc = 0x186D14u;
    SET_GPR_U32(ctx, 31, 0x186D1Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x186D1Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186D1Cu) { return; }
    ctx->pc = 0x186D1Cu;
label_186d1c:
    // 0x186d1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186d20: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x186d24: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186D24u;
    SET_GPR_U32(ctx, 31, 0x186D2Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186D2Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186D2Cu) { return; }
    ctx->pc = 0x186D2Cu;
label_186d2c:
    // 0x186d2c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x186d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186d30: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186d38: 0x0  nop
    ctx->pc = 0x186d38u;
    // NOP
    // 0x186d3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186d40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x186d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186d44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186d48: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x186d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x186d4c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186d50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x186D50u;
    SET_GPR_U32(ctx, 31, 0x186D58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x186D58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186D58u) { return; }
    ctx->pc = 0x186D58u;
label_186d58:
    // 0x186d58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186d5c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186d60: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x186d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186d64: 0xc040c60  jal         func_103180
    ctx->pc = 0x186D64u;
    SET_GPR_U32(ctx, 31, 0x186D6Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x186D6Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186D6Cu) { return; }
    ctx->pc = 0x186D6Cu;
label_186d6c:
    // 0x186d6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186d70: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x186d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x186d74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x186d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x186d78: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x186d7c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x186D7Cu;
    SET_GPR_U32(ctx, 31, 0x186D84u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186D7Cu, 0x186D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D84u;
label_186d84:
    // 0x186d84: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x186d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186d88: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x186d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186d8c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x186d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186d90: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x186d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186d94: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x186d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186d98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x186d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186d9c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x186d9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x186da0: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x186DA0u;
    SET_GPR_U32(ctx, 31, 0x186DA8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x186DA0u, 0x186DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DA8u;
label_186da8:
    // 0x186da8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x186da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x186dac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x186dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x186db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186db4: 0x0  nop
    ctx->pc = 0x186db4u;
    // NOP
    // 0x186db8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x186db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186dbc: 0x0  nop
    ctx->pc = 0x186dbcu;
    // NOP
    // 0x186dc0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x186DC0u;
    {
        const bool branch_taken_0x186dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186dc0) {
            ctx->pc = 0x186E00u;
            goto label_186e00;
        }
    }
    ctx->pc = 0x186DC8u;
    // 0x186dc8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x186dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186dcc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x186dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x186dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186dd4: 0x0  nop
    ctx->pc = 0x186dd4u;
    // NOP
    // 0x186dd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186ddc: 0x0  nop
    ctx->pc = 0x186ddcu;
    // NOP
    // 0x186de0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x186DE0u;
    {
        const bool branch_taken_0x186de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186de0) {
            ctx->pc = 0x186DF4u;
            goto label_186df4;
        }
    }
    ctx->pc = 0x186DE8u;
    // 0x186de8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x186de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186dec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x186DECu;
    {
        const bool branch_taken_0x186dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186dec) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186DF4u;
label_186df4:
    // 0x186df4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x186df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x186df8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x186DF8u;
    {
        const bool branch_taken_0x186df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186df8) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186E00u;
label_186e00:
    // 0x186e00: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x186e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186e04: 0x3c0244e2  lui         $v0, 0x44E2
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17634 << 16));
    // 0x186e08: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x186e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x186e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e10: 0x0  nop
    ctx->pc = 0x186e10u;
    // NOP
    // 0x186e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186e18: 0x0  nop
    ctx->pc = 0x186e18u;
    // NOP
    // 0x186e1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x186E1Cu;
    {
        const bool branch_taken_0x186e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186e1c) {
            ctx->pc = 0x186E30u;
            goto label_186e30;
        }
    }
    ctx->pc = 0x186E24u;
    // 0x186e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186e28: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x186E28u;
    {
        const bool branch_taken_0x186e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e28) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186E30u;
label_186e30:
    // 0x186e30: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x186e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186e34: 0x3c02450e  lui         $v0, 0x450E
    ctx->pc = 0x186e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17678 << 16));
    // 0x186e38: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x186e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x186e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e40: 0x0  nop
    ctx->pc = 0x186e40u;
    // NOP
    // 0x186e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186e48: 0x0  nop
    ctx->pc = 0x186e48u;
    // NOP
    // 0x186e4c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x186E4Cu;
    {
        const bool branch_taken_0x186e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186e4c) {
            ctx->pc = 0x186E60u;
            goto label_186e60;
        }
    }
    ctx->pc = 0x186E54u;
    // 0x186e54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x186e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x186e58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x186E58u;
    {
        const bool branch_taken_0x186e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e58) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186E60u;
label_186e60:
    // 0x186e60: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186e64: 0x90220348  lbu         $v0, 0x348($at)
    ctx->pc = 0x186e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480348u));
    // 0x186e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186e6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x186e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x186e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186E70u;
    {
        const bool branch_taken_0x186e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e70) {
            ctx->pc = 0x186E84u;
            goto label_186e84;
        }
    }
    ctx->pc = 0x186E78u;
    // 0x186e78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x186e78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186e7c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x186E7Cu;
    {
        const bool branch_taken_0x186e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e7c) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186E84u;
label_186e84:
    // 0x186e84: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x186e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186e88: 0x3c024505  lui         $v0, 0x4505
    ctx->pc = 0x186e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17669 << 16));
    // 0x186e8c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x186e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x186e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e94: 0x0  nop
    ctx->pc = 0x186e94u;
    // NOP
    // 0x186e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186e9c: 0x0  nop
    ctx->pc = 0x186e9cu;
    // NOP
    // 0x186ea0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x186EA0u;
    {
        const bool branch_taken_0x186ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186ea0) {
            ctx->pc = 0x186EE0u;
            goto label_186ee0;
        }
    }
    ctx->pc = 0x186EA8u;
    // 0x186ea8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x186ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186eac: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x186eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186eb4: 0x0  nop
    ctx->pc = 0x186eb4u;
    // NOP
    // 0x186eb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186ebc: 0x0  nop
    ctx->pc = 0x186ebcu;
    // NOP
    // 0x186ec0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x186EC0u;
    {
        const bool branch_taken_0x186ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186ec0) {
            ctx->pc = 0x186ED4u;
            goto label_186ed4;
        }
    }
    ctx->pc = 0x186EC8u;
    // 0x186ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x186ECCu;
    {
        const bool branch_taken_0x186ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ecc) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186ED4u;
label_186ed4:
    // 0x186ed4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186ed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186ED8u;
    {
        const bool branch_taken_0x186ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ed8) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186EE0u;
label_186ee0:
    // 0x186ee0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x186ee0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186ee4:
    // 0x186ee4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x186ee4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ef0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x186ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x186EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186EFCu;
}
