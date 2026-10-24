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

// Function: entry_002344f8
// Address: 0x2344f8 - 0x234654
void entry_002344f8_0x2344f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002344f8_0x2344f8");
#endif

    switch (ctx->pc) {
        case 0x23453cu: goto label_23453c;
        case 0x23454cu: goto label_23454c;
        case 0x234594u: goto label_234594;
        case 0x23459cu: goto label_23459c;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345d4u: goto label_2345d4;
        case 0x234644u: goto label_234644;
        case 0x234650u: goto label_234650;
        default: break;
    }

    ctx->pc = 0x2344f8u;

    // 0x2344f8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2344f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2344fc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2344fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234500: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x234500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x234504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234508: 0x0  nop
    ctx->pc = 0x234508u;
    // NOP
    // 0x23450c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23450cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234510: 0x0  nop
    ctx->pc = 0x234510u;
    // NOP
    // 0x234514: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x234514u;
    {
        const bool branch_taken_0x234514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234514) {
            ctx->pc = 0x234654u;
            return;
        }
    }
    ctx->pc = 0x23451Cu;
    // 0x23451c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234520: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x234520u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x234524: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x234524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234528: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x234528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23452c: 0x14a00049  bnez        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x23452Cu;
    {
        const bool branch_taken_0x23452c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23452c) {
            ctx->pc = 0x234654u;
            return;
        }
    }
    ctx->pc = 0x234534u;
    // 0x234534: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x234534u;
    SET_GPR_U32(ctx, 31, 0x23453Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x234534u, 0x23453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23453Cu;
label_23453c:
    // 0x23453c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x234540: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x234540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x234544: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x234544u;
    SET_GPR_U32(ctx, 31, 0x23454Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x234544u, 0x23454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23454Cu;
label_23454c:
    // 0x23454c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x23454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x234550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234554: 0x0  nop
    ctx->pc = 0x234554u;
    // NOP
    // 0x234558: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x234558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x23455c: 0x3c07442f  lui         $a3, 0x442F
    ctx->pc = 0x23455cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17455 << 16));
    // 0x234560: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x234560u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234564: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x234564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23456c: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234570: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234574: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x234578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23457c: 0x0  nop
    ctx->pc = 0x23457cu;
    // NOP
    // 0x234580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x234580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x234584: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x234584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x234588: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x23458c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x23458Cu;
    SET_GPR_U32(ctx, 31, 0x234594u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x234594u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234594u) { return; }
    ctx->pc = 0x234594u;
label_234594:
    // 0x234594: 0xc06765c  jal         func_19D970
    ctx->pc = 0x234594u;
    SET_GPR_U32(ctx, 31, 0x23459Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x234594u, 0x23459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23459Cu;
label_23459c:
    // 0x23459c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2345a0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2345a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2345a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2345a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2345a8: 0x0  nop
    ctx->pc = 0x2345a8u;
    // NOP
    // 0x2345ac: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2345acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2345b0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2345b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2345b8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2345B8u;
    SET_GPR_U32(ctx, 31, 0x2345C0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2345C0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2345C0u) { return; }
    ctx->pc = 0x2345C0u;
label_2345c0:
    // 0x2345c0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2345c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2345c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2345c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2345c8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2345c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2345cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2345CCu;
    SET_GPR_U32(ctx, 31, 0x2345D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2345D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2345D4u) { return; }
    ctx->pc = 0x2345D4u;
label_2345d4:
    // 0x2345d4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2345d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2345d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2345d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2345dc: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2345e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2345e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2345e4: 0x3c0445bb  lui         $a0, 0x45BB
    ctx->pc = 0x2345e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17851 << 16));
    // 0x2345e8: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2345e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2345ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2345ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2345f0: 0x0  nop
    ctx->pc = 0x2345f0u;
    // NOP
    // 0x2345f4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2345f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2345f8: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2345f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2345fc: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2345fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x234600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234604: 0x0  nop
    ctx->pc = 0x234604u;
    // NOP
    // 0x234608: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x234608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x23460c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234610: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x234610u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x234614: 0x26a30980  addiu       $v1, $s5, 0x980
    ctx->pc = 0x234614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2432));
    // 0x234618: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x234618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23461c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23461cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x234620: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x234620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x234624: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x234624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x234628: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x234628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23462c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x23462cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x234630: 0x24042503  addiu       $a0, $zero, 0x2503
    ctx->pc = 0x234630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9475));
    // 0x234634: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234638: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x234638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23463c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x23463Cu;
    SET_GPR_U32(ctx, 31, 0x234644u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x23463Cu, 0x234644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234644u;
label_234644:
    // 0x234644: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234648: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234648u;
    SET_GPR_U32(ctx, 31, 0x234650u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234648u, 0x234650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234650u;
label_234650:
    // 0x234650: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234650u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x234654u;
}
