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

// Function: View_control
// Address: 0x1885b0 - 0x188924
void View_control_0x1885b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("View_control_0x1885b0");
#endif

    switch (ctx->pc) {
        case 0x1888fcu: goto label_1888fc;
        case 0x18890cu: goto label_18890c;
        default: break;
    }

    ctx->pc = 0x1885b0u;

    // 0x1885b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1885b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1885b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1885b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1885b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1885b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1885bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1885bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1885c0: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x1885c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1885c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1885c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1885c8: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1885c8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1885cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1885ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1885d0: 0x8c310af8  lw          $s1, 0xAF8($at)
    ctx->pc = 0x1885d0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x1885d4: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1885d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1885d8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1885d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1885dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1885dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1885e0: 0x0  nop
    ctx->pc = 0x1885e0u;
    // NOP
    // 0x1885e4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1885E4u;
    {
        const bool branch_taken_0x1885e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1885e4) {
            ctx->pc = 0x188634u;
            goto label_188634;
        }
    }
    ctx->pc = 0x1885ECu;
    // 0x1885ec: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1885ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1885f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1885f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1885f4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1885f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1885f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1885f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1885fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1885fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x188600: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x188600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
    // 0x188604: 0xc6210180  lwc1        $f1, 0x180($s1)
    ctx->pc = 0x188604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188608: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18860c: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x18860cu;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188610: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x188610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188614: 0x0  nop
    ctx->pc = 0x188614u;
    // NOP
    // 0x188618: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x188618u;
    {
        const bool branch_taken_0x188618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188618) {
            ctx->pc = 0x18862Cu;
            goto label_18862c;
        }
    }
    ctx->pc = 0x188620u;
    // 0x188620: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x188620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188624: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x188628: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x188628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
label_18862c:
    // 0x18862c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188630: 0xa38380b4  sb          $v1, -0x7F4C($gp)
    ctx->pc = 0x188630u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 3));
label_188634:
    // 0x188634: 0x938380b4  lbu         $v1, -0x7F4C($gp)
    ctx->pc = 0x188634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x188638: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x188638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18863c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188640: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x188640u;
    {
        const bool branch_taken_0x188640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188640) {
            ctx->pc = 0x1886F0u;
            goto label_1886f0;
        }
    }
    ctx->pc = 0x188648u;
    // 0x188648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188648u;
    {
        const bool branch_taken_0x188648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188648) {
            ctx->pc = 0x188658u;
            goto label_188658;
        }
    }
    ctx->pc = 0x188650u;
    // 0x188650: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x188650u;
    {
        const bool branch_taken_0x188650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188650) {
            ctx->pc = 0x18890Cu;
            goto label_18890c;
        }
    }
    ctx->pc = 0x188658u;
label_188658:
    // 0x188658: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x188658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18865c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x18865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188660: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188664: 0x0  nop
    ctx->pc = 0x188664u;
    // NOP
    // 0x188668: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x188668u;
    {
        const bool branch_taken_0x188668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188668) {
            ctx->pc = 0x1886E4u;
            goto label_1886e4;
        }
    }
    ctx->pc = 0x188670u;
    // 0x188670: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x188670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188674: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x188678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18867c: 0x0  nop
    ctx->pc = 0x18867cu;
    // NOP
    // 0x188680: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x188680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188684: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x188684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18868c: 0x0  nop
    ctx->pc = 0x18868cu;
    // NOP
    // 0x188690: 0x4501009e  bc1t        . + 4 + (0x9E << 2)
    ctx->pc = 0x188690u;
    {
        const bool branch_taken_0x188690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188690) {
            ctx->pc = 0x18890Cu;
            goto label_18890c;
        }
    }
    ctx->pc = 0x188698u;
    // 0x188698: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x18869c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18869cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1886a0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1886a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1886a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1886a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1886a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886ac: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1886acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
    // 0x1886b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886b4: 0xc4216da0  lwc1        $f1, 0x6DA0($at)
    ctx->pc = 0x1886b4u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1886b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1886bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1886bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1886c0: 0x0  nop
    ctx->pc = 0x1886c0u;
    // NOP
    // 0x1886c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1886c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1886c8: 0x0  nop
    ctx->pc = 0x1886c8u;
    // NOP
    // 0x1886cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1886CCu;
    {
        const bool branch_taken_0x1886cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1886cc) {
            ctx->pc = 0x1886E4u;
            goto label_1886e4;
        }
    }
    ctx->pc = 0x1886D4u;
    // 0x1886d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1886d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1886d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1886dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886e0: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1886e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
label_1886e4:
    // 0x1886e4: 0x938380b4  lbu         $v1, -0x7F4C($gp)
    ctx->pc = 0x1886e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x1886e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1886ec: 0xa38380b4  sb          $v1, -0x7F4C($gp)
    ctx->pc = 0x1886ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 3));
