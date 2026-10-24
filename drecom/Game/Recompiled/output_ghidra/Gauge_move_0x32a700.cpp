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

// Function: Gauge_move
// Address: 0x32a700 - 0x32accc
void Gauge_move_0x32a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gauge_move_0x32a700");
#endif

    switch (ctx->pc) {
        case 0x32a77cu: goto label_32a77c;
        case 0x32a7bcu: goto label_32a7bc;
        case 0x32a83cu: goto label_32a83c;
        case 0x32a844u: goto label_32a844;
        case 0x32a84cu: goto label_32a84c;
        case 0x32a8ccu: goto label_32a8cc;
        case 0x32a900u: goto label_32a900;
        case 0x32ac48u: goto label_32ac48;
        case 0x32ac94u: goto label_32ac94;
        default: break;
    }

    ctx->pc = 0x32a700u;

    // 0x32a700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32a704: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x32a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x32a708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32a70c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32a710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32a714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a71c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32a720: 0x2451c2f0  addiu       $s1, $v0, -0x3D10
    ctx->pc = 0x32a720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x32a724: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32a728: 0x2452dbc0  addiu       $s2, $v0, -0x2440
    ctx->pc = 0x32a728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x32a72c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32a730: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x32a730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x32a734: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x32a734u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x32a738: 0x864213aa  lh          $v0, 0x13AA($s2)
    ctx->pc = 0x32a738u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x32a73c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a740: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a740u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a744: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a748: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a74c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a750: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a758: 0x0  nop
    ctx->pc = 0x32a758u;
    // NOP
    // 0x32a75c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a760: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x32a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x32a764: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x32a764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x32a768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a76c: 0x0  nop
    ctx->pc = 0x32a76cu;
    // NOP
    // 0x32a770: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x32a770u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a774: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32A774u;
    SET_GPR_U32(ctx, 31, 0x32A77Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32A774u, 0x32A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A77Cu;
label_32a77c:
    // 0x32a77c: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x32a77cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x32a780: 0x8642138c  lh          $v0, 0x138C($s2)
    ctx->pc = 0x32a780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x32a784: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32a784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a788: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a78c: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x32a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x32a790: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x32a790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32a794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a798: 0x0  nop
    ctx->pc = 0x32a798u;
    // NOP
    // 0x32a79c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a7a0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x32a7a4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x32a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x32a7a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a7ac: 0x0  nop
    ctx->pc = 0x32a7acu;
    // NOP
    // 0x32a7b0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x32a7b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a7b4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32A7B4u;
    SET_GPR_U32(ctx, 31, 0x32A7BCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32A7B4u, 0x32A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7BCu;
label_32a7bc:
    // 0x32a7bc: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x32a7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x32a7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a7c4: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x32a7c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a7c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32a7cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32a7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x32a7d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x32A7D0u;
    {
        const bool branch_taken_0x32a7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a7d0) {
            ctx->pc = 0x32A834u;
            goto label_32a834;
        }
    }
    ctx->pc = 0x32A7D8u;
    // 0x32a7d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a7dc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x32a7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a7e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32a7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32a7e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32a7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32a7e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32A7E8u;
    {
        const bool branch_taken_0x32a7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a7e8) {
            ctx->pc = 0x32A834u;
            goto label_32a834;
        }
    }
    ctx->pc = 0x32A7F0u;
    // 0x32a7f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a7f4: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x32a7f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a7f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32a7fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x32a7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x32a800: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32A800u;
    {
        const bool branch_taken_0x32a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a800) {
            ctx->pc = 0x32A834u;
            goto label_32a834;
        }
    }
    ctx->pc = 0x32A808u;
    // 0x32a808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a80c: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x32a80cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x32a810: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32a810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32a814: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32a814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32a818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A818u;
    {
        const bool branch_taken_0x32a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a818) {
            ctx->pc = 0x32A834u;
            goto label_32a834;
        }
    }
    ctx->pc = 0x32A820u;
    // 0x32a820: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32a820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32a824: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32a824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32a828: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32a828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x32a82c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32a830: 0xa2222830  sb          $v0, 0x2830($s1)
    ctx->pc = 0x32a830u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10288), (uint8_t)GPR_U32(ctx, 2));
label_32a834:
    // 0x32a834: 0xc0ca854  jal         func_32A150
    ctx->pc = 0x32A834u;
    SET_GPR_U32(ctx, 31, 0x32A83Cu);
    ctx->pc = 0x32A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A150u, 0x32A834u, 0x32A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A83Cu;
label_32a83c:
    // 0x32a83c: 0xc0ca5a8  jal         func_3296A0
    ctx->pc = 0x32A83Cu;
    SET_GPR_U32(ctx, 31, 0x32A844u);
    ctx->pc = 0x3296A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296A0u, 0x32A83Cu, 0x32A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A844u;
