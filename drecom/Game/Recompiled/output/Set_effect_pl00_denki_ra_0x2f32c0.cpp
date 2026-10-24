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

// Function: Set_effect_pl00_denki_ra
// Address: 0x2f32c0 - 0x2f34f4
void Set_effect_pl00_denki_ra_0x2f32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denki_ra_0x2f32c0");
#endif

    switch (ctx->pc) {
        case 0x2f32f8u: goto label_2f32f8;
        case 0x2f3314u: goto label_2f3314;
        case 0x2f3330u: goto label_2f3330;
        case 0x2f33b4u: goto label_2f33b4;
        case 0x2f3474u: goto label_2f3474;
        case 0x2f34e4u: goto label_2f34e4;
        default: break;
    }

    ctx->pc = 0x2f32c0u;

    // 0x2f32c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f32c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f32c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f32cc: 0x24428e00  addiu       $v0, $v0, -0x7200
    ctx->pc = 0x2f32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
    // 0x2f32d0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f32d4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f32d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E00u));
    // 0x2f32d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f32dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f32e0: 0x24428e10  addiu       $v0, $v0, -0x71F0
    ctx->pc = 0x2f32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938128));
    // 0x2f32e4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f32e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f32e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E10u));
    // 0x2f32ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f32ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f32f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F32F0u;
    SET_GPR_U32(ctx, 31, 0x2F32F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F32F0u, 0x2F32F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32F8u;
label_2f32f8:
    // 0x2f32f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f32fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f32fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3300: 0x0  nop
    ctx->pc = 0x2f3300u;
    // NOP
    // 0x2f3304: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3308: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f3308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f330c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F330Cu;
    SET_GPR_U32(ctx, 31, 0x2F3314u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F330Cu, 0x2F3314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3314u;
label_2f3314:
    // 0x2f3314: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f3314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f3318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f331c: 0x0  nop
    ctx->pc = 0x2f331cu;
    // NOP
    // 0x2f3320: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3324: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f3324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f3328: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3328u;
    SET_GPR_U32(ctx, 31, 0x2F3330u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3328u, 0x2F3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3330u;
label_2f3330:
    // 0x2f3330: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f3330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f3334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3338: 0x0  nop
    ctx->pc = 0x2f3338u;
    // NOP
    // 0x2f333c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f333cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3340: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2f3340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f3344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f334c: 0x0  nop
    ctx->pc = 0x2f334cu;
    // NOP
    // 0x2f3350: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f3350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f3354: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3358: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f335c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3360: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f336c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f336cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3374: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f337c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f337cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3384: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3388: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f338c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3390: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3394: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3398: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f339c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f33a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f33a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f33a4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F33A4u;
    {
        const bool branch_taken_0x2f33a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f33a4) {
            ctx->pc = 0x2F3474u;
            goto label_2f3474;
        }
    }
    ctx->pc = 0x2F33ACu;
    // 0x2f33ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F33ACu;
    SET_GPR_U32(ctx, 31, 0x2F33B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F33ACu, 0x2F33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33B4u;
label_2f33b4:
    // 0x2f33b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f33b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f33b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f33bc: 0x0  nop
    ctx->pc = 0x2f33bcu;
    // NOP
    // 0x2f33c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f33c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f33c4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f33c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f33c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f33cc: 0x0  nop
    ctx->pc = 0x2f33ccu;
    // NOP
    // 0x2f33d0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f33d0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f33d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f33d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f33d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f33dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f33e0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f33e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f33e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f33e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f33ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f33ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f33f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f33f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f33f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f33f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f33fc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3400: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3404: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3408: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f340c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3414: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3418: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f341c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3420: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3424: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f342c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f3430: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3430u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3434: 0x0  nop
    ctx->pc = 0x2f3434u;
    // NOP
    // 0x2f3438: 0x0  nop
    ctx->pc = 0x2f3438u;
    // NOP
    // 0x2f343c: 0x4010  mfhi        $t0
    ctx->pc = 0x2f343cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f3440: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3444: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3448: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f344c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3450: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3454: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f3454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3458: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f345c: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f345cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3460: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2f3460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3464: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2f3464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3468: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3468u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f346c: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F346Cu;
    SET_GPR_U32(ctx, 31, 0x2F3474u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F346Cu, 0x2F3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3474u;
label_2f3474:
    // 0x2f3474: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3478: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f3478u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f347c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f3480: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f3484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3488: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f348c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f348cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f3490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f3494: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f3494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f3498: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f349c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f349cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f34a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f34a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f34a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f34a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f34a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f34ac: 0x0  nop
    ctx->pc = 0x2f34acu;
    // NOP
    // 0x2f34b0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f34b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f34b4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2f34b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f34b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f34bc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2f34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2f34c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f34c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f34c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f34c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f34c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f34cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f34ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f34d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f34d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f34d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f34d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f34d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f34d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f34dc: 0xc086488  jal         func_219220
    ctx->pc = 0x2F34DCu;
    SET_GPR_U32(ctx, 31, 0x2F34E4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F34DCu, 0x2F34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34E4u;
label_2f34e4:
    // 0x2f34e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f34e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f34e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2f34e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F34ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F34ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F34F4u;
}
