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

// Function: entry_0012bcd0
// Address: 0x12bcd0 - 0x12bd84
void entry_0012bcd0_0x12bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bcd0_0x12bcd0");
#endif

    switch (ctx->pc) {
        case 0x12bcf4u: goto label_12bcf4;
        case 0x12bd0cu: goto label_12bd0c;
        case 0x12bd24u: goto label_12bd24;
        case 0x12bd40u: goto label_12bd40;
        case 0x12bd50u: goto label_12bd50;
        case 0x12bd5cu: goto label_12bd5c;
        default: break;
    }

    ctx->pc = 0x12bcd0u;

    // 0x12bcd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcd8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x12bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x12bcdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12bce0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12bce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12bce4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12bce8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12bcec: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12BCECu;
    SET_GPR_U32(ctx, 31, 0x12BCF4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12BCECu, 0x12BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCF4u;
label_12bcf4:
    // 0x12bcf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcf8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12bcfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12bd00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bd04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12BD04u;
    SET_GPR_U32(ctx, 31, 0x12BD0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12BD04u, 0x12BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD0Cu;
label_12bd0c:
    // 0x12bd0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd10: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12bd14: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12bd18: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12bd1c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12BD1Cu;
    SET_GPR_U32(ctx, 31, 0x12BD24u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12BD1Cu, 0x12BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD24u;
label_12bd24:
    // 0x12bd24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd28: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12bd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12bd2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd34: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12bd38: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12BD38u;
    SET_GPR_U32(ctx, 31, 0x12BD40u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12BD38u, 0x12BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD40u;
label_12bd40:
    // 0x12bd40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12bd44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bd48: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12BD48u;
    SET_GPR_U32(ctx, 31, 0x12BD50u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12BD48u, 0x12BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD50u;
label_12bd50:
    // 0x12bd50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd54: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12BD54u;
    SET_GPR_U32(ctx, 31, 0x12BD5Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12BD54u, 0x12BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD5Cu;
label_12bd5c:
    // 0x12bd5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd60: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12bd60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12bd64: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x12BD64u;
    {
        const bool branch_taken_0x12bd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd64) {
            ctx->pc = 0x12BE84u;
            return;
        }
    }
    ctx->pc = 0x12BD6Cu;
    // 0x12bd6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd70: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12bd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12bd74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bd78: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12bd7c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x12BD7Cu;
    {
        const bool branch_taken_0x12bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd7c) {
            ctx->pc = 0x12BE84u;
            return;
        }
    }
    ctx->pc = 0x12BD84u;
}
