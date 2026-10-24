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

// Function: Camera_battle_zoom
// Address: 0x188f80 - 0x18918c
void Camera_battle_zoom_0x188f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_battle_zoom_0x188f80");
#endif

    switch (ctx->pc) {
        case 0x188fecu: goto label_188fec;
        case 0x18904cu: goto label_18904c;
        case 0x1890b8u: goto label_1890b8;
        case 0x1890f8u: goto label_1890f8;
        case 0x189160u: goto label_189160;
        case 0x189170u: goto label_189170;
        default: break;
    }

    ctx->pc = 0x188f80u;

    // 0x188f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188f84: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x188f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x188f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188f94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188f98: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x188f98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x188f9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188fa0: 0x8c310af8  lw          $s1, 0xAF8($at)
    ctx->pc = 0x188fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x188fa4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x188fa8: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x188fac: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x188facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x188fb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x188fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x188fb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188fb8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188FB8u;
    {
        const bool branch_taken_0x188fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188fb8) {
            ctx->pc = 0x188FCCu;
            goto label_188fcc;
        }
    }
    ctx->pc = 0x188FC0u;
    // 0x188fc0: 0x8e4313e8  lw          $v1, 0x13E8($s2)
    ctx->pc = 0x188fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5096)));
    // 0x188fc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188FC4u;
    {
        const bool branch_taken_0x188fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188fc4) {
            ctx->pc = 0x188FE0u;
            goto label_188fe0;
        }
    }
    ctx->pc = 0x188FCCu;
label_188fcc:
    // 0x188fcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188fd0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x188fd4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x188fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x188fd8: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x188FD8u;
    {
        const bool branch_taken_0x188fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fd8) {
            ctx->pc = 0x189170u;
            goto label_189170;
        }
    }
    ctx->pc = 0x188FE0u;
label_188fe0:
    // 0x188fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188fe4: 0xc0556d0  jal         func_155B40
    ctx->pc = 0x188FE4u;
    SET_GPR_U32(ctx, 31, 0x188FECu);
    ctx->pc = 0x155B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B40u, 0x188FE4u, 0x188FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FECu;
label_188fec:
    // 0x188fec: 0x938280ac  lbu         $v0, -0x7F54($gp)
    ctx->pc = 0x188fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x188ff0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x188ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188ff8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188FF8u;
    {
        const bool branch_taken_0x188ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188ff8) {
            ctx->pc = 0x18900Cu;
            goto label_18900c;
        }
    }
    ctx->pc = 0x189000u;
    // 0x189000: 0x8e4213e8  lw          $v0, 0x13E8($s2)
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5096)));
    // 0x189004: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x189004u;
    {
        const bool branch_taken_0x189004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189004) {
            ctx->pc = 0x189084u;
            goto label_189084;
        }
    }
    ctx->pc = 0x18900Cu;
label_18900c:
    // 0x18900c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189010: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x189010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x189014: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x189014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x189018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18901c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18901Cu;
    {
        const bool branch_taken_0x18901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18901c) {
            ctx->pc = 0x189040u;
            goto label_189040;
        }
    }
    ctx->pc = 0x189024u;
    // 0x189024: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x189024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189028: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x189028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x18902c: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x18902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189030: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x189034: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x189034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
    // 0x189038: 0xa38080b0  sb          $zero, -0x7F50($gp)
    ctx->pc = 0x189038u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934704), (uint8_t)GPR_U32(ctx, 0));
    // 0x18903c: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x18903cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
label_189040:
    // 0x189040: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x189040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x189044: 0xc06216c  jal         func_1885B0
    ctx->pc = 0x189044u;
    SET_GPR_U32(ctx, 31, 0x18904Cu);
    ctx->pc = 0x1885B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1885B0u, 0x189044u, 0x18904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18904Cu;
