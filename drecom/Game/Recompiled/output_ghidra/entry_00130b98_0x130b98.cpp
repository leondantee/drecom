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

// Function: entry_00130b98
// Address: 0x130b98 - 0x130c54
void entry_00130b98_0x130b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b98_0x130b98");
#endif

    switch (ctx->pc) {
        case 0x130bbcu: goto label_130bbc;
        case 0x130bd4u: goto label_130bd4;
        case 0x130be8u: goto label_130be8;
        case 0x130bf8u: goto label_130bf8;
        case 0x130c04u: goto label_130c04;
        default: break;
    }

    ctx->pc = 0x130b98u;

    // 0x130b98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ba0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x130ba4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130ba8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130bac: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x130bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130bb0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x130bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130bb4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130BB4u;
    SET_GPR_U32(ctx, 31, 0x130BBCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130BB4u, 0x130BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BBCu;
label_130bbc:
    // 0x130bbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bc0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130bc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130bcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x130BCCu;
    SET_GPR_U32(ctx, 31, 0x130BD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x130BCCu, 0x130BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BD4u;
label_130bd4:
    // 0x130bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bd8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bdc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x130bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130be0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130BE0u;
    SET_GPR_U32(ctx, 31, 0x130BE8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130BE0u, 0x130BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BE8u;
label_130be8:
    // 0x130be8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130bf0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130BF0u;
    SET_GPR_U32(ctx, 31, 0x130BF8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130BF0u, 0x130BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BF8u;
label_130bf8:
    // 0x130bf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bfc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x130BFCu;
    SET_GPR_U32(ctx, 31, 0x130C04u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130BFCu, 0x130C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C04u;
label_130c04:
    // 0x130c04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x130c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x130c0c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x130C0Cu;
    {
        const bool branch_taken_0x130c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c0c) {
            ctx->pc = 0x130C54u;
            return;
        }
    }
    ctx->pc = 0x130C14u;
    // 0x130c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130c20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130c2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c44: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x130c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x130c48: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x130c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x130c4c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x130C4Cu;
    {
        const bool branch_taken_0x130c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c4c) {
            ctx->pc = 0x130C54u;
            return;
        }
    }
    ctx->pc = 0x130C54u;
}
