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

// Function: entry_001ecf74
// Address: 0x1ecf74 - 0x1ed044
void entry_001ecf74_0x1ecf74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecf74_0x1ecf74");
#endif

    switch (ctx->pc) {
        case 0x1ecfe0u: goto label_1ecfe0;
        case 0x1ed024u: goto label_1ed024;
        default: break;
    }

    ctx->pc = 0x1ecf74u;

    // 0x1ecf74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecf78: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ecf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ecf7c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1ecf80: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1ecf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ecf84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ecf84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ecf88: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x1ecf88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1ecf8c: 0x102000ba  beqz        $at, . + 4 + (0xBA << 2)
    ctx->pc = 0x1ECF8Cu;
    {
        const bool branch_taken_0x1ecf8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf8c) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ECF94u;
    // 0x1ecf94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecf98: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x1ecf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecf9c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1ecfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecfa4: 0x0  nop
    ctx->pc = 0x1ecfa4u;
    // NOP
    // 0x1ecfa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ecfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecfac: 0x0  nop
    ctx->pc = 0x1ecfacu;
    // NOP
    // 0x1ecfb0: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x1ECFB0u;
    {
        const bool branch_taken_0x1ecfb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecfb0) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ECFB8u;
    // 0x1ecfb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecfbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ecfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecfc0: 0x3c034006  lui         $v1, 0x4006
    ctx->pc = 0x1ecfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
    // 0x1ecfc4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1ecfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1ecfc8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ecfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecfcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ecfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ecfd0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1ecfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecfd4: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1ecfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1ecfd8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1ECFD8u;
    SET_GPR_U32(ctx, 31, 0x1ECFE0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1ECFD8u, 0x1ECFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFE0u;
label_1ecfe0:
    // 0x1ecfe0: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1ECFE0u;
    {
        const bool branch_taken_0x1ecfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfe0) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ECFE8u;
    // 0x1ecfe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecfec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ecfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecff0: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1ecff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1ecff4: 0x146000a0  bnez        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1ECFF4u;
    {
        const bool branch_taken_0x1ecff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecff4) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ECFFCu;
    // 0x1ecffc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x1ecffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1ed000: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed008: 0xa4430078  sh          $v1, 0x78($v0)
    ctx->pc = 0x1ed008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed00c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed010: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed014: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED014u;
    {
        const bool branch_taken_0x1ed014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed014) {
            ctx->pc = 0x1ED044u;
            return;
        }
    }
    ctx->pc = 0x1ED01Cu;
    // 0x1ed01c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED01Cu;
    SET_GPR_U32(ctx, 31, 0x1ED024u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED01Cu, 0x1ED024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED024u;
label_1ed024:
    // 0x1ed024: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed024u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed028: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed02c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1ed02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed030: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ed030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ed034: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed038: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ed03c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1ED03Cu;
    {
        const bool branch_taken_0x1ed03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed03c) {
            ctx->pc = 0x1ED14Cu;
            return;
        }
    }
    ctx->pc = 0x1ED044u;
}