label_32a844:
    // 0x32a844: 0xc0cab34  jal         func_32ACD0
    ctx->pc = 0x32A844u;
    SET_GPR_U32(ctx, 31, 0x32A84Cu);
    ctx->pc = 0x32ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ACD0u, 0x32A844u, 0x32A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A84Cu;
label_32a84c:
    // 0x32a84c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a850: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32a850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32a854: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a858: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x32a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x32a85c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A85Cu;
    {
        const bool branch_taken_0x32a85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a85c) {
            ctx->pc = 0x32A87Cu;
            goto label_32a87c;
        }
    }
    ctx->pc = 0x32A864u;
    // 0x32a864: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a868: 0x8c23a230  lw          $v1, -0x5DD0($at)
    ctx->pc = 0x32a868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A230u));
    // 0x32a86c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x32a86cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32a870: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x32a870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x32a874: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a878: 0xac23a230  sw          $v1, -0x5DD0($at)
    ctx->pc = 0x32a878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A230u, _value); } while (0);
label_32a87c:
    // 0x32a87c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32a880: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x32a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x32a884: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x32a884u;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x32a888: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a88c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x32a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32a890: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32a894: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32a894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32a898: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x32A898u;
    {
        const bool branch_taken_0x32a898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a898) {
            ctx->pc = 0x32A900u;
            goto label_32a900;
        }
    }
    ctx->pc = 0x32A8A0u;
    // 0x32a8a0: 0x2933023  subu        $a2, $s4, $s3
    ctx->pc = 0x32a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x32a8a4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x32a8a8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x32a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x32a8ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32a8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32a8b0: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32a8b4: 0x34420204  ori         $v0, $v0, 0x204
    ctx->pc = 0x32a8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)516);
    // 0x32a8b8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32a8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a8bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32a8c0: 0x24451e80  addiu       $a1, $v0, 0x1E80
    ctx->pc = 0x32a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x32a8c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32A8C4u;
    SET_GPR_U32(ctx, 31, 0x32A8CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32A8C4u, 0x32A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8CCu;
label_32a8cc:
    // 0x32a8cc: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x32a8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32a8d0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32a8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a8d4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32a8d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32a8d8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x32a8dc: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x32a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x32a8e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32a8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32a8e4: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32a8e8: 0x34420206  ori         $v0, $v0, 0x206
    ctx->pc = 0x32a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)518);
    // 0x32a8ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32a8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a8f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32a8f4: 0x24451ea0  addiu       $a1, $v0, 0x1EA0
    ctx->pc = 0x32a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7840));
    // 0x32a8f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32A8F8u;
    SET_GPR_U32(ctx, 31, 0x32A900u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32A8F8u, 0x32A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A900u;
label_32a900:
    // 0x32a900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a904: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x32a904u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32a908: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32a908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32a90c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32a90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32a910: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x32A910u;
    {
        const bool branch_taken_0x32a910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a910) {
            ctx->pc = 0x32ACA8u;
            goto label_32aca8;
        }
    }
    ctx->pc = 0x32A918u;
    // 0x32a918: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32a91c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a920: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32a920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    // 0x32a924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a928: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32a928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a92c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a930: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32a930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32a934: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x32A934u;
    {
        const bool branch_taken_0x32a934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a934) {
            ctx->pc = 0x32AC3Cu;
            goto label_32ac3c;
        }
    }
    ctx->pc = 0x32A93Cu;
    // 0x32a93c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a940: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32a940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a944: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a948: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x32a94c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32A94Cu;
    {
        const bool branch_taken_0x32a94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a94c) {
            ctx->pc = 0x32A9A0u;
            goto label_32a9a0;
        }
    }
    ctx->pc = 0x32A954u;
    // 0x32a954: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a958: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32a958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32a95c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a960: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32a960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32a964: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32A964u;
    {
        const bool branch_taken_0x32a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a964) {
            ctx->pc = 0x32A9A0u;
            goto label_32a9a0;
        }
    }
    ctx->pc = 0x32A96Cu;
    // 0x32a96c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a970: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a978: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a97c: 0xac23a220  sw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a97cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
    // 0x32a980: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a984: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a988: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32a988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32a98c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A98Cu;
    {
        const bool branch_taken_0x32a98c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a98c) {
            ctx->pc = 0x32A9A0u;
            goto label_32a9a0;
        }
    }
    ctx->pc = 0x32A994u;
    // 0x32a994: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32a998: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a99c: 0xac23a220  sw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a99cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
