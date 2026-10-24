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

// Function: entry_00147710
// Address: 0x147710 - 0x1477ac
void entry_00147710_0x147710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147710_0x147710");
#endif

    switch (ctx->pc) {
        case 0x147734u: goto label_147734;
        case 0x14774cu: goto label_14774c;
        case 0x147760u: goto label_147760;
        case 0x147778u: goto label_147778;
        case 0x147784u: goto label_147784;
        default: break;
    }

    ctx->pc = 0x147710u;

    // 0x147710: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x147710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
    // 0x147714: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x147714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x147718: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x147718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14771c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147720: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147724: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x147724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147728: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x147728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14772c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14772Cu;
    SET_GPR_U32(ctx, 31, 0x147734u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14772Cu, 0x147734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147734u;
label_147734:
    // 0x147734: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147738: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x147738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x14773c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147740: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147740u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147744: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x147744u;
    SET_GPR_U32(ctx, 31, 0x14774Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147744u, 0x14774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14774Cu;
label_14774c:
    // 0x14774c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147754: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x147754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147758: 0xc05cd58  jal         func_173560
    ctx->pc = 0x147758u;
    SET_GPR_U32(ctx, 31, 0x147760u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x147758u, 0x147760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147760u;
label_147760:
    // 0x147760: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147760u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147768: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14776c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x147770: 0xc057480  jal         func_15D200
    ctx->pc = 0x147770u;
    SET_GPR_U32(ctx, 31, 0x147778u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x147770u, 0x147778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147778u;
label_147778:
    // 0x147778: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14777c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14777Cu;
    SET_GPR_U32(ctx, 31, 0x147784u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14777Cu, 0x147784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147784u;
label_147784:
    // 0x147784: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147788: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x147788u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x14778c: 0x10a00255  beqz        $a1, . + 4 + (0x255 << 2)
    ctx->pc = 0x14778Cu;
    {
        const bool branch_taken_0x14778c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14778c) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147794u;
    // 0x147794: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147798: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14779c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1477a0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1477a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1477a4: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x1477A4u;
    {
        const bool branch_taken_0x1477a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477a4) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x1477ACu;
}
