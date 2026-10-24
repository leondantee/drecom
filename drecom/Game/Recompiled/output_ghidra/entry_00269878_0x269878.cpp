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

// Function: entry_00269878
// Address: 0x269878 - 0x26993c
void entry_00269878_0x269878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269878_0x269878");
#endif

    switch (ctx->pc) {
        case 0x269934u: goto label_269934;
        default: break;
    }

    ctx->pc = 0x269878u;

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
            return;
        }
    }
    ctx->pc = 0x26993Cu;
}
