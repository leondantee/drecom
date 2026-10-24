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

// Function: Set_effect_pl00_denki_la
// Address: 0x2f3500 - 0x2f3734
void Set_effect_pl00_denki_la_0x2f3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denki_la_0x2f3500");
#endif

    switch (ctx->pc) {
        case 0x2f3538u: goto label_2f3538;
        case 0x2f3554u: goto label_2f3554;
        case 0x2f3570u: goto label_2f3570;
        case 0x2f35f4u: goto label_2f35f4;
        case 0x2f36b4u: goto label_2f36b4;
        case 0x2f3724u: goto label_2f3724;
        default: break;
    }

    ctx->pc = 0x2f3500u;

    // 0x2f3500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f3504: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f3504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f3508: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f350c: 0x24428e20  addiu       $v0, $v0, -0x71E0
    ctx->pc = 0x2f350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
    // 0x2f3510: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f3510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3514: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f3514u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E20u));
    // 0x2f3518: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f3518u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f351c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3520: 0x24428e30  addiu       $v0, $v0, -0x71D0
    ctx->pc = 0x2f3520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
    // 0x2f3524: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f3524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3528: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f3528u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E30u));
    // 0x2f352c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f352cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f3530: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3530u;
    SET_GPR_U32(ctx, 31, 0x2F3538u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3530u, 0x2F3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3538u;
label_2f3538:
    // 0x2f3538: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f353c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f353cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3540: 0x0  nop
    ctx->pc = 0x2f3540u;
    // NOP
    // 0x2f3544: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3548: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f3548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f354c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F354Cu;
    SET_GPR_U32(ctx, 31, 0x2F3554u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F354Cu, 0x2F3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3554u;
label_2f3554:
    // 0x2f3554: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f355c: 0x0  nop
    ctx->pc = 0x2f355cu;
    // NOP
    // 0x2f3560: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3564: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f3564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f3568: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3568u;
    SET_GPR_U32(ctx, 31, 0x2F3570u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3568u, 0x2F3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3570u;
label_2f3570:
    // 0x2f3570: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3578: 0x0  nop
    ctx->pc = 0x2f3578u;
    // NOP
    // 0x2f357c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f357cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3580: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2f3580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f3584: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f358c: 0x0  nop
    ctx->pc = 0x2f358cu;
    // NOP
    // 0x2f3590: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f3590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f3594: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3598: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f359c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f359cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f35a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f35a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f35a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f35a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f35ac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f35acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f35b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f35b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f35b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f35b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f35b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f35bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f35c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f35c4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f35c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f35c8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f35cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f35d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f35d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f35d4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f35d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f35d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f35d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f35dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f35e0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f35e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f35e4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F35E4u;
    {
        const bool branch_taken_0x2f35e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f35e4) {
            ctx->pc = 0x2F36B4u;
            goto label_2f36b4;
        }
    }
    ctx->pc = 0x2F35ECu;
    // 0x2f35ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F35ECu;
    SET_GPR_U32(ctx, 31, 0x2F35F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F35ECu, 0x2F35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35F4u;
label_2f35f4:
    // 0x2f35f4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f35f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f35f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f35fc: 0x0  nop
    ctx->pc = 0x2f35fcu;
    // NOP
    // 0x2f3600: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3604: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f3604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f3608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f360c: 0x0  nop
    ctx->pc = 0x2f360cu;
    // NOP
    // 0x2f3610: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3610u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3614: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3618: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f361c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3620: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3624: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3628: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f362c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3630: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f363c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f363cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3640: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3644: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3648: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f364c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3654: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3658: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f365c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3660: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3664: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f366c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f3670: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3670u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3674: 0x0  nop
    ctx->pc = 0x2f3674u;
    // NOP
    // 0x2f3678: 0x0  nop
    ctx->pc = 0x2f3678u;
    // NOP
    // 0x2f367c: 0x4010  mfhi        $t0
    ctx->pc = 0x2f367cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f3680: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3684: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3688: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f368c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3690: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2f3690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f3694: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f3694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3698: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f369c: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f369cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f36a0: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2f36a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f36a4: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2f36a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f36a8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f36a8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f36ac: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F36ACu;
    SET_GPR_U32(ctx, 31, 0x2F36B4u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F36ACu, 0x2F36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36B4u;
label_2f36b4:
    // 0x2f36b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f36b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f36b8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f36b8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f36bc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f36bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f36c0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f36c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f36c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f36c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f36c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f36cc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f36ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f36d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f36d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f36d4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f36d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f36d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f36d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f36dc: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f36dcu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f36e0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f36e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f36e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f36e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f36e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f36ec: 0x0  nop
    ctx->pc = 0x2f36ecu;
    // NOP
    // 0x2f36f0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f36f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f36f4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2f36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2f36f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f36f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f36fc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2f36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2f3700: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3708: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f3708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f370c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f370cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3710: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f3710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3714: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f3718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f371c: 0xc086488  jal         func_219220
    ctx->pc = 0x2F371Cu;
    SET_GPR_U32(ctx, 31, 0x2F3724u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F371Cu, 0x2F3724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3724u;
label_2f3724:
    // 0x2f3724: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f3724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3728: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2f3728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f372c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F372Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3734u;
}
