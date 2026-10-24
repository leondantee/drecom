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

// Function: caseD_6
// Address: 0x354520 - 0x3548a8
void caseD_6_0x354520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x354520");
#endif

    switch (ctx->pc) {
        case 0x35456cu: goto label_35456c;
        case 0x3545d0u: goto label_3545d0;
        case 0x354724u: goto label_354724;
        case 0x354734u: goto label_354734;
        case 0x3548a4u: goto label_3548a4;
        default: break;
    }

    ctx->pc = 0x354520u;

    // 0x354520: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354524: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x354528: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35452c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x35452cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x354530: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x354530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354534: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x354534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x354538: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35453c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x354540: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x354540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x354544: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354548: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x354548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x35454c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354550: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x354550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354554: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354558: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x354558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x35455c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x35455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354560: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354560u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x354564: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x354564u;
    SET_GPR_U32(ctx, 31, 0x35456Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354564u, 0x35456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35456Cu;
label_35456c:
    // 0x35456c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35456cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354570: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x354574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354578: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x354578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35457c: 0x9044010c  lbu         $a0, 0x10C($v0)
    ctx->pc = 0x35457cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x354580: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x354580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x354584: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354588: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35458c: 0x8ca70134  lw          $a3, 0x134($a1)
    ctx->pc = 0x35458cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x354590: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x354590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x354594: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354598: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x354598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35459c: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x35459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3545a0: 0x90a7010c  lbu         $a3, 0x10C($a1)
    ctx->pc = 0x3545a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x3545a4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3545a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3545a8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3545a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3545ac: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x3545acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3545b0: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x3545b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x3545b4: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x3545b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3545b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3545b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3545bc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x3545bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x3545c0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x3545c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3545c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3545c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3545c8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3545C8u;
    SET_GPR_U32(ctx, 31, 0x3545D0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3545C8u, 0x3545D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545D0u;
label_3545d0:
    // 0x3545d0: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x3545d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3545d4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3545d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3545d8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3545d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3545dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3545dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3545e0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3545e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3545e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3545e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3545e8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3545e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3545ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3545ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3545f0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3545f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3545f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3545f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3545f8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3545f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3545fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3545fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354600: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x354604: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354608: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x354608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35460c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35460cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354610: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x354610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354614: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x354614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x354618: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x354618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35461c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35461cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354620: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x354624: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354628: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x354628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x35462c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x35462cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354630: 0x0  nop
    ctx->pc = 0x354630u;
    // NOP
    // 0x354634: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x354634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354638: 0x0  nop
    ctx->pc = 0x354638u;
    // NOP
    // 0x35463c: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
    ctx->pc = 0x35463Cu;
    {
        const bool branch_taken_0x35463c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35463c) {
            ctx->pc = 0x3548A8u;
            return;
        }
    }
    ctx->pc = 0x354644u;
    // 0x354644: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354648: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x354648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35464c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x35464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354650: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354654: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x354658: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35465c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x35465cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x354660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x354660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354664: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x354664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354668: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x354668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35466c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x35466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354674: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x354678: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x354678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35467c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x35467cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x354680: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x354680u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354684: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x354684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x354688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35468c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x35468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354690: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x354694: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x354698: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x354698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35469c: 0x85030014  lh          $v1, 0x14($t0)
    ctx->pc = 0x35469cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x3546a0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x3546a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3546a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3546a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3546a8: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x3546a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x3546ac: 0x1480007e  bnez        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3546ACu;
    {
        const bool branch_taken_0x3546ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3546ac) {
            ctx->pc = 0x3548A8u;
            return;
        }
    }
    ctx->pc = 0x3546B4u;
    // 0x3546b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3546b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3546b8: 0x0  nop
    ctx->pc = 0x3546b8u;
    // NOP
    // 0x3546bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3546bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3546c0: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x3546c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
    // 0x3546c4: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x3546c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x3546c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3546c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3546cc: 0x0  nop
    ctx->pc = 0x3546ccu;
    // NOP
    // 0x3546d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3546d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3546d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3546d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3546d8: 0x0  nop
    ctx->pc = 0x3546d8u;
    // NOP
    // 0x3546dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3546dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3546e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3546e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3546e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3546e8: 0x0  nop
    ctx->pc = 0x3546e8u;
    // NOP
    // 0x3546ec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3546ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3546f0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3546f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3546f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3546f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3546f8: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x3546f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3546fc: 0x90a3010c  lbu         $v1, 0x10C($a1)
    ctx->pc = 0x3546fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x354700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354704: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354708: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35470c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x354710: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x354710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354714: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x354714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x354718: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x354718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35471c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x35471Cu;
    SET_GPR_U32(ctx, 31, 0x354724u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x35471Cu, 0x354724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354724u;
label_354724:
    // 0x354724: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x354724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x354728: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x354728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35472c: 0xc040c24  jal         func_103090
    ctx->pc = 0x35472Cu;
    SET_GPR_U32(ctx, 31, 0x354734u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x354734u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x354734u) { return; }
    ctx->pc = 0x354734u;
label_354734:
    // 0x354734: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x354734u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354738: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x354738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
    // 0x35473c: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x35473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x354740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x354740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354744: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x354744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35474c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x354750: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x354750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x354754: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x354754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x354758: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x354758u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35475c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x354764: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x354764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x354768: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x354768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x35476c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x35476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x354770: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354774: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x354774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354778: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35477c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x35477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x354780: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x354780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x354784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x354784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354788: 0x0  nop
    ctx->pc = 0x354788u;
    // NOP
    // 0x35478c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35478cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x354790: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354794: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x354798: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x354798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35479c: 0x90a6010c  lbu         $a2, 0x10C($a1)
    ctx->pc = 0x35479cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x3547a0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3547a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3547a4: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x3547a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3547a8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3547ac: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x3547acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3547b0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3547b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3547b4: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x3547b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3547b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3547b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3547bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3547bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3547c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3547c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3547c4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3547c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3547c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3547cc: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3547ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3547d0: 0x9085010c  lbu         $a1, 0x10C($a0)
    ctx->pc = 0x3547d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x3547d4: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x3547d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3547d8: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x3547d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x3547dc: 0x8fa90118  lw          $t1, 0x118($sp)
    ctx->pc = 0x3547dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3547e0: 0x8d220130  lw          $v0, 0x130($t1)
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
    // 0x3547e4: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x3547e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3547e8: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x3547e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3547ec: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3547ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3547f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3547f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3547f4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3547f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3547f8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x3547f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3547fc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3547fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354800: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x354800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x354804: 0x90a3010c  lbu         $v1, 0x10C($a1)
    ctx->pc = 0x354804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x354808: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x354808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35480c: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x35480cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x354810: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354814: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x354814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x354818: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x354818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x35481c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x35481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354820: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x354820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354828: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x354828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35482c: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x35482cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x354830: 0x44848000  mtc1        $a0, $f16
    ctx->pc = 0x354830u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x354834: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x354834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x354838: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x354838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x35483c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x35483cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354840: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x354844: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x354848: 0x9065010c  lbu         $a1, 0x10C($v1)
    ctx->pc = 0x354848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x35484c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x35484cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x354850: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x354850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x354854: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x354854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354858: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x354858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x35485c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354860: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x354860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x354864: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x354864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354868: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x35486c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35486cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x354870: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x354870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x354874: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x354874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x354878: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x354878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x35487c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x35487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x354880: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x354880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x354884: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x354884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x354888: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x354888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35488c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35488cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354890: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x354890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354894: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x354894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x354898: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x354898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35489c: 0xc087200  jal         func_21C800
    ctx->pc = 0x35489Cu;
    SET_GPR_U32(ctx, 31, 0x3548A4u);
    ctx->pc = 0x21C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C800u, 0x35489Cu, 0x3548A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3548A4u;
label_3548a4:
    // 0x3548a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3548a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3548a8u;
}
