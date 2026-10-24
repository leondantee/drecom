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

// Function: entry_002c9d18
// Address: 0x2c9d18 - 0x2c9fdc
void entry_002c9d18_0x2c9d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9d18_0x2c9d18");
#endif

    switch (ctx->pc) {
        case 0x2c9d44u: goto label_2c9d44;
        case 0x2c9d4cu: goto label_2c9d4c;
        case 0x2c9e3cu: goto label_2c9e3c;
        case 0x2c9e8cu: goto label_2c9e8c;
        case 0x2c9ea8u: goto label_2c9ea8;
        case 0x2c9f1cu: goto label_2c9f1c;
        case 0x2c9f34u: goto label_2c9f34;
        case 0x2c9f6cu: goto label_2c9f6c;
        case 0x2c9fa4u: goto label_2c9fa4;
        default: break;
    }

    ctx->pc = 0x2c9d18u;

    // 0x2c9d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9d1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d20: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9d24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c9d30: 0x2406040b  addiu       $a2, $zero, 0x40B
    ctx->pc = 0x2c9d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x2c9d34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c9d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9d38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c9d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c9d3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C9D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C9D3Cu, 0x2C9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D44u;
label_2c9d44:
    // 0x2c9d44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9D44u;
    SET_GPR_U32(ctx, 31, 0x2C9D4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9D44u, 0x2C9D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D4Cu;
label_2c9d4c:
    // 0x2c9d4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9d50: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c9d54: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c9d58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9d5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9d5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9d60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d64: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2c9d64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9d74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c9d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c9d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9d84: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c9d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9d94: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c9d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c9d98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d9c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9da0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c9da4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c9da8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c9da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c9dac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c9db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9db4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9db8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c9db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c9dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9dc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9dc4: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2c9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2c9dc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9dcc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2c9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9dd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9dd4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2c9dd4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9dd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c9dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c9ddc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c9de0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c9de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9de8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9dec: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9decu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9df0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9df4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9df8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9dfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c9e04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e08: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2c9e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9e0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9e10: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2c9e10u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c9e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c9e18: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c9e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c9e1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9e24: 0x0  nop
    ctx->pc = 0x2c9e24u;
    // NOP
    // 0x2c9e28: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c9e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c9e2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c9e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9e30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9e34: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C9E34u;
    SET_GPR_U32(ctx, 31, 0x2C9E3Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C9E3Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C9E3Cu) { return; }
    ctx->pc = 0x2C9E3Cu;
label_2c9e3c:
    // 0x2c9e3c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2c9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2c9e40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e44: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e50: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c9e54: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2c9e58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e5c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e68: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c9e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c9e6c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2c9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2c9e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e80: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c9e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c9e84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9E84u;
    SET_GPR_U32(ctx, 31, 0x2C9E8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9E84u, 0x2C9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E8Cu;
label_2c9e8c:
    // 0x2c9e8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9e90: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c9e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9e98: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2C9E98u;
    {
        const bool branch_taken_0x2c9e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9e98) {
            ctx->pc = 0x2CA084u;
            return;
        }
    }
    ctx->pc = 0x2C9EA0u;
    // 0x2c9ea0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9EA0u;
    SET_GPR_U32(ctx, 31, 0x2C9EA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9EA0u, 0x2C9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EA8u;
label_2c9ea8:
    // 0x2c9ea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9eac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c9eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9eb0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c9eb4: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2c9eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c9eb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9ebc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9ec0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9ec4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9ec8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9ecc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2c9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9ed0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ed4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2c9ed8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c9ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9edc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9ee0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2c9ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2c9ee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c9ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9ee8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c9ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c9eec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9ef0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C9EF0u;
    {
        const bool branch_taken_0x2c9ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ef0) {
            ctx->pc = 0x2CA084u;
            return;
        }
    }
    ctx->pc = 0x2C9EF8u;
    // 0x2c9ef8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2c9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9efc: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2c9efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c9f00: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2c9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c9f04: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2c9f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9f08: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2c9f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c9f0c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2c9f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2c9f10: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2c9f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9f14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9F14u;
    SET_GPR_U32(ctx, 31, 0x2C9F1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9F14u, 0x2C9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F1Cu;
label_2c9f1c:
    // 0x2c9f1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9f24: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C9F24u;
    {
        const bool branch_taken_0x2c9f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f24) {
            ctx->pc = 0x2C9FDCu;
            return;
        }
    }
    ctx->pc = 0x2C9F2Cu;
    // 0x2c9f2c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F34u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9F2Cu, 0x2C9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F34u;
label_2c9f34:
    // 0x2c9f34: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9f38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f3c: 0x0  nop
    ctx->pc = 0x2c9f3cu;
    // NOP
    // 0x2c9f40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9f44: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c9f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f4c: 0x0  nop
    ctx->pc = 0x2c9f4cu;
    // NOP
    // 0x2c9f50: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9f58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f5c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9f60: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c9f64: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9F64u;
    SET_GPR_U32(ctx, 31, 0x2C9F6Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9F64u, 0x2C9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F6Cu;
label_2c9f6c:
    // 0x2c9f6c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f74: 0x0  nop
    ctx->pc = 0x2c9f74u;
    // NOP
    // 0x2c9f78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9f7c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2c9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2c9f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f84: 0x0  nop
    ctx->pc = 0x2c9f84u;
    // NOP
    // 0x2c9f88: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f8c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9f98: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c9f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c9f9c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9F9Cu;
    SET_GPR_U32(ctx, 31, 0x2C9FA4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9F9Cu, 0x2C9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FA4u;
label_2c9fa4:
    // 0x2c9fa4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9fac: 0x0  nop
    ctx->pc = 0x2c9facu;
    // NOP
    // 0x2c9fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9fb4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c9fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9fbc: 0x0  nop
    ctx->pc = 0x2c9fbcu;
    // NOP
    // 0x2c9fc0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9fc4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c9fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9fc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9fcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9fd0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2c9fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2c9fd4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C9FD4u;
    {
        const bool branch_taken_0x2c9fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9fd4) {
            ctx->pc = 0x2CA084u;
            return;
        }
    }
    ctx->pc = 0x2C9FDCu;
}
