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

// Function: Em19_dm_effect
// Address: 0x2e31b0 - 0x2e36e0
void Em19_dm_effect_0x2e31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_dm_effect_0x2e31b0");
#endif

    switch (ctx->pc) {
        case 0x2e31d4u: goto label_2e31d4;
        case 0x2e31ecu: goto label_2e31ec;
        case 0x2e31f8u: goto label_2e31f8;
        case 0x2e3234u: goto label_2e3234;
        case 0x2e3250u: goto label_2e3250;
        case 0x2e326cu: goto label_2e326c;
        case 0x2e32acu: goto label_2e32ac;
        case 0x2e32c4u: goto label_2e32c4;
        case 0x2e3300u: goto label_2e3300;
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
        case 0x2e3560u: goto label_2e3560;
        case 0x2e3568u: goto label_2e3568;
        case 0x2e3604u: goto label_2e3604;
        case 0x2e36ccu: goto label_2e36cc;
        default: break;
    }

    ctx->pc = 0x2e31b0u;

    // 0x2e31b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e31b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e31b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e31bc: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2e31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2e31c0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e31c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e31c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e31c8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e31c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e31cc: 0xc040c44  jal         func_103110
    ctx->pc = 0x2E31CCu;
    SET_GPR_U32(ctx, 31, 0x2E31D4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2E31D4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E31D4u) { return; }
    ctx->pc = 0x2E31D4u;
label_2e31d4:
    // 0x2e31d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e31d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e31dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e31dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e31e0: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2e31e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e31e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E31E4u;
    SET_GPR_U32(ctx, 31, 0x2E31ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E31ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E31ECu) { return; }
    ctx->pc = 0x2E31ECu;
label_2e31ec:
    // 0x2e31ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e31ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e31f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2E31F0u;
    {
        const bool branch_taken_0x2e31f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e31f0) {
            ctx->pc = 0x2E3308u;
            goto label_2e3308;
        }
    }
    ctx->pc = 0x2E31F8u;
label_2e31f8:
    // 0x2e31f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e31f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e31fc: 0x0  nop
    ctx->pc = 0x2e31fcu;
    // NOP
    // 0x2e3200: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e3200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e3204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3208: 0x0  nop
    ctx->pc = 0x2e3208u;
    // NOP
    // 0x2e320c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e320cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e3210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3214: 0x0  nop
    ctx->pc = 0x2e3214u;
    // NOP
    // 0x2e3218: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e3218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e321c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3224: 0x0  nop
    ctx->pc = 0x2e3224u;
    // NOP
    // 0x2e3228: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e3228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e322c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E322Cu;
    SET_GPR_U32(ctx, 31, 0x2E3234u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E322Cu, 0x2E3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3234u;
label_2e3234:
    // 0x2e3234: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e3238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e323c: 0x0  nop
    ctx->pc = 0x2e323cu;
    // NOP
    // 0x2e3240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e3240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e3244: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e3244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3248: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3248u;
    SET_GPR_U32(ctx, 31, 0x2E3250u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3248u, 0x2E3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3250u;
label_2e3250:
    // 0x2e3250: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e3250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e3254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3258: 0x0  nop
    ctx->pc = 0x2e3258u;
    // NOP
    // 0x2e325c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e325cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e3260: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2e3260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e3264: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3264u;
    SET_GPR_U32(ctx, 31, 0x2E326Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3264u, 0x2E326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E326Cu;
label_2e326c:
    // 0x2e326c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e3270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3274: 0x0  nop
    ctx->pc = 0x2e3274u;
    // NOP
    // 0x2e3278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e3278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e327c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e3280: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e3280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e3284: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e3288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e328c: 0x0  nop
    ctx->pc = 0x2e328cu;
    // NOP
    // 0x2e3290: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e3290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e3294: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e3294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e3298: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e3298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e329c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e32a0: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2e32a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e32a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E32A4u;
    SET_GPR_U32(ctx, 31, 0x2E32ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E32A4u, 0x2E32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32ACu;
label_2e32ac:
    // 0x2e32ac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e32b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e32b4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e32b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e32b8: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2e32b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e32bc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E32BCu;
    SET_GPR_U32(ctx, 31, 0x2E32C4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E32BCu, 0x2E32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32C4u;
label_2e32c4:
    // 0x2e32c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2e32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2e32c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e32c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e32cc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e32d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e32d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e32d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e32d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e32d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e32dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2e32e0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e32e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e32e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2e32e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e32e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e32e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e32ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e32ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e32f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e32f4: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e32f8: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x2E32F8u;
    SET_GPR_U32(ctx, 31, 0x2E3300u);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x2E32F8u, 0x2E3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3300u;
label_2e3300:
    // 0x2e3300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3304: 0x0  nop
    ctx->pc = 0x2e3304u;
    // NOP
label_2e3308:
    // 0x2e3308: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2e3308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e330c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2E330Cu;
    {
        const bool branch_taken_0x2e330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e330c) {
            ctx->pc = 0x2E31F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e31f8;
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
            goto label_2e3544;
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
            goto label_2e352c;
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
            goto label_2e3514;
        }
    }
    ctx->pc = 0x2E34ECu;
    // 0x2e34ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E34ECu;
    {
        const bool branch_taken_0x2e34ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e34ec) {
            ctx->pc = 0x2E34FCu;
            goto label_2e34fc;
        }
    }
    ctx->pc = 0x2E34F4u;
    // 0x2e34f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E34F4u;
    {
        const bool branch_taken_0x2e34f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e34f4) {
            ctx->pc = 0x2E3554u;
            goto label_2e3554;
        }
    }
    ctx->pc = 0x2E34FCu;
label_2e34fc:
    // 0x2e34fc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e3500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3504: 0x0  nop
    ctx->pc = 0x2e3504u;
    // NOP
    // 0x2e3508: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e3508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e350c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E350Cu;
    {
        const bool branch_taken_0x2e350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e350c) {
            ctx->pc = 0x2E3554u;
            goto label_2e3554;
        }
    }
    ctx->pc = 0x2E3514u;
label_2e3514:
    // 0x2e3514: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e3518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e351c: 0x0  nop
    ctx->pc = 0x2e351cu;
    // NOP
    // 0x2e3520: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e3520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e3524: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3524u;
    {
        const bool branch_taken_0x2e3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3524) {
            ctx->pc = 0x2E3554u;
            goto label_2e3554;
        }
    }
    ctx->pc = 0x2E352Cu;
