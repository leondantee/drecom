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

// Function: entry_0034bb48
// Address: 0x34bb48 - 0x34bbc4
void entry_0034bb48_0x34bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bb48_0x34bb48");
#endif

    switch (ctx->pc) {
        case 0x34bb58u: goto label_34bb58;
        case 0x34bb7cu: goto label_34bb7c;
        case 0x34bb9cu: goto label_34bb9c;
        default: break;
    }

    ctx->pc = 0x34bb48u;

    // 0x34bb48: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34bb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34bb50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34BB50u;
    SET_GPR_U32(ctx, 31, 0x34BB58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34BB50u, 0x34BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB58u;
label_34bb58:
    // 0x34bb58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb60: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x34bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x34bb64: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x34bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x34bb68: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x34bb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34bb6c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x34bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34bb70: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x34bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34bb74: 0xc058f50  jal         func_163D40
    ctx->pc = 0x34BB74u;
    SET_GPR_U32(ctx, 31, 0x34BB7Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x34BB74u, 0x34BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB7Cu;
label_34bb7c:
    // 0x34bb7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb80: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34bb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34bb84: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x34bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x34bb88: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x34bb8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34bb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34bb90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb94: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x34BB94u;
    SET_GPR_U32(ctx, 31, 0x34BB9Cu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x34BB94u, 0x34BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB9Cu;
label_34bb9c:
    // 0x34bb9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bba0: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x34bba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x34bba4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x34bba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34bba8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34BBA8u;
    {
        const bool branch_taken_0x34bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bba8) {
            ctx->pc = 0x34BBC4u;
            return;
        }
    }
    ctx->pc = 0x34BBB0u;
    // 0x34bbb0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbb4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbb8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x34bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34bbbc: 0xc05cd58  jal         func_173560
    ctx->pc = 0x34BBBCu;
    SET_GPR_U32(ctx, 31, 0x34BBC4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x34BBBCu, 0x34BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBC4u;
}
