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

// Function: entry_00309fa0
// Address: 0x309fa0 - 0x30a084
void entry_00309fa0_0x309fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309fa0_0x309fa0");
#endif

    switch (ctx->pc) {
        case 0x309fccu: goto label_309fcc;
        case 0x309fe0u: goto label_309fe0;
        case 0x30a008u: goto label_30a008;
        case 0x30a01cu: goto label_30a01c;
        case 0x30a030u: goto label_30a030;
        case 0x30a040u: goto label_30a040;
        default: break;
    }

    ctx->pc = 0x309fa0u;

    // 0x309fa0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fa4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x309fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fa8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x309fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x309fac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309fb0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x309fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309fb4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x309fb8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x309fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309fbc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x309fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x309fc0: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x309fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x309fc4: 0xc05c848  jal         func_172120
    ctx->pc = 0x309FC4u;
    SET_GPR_U32(ctx, 31, 0x309FCCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x309FC4u, 0x309FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FCCu;
label_309fcc:
    // 0x309fcc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fd0: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x309fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309fd4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309fd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309fd8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x309FD8u;
    SET_GPR_U32(ctx, 31, 0x309FE0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x309FD8u, 0x309FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FE0u;
label_309fe0:
    // 0x309fe0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fe4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x309fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x309fe8: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x309fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fec: 0x86031278  lh          $v1, 0x1278($s0)
    ctx->pc = 0x309fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x309ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309ff4: 0xa6031278  sh          $v1, 0x1278($s0)
    ctx->pc = 0x309ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x309ff8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309ffc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a000: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30A000u;
    SET_GPR_U32(ctx, 31, 0x30A008u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30A000u, 0x30A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A008u;
label_30a008:
    // 0x30a008: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a008u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a00c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a010: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x30a010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30a014: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30A014u;
    SET_GPR_U32(ctx, 31, 0x30A01Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30A014u, 0x30A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A01Cu;
label_30a01c:
    // 0x30a01c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a01cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a020: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a028: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30A028u;
    SET_GPR_U32(ctx, 31, 0x30A030u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30A028u, 0x30A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A030u;
label_30a030:
    // 0x30a030: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a030u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a034: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a038: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30A038u;
    SET_GPR_U32(ctx, 31, 0x30A040u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30A038u, 0x30A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A040u;
label_30a040:
    // 0x30a040: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a040u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a044: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a048: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30a048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30a04c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30A04Cu;
    {
        const bool branch_taken_0x30a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a04c) {
            ctx->pc = 0x30A084u;
            return;
        }
    }
    ctx->pc = 0x30A054u;
    // 0x30a054: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a058: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a05c: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x30a05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x30a060: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30a064: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a068: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x30a068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x30a06c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a070: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30a070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a074: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a078: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30a078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a07c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a080: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30a080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30a084u;
}