label_2e352c:
    // 0x2e352c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e3530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3534: 0x0  nop
    ctx->pc = 0x2e3534u;
    // NOP
    // 0x2e3538: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e3538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e353c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E353Cu;
    {
        const bool branch_taken_0x2e353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e353c) {
            ctx->pc = 0x2E3554u;
            goto label_2e3554;
        }
    }
    ctx->pc = 0x2E3544u;
label_2e3544:
    // 0x2e3544: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2e3544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2e3548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e354c: 0x0  nop
    ctx->pc = 0x2e354cu;
    // NOP
    // 0x2e3550: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e3550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e3554:
    // 0x2e3554: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e3558: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E3558u;
    SET_GPR_U32(ctx, 31, 0x2E3560u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E3558u, 0x2E3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3560u;
label_2e3560:
    // 0x2e3560: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E3560u;
    SET_GPR_U32(ctx, 31, 0x2E3568u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E3560u, 0x2E3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3568u;
label_2e3568:
    // 0x2e3568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e356c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2e356cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e3570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3574: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3574u;
    {
        const bool branch_taken_0x2e3574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3574) {
            ctx->pc = 0x2E35ECu;
            goto label_2e35ec;
        }
    }
    ctx->pc = 0x2E357Cu;
    // 0x2e357c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3580: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3580u;
    {
        const bool branch_taken_0x2e3580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3580) {
            ctx->pc = 0x2E35D4u;
            goto label_2e35d4;
        }
    }
    ctx->pc = 0x2E3588u;
    // 0x2e3588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e358c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E358Cu;
    {
        const bool branch_taken_0x2e358c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e358c) {
            ctx->pc = 0x2E35BCu;
            goto label_2e35bc;
        }
    }
    ctx->pc = 0x2E3594u;
    // 0x2e3594: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3594u;
    {
        const bool branch_taken_0x2e3594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3594) {
            ctx->pc = 0x2E35A4u;
            goto label_2e35a4;
        }
    }
    ctx->pc = 0x2E359Cu;
    // 0x2e359c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E359Cu;
    {
        const bool branch_taken_0x2e359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e359c) {
            ctx->pc = 0x2E35FCu;
            goto label_2e35fc;
        }
    }
    ctx->pc = 0x2E35A4u;
