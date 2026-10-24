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

// Function: entry_002e3308
// Address: 0x2e3308 - 0x2e34fc
void entry_002e3308_0x2e3308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3308_0x2e3308");
#endif

    switch (ctx->pc) {
        case 0x2e3330u: goto label_2e3330;
        case 0x2e333cu: goto label_2e333c;
        case 0x2e3350u: goto label_2e3350;
        case 0x2e3358u: goto label_2e3358;
        case 0x2e337cu: goto label_2e337c;
        case 0x2e33a0u: goto label_2e33a0;
        case 0x2e33d4u: goto label_2e33d4;
        case 0x2e33e0u: goto label_2e33e0;
        case 0x2e33f4u: goto label_2e33f4;
        case 0x2e34c0u: goto label_2e34c0;
        default: break;
    }

    ctx->pc = 0x2e3308u;

    // 0x2e3308: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2e3308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e330c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2E330Cu;
    {
        const bool branch_taken_0x2e330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e330c) {
            ctx->pc = 0x2E31F8u;
            return;
        }
    }
    ctx->pc = 0x2E3314u;
    // 0x2e3314: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e3314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e3318: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2e3318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2e331c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e331cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3320: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2e3320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e3324: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e3324u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3328: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E3328u;
    SET_GPR_U32(ctx, 31, 0x2E3330u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E3328u, 0x2E3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3330u;
label_2e3330:
    // 0x2e3330: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e3330u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e3334: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E3334u;
    SET_GPR_U32(ctx, 31, 0x2E333Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E3334u, 0x2E333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E333Cu;
label_2e333c:
    // 0x2e333c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e3340: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e3340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e3344: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x2e3344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e3348: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E3348u;
    SET_GPR_U32(ctx, 31, 0x2E3350u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E3350u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E3350u) { return; }
    ctx->pc = 0x2E3350u;
label_2e3350:
    // 0x2e3350: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3350u;
    SET_GPR_U32(ctx, 31, 0x2E3358u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3350u, 0x2E3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3358u;
label_2e3358:
    // 0x2e3358: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e3358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e335c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e335cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3360: 0x0  nop
    ctx->pc = 0x2e3360u;
    // NOP
    // 0x2e3364: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e3364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e3368: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2e3368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e336c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e336cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3370: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2e3370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e3374: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3374u;
    SET_GPR_U32(ctx, 31, 0x2E337Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3374u, 0x2E337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E337Cu;
label_2e337c:
    // 0x2e337c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e3380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3384: 0x0  nop
    ctx->pc = 0x2e3384u;
    // NOP
    // 0x2e3388: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e3388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e338c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2e338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e3390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3394: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2e3394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e3398: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3398u;
    SET_GPR_U32(ctx, 31, 0x2E33A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3398u, 0x2E33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33A0u;
label_2e33a0:
    // 0x2e33a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e33a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e33a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e33a8: 0x0  nop
    ctx->pc = 0x2e33a8u;
    // NOP
    // 0x2e33ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e33acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e33b0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2e33b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e33b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e33b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e33b8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2e33b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e33bc: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2e33bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2e33c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e33c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e33c4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e33c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e33c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e33c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e33cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E33CCu;
    SET_GPR_U32(ctx, 31, 0x2E33D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E33CCu, 0x2E33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33D4u;
label_2e33d4:
    // 0x2e33d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e33d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e33d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E33D8u;
    SET_GPR_U32(ctx, 31, 0x2E33E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E33D8u, 0x2E33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33E0u;
label_2e33e0:
    // 0x2e33e0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e33e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e33e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e33e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e33e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e33ec: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2E33ECu;
    SET_GPR_U32(ctx, 31, 0x2E33F4u);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2E33ECu, 0x2E33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33F4u;
label_2e33f4:
    // 0x2e33f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e33f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e33f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e33fc: 0x0  nop
    ctx->pc = 0x2e33fcu;
    // NOP
    // 0x2e3400: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e3400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e3404: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e340c: 0x0  nop
    ctx->pc = 0x2e340cu;
    // NOP
    // 0x2e3410: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e3410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e3414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e341c: 0x0  nop
    ctx->pc = 0x2e341cu;
    // NOP
    // 0x2e3420: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e3420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e3424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e342c: 0x0  nop
    ctx->pc = 0x2e342cu;
    // NOP
    // 0x2e3430: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e3430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e3434: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e3438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e343c: 0x0  nop
    ctx->pc = 0x2e343cu;
    // NOP
    // 0x2e3440: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e3440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e3444: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e3448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e344c: 0x0  nop
    ctx->pc = 0x2e344cu;
    // NOP
    // 0x2e3450: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e3450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e3454: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e3458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e345c: 0x0  nop
    ctx->pc = 0x2e345cu;
    // NOP
    // 0x2e3460: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e3460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e3464: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e3464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e3468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e346c: 0x0  nop
    ctx->pc = 0x2e346cu;
    // NOP
    // 0x2e3470: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e3474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e347c: 0x0  nop
    ctx->pc = 0x2e347cu;
    // NOP
    // 0x2e3480: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e3480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e3484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e348c: 0x0  nop
    ctx->pc = 0x2e348cu;
    // NOP
    // 0x2e3490: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e3490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e3494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e349c: 0x0  nop
    ctx->pc = 0x2e349cu;
    // NOP
    // 0x2e34a0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e34a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2e34a4: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e34a8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e34a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e34ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e34acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e34b0: 0x0  nop
    ctx->pc = 0x2e34b0u;
    // NOP
    // 0x2e34b4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e34b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2e34b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E34B8u;
    SET_GPR_U32(ctx, 31, 0x2E34C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E34B8u, 0x2E34C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34C0u;
label_2e34c0:
    // 0x2e34c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e34c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e34c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e34c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e34c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e34cc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E34CCu;
    {
        const bool branch_taken_0x2e34cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e34cc) {
            ctx->pc = 0x2E3544u;
            return;
        }
    }
    ctx->pc = 0x2E34D4u;
    // 0x2e34d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e34d8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E34D8u;
    {
        const bool branch_taken_0x2e34d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e34d8) {
            ctx->pc = 0x2E352Cu;
            return;
        }
    }
    ctx->pc = 0x2E34E0u;
    // 0x2e34e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e34e4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E34E4u;
    {
        const bool branch_taken_0x2e34e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e34e4) {
            ctx->pc = 0x2E3514u;
            return;
        }
    }
    ctx->pc = 0x2E34ECu;
    // 0x2e34ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E34ECu;
    {
        const bool branch_taken_0x2e34ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e34ec) {
            ctx->pc = 0x2E34FCu;
            return;
        }
    }
    ctx->pc = 0x2E34F4u;
    // 0x2e34f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E34F4u;
    {
        const bool branch_taken_0x2e34f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e34f4) {
            ctx->pc = 0x2E3554u;
            return;
        }
    }
    ctx->pc = 0x2E34FCu;
}
