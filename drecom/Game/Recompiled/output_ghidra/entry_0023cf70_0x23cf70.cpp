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

// Function: entry_0023cf70
// Address: 0x23cf70 - 0x23d0e0
void entry_0023cf70_0x23cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cf70_0x23cf70");
#endif

    switch (ctx->pc) {
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0d8u: goto label_23d0d8;
        default: break;
    }

    ctx->pc = 0x23cf70u;

    // 0x23cf70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cf74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf78: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23cf78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cf7c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x23cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x23cf80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf84: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x23cf84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cf88: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf90: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23cf94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23cf98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cf98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23cf9c: 0x34467800  ori         $a2, $v0, 0x7800
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x23cfa0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfa4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23cfa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cfac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23cfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23cfb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23CFB0u;
    SET_GPR_U32(ctx, 31, 0x23CFB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23CFB0u, 0x23CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFB8u;
label_23cfb8:
    // 0x23cfb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23cfb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cfbc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfc0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23cfc4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23cfc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23cfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23cfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cfd0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23cfd8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23cfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23cfdc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23cfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23cfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cfe4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfe8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23cfec: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x23cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x23cff0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23cff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23cff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cff8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cffc: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d000: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x23d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x23d004: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23d008: 0x34470fdb  ori         $a3, $v0, 0xFDB
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d00c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x23d00cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d010: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d014: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d018: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x23d018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x23d01c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x23d020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d028: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d02c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23d030: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23d034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d038: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d03c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d040: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23d040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23d044: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23d048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d04c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d050: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d054: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x23d054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x23d058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23d05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d060: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d064: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23d064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d068: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x23d068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x23d06c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d070: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x23d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23d074: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x23d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23d078: 0x348500b8  ori         $a1, $a0, 0xB8
    ctx->pc = 0x23d078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)184);
    // 0x23d07c: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x23d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x23d080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d084: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d088: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23d08c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d090: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d094: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x23d094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x23d098: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D098u;
    SET_GPR_U32(ctx, 31, 0x23D0A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D098u, 0x23D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0A0u;
label_23d0a0:
    // 0x23d0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23d0a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d0a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23D0A8u;
    {
        const bool branch_taken_0x23d0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0a8) {
            ctx->pc = 0x23D0E0u;
            return;
        }
    }
    ctx->pc = 0x23D0B0u;
    // 0x23d0b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d0b4: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x23d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x23d0b8: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x23d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x23d0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23d0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d0c0: 0x24050520  addiu       $a1, $zero, 0x520
    ctx->pc = 0x23d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x23d0c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x23d0c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x23d0c8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23d0cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d0ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d0d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23D0D0u;
    SET_GPR_U32(ctx, 31, 0x23D0D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23D0D0u, 0x23D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0D8u;
label_23d0d8:
    // 0x23d0d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23D0D8u;
    {
        const bool branch_taken_0x23d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0d8) {
            ctx->pc = 0x23D104u;
            return;
        }
    }
    ctx->pc = 0x23D0E0u;
}
