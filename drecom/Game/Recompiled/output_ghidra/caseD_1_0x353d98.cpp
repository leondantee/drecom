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

// Function: caseD_1
// Address: 0x353d98 - 0x353fc0
void caseD_1_0x353d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x353d98");
#endif

    switch (ctx->pc) {
        case 0x353ed0u: goto label_353ed0;
        case 0x353ee0u: goto label_353ee0;
        default: break;
    }

    ctx->pc = 0x353d98u;

    // 0x353d98: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353d9c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x353d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353da0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x353da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353da8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x353da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x353dac: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x353dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353db0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x353db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x353db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353db8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x353db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353dbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353dc0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x353dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353dc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353dc8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x353dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x353dcc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x353dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353dd0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x353dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x353dd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353dd8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x353dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353ddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353de0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x353de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353de8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x353de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x353dec: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x353decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353df0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x353df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x353df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353df8: 0x0  nop
    ctx->pc = 0x353df8u;
    // NOP
    // 0x353dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x353dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353e00: 0x0  nop
    ctx->pc = 0x353e00u;
    // NOP
    // 0x353e04: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x353E04u;
    {
        const bool branch_taken_0x353e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353e04) {
            ctx->pc = 0x353FC0u;
            return;
        }
    }
    ctx->pc = 0x353E0Cu;
    // 0x353e0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353e10: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x353e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353e14: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x353e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353e1c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x353e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x353e20: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353e24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x353e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x353e28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353e2c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x353e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353e34: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x353e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353e3c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x353e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x353e40: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353e44: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x353e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x353e48: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x353e48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353e4c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x353e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353e54: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x353e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353e5c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x353e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x353e60: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353e64: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x353e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x353e68: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x353e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x353e6c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x353e6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x353e70: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x353e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x353e74: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x353E74u;
    {
        const bool branch_taken_0x353e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x353e74) {
            ctx->pc = 0x353FC0u;
            return;
        }
    }
    ctx->pc = 0x353E7Cu;
    // 0x353e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353e80: 0x0  nop
    ctx->pc = 0x353e80u;
    // NOP
    // 0x353e84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x353e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x353e88: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x353e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x353e8c: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x353e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x353e90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x353e90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353e94: 0x0  nop
    ctx->pc = 0x353e94u;
    // NOP
    // 0x353e98: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x353e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x353e9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353ea0: 0x0  nop
    ctx->pc = 0x353ea0u;
    // NOP
    // 0x353ea4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x353ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x353ea8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x353ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x353eac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x353eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353eb0: 0x0  nop
    ctx->pc = 0x353eb0u;
    // NOP
    // 0x353eb4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x353eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x353eb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353ebc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x353ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x353ec0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x353ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x353ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x353ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353ec8: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x353EC8u;
    SET_GPR_U32(ctx, 31, 0x353ED0u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x353EC8u, 0x353ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353ED0u;
label_353ed0:
    // 0x353ed0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x353ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353ed4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353ed8: 0xc040c24  jal         func_103090
    ctx->pc = 0x353ED8u;
    SET_GPR_U32(ctx, 31, 0x353EE0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x353EE0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x353EE0u) { return; }
    ctx->pc = 0x353EE0u;
label_353ee0:
    // 0x353ee0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x353ee0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x353ee4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x353ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x353ee8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x353ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x353eec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353ef0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x353ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353ef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353ef8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x353ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x353efc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x353efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x353f00: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x353f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x353f04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x353f04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353f08: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x353f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353f10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x353f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x353f14: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x353f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
    // 0x353f18: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x353f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x353f1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353f20: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x353f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353f24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353f28: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x353f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x353f2c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x353f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x353f30: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x353f30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353f34: 0x0  nop
    ctx->pc = 0x353f34u;
    // NOP
    // 0x353f38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x353f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x353f3c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x353f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353f40: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x353f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353f48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x353f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x353f4c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x353f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353f50: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x353f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353f58: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x353f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x353f5c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x353f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353f60: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x353f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353f68: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x353f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x353f6c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x353f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x353f70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x353f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353f74: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x353f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x353f78: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x353f78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x353f7c: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x353f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x353f80: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x353f80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x353f84: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x353f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x353f88: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x353f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x353f8c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x353f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x353f90: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x353f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x353f94: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x353f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x353f98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x353f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x353f9c: 0x44828800  mtc1        $v0, $f17
    ctx->pc = 0x353f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x353fa0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x353fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x353fa4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353fa8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x353fa8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x353fac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x353facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353fb0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x353fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x353fb4: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x353fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x353fb8: 0xc087200  jal         func_21C800
    ctx->pc = 0x353FB8u;
    SET_GPR_U32(ctx, 31, 0x353FC0u);
    ctx->pc = 0x21C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C800u, 0x353FB8u, 0x353FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FC0u;
}
