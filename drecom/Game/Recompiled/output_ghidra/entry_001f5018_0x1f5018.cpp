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

// Function: entry_001f5018
// Address: 0x1f5018 - 0x1f5158
void entry_001f5018_0x1f5018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5018_0x1f5018");
#endif

    switch (ctx->pc) {
        case 0x1f5044u: goto label_1f5044;
        case 0x1f5060u: goto label_1f5060;
        case 0x1f50c4u: goto label_1f50c4;
        default: break;
    }

    ctx->pc = 0x1f5018u;

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
            return;
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
    ctx->pc = 0x1f5158u;
}