label_1886f0:
    // 0x1886f0: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1886f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1886f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886f8: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1886f8u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1886fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1886fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188700: 0x0  nop
    ctx->pc = 0x188700u;
    // NOP
    // 0x188704: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x188704u;
    {
        const bool branch_taken_0x188704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188704) {
            ctx->pc = 0x1887B8u;
            goto label_1887b8;
        }
    }
    ctx->pc = 0x18870Cu;
    // 0x18870c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188710: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x188714: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x188714u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188718: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x188718u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18871c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x18871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x188720: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x188720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x188724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188728: 0x0  nop
    ctx->pc = 0x188728u;
    // NOP
    // 0x18872c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18872cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188730: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x188730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x188734: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188738: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18873c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18873cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188740: 0x0  nop
    ctx->pc = 0x188740u;
    // NOP
    // 0x188744: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188748: 0x0  nop
    ctx->pc = 0x188748u;
    // NOP
    // 0x18874c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18874Cu;
    {
        const bool branch_taken_0x18874c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18874c) {
            ctx->pc = 0x188764u;
            goto label_188764;
        }
    }
    ctx->pc = 0x188754u;
    // 0x188754: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18875c: 0x0  nop
    ctx->pc = 0x18875cu;
    // NOP
    // 0x188760: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x188760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_188764:
    // 0x188764: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188768: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x18876c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x18876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x188770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188774: 0x0  nop
    ctx->pc = 0x188774u;
    // NOP
    // 0x188778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18877c: 0x0  nop
    ctx->pc = 0x18877cu;
    // NOP
    // 0x188780: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188780u;
    {
        const bool branch_taken_0x188780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188780) {
            ctx->pc = 0x1887A0u;
            goto label_1887a0;
        }
    }
    ctx->pc = 0x188788u;
    // 0x188788: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18878c: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x18878cu;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188790: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x188790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x188794: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x188794u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    // 0x188798: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x188798u;
    {
        const bool branch_taken_0x188798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188798) {
            ctx->pc = 0x18885Cu;
            goto label_18885c;
        }
    }
    ctx->pc = 0x1887A0u;
label_1887a0:
    // 0x1887a0: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1887a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887a4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1887a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1887a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1887a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1887ac: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1887acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1887b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1887B0u;
    {
        const bool branch_taken_0x1887b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887b0) {
            ctx->pc = 0x18885Cu;
            goto label_18885c;
        }
    }
    ctx->pc = 0x1887B8u;
label_1887b8:
    // 0x1887b8: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1887b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1887c0: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1887c0u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1887c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1887c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1887c8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1887c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1887cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1887ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1887d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1887d4: 0x0  nop
    ctx->pc = 0x1887d4u;
    // NOP
    // 0x1887d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1887d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1887dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1887dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1887e0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1887e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1887e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1887ec: 0x0  nop
    ctx->pc = 0x1887ecu;
    // NOP
    // 0x1887f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1887f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1887f4: 0x0  nop
    ctx->pc = 0x1887f4u;
    // NOP
    // 0x1887f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1887F8u;
    {
        const bool branch_taken_0x1887f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1887f8) {
            ctx->pc = 0x188810u;
            goto label_188810;
        }
    }
    ctx->pc = 0x188800u;
    // 0x188800: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188808: 0x0  nop
    ctx->pc = 0x188808u;
    // NOP
    // 0x18880c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x18880cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_188810:
    // 0x188810: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188814: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x188818: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x188818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x18881c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18881cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188820: 0x0  nop
    ctx->pc = 0x188820u;
    // NOP
    // 0x188824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188828: 0x0  nop
    ctx->pc = 0x188828u;
    // NOP
    // 0x18882c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18882Cu;
    {
        const bool branch_taken_0x18882c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18882c) {
            ctx->pc = 0x18884Cu;
            goto label_18884c;
        }
    }
    ctx->pc = 0x188834u;
    // 0x188834: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x188838: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x188838u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18883c: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x18883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x188840: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x188840u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    // 0x188844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x188844u;
    {
        const bool branch_taken_0x188844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188844) {
            ctx->pc = 0x18885Cu;
            goto label_18885c;
        }
    }
    ctx->pc = 0x18884Cu;
label_18884c:
    // 0x18884c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188850: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x188850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188854: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x188854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188858: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x188858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_18885c:
    // 0x18885c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x18885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188860: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x188860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x188864: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x188864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x188868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18886c: 0x0  nop
    ctx->pc = 0x18886cu;
    // NOP
    // 0x188870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188874: 0x0  nop
    ctx->pc = 0x188874u;
    // NOP
    // 0x188878: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x188878u;
    {
        const bool branch_taken_0x188878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188878) {
            ctx->pc = 0x18890Cu;
            goto label_18890c;
        }
    }
    ctx->pc = 0x188880u;
    // 0x188880: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188884: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x188884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x188888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18888c: 0x0  nop
    ctx->pc = 0x18888cu;
    // NOP
    // 0x188890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188894: 0x0  nop
    ctx->pc = 0x188894u;
    // NOP
    // 0x188898: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x188898u;
    {
        const bool branch_taken_0x188898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188898) {
            ctx->pc = 0x1888B0u;
            goto label_1888b0;
        }
    }
    ctx->pc = 0x1888A0u;
    // 0x1888a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1888a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1888a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1888a8: 0x0  nop
    ctx->pc = 0x1888a8u;
    // NOP
    // 0x1888ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1888acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1888b0:
    // 0x1888b0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1888b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1888b4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1888b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1888b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1888bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1888bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1888c0: 0x0  nop
    ctx->pc = 0x1888c0u;
    // NOP
    // 0x1888c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1888c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1888c8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1888c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1888cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1888ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1888d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1888d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1888d4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1888d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1888d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1888d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1888dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1888dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1888e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1888e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1888e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1888e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1888e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1888e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1888ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1888f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1888f4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x1888F4u;
    SET_GPR_U32(ctx, 31, 0x1888FCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x1888FCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1888FCu) { return; }
    ctx->pc = 0x1888FCu;
label_1888fc:
    // 0x1888fc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1888fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188904: 0xc055698  jal         func_155A60
    ctx->pc = 0x188904u;
    SET_GPR_U32(ctx, 31, 0x18890Cu);
    ctx->pc = 0x155A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A60u, 0x188904u, 0x18890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18890Cu;
label_18890c:
    // 0x18890c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x18890cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188918: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x188918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18891c: 0x3e00008  jr          $ra
    ctx->pc = 0x18891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18891Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188924u;
}
