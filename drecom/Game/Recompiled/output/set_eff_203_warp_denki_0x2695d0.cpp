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

// Function: set_eff_203_warp_denki
// Address: 0x2695d0 - 0x269a08
void set_eff_203_warp_denki_0x2695d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_203_warp_denki_0x2695d0");
#endif

    switch (ctx->pc) {
        case 0x26964cu: goto label_26964c;
        case 0x269668u: goto label_269668;
        case 0x269694u: goto label_269694;
        case 0x26974cu: goto label_26974c;
        case 0x2697e0u: goto label_2697e0;
        case 0x269870u: goto label_269870;
        case 0x269934u: goto label_269934;
        case 0x2699f8u: goto label_2699f8;
        default: break;
    }

    ctx->pc = 0x2695d0u;

    // 0x2695d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2695d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2695d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2695d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2695d8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2695d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x2695dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2695dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2695e0: 0x2463bdd0  addiu       $v1, $v1, -0x4230
    ctx->pc = 0x2695e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950352));
    // 0x2695e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2695e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2695e8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2695e8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38BDD0u));
    // 0x2695ec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2695ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2695f0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2695f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2695f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2695f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2695f8: 0x108300d0  beq         $a0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2695F8u;
    {
        const bool branch_taken_0x2695f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2695f8) {
            ctx->pc = 0x26993Cu;
            goto label_26993c;
        }
    }
    ctx->pc = 0x269600u;
    // 0x269600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269604: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x269604u;
    {
        const bool branch_taken_0x269604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x269604) {
            ctx->pc = 0x269878u;
            goto label_269878;
        }
    }
    ctx->pc = 0x26960Cu;
    // 0x26960c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26960Cu;
    {
        const bool branch_taken_0x26960c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26960c) {
            ctx->pc = 0x26961Cu;
            goto label_26961c;
        }
    }
    ctx->pc = 0x269614u;
    // 0x269614: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x269614u;
    {
        const bool branch_taken_0x269614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269614) {
            ctx->pc = 0x2699F8u;
            goto label_2699f8;
        }
    }
    ctx->pc = 0x26961Cu;
