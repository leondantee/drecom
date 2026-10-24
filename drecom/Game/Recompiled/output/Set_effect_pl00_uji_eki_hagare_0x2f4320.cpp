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

// Function: Set_effect_pl00_uji_eki_hagare
// Address: 0x2f4320 - 0x2f4498
void Set_effect_pl00_uji_eki_hagare_0x2f4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_uji_eki_hagare_0x2f4320");
#endif

    switch (ctx->pc) {
        case 0x2f4360u: goto label_2f4360;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4478u: goto label_2f4478;
        default: break;
    }

    ctx->pc = 0x2f4320u;

    // 0x2f4320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f4320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f4324: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f4324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f4328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f432c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4330: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2f4330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2f4334: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2f4334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2f4338: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x2f4338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x2f433c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2f433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f4340: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4340u;
    {
        const bool branch_taken_0x2f4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4340) {
            ctx->pc = 0x2F436Cu;
            goto label_2f436c;
        }
    }
    ctx->pc = 0x2F4348u;
    // 0x2f4348: 0x24043900  addiu       $a0, $zero, 0x3900
    ctx->pc = 0x2f4348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x2f434c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f434cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4350: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f4350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f4354: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f4354u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4358: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F4358u;
    SET_GPR_U32(ctx, 31, 0x2F4360u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F4358u, 0x2F4360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4360u;
label_2f4360:
    // 0x2f4360: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f4360u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f4364: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F4364u;
    {
        const bool branch_taken_0x2f4364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4364) {
            ctx->pc = 0x2F43D4u;
            goto label_2f43d4;
        }
    }
    ctx->pc = 0x2F436Cu;
label_2f436c:
    // 0x2f436c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f4370: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4374: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f4374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f4378: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f4380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f4384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f4384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f4388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f4388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f438c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f4390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f4390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f4394: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2f4394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f4398: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2f4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f439c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f43a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f43a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f43a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f43a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f43ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f43acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f43b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f43b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f43b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f43b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f43b8: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x2f43b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f43bc: 0x24043900  addiu       $a0, $zero, 0x3900
    ctx->pc = 0x2f43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x2f43c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f43c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f43c4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f43c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f43c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F43C8u;
    SET_GPR_U32(ctx, 31, 0x2F43D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F43C8u, 0x2F43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43D0u;
label_2f43d0:
    // 0x2f43d0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f43d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f43d4:
    // 0x2f43d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f43d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f43d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f43dc: 0x0  nop
    ctx->pc = 0x2f43dcu;
    // NOP
    // 0x2f43e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f43e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f43e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f43e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f43e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f43ec: 0x0  nop
    ctx->pc = 0x2f43ecu;
    // NOP
    // 0x2f43f0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f43f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f43f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f43f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f43f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f43fc: 0x0  nop
    ctx->pc = 0x2f43fcu;
    // NOP
    // 0x2f4400: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f4404: 0x3c0242ec  lui         $v0, 0x42EC
    ctx->pc = 0x2f4404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17132 << 16));
    // 0x2f4408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f440c: 0x0  nop
    ctx->pc = 0x2f440cu;
    // NOP
    // 0x2f4410: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f4410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f4414: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4414u;
    SET_GPR_U32(ctx, 31, 0x2F441Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4414u, 0x2F441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F441Cu;
label_2f441c:
    // 0x2f441c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f441cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4424: 0x0  nop
    ctx->pc = 0x2f4424u;
    // NOP
    // 0x2f4428: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f442c: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2f442cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2f4430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4434: 0x0  nop
    ctx->pc = 0x2f4434u;
    // NOP
    // 0x2f4438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f4438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f443c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f4440: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2f4440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2f4444: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x2f4444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x2f4448: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f4448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f444c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f444cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4450: 0x0  nop
    ctx->pc = 0x2f4450u;
    // NOP
    // 0x2f4454: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2f4454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2f4458: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f4458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f445c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f4460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4464: 0x0  nop
    ctx->pc = 0x2f4464u;
    // NOP
    // 0x2f4468: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f4468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f446c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f446cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f4470: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F4470u;
    SET_GPR_U32(ctx, 31, 0x2F4478u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F4470u, 0x2F4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4478u;
label_2f4478:
    // 0x2f4478: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2f4478u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f447c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x2f447cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2f4480: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f4480u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f448c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f448cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4490: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4498u;
}