label_2e35a4:
    // 0x2e35a4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2e35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2e35a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35ac: 0x0  nop
    ctx->pc = 0x2e35acu;
    // NOP
    // 0x2e35b0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e35b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e35b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E35B4u;
    {
        const bool branch_taken_0x2e35b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35b4) {
            ctx->pc = 0x2E35FCu;
            goto label_2e35fc;
        }
    }
    ctx->pc = 0x2E35BCu;
label_2e35bc:
    // 0x2e35bc: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2e35c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35c4: 0x0  nop
    ctx->pc = 0x2e35c4u;
    // NOP
    // 0x2e35c8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e35c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e35cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E35CCu;
    {
        const bool branch_taken_0x2e35cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35cc) {
            ctx->pc = 0x2E35FCu;
            goto label_2e35fc;
        }
    }
    ctx->pc = 0x2E35D4u;
label_2e35d4:
    // 0x2e35d4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2e35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2e35d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35dc: 0x0  nop
    ctx->pc = 0x2e35dcu;
    // NOP
    // 0x2e35e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e35e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e35e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E35E4u;
    {
        const bool branch_taken_0x2e35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35e4) {
            ctx->pc = 0x2E35FCu;
            goto label_2e35fc;
        }
    }
    ctx->pc = 0x2E35ECu;
label_2e35ec:
    // 0x2e35ec: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2e35f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35f4: 0x0  nop
    ctx->pc = 0x2e35f4u;
    // NOP
    // 0x2e35f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e35f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2e35fc:
    // 0x2e35fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E35FCu;
    SET_GPR_U32(ctx, 31, 0x2E3604u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E35FCu, 0x2E3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3604u;
label_2e3604:
    // 0x2e3604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3608: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e3608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e360c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3610: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3610u;
    {
        const bool branch_taken_0x2e3610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3610) {
            ctx->pc = 0x2E3688u;
            goto label_2e3688;
        }
    }
    ctx->pc = 0x2E3618u;
    // 0x2e3618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e361c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E361Cu;
    {
        const bool branch_taken_0x2e361c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e361c) {
            ctx->pc = 0x2E3670u;
            goto label_2e3670;
        }
    }
    ctx->pc = 0x2E3624u;
    // 0x2e3624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3628: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3628u;
    {
        const bool branch_taken_0x2e3628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3628) {
            ctx->pc = 0x2E3658u;
            goto label_2e3658;
        }
    }
    ctx->pc = 0x2E3630u;
    // 0x2e3630: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3630u;
    {
        const bool branch_taken_0x2e3630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3630) {
            ctx->pc = 0x2E3640u;
            goto label_2e3640;
        }
    }
    ctx->pc = 0x2E3638u;
    // 0x2e3638: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3638u;
    {
        const bool branch_taken_0x2e3638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3638) {
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E3640u;
label_2e3640:
    // 0x2e3640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3648: 0x0  nop
    ctx->pc = 0x2e3648u;
    // NOP
    // 0x2e364c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e3650: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3650u;
    {
        const bool branch_taken_0x2e3650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3650) {
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E3658u;
label_2e3658:
    // 0x2e3658: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e3658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3660: 0x0  nop
    ctx->pc = 0x2e3660u;
    // NOP
    // 0x2e3664: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e3664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e3668: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3668u;
    {
        const bool branch_taken_0x2e3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3668) {
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E3670u;
label_2e3670:
    // 0x2e3670: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3678: 0x0  nop
    ctx->pc = 0x2e3678u;
    // NOP
    // 0x2e367c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e367cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e3680: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3680u;
    {
        const bool branch_taken_0x2e3680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3680) {
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E3688u;
label_2e3688:
    // 0x2e3688: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2e3688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2e368c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3690: 0x0  nop
    ctx->pc = 0x2e3690u;
    // NOP
    // 0x2e3694: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e3694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e3698:
    // 0x2e3698: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e369c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e36a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e36a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e36a4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e36a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e36a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e36ac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e36acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e36b0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2e36b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e36b4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2e36b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e36b8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2e36b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e36bc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2e36bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e36c0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2e36c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e36c4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2E36C4u;
    SET_GPR_U32(ctx, 31, 0x2E36CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E36C4u, 0x2E36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36CCu;
label_2e36cc:
    // 0x2e36cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e36ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e36d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e36d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e36d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e36d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e36d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36E0u;
}
