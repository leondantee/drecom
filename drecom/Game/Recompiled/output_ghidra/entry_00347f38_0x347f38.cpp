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

// Function: entry_00347f38
// Address: 0x347f38 - 0x34815c
void entry_00347f38_0x347f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347f38_0x347f38");
#endif

    switch (ctx->pc) {
        case 0x347f48u: goto label_347f48;
        case 0x347f74u: goto label_347f74;
        case 0x347f80u: goto label_347f80;
        case 0x347fd4u: goto label_347fd4;
        case 0x347ff8u: goto label_347ff8;
        case 0x348018u: goto label_348018;
        case 0x34803cu: goto label_34803c;
        default: break;
    }

    ctx->pc = 0x347f38u;

    // 0x347f38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x347f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x347f40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x347F40u;
    SET_GPR_U32(ctx, 31, 0x347F48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x347F40u, 0x347F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F48u;
label_347f48:
    // 0x347f48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f4c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x347f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x347f50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x347f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x347f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x347f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x347f58: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x347f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x347f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x347f60: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x347f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x347f64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347f6c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x347F6Cu;
    SET_GPR_U32(ctx, 31, 0x347F74u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x347F6Cu, 0x347F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F74u;
label_347f74:
    // 0x347f74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f78: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x347F78u;
    SET_GPR_U32(ctx, 31, 0x347F80u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x347F78u, 0x347F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F80u;
label_347f80:
    // 0x347f80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f84: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x347f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x347f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x347f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x347f8c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x347f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x347f90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f94: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x347f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x347f98: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x347f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x347f9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x347f9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x347fa0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x347fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x347fa4: 0x1483006d  bne         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x347FA4u;
    {
        const bool branch_taken_0x347fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x347fa4) {
            ctx->pc = 0x34815Cu;
            return;
        }
    }
    ctx->pc = 0x347FACu;
    // 0x347fac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fb0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x347fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x347fb4: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x347fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x347fb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fbc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x347fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x347fc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347fc4: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x347fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x347fc8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x347fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x347fcc: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x347FCCu;
    SET_GPR_U32(ctx, 31, 0x347FD4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x347FCCu, 0x347FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FD4u;
label_347fd4:
    // 0x347fd4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x347fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x347fd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fdc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x347fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347fe0: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x347fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347fe4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x347fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347fe8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x347fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347fec: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x347fecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x347ff0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x347FF0u;
    SET_GPR_U32(ctx, 31, 0x347FF8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x347FF0u, 0x347FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FF8u;
label_347ff8:
    // 0x347ff8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x347ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x347ffc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348000: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x348000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348004: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x348004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348008: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x348008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x34800c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x34800cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x348010: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x348010u;
    SET_GPR_U32(ctx, 31, 0x348018u);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x348010u, 0x348018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348018u;
label_348018:
    // 0x348018: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x348018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34801c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x34801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348020: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x348020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348024: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x348024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348028: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x348028u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34802c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x34802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348030: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x348030u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x348034: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x348034u;
    SET_GPR_U32(ctx, 31, 0x34803Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x348034u, 0x34803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34803Cu;
label_34803c:
    // 0x34803c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x34803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348044: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x348044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348048: 0x247039d0  addiu       $s0, $v1, 0x39D0
    ctx->pc = 0x348048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
    // 0x34804c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348054: 0x0  nop
    ctx->pc = 0x348054u;
    // NOP
    // 0x348058: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x348058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34805c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348064: 0x0  nop
    ctx->pc = 0x348064u;
    // NOP
    // 0x348068: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x348068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34806c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348074: 0x0  nop
    ctx->pc = 0x348074u;
    // NOP
    // 0x348078: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x348078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34807c: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x34807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x348080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348084: 0x0  nop
    ctx->pc = 0x348084u;
    // NOP
    // 0x348088: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x348088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34808c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34808cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x348090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348094: 0x0  nop
    ctx->pc = 0x348094u;
    // NOP
    // 0x348098: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x348098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34809c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34809cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480a0: 0x0  nop
    ctx->pc = 0x3480a0u;
    // NOP
    // 0x3480a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3480a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3480a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3480a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3480ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3480acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480b0: 0x0  nop
    ctx->pc = 0x3480b0u;
    // NOP
    // 0x3480b4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3480b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x3480b8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3480b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3480bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3480bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3480c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3480c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480c4: 0x0  nop
    ctx->pc = 0x3480c4u;
    // NOP
    // 0x3480c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3480c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3480cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3480ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480d0: 0x0  nop
    ctx->pc = 0x3480d0u;
    // NOP
    // 0x3480d4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3480d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3480d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3480d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480dc: 0x0  nop
    ctx->pc = 0x3480dcu;
    // NOP
    // 0x3480e0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3480e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x3480e4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3480e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3480e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3480e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3480ec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3480ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3480f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3480f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3480f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3480f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3480f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3480f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3480fc: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x3480fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x348100: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x348100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x348104: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x348104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x348108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34810c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348110: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x348110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x348114: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x348114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x348118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34811c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348120: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x348120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x348124: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x348128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34812c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348130: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x348130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x348134: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348138: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34813c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34813cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348140: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x348140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x348144: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348148: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x348148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x34814c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x348150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348154: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348158: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x348158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x34815cu;
}
