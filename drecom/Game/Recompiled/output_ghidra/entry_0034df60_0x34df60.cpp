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

// Function: entry_0034df60
// Address: 0x34df60 - 0x34e084
void entry_0034df60_0x34df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034df60_0x34df60");
#endif

    ctx->pc = 0x34df60u;

    // 0x34df60: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34df64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34df68: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34df68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34df6c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34df70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34df74: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x34df74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34df78: 0x3c043e19  lui         $a0, 0x3E19
    ctx->pc = 0x34df78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15897 << 16));
    // 0x34df7c: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x34df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x34df80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34df80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df84: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34df88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34df8c: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x34df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x34df90: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x34df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x34df94: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x34df94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34df98: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34df98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df9c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dfa4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x34dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x34dfa8: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x34dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x34dfac: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x34dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34dfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dfbc: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x34dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x34dfc0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x34dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x34dfc4: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x34dfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34dfc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dfc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfcc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfd0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34dfd4: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x34dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x34dfd8: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x34dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x34dfdc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34dfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34dfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfe4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dfec: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x34dfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x34dff0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x34dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x34dff4: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x34dff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34dff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dffc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e004: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x34e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x34e008: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x34e008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x34e00c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e010: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e014: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x34e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34e018: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x34e018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x34e01c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x34e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x34e020: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x34e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34e024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e028: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e02c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e030: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x34e030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x34e034: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x34e034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x34e038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e03c: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e040: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x34e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34e044: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x34e044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x34e048: 0x8fb300f8  lw          $s3, 0xF8($sp)
    ctx->pc = 0x34e048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e04c: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x34e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x34e050: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34e050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e054: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34e058: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e05c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e060: 0xa0650029  sb          $a1, 0x29($v1)
    ctx->pc = 0x34e060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x34e064: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x34e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x34e068: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34e068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34e06c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e06cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e070: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e074: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e078: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34e07c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x34E07Cu;
    {
        const bool branch_taken_0x34e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e07c) {
            ctx->pc = 0x34E5B8u;
            return;
        }
    }
    ctx->pc = 0x34E084u;
}
