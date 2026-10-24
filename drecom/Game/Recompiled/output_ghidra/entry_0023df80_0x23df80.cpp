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

// Function: entry_0023df80
// Address: 0x23df80 - 0x23e064
void entry_0023df80_0x23df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023df80_0x23df80");
#endif

    switch (ctx->pc) {
        case 0x23dfc8u: goto label_23dfc8;
        case 0x23dfecu: goto label_23dfec;
        case 0x23e02cu: goto label_23e02c;
        default: break;
    }

    ctx->pc = 0x23df80u;

    // 0x23df80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df84: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23df84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23df88: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x23DF88u;
    {
        const bool branch_taken_0x23df88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df88) {
            ctx->pc = 0x23E094u;
            return;
        }
    }
    ctx->pc = 0x23DF90u;
    // 0x23df90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23df94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23df98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23df9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dfa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfa4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23dfa8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23dfacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23dfb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfb4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23dfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23dfb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23dfc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DFC0u;
    SET_GPR_U32(ctx, 31, 0x23DFC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DFC0u, 0x23DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFC8u;
label_23dfc8:
    // 0x23dfc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23dfcc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23dfd0: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x23dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x23dfd4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23dfd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23dfd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23dfdc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfe0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23dfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23dfe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DFE4u;
    SET_GPR_U32(ctx, 31, 0x23DFECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DFE4u, 0x23DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFECu;
label_23dfec:
    // 0x23dfec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23dff0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23dff4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x23dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23dff8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23dff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23dffc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23dffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23e000: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e008: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x23e008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e00c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e010: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e014: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x23e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23e018: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x23e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x23e01c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e020: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x23e020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x23e024: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E024u;
    SET_GPR_U32(ctx, 31, 0x23E02Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E024u, 0x23E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E02Cu;
label_23e02c:
    // 0x23e02c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e030: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x23e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23e034: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E064u;
            return;
        }
    }
    ctx->pc = 0x23E03Cu;
    // 0x23e03c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e040: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e044: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23e048: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23e048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23e04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e050: 0x0  nop
    ctx->pc = 0x23e050u;
    // NOP
    // 0x23e054: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e058: 0x0  nop
    ctx->pc = 0x23e058u;
    // NOP
    // 0x23e05c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23E05Cu;
    {
        const bool branch_taken_0x23e05c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e05c) {
            ctx->pc = 0x23E094u;
            return;
        }
    }
    ctx->pc = 0x23E064u;
}