label_32a9a0:
    // 0x32a9a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a9a4: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32a9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a9a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a9ac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x32a9b0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32A9B0u;
    {
        const bool branch_taken_0x32a9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a9b0) {
            ctx->pc = 0x32A9FCu;
            goto label_32a9fc;
        }
    }
    ctx->pc = 0x32A9B8u;
    // 0x32a9b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a9bc: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32a9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32a9c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a9c4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32a9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32a9c8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32A9C8u;
    {
        const bool branch_taken_0x32a9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a9c8) {
            ctx->pc = 0x32A9FCu;
            goto label_32a9fc;
        }
    }
    ctx->pc = 0x32A9D0u;
    // 0x32a9d0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9d4: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a9d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a9dc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9e0: 0xac23a220  sw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a9e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
    // 0x32a9e4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9e8: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a9ec: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A9ECu;
    {
        const bool branch_taken_0x32a9ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32a9ec) {
            ctx->pc = 0x32A9FCu;
            goto label_32a9fc;
        }
    }
    ctx->pc = 0x32A9F4u;
    // 0x32a9f4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9f8: 0xac20a220  sw          $zero, -0x5DE0($at)
    ctx->pc = 0x32a9f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
label_32a9fc:
    // 0x32a9fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa00: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32aa00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32aa04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa08: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x32aa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x32aa0c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AA0Cu;
    {
        const bool branch_taken_0x32aa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa0c) {
            ctx->pc = 0x32AA60u;
            goto label_32aa60;
        }
    }
    ctx->pc = 0x32AA14u;
    // 0x32aa14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa18: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32aa18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32aa1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa20: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32aa24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32AA24u;
    {
        const bool branch_taken_0x32aa24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa24) {
            ctx->pc = 0x32AA60u;
            goto label_32aa60;
        }
    }
    ctx->pc = 0x32AA2Cu;
    // 0x32aa2c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa30: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aa34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32aa38: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa3c: 0xac23a224  sw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
    // 0x32aa40: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa44: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aa48: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32aa48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32aa4c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AA4Cu;
    {
        const bool branch_taken_0x32aa4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aa4c) {
            ctx->pc = 0x32AA60u;
            goto label_32aa60;
        }
    }
    ctx->pc = 0x32AA54u;
    // 0x32aa54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32aa58: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa5c: 0xac23a224  sw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
label_32aa60:
    // 0x32aa60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa64: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32aa64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32aa68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa6c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x32aa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x32aa70: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AA70u;
    {
        const bool branch_taken_0x32aa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa70) {
            ctx->pc = 0x32AABCu;
            goto label_32aabc;
        }
    }
    ctx->pc = 0x32AA78u;
    // 0x32aa78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa7c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32aa7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32aa80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa84: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32aa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32aa88: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AA88u;
    {
        const bool branch_taken_0x32aa88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa88) {
            ctx->pc = 0x32AABCu;
            goto label_32aabc;
        }
    }
    ctx->pc = 0x32AA90u;
    // 0x32aa90: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa94: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aa98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32aa9c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aaa0: 0xac23a224  sw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aaa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
    // 0x32aaa4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aaa8: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aaac: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AAACu;
    {
        const bool branch_taken_0x32aaac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32aaac) {
            ctx->pc = 0x32AABCu;
            goto label_32aabc;
        }
    }
    ctx->pc = 0x32AAB4u;
    // 0x32aab4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aab8: 0xac20a224  sw          $zero, -0x5DDC($at)
    ctx->pc = 0x32aab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
label_32aabc:
    // 0x32aabc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aac0: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32aac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32aac4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aac8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x32aac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x32aacc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AACCu;
    {
        const bool branch_taken_0x32aacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aacc) {
            ctx->pc = 0x32AB20u;
            goto label_32ab20;
        }
    }
    ctx->pc = 0x32AAD4u;
    // 0x32aad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aad8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32aad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32aadc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aae0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32aae4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32AAE4u;
    {
        const bool branch_taken_0x32aae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aae4) {
            ctx->pc = 0x32AB20u;
            goto label_32ab20;
        }
    }
    ctx->pc = 0x32AAECu;
    // 0x32aaec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aaf0: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32aaf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32aaf8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aafc: 0xac23a228  sw          $v1, -0x5DD8($at)
    ctx->pc = 0x32aafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
    // 0x32ab00: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab04: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32ab08: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32ab08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32ab0c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AB0Cu;
    {
        const bool branch_taken_0x32ab0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ab0c) {
            ctx->pc = 0x32AB20u;
            goto label_32ab20;
        }
    }
    ctx->pc = 0x32AB14u;
    // 0x32ab14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ab18: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab1c: 0xac23a228  sw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
