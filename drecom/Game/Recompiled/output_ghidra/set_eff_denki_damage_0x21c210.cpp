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

// Function: set_eff_denki_damage
// Address: 0x21c210 - 0x21c3a4
void set_eff_denki_damage_0x21c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_denki_damage_0x21c210");
#endif

    switch (ctx->pc) {
        case 0x21c248u: goto label_21c248;
        case 0x21c280u: goto label_21c280;
        case 0x21c28cu: goto label_21c28c;
        case 0x21c294u: goto label_21c294;
        case 0x21c2bcu: goto label_21c2bc;
        case 0x21c2e4u: goto label_21c2e4;
        case 0x21c324u: goto label_21c324;
        case 0x21c37cu: goto label_21c37c;
        default: break;
    }

    ctx->pc = 0x21c210u;

    // 0x21c210: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21c214: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x21c214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21c218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21c21c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x21c21cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21c220: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x21c220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x21c224: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x21c224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x21c228: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x21c228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x21c22c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21c230: 0x2442ab10  addiu       $v0, $v0, -0x54F0
    ctx->pc = 0x21c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945552));
    // 0x21c234: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x21c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c238: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x21c238u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38AB10u));
    // 0x21c23c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x21c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21c240: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C240u;
    SET_GPR_U32(ctx, 31, 0x21C248u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C240u, 0x21C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C248u;
label_21c248:
    // 0x21c248: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c250: 0x0  nop
    ctx->pc = 0x21c250u;
    // NOP
    // 0x21c254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c258: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21c25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c260: 0x0  nop
    ctx->pc = 0x21c260u;
    // NOP
    // 0x21c264: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x21c264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c268: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x21c268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c26c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x21c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c270: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x21c270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c274: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c274u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c278: 0xc0861dc  jal         func_218770
    ctx->pc = 0x21C278u;
    SET_GPR_U32(ctx, 31, 0x21C280u);
    ctx->pc = 0x218770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218770u, 0x21C278u, 0x21C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C280u;
label_21c280:
    // 0x21c280: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21c280u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c284: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x21C284u;
    {
        const bool branch_taken_0x21c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c284) {
            ctx->pc = 0x21C380u;
            goto label_21c380;
        }
    }
    ctx->pc = 0x21C28Cu;
label_21c28c:
    // 0x21c28c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C28Cu;
    SET_GPR_U32(ctx, 31, 0x21C294u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C28Cu, 0x21C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C294u;
label_21c294:
    // 0x21c294: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21c298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c29c: 0x0  nop
    ctx->pc = 0x21c29cu;
    // NOP
    // 0x21c2a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c2a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c2a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c2a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c2ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c2acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c2b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x21c2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21c2b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C2B4u;
    SET_GPR_U32(ctx, 31, 0x21C2BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C2B4u, 0x21C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2BCu;
label_21c2bc:
    // 0x21c2bc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21c2c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c2c4: 0x0  nop
    ctx->pc = 0x21c2c4u;
    // NOP
    // 0x21c2c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c2cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c2d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c2d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c2d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x21c2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x21c2dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C2DCu;
    SET_GPR_U32(ctx, 31, 0x21C2E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C2DCu, 0x21C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2E4u;
label_21c2e4:
    // 0x21c2e4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21c2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c2ec: 0x0  nop
    ctx->pc = 0x21c2ecu;
    // NOP
    // 0x21c2f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c2f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c2f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c2f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c2fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c300: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x21c300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x21c304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21c304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21c308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c30c: 0x0  nop
    ctx->pc = 0x21c30cu;
    // NOP
    // 0x21c310: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c314: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x21c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x21c318: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x21c318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21c31c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C31Cu;
    SET_GPR_U32(ctx, 31, 0x21C324u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C31Cu, 0x21C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C324u;
label_21c324:
    // 0x21c324: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21c328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c32c: 0x0  nop
    ctx->pc = 0x21c32cu;
    // NOP
    // 0x21c330: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c334: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21c338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c33c: 0x0  nop
    ctx->pc = 0x21c33cu;
    // NOP
    // 0x21c340: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x21c340u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c344: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21c348: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21c348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21c34c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x21c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x21c350: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x21c350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c354: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x21c354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c358: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x21c358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c35c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x21c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c360: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x21c360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c364: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21c368: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21c368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21c36c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x21c36cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c370: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x21c370u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c374: 0xc086fd4  jal         func_21BF50
    ctx->pc = 0x21C374u;
    SET_GPR_U32(ctx, 31, 0x21C37Cu);
    ctx->pc = 0x21BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BF50u, 0x21C374u, 0x21C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C37Cu;
label_21c37c:
    // 0x21c37c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21c380:
    // 0x21c380: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x21c380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21c384: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x21C384u;
    {
        const bool branch_taken_0x21c384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c384) {
            ctx->pc = 0x21C28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c28c;
        }
    }
    ctx->pc = 0x21C38Cu;
    // 0x21c38c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21c38cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c390: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21c390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c394: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x21c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21c398: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x21c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21c39c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C3A4u;
}