label_18904c:
    // 0x18904c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189050: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x189050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189054: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189058: 0x0  nop
    ctx->pc = 0x189058u;
    // NOP
    // 0x18905c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x18905Cu;
    {
        const bool branch_taken_0x18905c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18905c) {
            ctx->pc = 0x1890F8u;
            goto label_1890f8;
        }
    }
    ctx->pc = 0x189064u;
    // 0x189064: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189068: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x189068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18906c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x189070: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189078: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x189078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x18907c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18907Cu;
    {
        const bool branch_taken_0x18907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18907c) {
            ctx->pc = 0x1890F8u;
            goto label_1890f8;
        }
    }
    ctx->pc = 0x189084u;
label_189084:
    // 0x189084: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189088: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x189088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18908c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x189090: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x189090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189094: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189098: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x189098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x18909c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1890a0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1890a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1890a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1890a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1890a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1890a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1890ac: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1890acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1890b0: 0xc0622c0  jal         func_188B00
    ctx->pc = 0x1890B0u;
    SET_GPR_U32(ctx, 31, 0x1890B8u);
    ctx->pc = 0x188B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188B00u, 0x1890B0u, 0x1890B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890B8u;
label_1890b8:
    // 0x1890b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1890b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1890bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1890c0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1890c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1890c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1890c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1890c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1890cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1890CCu;
    {
        const bool branch_taken_0x1890cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890cc) {
            ctx->pc = 0x1890ECu;
            goto label_1890ec;
        }
    }
    ctx->pc = 0x1890D4u;
    // 0x1890d4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1890d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1890d8: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1890d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1890dc: 0xa38080b0  sb          $zero, -0x7F50($gp)
    ctx->pc = 0x1890dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934704), (uint8_t)GPR_U32(ctx, 0));
    // 0x1890e0: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x1890e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    // 0x1890e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1890E4u;
    {
        const bool branch_taken_0x1890e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890e4) {
            ctx->pc = 0x1890F8u;
            goto label_1890f8;
        }
    }
    ctx->pc = 0x1890ECu;
label_1890ec:
    // 0x1890ec: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1890ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1890f0: 0xc06216c  jal         func_1885B0
    ctx->pc = 0x1890F0u;
    SET_GPR_U32(ctx, 31, 0x1890F8u);
    ctx->pc = 0x1885B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1885B0u, 0x1890F0u, 0x1890F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890F8u;
label_1890f8:
    // 0x1890f8: 0xc6210180  lwc1        $f1, 0x180($s1)
    ctx->pc = 0x1890f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1890fc: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1890fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189100: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189104: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x189104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x189108: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x189108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x18910c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189110: 0x0  nop
    ctx->pc = 0x189110u;
    // NOP
    // 0x189114: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x189114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x189118: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x189118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x18911c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x18911cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189120: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x189120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x189124: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x189128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18912c: 0x0  nop
    ctx->pc = 0x18912cu;
    // NOP
    // 0x189130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189134: 0x0  nop
    ctx->pc = 0x189134u;
    // NOP
    // 0x189138: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189138u;
    {
        const bool branch_taken_0x189138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189138) {
            ctx->pc = 0x189154u;
            goto label_189154;
        }
    }
    ctx->pc = 0x189140u;
    // 0x189140: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x189144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x189148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18914c: 0x0  nop
    ctx->pc = 0x18914cu;
    // NOP
    // 0x189150: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x189150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_189154:
    // 0x189154: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x189154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x189158: 0xc056518  jal         func_159460
    ctx->pc = 0x189158u;
    SET_GPR_U32(ctx, 31, 0x189160u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x189158u, 0x189160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189160u;
label_189160:
    // 0x189160: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x189160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x189164: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x189164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x189168: 0xc056718  jal         func_159C60
    ctx->pc = 0x189168u;
    SET_GPR_U32(ctx, 31, 0x189170u);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x189168u, 0x189170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189170u;
label_189170:
    // 0x189170: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x189170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18917c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18917cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189180: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x189180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x189184: 0x3e00008  jr          $ra
    ctx->pc = 0x189184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18918Cu;
}