label_32ab20:
    // 0x32ab20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab24: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32ab24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32ab28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ab2c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x32ab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x32ab30: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AB30u;
    {
        const bool branch_taken_0x32ab30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab30) {
            ctx->pc = 0x32AB7Cu;
            goto label_32ab7c;
        }
    }
    ctx->pc = 0x32AB38u;
    // 0x32ab38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab3c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32ab3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32ab40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ab44: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32ab44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32ab48: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AB48u;
    {
        const bool branch_taken_0x32ab48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab48) {
            ctx->pc = 0x32AB7Cu;
            goto label_32ab7c;
        }
    }
    ctx->pc = 0x32AB50u;
    // 0x32ab50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab54: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32ab58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32ab5c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab60: 0xac23a228  sw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
    // 0x32ab64: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab68: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32ab6c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AB6Cu;
    {
        const bool branch_taken_0x32ab6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32ab6c) {
            ctx->pc = 0x32AB7Cu;
            goto label_32ab7c;
        }
    }
    ctx->pc = 0x32AB74u;
    // 0x32ab74: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab78: 0xac20a228  sw          $zero, -0x5DD8($at)
    ctx->pc = 0x32ab78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
label_32ab7c:
    // 0x32ab7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab80: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32ab80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32ab84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ab88: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x32ab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x32ab8c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AB8Cu;
    {
        const bool branch_taken_0x32ab8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab8c) {
            ctx->pc = 0x32ABE0u;
            goto label_32abe0;
        }
    }
    ctx->pc = 0x32AB94u;
    // 0x32ab94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab98: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32ab98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32ab9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aba0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32aba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32aba4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32ABA4u;
    {
        const bool branch_taken_0x32aba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aba4) {
            ctx->pc = 0x32ABE0u;
            goto label_32abe0;
        }
    }
    ctx->pc = 0x32ABACu;
    // 0x32abac: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abb0: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32abb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32abb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abbc: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    // 0x32abc0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abc4: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32abc8: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32abc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32abcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32ABCCu;
    {
        const bool branch_taken_0x32abcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32abcc) {
            ctx->pc = 0x32ABE0u;
            goto label_32abe0;
        }
    }
    ctx->pc = 0x32ABD4u;
    // 0x32abd4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32abd8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abdc: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
label_32abe0:
    // 0x32abe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32abe4: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32abe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32abe8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32abe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32abec: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x32abecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x32abf0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32ABF0u;
    {
        const bool branch_taken_0x32abf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32abf0) {
            ctx->pc = 0x32AC3Cu;
            goto label_32ac3c;
        }
    }
    ctx->pc = 0x32ABF8u;
    // 0x32abf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32abf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32abfc: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32abfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32ac00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ac04: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32ac04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32ac08: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AC08u;
    {
        const bool branch_taken_0x32ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac08) {
            ctx->pc = 0x32AC3Cu;
            goto label_32ac3c;
        }
    }
    ctx->pc = 0x32AC10u;
    // 0x32ac10: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac14: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32ac18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32ac1c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac20: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32ac20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    // 0x32ac24: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac28: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32ac2c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AC2Cu;
    {
        const bool branch_taken_0x32ac2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32ac2c) {
            ctx->pc = 0x32AC3Cu;
            goto label_32ac3c;
        }
    }
    ctx->pc = 0x32AC34u;
    // 0x32ac34: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac38: 0xac20a22c  sw          $zero, -0x5DD4($at)
    ctx->pc = 0x32ac38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
label_32ac3c:
    // 0x32ac3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32ac3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ac40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x32AC40u;
    {
        const bool branch_taken_0x32ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac40) {
            ctx->pc = 0x32AC98u;
            goto label_32ac98;
        }
    }
    ctx->pc = 0x32AC48u;
label_32ac48:
    // 0x32ac48: 0x2602000a  addiu       $v0, $s0, 0xA
    ctx->pc = 0x32ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x32ac4c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32ac4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ac50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32ac50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32ac54: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32ac58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ac5c: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32ac60: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x32ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x32ac64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32ac68: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32ac68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32ac6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x32ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32ac70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32ac74: 0x2442a220  addiu       $v0, $v0, -0x5DE0
    ctx->pc = 0x32ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943264));
    // 0x32ac78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ac7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ac80: 0x24451ec0  addiu       $a1, $v0, 0x1EC0
    ctx->pc = 0x32ac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7872));
    // 0x32ac84: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x32ac84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32ac88: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x32ac88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32ac8c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32AC8Cu;
    SET_GPR_U32(ctx, 31, 0x32AC94u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32AC8Cu, 0x32AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC94u;
label_32ac94:
    // 0x32ac94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32ac94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32ac98:
    // 0x32ac98: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x32ac98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32ac9c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x32AC9Cu;
    {
        const bool branch_taken_0x32ac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ac9c) {
            ctx->pc = 0x32AC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ac48;
        }
    }
    ctx->pc = 0x32ACA4u;
    // 0x32aca4: 0x0  nop
    ctx->pc = 0x32aca4u;
    // NOP
label_32aca8:
    // 0x32aca8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x32aca8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32acac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32acacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32acb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32acb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32acb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32acb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32acb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32acb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32acbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32acbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32acc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x32acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x32ACC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ACCCu;
}
