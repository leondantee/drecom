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

// Function: Em0a_R1_catch_throw
// Address: 0x3661d0 - 0x366354
void Em0a_R1_catch_throw_0x3661d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_catch_throw_0x3661d0");
#endif

    switch (ctx->pc) {
        case 0x366250u: goto label_366250;
        case 0x366270u: goto label_366270;
        case 0x366284u: goto label_366284;
        case 0x366298u: goto label_366298;
        case 0x3662a8u: goto label_3662a8;
        case 0x3662c0u: goto label_3662c0;
        case 0x3662f4u: goto label_3662f4;
        default: break;
    }

    ctx->pc = 0x3661d0u;

    // 0x3661d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3661d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3661d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3661d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3661d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3661d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3661dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3661dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3661e0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x3661e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x3661e4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3661e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3661e8: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x3661e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x3661ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3661ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3661f0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x3661f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3661f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3661f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3661f8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x3661f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x3661fc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3661fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x366200: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x366200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x366204: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x366204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x366208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36620c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36620cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366210: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x366210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366218: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x366218u;
    {
        const bool branch_taken_0x366218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366218) {
            ctx->pc = 0x366260u;
            goto label_366260;
        }
    }
    ctx->pc = 0x366220u;
    // 0x366220: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366220u;
    {
        const bool branch_taken_0x366220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366220) {
            ctx->pc = 0x366230u;
            goto label_366230;
        }
    }
    ctx->pc = 0x366228u;
    // 0x366228: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x366228u;
    {
        const bool branch_taken_0x366228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366228) {
            ctx->pc = 0x36633Cu;
            goto label_36633c;
        }
    }
    ctx->pc = 0x366230u;
label_366230:
    // 0x366230: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366234: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366238: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36623c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x36623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x366240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366244: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366248: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366248u;
    SET_GPR_U32(ctx, 31, 0x366250u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366248u, 0x366250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366250u;
label_366250:
    // 0x366250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366254: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36625c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36625cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366260:
    // 0x366260: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366268: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366268u;
    SET_GPR_U32(ctx, 31, 0x366270u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366268u, 0x366270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366270u;
label_366270:
    // 0x366270: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366274: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366278: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36627c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36627Cu;
    SET_GPR_U32(ctx, 31, 0x366284u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36627Cu, 0x366284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366284u;
label_366284:
    // 0x366284: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366288: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36628c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36628cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366290: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366290u;
    SET_GPR_U32(ctx, 31, 0x366298u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366298u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366298u) { return; }
    ctx->pc = 0x366298u;
label_366298:
    // 0x366298: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36629c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3662a0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3662A0u;
    SET_GPR_U32(ctx, 31, 0x3662A8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3662A0u, 0x3662A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662A8u;
label_3662a8:
    // 0x3662a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3662a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3662ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3662acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3662b0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x3662b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3662b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3662b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3662b8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3662B8u;
    SET_GPR_U32(ctx, 31, 0x3662C0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3662B8u, 0x3662C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662C0u;
label_3662c0:
    // 0x3662c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3662c4: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x3662c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3662c8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3662c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3662cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3662ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3662d0: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x3662d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x3662d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3662d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3662d8: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x3662d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3662dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3662dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3662e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3662e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3662e4: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x3662e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x3662e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3662e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3662ec: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3662ECu;
    SET_GPR_U32(ctx, 31, 0x3662F4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3662ECu, 0x3662F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662F4u;
label_3662f4:
    // 0x3662f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3662f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3662f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3662f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3662fc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3662FCu;
    {
        const bool branch_taken_0x3662fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3662fc) {
            ctx->pc = 0x36633Cu;
            goto label_36633c;
        }
    }
    ctx->pc = 0x366304u;
    // 0x366304: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366308: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x366308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x36630c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366310: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366314: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36631c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366320: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366328: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36632c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366330: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x366334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366338: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36633c:
    // 0x36633c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36633cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x366340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366348: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x366348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36634c: 0x3e00008  jr          $ra
    ctx->pc = 0x36634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366354u;
}
