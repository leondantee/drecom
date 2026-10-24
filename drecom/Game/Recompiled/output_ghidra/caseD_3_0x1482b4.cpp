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

// Function: caseD_3
// Address: 0x1482b4 - 0x148350
void caseD_3_0x1482b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1482b4");
#endif

    switch (ctx->pc) {
        case 0x1482ecu: goto label_1482ec;
        case 0x148304u: goto label_148304;
        case 0x148318u: goto label_148318;
        case 0x14832cu: goto label_14832c;
        case 0x148338u: goto label_148338;
        default: break;
    }

    ctx->pc = 0x1482b4u;

    // 0x1482b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1482b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1482bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1482bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1482c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1482c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1482c4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1482c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1482c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1482ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482d0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1482d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1482d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1482d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1482d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1482d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1482dc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1482dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1482e0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1482e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1482e4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1482E4u;
    SET_GPR_U32(ctx, 31, 0x1482ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1482E4u, 0x1482ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482ECu;
label_1482ec:
    // 0x1482ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1482f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1482f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1482f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1482fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1482FCu;
    SET_GPR_U32(ctx, 31, 0x148304u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1482FCu, 0x148304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148304u;
label_148304:
    // 0x148304: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14830c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14830cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148310: 0xc05cd58  jal         func_173560
    ctx->pc = 0x148310u;
    SET_GPR_U32(ctx, 31, 0x148318u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x148310u, 0x148318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148318u;
label_148318:
    // 0x148318: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14831c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148324: 0xc057480  jal         func_15D200
    ctx->pc = 0x148324u;
    SET_GPR_U32(ctx, 31, 0x14832Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x148324u, 0x14832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14832Cu;
label_14832c:
    // 0x14832c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148330: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x148330u;
    SET_GPR_U32(ctx, 31, 0x148338u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x148330u, 0x148338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148338u;
label_148338:
    // 0x148338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148338u;
    {
        const bool branch_taken_0x148338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148338) {
            ctx->pc = 0x148350u;
            return;
        }
    }
    ctx->pc = 0x148340u;
    // 0x148340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148344: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14834c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14834cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x148350u;
}
