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

// Function: entry_002102f8
// Address: 0x2102f8 - 0x21051c
void entry_002102f8_0x2102f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002102f8_0x2102f8");
#endif

    switch (ctx->pc) {
        case 0x2103a0u: goto label_2103a0;
        case 0x2103e8u: goto label_2103e8;
        case 0x210464u: goto label_210464;
        case 0x2104c0u: goto label_2104c0;
        case 0x210518u: goto label_210518;
        default: break;
    }

    ctx->pc = 0x2102f8u;

    // 0x2102f8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2102fc: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210300: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x210300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x210304: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210304u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210308: 0x28650226  slti        $a1, $v1, 0x226
    ctx->pc = 0x210308u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)550) ? 1 : 0);
    // 0x21030c: 0x14a00083  bnez        $a1, . + 4 + (0x83 << 2)
    ctx->pc = 0x21030Cu;
    {
        const bool branch_taken_0x21030c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21030c) {
            ctx->pc = 0x21051Cu;
            return;
        }
    }
    ctx->pc = 0x210314u;
    // 0x210314: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210318: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x210318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x21031c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x21031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x210320: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210320u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210324: 0x28610245  slti        $at, $v1, 0x245
    ctx->pc = 0x210324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
    // 0x210328: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x210328u;
    {
        const bool branch_taken_0x210328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210328) {
            ctx->pc = 0x21051Cu;
            return;
        }
    }
    ctx->pc = 0x210330u;
    // 0x210330: 0x8fb70528  lw          $s7, 0x528($sp)
    ctx->pc = 0x210330u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210334: 0x86e71278  lh          $a3, 0x1278($s7)
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4728)));
    // 0x210338: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x210338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x21033c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x21033cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x210340: 0x310b0003  andi        $t3, $t0, 0x3
    ctx->pc = 0x210340u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x210344: 0x15600075  bnez        $t3, . + 4 + (0x75 << 2)
    ctx->pc = 0x210344u;
    {
        const bool branch_taken_0x210344 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x210344) {
            ctx->pc = 0x21051Cu;
            return;
        }
    }
    ctx->pc = 0x21034Cu;
    // 0x21034c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x21034cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x210350: 0x252aa500  addiu       $t2, $t1, -0x5B00
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944000));
    // 0x210354: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x210354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x210358: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x210358u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A500u));
    // 0x21035c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21035cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x210360: 0x3c06c5c8  lui         $a2, 0xC5C8
    ctx->pc = 0x210360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50632 << 16));
    // 0x210364: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x210364u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210368: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21036c: 0xe420a300  swc1        $f0, -0x5D00($at)
    ctx->pc = 0x21036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A300u, _value); } while (0); }
    // 0x210370: 0x3c0946c1  lui         $t1, 0x46C1
    ctx->pc = 0x210370u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)18113 << 16));
    // 0x210374: 0x352a5c00  ori         $t2, $t1, 0x5C00
    ctx->pc = 0x210374u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23552);
    // 0x210378: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x210378u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21037c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x210380: 0xe420a304  swc1        $f0, -0x5CFC($at)
    ctx->pc = 0x210380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A304u, _value); } while (0); }
    // 0x210384: 0x3c0ac615  lui         $t2, 0xC615
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50709 << 16));
    // 0x210388: 0x35433800  ori         $v1, $t2, 0x3800
    ctx->pc = 0x210388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)14336);
    // 0x21038c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21038cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210390: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x210394: 0xe420a308  swc1        $f0, -0x5CF8($at)
    ctx->pc = 0x210394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A308u, _value); } while (0); }
    // 0x210398: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210398u;
    SET_GPR_U32(ctx, 31, 0x2103A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210398u, 0x2103A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103A0u;
label_2103a0:
    // 0x2103a0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2103a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2103a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2103a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2103a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2103ac: 0x0  nop
    ctx->pc = 0x2103acu;
    // NOP
    // 0x2103b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2103b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2103b4: 0x3c04c59c  lui         $a0, 0xC59C
    ctx->pc = 0x2103b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50588 << 16));
    // 0x2103b8: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x2103b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2103bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2103bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2103c0: 0x0  nop
    ctx->pc = 0x2103c0u;
    // NOP
    // 0x2103c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2103c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2103c8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2103c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2103cc: 0xe420a310  swc1        $f0, -0x5CF0($at)
    ctx->pc = 0x2103ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A310u, _value); } while (0); }
    // 0x2103d0: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2103d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2103d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2103d8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2103d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2103dc: 0xe420a314  swc1        $f0, -0x5CEC($at)
    ctx->pc = 0x2103dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A314u, _value); } while (0); }
    // 0x2103e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2103E0u;
    SET_GPR_U32(ctx, 31, 0x2103E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2103E0u, 0x2103E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103E8u;
label_2103e8:
    // 0x2103e8: 0x3c1044bb  lui         $s0, 0x44BB
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17595 << 16));
    // 0x2103ec: 0x361e8000  ori         $fp, $s0, 0x8000
    ctx->pc = 0x2103ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x2103f0: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x2103f0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2103f4: 0x0  nop
    ctx->pc = 0x2103f4u;
    // NOP
    // 0x2103f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2103f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2103fc: 0x3c0545bb  lui         $a1, 0x45BB
    ctx->pc = 0x2103fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17851 << 16));
    // 0x210400: 0x34a78000  ori         $a3, $a1, 0x8000
    ctx->pc = 0x210400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x210404: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x210404u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210408: 0x0  nop
    ctx->pc = 0x210408u;
    // NOP
    // 0x21040c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21040cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x210410: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x210414: 0xe420a318  swc1        $f0, -0x5CE8($at)
    ctx->pc = 0x210414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A318u, _value); } while (0); }
    // 0x210418: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x210418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x21041c: 0x3c04442f  lui         $a0, 0x442F
    ctx->pc = 0x21041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17455 << 16));
    // 0x210420: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x210420u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210424: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x210428: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x210428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21042c: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x210430: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x210430u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x210434: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x210438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21043c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x210440: 0x2466a300  addiu       $a2, $v1, -0x5D00
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
    // 0x210444: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210444u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210448: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x210448u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21044c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x210450: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x210450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x210454: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x210458: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210458u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21045c: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x21045Cu;
    SET_GPR_U32(ctx, 31, 0x210464u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x21045Cu, 0x210464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210464u;
label_210464:
    // 0x210464: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210464u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210468: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
    // 0x21046c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x21046cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210470: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x210474: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x210474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x210478: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21047c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x21047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x210480: 0x3c064310  lui         $a2, 0x4310
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17168 << 16));
    // 0x210484: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x210484u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x210488: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21048c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21048cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210490: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x210490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x210494: 0x24e9a300  addiu       $t1, $a3, -0x5D00
    ctx->pc = 0x210494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943488));
    // 0x210498: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x210498u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x21049c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21049cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2104a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2104a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2104a4: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x2104a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x2104a8: 0x254ba310  addiu       $t3, $t2, -0x5CF0
    ctx->pc = 0x2104a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x2104ac: 0x71604e28  paddub      $t1, $t3, $zero
    ctx->pc = 0x2104acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2104b0: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2104b4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2104b4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2104b8: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2104B8u;
    SET_GPR_U32(ctx, 31, 0x2104C0u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2104B8u, 0x2104C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104C0u;
label_2104c0:
    // 0x2104c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2104c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2104c4: 0x3c094411  lui         $t1, 0x4411
    ctx->pc = 0x2104c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17425 << 16));
    // 0x2104c8: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x2104c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2104cc: 0x3c0a435c  lui         $t2, 0x435C
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17244 << 16));
    // 0x2104d0: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x2104d0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2104d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2104d8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2104d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2104dc: 0x3c05435c  lui         $a1, 0x435C
    ctx->pc = 0x2104dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17244 << 16));
    // 0x2104e0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2104e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2104e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2104e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2104e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2104e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2104ec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2104ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2104f0: 0x246ba300  addiu       $t3, $v1, -0x5D00
    ctx->pc = 0x2104f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
    // 0x2104f4: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2104f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2104f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2104f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2104fc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2104fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210500: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x210500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x210504: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x210504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x210508: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x21050c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x21050cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210510: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x210510u;
    SET_GPR_U32(ctx, 31, 0x210518u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210510u, 0x210518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210518u;
label_210518:
    // 0x210518: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x210518u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21051cu;
}
