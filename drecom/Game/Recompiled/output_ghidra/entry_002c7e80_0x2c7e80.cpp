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

// Function: entry_002c7e80
// Address: 0x2c7e80 - 0x2c80ec
void entry_002c7e80_0x2c7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7e80_0x2c7e80");
#endif

    switch (ctx->pc) {
        case 0x2c7ea8u: goto label_2c7ea8;
        case 0x2c7ec4u: goto label_2c7ec4;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c80d8u: goto label_2c80d8;
        default: break;
    }

    ctx->pc = 0x2c7e80u;

    // 0x2c7e80: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e88: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2c7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2c7e8c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c7e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c7e90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c7e94: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c7e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c7e98: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7e9c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2c7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2c7ea0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C7EA0u;
    SET_GPR_U32(ctx, 31, 0x2C7EA8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C7EA0u, 0x2C7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EA8u;
label_2c7ea8:
    // 0x2c7ea8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2c7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2c7eac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7eb0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7eb4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7eb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7eb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c7ebc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C7EBCu;
    SET_GPR_U32(ctx, 31, 0x2C7EC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C7EBCu, 0x2C7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EC4u;
label_2c7ec4:
    // 0x2c7ec4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ec8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c7ecc: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2c7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ed0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ed4: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x2c7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7edc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2c7edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c7ee0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x2c7ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ee4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c7ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7eec: 0x0  nop
    ctx->pc = 0x2c7eecu;
    // NOP
    // 0x2c7ef0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c7ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7ef4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ef8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f00: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2c7f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2c7f04: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2c7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f08: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f0c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x2c7f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c7f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c7f18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7f1c: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F24u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C7F1Cu, 0x2C7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F24u;
label_2c7f24:
    // 0x2c7f24: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c7f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2c7f28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7f2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7f30: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C7F30u;
    SET_GPR_U32(ctx, 31, 0x2C7F38u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C7F38u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C7F38u) { return; }
    ctx->pc = 0x2C7F38u;
label_2c7f38:
    // 0x2c7f38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7f40: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f44: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f50: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c7f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c7f54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7f5c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2c7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f60: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c7f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c7f70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7f78: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2c7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f7c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f84: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f88: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c7f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c7f8c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c7f94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C7F94u;
    SET_GPR_U32(ctx, 31, 0x2C7F9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C7F94u, 0x2C7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F9Cu;
label_2c7f9c:
    // 0x2c7f9c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fa0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fa4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fa8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c7fac: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2c7facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2c7fb0: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2c7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2c7fb4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2C7FB4u;
    SET_GPR_U32(ctx, 31, 0x2C7FBCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2C7FB4u, 0x2C7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FBCu;
label_2c7fbc:
    // 0x2c7fbc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c7fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7fc4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C7FC4u;
    SET_GPR_U32(ctx, 31, 0x2C7FCCu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C7FC4u, 0x2C7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FCCu;
label_2c7fcc:
    // 0x2c7fcc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fd0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C7FD0u;
    SET_GPR_U32(ctx, 31, 0x2C7FD8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C7FD0u, 0x2C7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FD8u;
label_2c7fd8:
    // 0x2c7fd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7fe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7fe4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c7fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c7fe8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2c7fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7fec: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2c7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2c7ff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7ff4: 0x0  nop
    ctx->pc = 0x2c7ff4u;
    // NOP
    // 0x2c7ff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c7ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7ffc: 0x0  nop
    ctx->pc = 0x2c7ffcu;
    // NOP
    // 0x2c8000: 0x45000101  bc1f        . + 4 + (0x101 << 2)
    ctx->pc = 0x2C8000u;
    {
        const bool branch_taken_0x2c8000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8000) {
            ctx->pc = 0x2C8408u;
            return;
        }
    }
    ctx->pc = 0x2C8008u;
    // 0x2c8008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c800c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8010: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c8010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8014: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8018: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c801c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c801cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8020: 0x24061e09  addiu       $a2, $zero, 0x1E09
    ctx->pc = 0x2c8020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7689));
    // 0x2c8024: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8028: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c802c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C802Cu;
    SET_GPR_U32(ctx, 31, 0x2C8034u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C802Cu, 0x2C8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8034u;
label_2c8034:
    // 0x2c8034: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8038: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c803c: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c803cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c8040: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2c8040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c8044: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c8044u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c8048: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c8048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c804c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8050: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2c8050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2c8054: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c8054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8058: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8058u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c805c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8060: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c8060u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8064: 0x8e1302d0  lw          $s3, 0x2D0($s0)
    ctx->pc = 0x2c8064u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2c8068: 0x8e120130  lw          $s2, 0x130($s0)
    ctx->pc = 0x2c8068u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2c806c: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2c806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8070: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8074: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x2c8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c8078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c807c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8084: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2c8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c8088: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2c8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c808c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8090: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c8090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c8094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c8098: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c809c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c80a0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c80a4: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2c80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80ac: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x2c80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c80b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c80b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c80bc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2c80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2c80c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2c80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80c8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c80c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80cc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2c80ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c80d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C80D0u;
    SET_GPR_U32(ctx, 31, 0x2C80D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C80D0u, 0x2C80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80D8u;
label_2c80d8:
    // 0x2c80d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c80e0: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2c80e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2c80e4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2C80E4u;
    {
        const bool branch_taken_0x2c80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80e4) {
            ctx->pc = 0x2C8408u;
            return;
        }
    }
    ctx->pc = 0x2C80ECu;
}
