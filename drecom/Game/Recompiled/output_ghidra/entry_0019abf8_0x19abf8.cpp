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

// Function: entry_0019abf8
// Address: 0x19abf8 - 0x19ad9c
void entry_0019abf8_0x19abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abf8_0x19abf8");
#endif

    switch (ctx->pc) {
        case 0x19ac44u: goto label_19ac44;
        case 0x19ac68u: goto label_19ac68;
        case 0x19acd0u: goto label_19acd0;
        case 0x19acdcu: goto label_19acdc;
        case 0x19acecu: goto label_19acec;
        case 0x19ad18u: goto label_19ad18;
        case 0x19ad2cu: goto label_19ad2c;
        case 0x19ad40u: goto label_19ad40;
        default: break;
    }

    ctx->pc = 0x19abf8u;

    // 0x19abf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19abf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19abfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac00: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac04: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x19ac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x19ac08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ac08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac10: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac14: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19ac18: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac1c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x19ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac24: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x19ac28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19ac2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19ac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19ac30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x19ac34: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x19ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ac38: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x19ac3c: 0xc05c848  jal         func_172120
    ctx->pc = 0x19AC3Cu;
    SET_GPR_U32(ctx, 31, 0x19AC44u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x19AC3Cu, 0x19AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC44u;
label_19ac44:
    // 0x19ac44: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x19ac44u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x19ac48: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x19ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x19ac4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19ac50: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19ac50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19ac54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac58: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac5c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19ac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19ac60: 0xc058f50  jal         func_163D40
    ctx->pc = 0x19AC60u;
    SET_GPR_U32(ctx, 31, 0x19AC68u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x19AC60u, 0x19AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC68u;
label_19ac68:
    // 0x19ac68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac6c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac70: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19ac70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19ac74: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac78: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x19ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac7c: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x19ac7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x19ac80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19ac84: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x19ac84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ac88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ac88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac90: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x19ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x19ac94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ac94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac9c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19ac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19aca0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x19aca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aca8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acac: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x19acacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x19acb0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acb4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acbc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19acc0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19acc4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19acc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19ACC8u;
    SET_GPR_U32(ctx, 31, 0x19ACD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19ACD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19ACD0u) { return; }
    ctx->pc = 0x19ACD0u;
label_19acd0:
    // 0x19acd0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acd4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19ACD4u;
    SET_GPR_U32(ctx, 31, 0x19ACDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19ACD4u, 0x19ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACDCu;
label_19acdc:
    // 0x19acdc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ace0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ace4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19ACE4u;
    SET_GPR_U32(ctx, 31, 0x19ACECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19ACE4u, 0x19ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACECu;
label_19acec:
    // 0x19acec: 0x3c023d13  lui         $v0, 0x3D13
    ctx->pc = 0x19acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15635 << 16));
    // 0x19acf0: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x19acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x19acf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19acf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19acf8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acfc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x19ad08: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ad0c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x19ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x19ad10: 0xc05c848  jal         func_172120
    ctx->pc = 0x19AD10u;
    SET_GPR_U32(ctx, 31, 0x19AD18u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x19AD10u, 0x19AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD18u;
label_19ad18:
    // 0x19ad18: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ad20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x19ad20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ad24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x19AD24u;
    SET_GPR_U32(ctx, 31, 0x19AD2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19AD24u, 0x19AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD2Cu;
label_19ad2c:
    // 0x19ad2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x19ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x19ad34: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad38: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19AD38u;
    SET_GPR_U32(ctx, 31, 0x19AD40u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19AD38u, 0x19AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD40u;
label_19ad40:
    // 0x19ad40: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad44: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19ad44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19ad48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ad4c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ad50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19ad54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19ad58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19AD58u;
    {
        const bool branch_taken_0x19ad58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad58) {
            ctx->pc = 0x19AD9Cu;
            return;
        }
    }
    ctx->pc = 0x19AD60u;
    // 0x19ad60: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19ad64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad68: 0xac641330  sw          $a0, 0x1330($v1)
    ctx->pc = 0x19ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 4));
    // 0x19ad6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ad70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19ad74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19ad78: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ad7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19ad84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ad8c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ad94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19ad9cu;
}
