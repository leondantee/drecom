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

// Function: entry_001f4e30
// Address: 0x1f4e30 - 0x1f4fcc
void entry_001f4e30_0x1f4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4e30_0x1f4e30");
#endif

    switch (ctx->pc) {
        case 0x1f4e60u: goto label_1f4e60;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4ee8u: goto label_1f4ee8;
        case 0x1f4f90u: goto label_1f4f90;
        case 0x1f4fc4u: goto label_1f4fc4;
        default: break;
    }

    ctx->pc = 0x1f4e30u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1F4FCCu;
}
