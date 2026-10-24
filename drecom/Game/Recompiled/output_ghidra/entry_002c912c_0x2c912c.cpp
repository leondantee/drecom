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

// Function: entry_002c912c
// Address: 0x2c912c - 0x2c9384
void entry_002c912c_0x2c912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c912c_0x2c912c");
#endif

    switch (ctx->pc) {
        case 0x2c918cu: goto label_2c918c;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9368u: goto label_2c9368;
        default: break;
    }

    ctx->pc = 0x2c912cu;

    // 0x2c912c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9130: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c9130u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9134: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c9134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c913c: 0x0  nop
    ctx->pc = 0x2c913cu;
    // NOP
    // 0x2c9140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c9140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9148: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c914c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2c9150: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c9150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c9154: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c9154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c9158: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c915c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9160: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9164: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2c9164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c9168: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c916c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c9170: 0xc44d00d0  lwc1        $f13, 0xD0($v0)
    ctx->pc = 0x2c9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c9174: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c9178: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c9178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c917c: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2c917cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c9180: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2c9180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c9184: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C9184u;
    SET_GPR_U32(ctx, 31, 0x2C918Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C9184u, 0x2C918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C918Cu;
label_2c918c:
    // 0x2c918c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9190: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c9190u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9194: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c9194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c919c: 0x0  nop
    ctx->pc = 0x2c919cu;
    // NOP
    // 0x2c91a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c91a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c91a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c91a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c91a8: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c91ac: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x2c91acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91b0: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x2c91b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c91b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c91b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c91b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c91b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c91bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C91BCu;
    SET_GPR_U32(ctx, 31, 0x2C91C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C91BCu, 0x2C91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91C4u;
label_2c91c4:
    // 0x2c91c4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91c8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2c91c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2c91cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91d0: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x2c91d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c91d4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c91d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c91d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c91dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C91DCu;
    SET_GPR_U32(ctx, 31, 0x2C91E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C91DCu, 0x2C91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91E4u;
label_2c91e4:
    // 0x2c91e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91e8: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2c91e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2c91ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c91f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c91f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C91F4u;
    SET_GPR_U32(ctx, 31, 0x2C91FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C91F4u, 0x2C91FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91FCu;
label_2c91fc:
    // 0x2c91fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2c91fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c9200: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c9200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9204: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2c9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2c9208: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2c9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c920c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9210: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2c9210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2c9214: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9218: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C9218u;
    SET_GPR_U32(ctx, 31, 0x2C9220u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C9218u, 0x2C9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9220u;
label_2c9220:
    // 0x2c9220: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9224: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c9224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c9228: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C9228u;
    SET_GPR_U32(ctx, 31, 0x2C9230u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C9228u, 0x2C9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9230u;
label_2c9230:
    // 0x2c9230: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9234: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C9234u;
    SET_GPR_U32(ctx, 31, 0x2C923Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C9234u, 0x2C923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C923Cu;
label_2c923c:
    // 0x2c923c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c923cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c9240: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c9240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9244: 0x84c7127e  lh          $a3, 0x127E($a2)
    ctx->pc = 0x2c9244u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4734)));
    // 0x2c9248: 0x14e00053  bnez        $a3, . + 4 + (0x53 << 2)
    ctx->pc = 0x2C9248u;
    {
        const bool branch_taken_0x2c9248 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9248) {
            ctx->pc = 0x2C9398u;
            return;
        }
    }
    ctx->pc = 0x2C9250u;
    // 0x2c9250: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x2c9250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9254: 0x8d030130  lw          $v1, 0x130($t0)
    ctx->pc = 0x2c9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x2c9258: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2c9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c925c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2c925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2c9260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9264: 0x0  nop
    ctx->pc = 0x2c9264u;
    // NOP
    // 0x2c9268: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c9268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c926c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c926cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9270: 0x0  nop
    ctx->pc = 0x2c9270u;
    // NOP
    // 0x2c9274: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c9274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c9278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c927c: 0x0  nop
    ctx->pc = 0x2c927cu;
    // NOP
    // 0x2c9280: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c9280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c9284: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c9284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c928c: 0x0  nop
    ctx->pc = 0x2c928cu;
    // NOP
    // 0x2c9290: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c9290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c9294: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c9294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c9298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c929c: 0x0  nop
    ctx->pc = 0x2c929cu;
    // NOP
    // 0x2c92a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2c92a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c92a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c92a8: 0xa7a30064  sh          $v1, 0x64($sp)
    ctx->pc = 0x2c92a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c92ac: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x2c92acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c92b0: 0xa3a00067  sb          $zero, 0x67($sp)
    ctx->pc = 0x2c92b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c92b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c92b8: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2c92b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2c92bc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C92BCu;
    {
        const bool branch_taken_0x2c92bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c92bc) {
            ctx->pc = 0x2C9398u;
            return;
        }
    }
    ctx->pc = 0x2C92C4u;
    // 0x2c92c4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c92c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c92c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c92cc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2C92CCu;
    SET_GPR_U32(ctx, 31, 0x2C92D4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2C92CCu, 0x2C92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92D4u;
label_2c92d4:
    // 0x2c92d4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C92D4u;
    {
        const bool branch_taken_0x2c92d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92d4) {
            ctx->pc = 0x2C9398u;
            return;
        }
    }
    ctx->pc = 0x2C92DCu;
    // 0x2c92dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2c92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2c92e0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x2c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x2c92e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c92e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c92e8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C92E8u;
    SET_GPR_U32(ctx, 31, 0x2C92F0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C92E8u, 0x2C92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x2c92f4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x2c92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x2c92f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C92F8u;
    SET_GPR_U32(ctx, 31, 0x2C9300u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C92F8u, 0x2C9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9300u;
label_2c9300:
    // 0x2c9300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9304: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9308: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2c9308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c930c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9310: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9314: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c9318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c931c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c931cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c9320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9324: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9328: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c932c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c932cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9330: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9334: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c9338: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c9338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c933c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2c933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c9340: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c9340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9344: 0xc0c4c10  jal         func_313040
    ctx->pc = 0x2C9344u;
    SET_GPR_U32(ctx, 31, 0x2C934Cu);
    ctx->pc = 0x313040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313040u, 0x2C9344u, 0x2C934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C934Cu;
label_2c934c:
    // 0x2c934c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9350: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c9354: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9358: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2c9358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2c935c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9360: 0xc0c4c10  jal         func_313040
    ctx->pc = 0x2C9360u;
    SET_GPR_U32(ctx, 31, 0x2C9368u);
    ctx->pc = 0x313040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313040u, 0x2C9360u, 0x2C9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9368u;
label_2c9368:
    // 0x2c9368: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c936c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9370: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2c9370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c9374: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2c9374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c9378: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c9378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c937c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c937cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c9380: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x2c9380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2c9384u;
}
