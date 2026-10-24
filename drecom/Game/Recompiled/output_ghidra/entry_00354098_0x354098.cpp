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

// Function: entry_00354098
// Address: 0x354098 - 0x3541e8
void entry_00354098_0x354098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354098_0x354098");
#endif

    switch (ctx->pc) {
        case 0x354148u: goto label_354148;
        case 0x3541c0u: goto label_3541c0;
        case 0x3541ccu: goto label_3541cc;
        default: break;
    }

    ctx->pc = 0x354098u;

    // 0x354098: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35409c: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x35409cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x3540a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3540a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3540a4: 0x0  nop
    ctx->pc = 0x3540a4u;
    // NOP
    // 0x3540a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3540a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3540ac: 0x0  nop
    ctx->pc = 0x3540acu;
    // NOP
    // 0x3540b0: 0x450103d7  bc1t        . + 4 + (0x3D7 << 2)
    ctx->pc = 0x3540B0u;
    {
        const bool branch_taken_0x3540b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3540b0) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x3540B8u;
    // 0x3540b8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3540b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3540bc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3540bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3540c0: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x3540c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3540c4: 0x9042010c  lbu         $v0, 0x10C($v0)
    ctx->pc = 0x3540c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x3540c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3540c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3540cc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3540ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3540d0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3540d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3540d4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3540d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3540d8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3540d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3540dc: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x3540dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x3540e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3540e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3540e4: 0x0  nop
    ctx->pc = 0x3540e4u;
    // NOP
    // 0x3540e8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3540e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3540ec: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x3540ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
    // 0x3540f0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3540f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3540f4: 0x0  nop
    ctx->pc = 0x3540f4u;
    // NOP
    // 0x3540f8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3540f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3540fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3540fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354100: 0x0  nop
    ctx->pc = 0x354100u;
    // NOP
    // 0x354104: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x354104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x354108: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x354108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x35410c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x35410cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354110: 0x0  nop
    ctx->pc = 0x354110u;
    // NOP
    // 0x354114: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x354114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x354118: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x354118u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
    // 0x35411c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x35411cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354120: 0x0  nop
    ctx->pc = 0x354120u;
    // NOP
    // 0x354124: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x354124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x354128: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35412c: 0xa7a300a4  sh          $v1, 0xA4($sp)
    ctx->pc = 0x35412cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x354130: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x354130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x354134: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x354134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
    // 0x354138: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35413c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x354140: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x354140u;
    SET_GPR_U32(ctx, 31, 0x354148u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x354140u, 0x354148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354148u;
label_354148:
    // 0x354148: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354148u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35414c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x35414Cu;
    {
        const bool branch_taken_0x35414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35414c) {
            ctx->pc = 0x354268u;
            return;
        }
    }
    ctx->pc = 0x354154u;
    // 0x354154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354158: 0x0  nop
    ctx->pc = 0x354158u;
    // NOP
    // 0x35415c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x354160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354164: 0x0  nop
    ctx->pc = 0x354164u;
    // NOP
    // 0x354168: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x354168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x35416c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35416cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354170: 0x0  nop
    ctx->pc = 0x354170u;
    // NOP
    // 0x354174: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x354174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x354178: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x354178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35417c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35417cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354180: 0x0  nop
    ctx->pc = 0x354180u;
    // NOP
    // 0x354184: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x354184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x354188: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x354188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x35418c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x35418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x354190: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x354190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x354194: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x354194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x354198: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x354198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35419c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x35419cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x3541a0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3541a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3541a4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x3541a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3541a8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3541a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3541ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3541acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3541b0: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x3541b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x3541b4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3541b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3541b8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3541B8u;
    SET_GPR_U32(ctx, 31, 0x3541C0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3541B8u, 0x3541C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541C0u;
label_3541c0:
    // 0x3541c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3541c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3541c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3541C4u;
    SET_GPR_U32(ctx, 31, 0x3541CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3541C4u, 0x3541CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541CCu;
label_3541cc:
    // 0x3541cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3541CCu;
    {
        const bool branch_taken_0x3541cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3541cc) {
            ctx->pc = 0x3541E8u;
            return;
        }
    }
    ctx->pc = 0x3541D4u;
    // 0x3541d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3541d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3541d8: 0x0  nop
    ctx->pc = 0x3541d8u;
    // NOP
    // 0x3541dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3541dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3541e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3541E0u;
    {
        const bool branch_taken_0x3541e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541e0) {
            ctx->pc = 0x354204u;
            return;
        }
    }
    ctx->pc = 0x3541E8u;
}
