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
// Address: 0x14a4b8 - 0x14a550
void caseD_1_0x14a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14a4b8");
#endif

    switch (ctx->pc) {
        case 0x14a4dcu: goto label_14a4dc;
        case 0x14a4f4u: goto label_14a4f4;
        case 0x14a508u: goto label_14a508;
        case 0x14a51cu: goto label_14a51c;
        case 0x14a528u: goto label_14a528;
        default: break;
    }

    ctx->pc = 0x14a4b8u;

    // 0x14a4b8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x14a4bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14a4c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14a4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14a4c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4cc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a4d0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a4d4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14A4D4u;
    SET_GPR_U32(ctx, 31, 0x14A4DCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14A4D4u, 0x14A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4DCu;
label_14a4dc:
    // 0x14a4dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14a4e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a4e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a4ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14A4ECu;
    SET_GPR_U32(ctx, 31, 0x14A4F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A4ECu, 0x14A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4F4u;
label_14a4f4:
    // 0x14a4f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4fc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a500: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14A500u;
    SET_GPR_U32(ctx, 31, 0x14A508u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A500u, 0x14A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A508u;
label_14a508:
    // 0x14a508: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a50c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a514: 0xc057480  jal         func_15D200
    ctx->pc = 0x14A514u;
    SET_GPR_U32(ctx, 31, 0x14A51Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14A514u, 0x14A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A51Cu;
label_14a51c:
    // 0x14a51c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a520: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14A520u;
    SET_GPR_U32(ctx, 31, 0x14A528u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A520u, 0x14A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A528u;
label_14a528:
    // 0x14a528: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a52c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14a530: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x14A530u;
    {
        const bool branch_taken_0x14a530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a530) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A538u;
    // 0x14a538: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a53c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14a53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14a540: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a544: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14a544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a548: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x14A548u;
    {
        const bool branch_taken_0x14a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a548) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A550u;
}
