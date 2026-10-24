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

// Function: caseD_1
// Address: 0x233078 - 0x23310c
void caseD_1_0x233078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x233078");
#endif

    switch (ctx->pc) {
        case 0x233098u: goto label_233098;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330dcu: goto label_2330dc;
        case 0x233108u: goto label_233108;
        default: break;
    }

    ctx->pc = 0x233078u;

    // 0x233078: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x233078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23307c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x23307cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x233080: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x233080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x233084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233088: 0x0  nop
    ctx->pc = 0x233088u;
    // NOP
    // 0x23308c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x23308cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x233090: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x233090u;
    SET_GPR_U32(ctx, 31, 0x233098u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x233090u, 0x233098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233098u;
label_233098:
    // 0x233098: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x233098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23309c: 0xe4a01290  swc1        $f0, 0x1290($a1)
    ctx->pc = 0x23309cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4752), bits); }
    // 0x2330a0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2330a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2330a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2330a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2330a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2330a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2330ac: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2330acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330b0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x2330b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330b4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2330b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2330b8: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x2330b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2330bc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2330BCu;
    SET_GPR_U32(ctx, 31, 0x2330C4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2330BCu, 0x2330C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330C4u;
label_2330c4:
    // 0x2330c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2330c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2330c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2330cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2330d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2330d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2330D4u;
    SET_GPR_U32(ctx, 31, 0x2330DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2330D4u, 0x2330DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330DCu;
label_2330dc:
    // 0x2330dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2330dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2330e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2330e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330e4: 0x94640a00  lhu         $a0, 0xA00($v1)
    ctx->pc = 0x2330e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x2330e8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2330e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2330ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2330ECu;
    {
        const bool branch_taken_0x2330ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2330ec) {
            ctx->pc = 0x23310Cu;
            return;
        }
    }
    ctx->pc = 0x2330F4u;
    // 0x2330f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2330f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2330f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2330fc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2330fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233100: 0xc05cd58  jal         func_173560
    ctx->pc = 0x233100u;
    SET_GPR_U32(ctx, 31, 0x233108u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x233100u, 0x233108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233108u;
label_233108:
    // 0x233108: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233108u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x23310cu;
}