label_26961c:
    // 0x26961c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26961cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269620: 0x2442bde0  addiu       $v0, $v0, -0x4220
    ctx->pc = 0x269620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950368));
    // 0x269624: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x269624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x269628: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x269628u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BDE0u));
    // 0x26962c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26962cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269630: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x269630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269634: 0x2442bdf0  addiu       $v0, $v0, -0x4210
    ctx->pc = 0x269634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950384));
    // 0x269638: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x269638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26963c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x26963cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BDF0u));
    // 0x269640: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269640u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269644: 0xc067648  jal         func_19D920
    ctx->pc = 0x269644u;
    SET_GPR_U32(ctx, 31, 0x26964Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x269644u, 0x26964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26964Cu;
label_26964c:
    // 0x26964c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x269650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269654: 0x0  nop
    ctx->pc = 0x269654u;
    // NOP
    // 0x269658: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x269658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26965c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26965cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x269660: 0xc067648  jal         func_19D920
    ctx->pc = 0x269660u;
    SET_GPR_U32(ctx, 31, 0x269668u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x269660u, 0x269668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269668u;
label_269668:
    // 0x269668: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x269668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26966c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26966cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269670: 0x0  nop
    ctx->pc = 0x269670u;
    // NOP
    // 0x269674: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x269674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269678: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x269678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26967c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269680: 0x0  nop
    ctx->pc = 0x269680u;
    // NOP
    // 0x269684: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x269684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x269688: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x269688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26968c: 0xc067648  jal         func_19D920
    ctx->pc = 0x26968Cu;
    SET_GPR_U32(ctx, 31, 0x269694u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26968Cu, 0x269694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269694u;
label_269694:
    // 0x269694: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x269694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x269698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26969c: 0x0  nop
    ctx->pc = 0x26969cu;
    // NOP
    // 0x2696a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2696a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2696a4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2696a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2696a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2696a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2696ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2696acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2696b0: 0x0  nop
    ctx->pc = 0x2696b0u;
    // NOP
    // 0x2696b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2696b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2696b8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2696b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2696bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2696bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2696c0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2696c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2696c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2696c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2696c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2696c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2696cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2696ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2696d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2696d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2696d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2696d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2696d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2696d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2696dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2696dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2696e0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2696e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2696e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2696e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2696e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2696e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2696ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2696ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2696f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2696f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2696f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2696f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2696f8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2696f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2696fc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2696fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x269700: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x269700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269704: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269708: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x269708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x26970c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x269710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x269714: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x269714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x269718: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x269718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26971c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x26971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x269720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x269720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x269724: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x269724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269728: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26972c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26972cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269730: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x269730u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269734: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x269734u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269738: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x269738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26973c: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x26973cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269740: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x269740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269744: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x269744u;
    SET_GPR_U32(ctx, 31, 0x26974Cu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x269744u, 0x26974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26974Cu;
label_26974c:
    // 0x26974c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x26974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x269750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x269750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x269754: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x269754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x269758: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x269758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26975c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x26975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269760: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x269760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x269764: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x269764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269768: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x269768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26976c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269774: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x269774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x269778: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x26977c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x26977cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x269780: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x269780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269784: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x269784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26978c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x26978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x269790: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x269790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x269794: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x269794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269798: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x26979c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x26979cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2697a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2697a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2697a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2697a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2697a8: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x2697a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2697ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2697acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2697b0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2697b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2697b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2697b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2697b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2697b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2697bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2697bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2697c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2697c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2697c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2697c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2697c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2697c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2697cc: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2697ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2697d0: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2697d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2697d4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2697d4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2697d8: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2697D8u;
    SET_GPR_U32(ctx, 31, 0x2697E0u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2697D8u, 0x2697E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697E0u;
label_2697e0:
    // 0x2697e0: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2697e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2697e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2697e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2697e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2697e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2697ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2697ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2697f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2697f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2697f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2697f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2697f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2697f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2697fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2697fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269808: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x269808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x26980c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x26980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269810: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x269810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x269814: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x269814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269818: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x269818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26981c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269820: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x269820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x269824: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x269824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x269828: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x269828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26982c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x26982cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269830: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x269830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x269834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x269838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26983c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x269840: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x269840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x269844: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x269844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x269848: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x269848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26984c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26984cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269850: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x269850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269854: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x269854u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269858: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x269858u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26985c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x26985cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x269860: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x269860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269864: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x269864u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269868: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x269868u;
    SET_GPR_U32(ctx, 31, 0x269870u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x269868u, 0x269870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269870u;
label_269870:
    // 0x269870: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x269870u;
    {
        const bool branch_taken_0x269870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269870) {
            ctx->pc = 0x2699F8u;
            goto label_2699f8;
        }
    }
    ctx->pc = 0x269878u;
label_269878:
    // 0x269878: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x269878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26987c: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x26987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x269880: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x269884: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x269884u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BE00u));
    // 0x269888: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269888u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26988c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269890: 0x2442be10  addiu       $v0, $v0, -0x41F0
    ctx->pc = 0x269890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950416));
    // 0x269894: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269898: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x269898u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BE10u));
    // 0x26989c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26989cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2698a0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2698a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2698a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2698a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2698a8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2698ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2698acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2698b0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2698b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2698b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2698b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2698b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2698b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2698bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2698bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2698c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2698c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2698c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2698c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2698c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2698cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2698ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2698d0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2698d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2698d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2698d8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2698d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2698dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2698dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2698e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2698e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2698e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2698e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2698e8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2698e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2698ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2698ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2698f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2698f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2698f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2698f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2698f8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2698f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2698fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2698fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269900: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x269900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x269904: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x269904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x269908: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x269908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26990c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26990cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269910: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269914: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x269914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269918: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x269918u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26991c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26991cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269920: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x269920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x269924: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x269924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269928: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x269928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26992c: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x26992Cu;
    SET_GPR_U32(ctx, 31, 0x269934u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x26992Cu, 0x269934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269934u;
label_269934:
    // 0x269934: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x269934u;
    {
        const bool branch_taken_0x269934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269934) {
            ctx->pc = 0x2699F8u;
            goto label_2699f8;
        }
    }
    ctx->pc = 0x26993Cu;
label_26993c:
    // 0x26993c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269940: 0x2442be20  addiu       $v0, $v0, -0x41E0
    ctx->pc = 0x269940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950432));
    // 0x269944: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x269944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x269948: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x269948u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BE20u));
    // 0x26994c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26994cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269950: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x269950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269954: 0x2442be30  addiu       $v0, $v0, -0x41D0
    ctx->pc = 0x269954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950448));
    // 0x269958: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x269958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26995c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x26995cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BE30u));
    // 0x269960: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269964: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269968: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x269968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x26996c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x26996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269970: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x269970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26997c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x26997cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x269980: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269984: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x269988: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x269988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26998c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269994: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x269998: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x269998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26999c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2699a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2699a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2699a4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2699a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2699a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2699a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2699ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2699acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2699b0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2699b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2699b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2699b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2699b8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2699b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2699bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2699bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2699c0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2699c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2699c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2699c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2699c8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2699cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2699ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2699d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2699d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2699d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2699d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2699dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2699dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2699e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699e4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2699e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2699e8: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2699e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2699ec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2699f0: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2699F0u;
    SET_GPR_U32(ctx, 31, 0x2699F8u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2699F0u, 0x2699F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699F8u;
label_2699f8:
    // 0x2699f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2699f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2699fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2699fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269a00: 0x3e00008  jr          $ra
    ctx->pc = 0x269A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269A08u;
}
