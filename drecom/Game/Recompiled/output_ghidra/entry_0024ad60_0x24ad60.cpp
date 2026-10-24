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

// Function: entry_0024ad60
// Address: 0x24ad60 - 0x24ae34
void entry_0024ad60_0x24ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ad60_0x24ad60");
#endif

    switch (ctx->pc) {
        case 0x24ad80u: goto label_24ad80;
        case 0x24adf0u: goto label_24adf0;
        default: break;
    }

    ctx->pc = 0x24ad60u;

    // 0x24ad60: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x24ad60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x24ad64: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x24ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x24ad68: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24ad68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ad6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24ad6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ad70: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x24ad74: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24ad74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ad78: 0xc040c00  jal         func_103000
    ctx->pc = 0x24AD78u;
    SET_GPR_U32(ctx, 31, 0x24AD80u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AD80u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AD80u) { return; }
    ctx->pc = 0x24AD80u;
label_24ad80:
    // 0x24ad80: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x24ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x24ad84: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad88: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x24ad88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x24ad8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ad90: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad94: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x24ad94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x24ad98: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24ad9c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x24ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ada0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ada4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24ada8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24adac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24adacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24adb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24adb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adb4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24adb8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24adb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24adbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24adbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24adc4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24adc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24adc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24adc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24add0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x24add0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x24add4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24add8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24add8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24addc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ade0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24ade4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24ade8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24ADE8u;
    SET_GPR_U32(ctx, 31, 0x24ADF0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24ADF0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24ADF0u) { return; }
    ctx->pc = 0x24ADF0u;
label_24adf0:
    // 0x24adf0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24adf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24adf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adf8: 0x0  nop
    ctx->pc = 0x24adf8u;
    // NOP
    // 0x24adfc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x24adfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x24ae00: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24ae04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ae04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae08: 0x0  nop
    ctx->pc = 0x24ae08u;
    // NOP
    // 0x24ae0c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24ae0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x24ae10: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24ae14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ae14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae18: 0x0  nop
    ctx->pc = 0x24ae18u;
    // NOP
    // 0x24ae1c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x24ae1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x24ae20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24ae20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ae24: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24ae24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ae28: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x24ae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24ae2c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24AE2Cu;
    SET_GPR_U32(ctx, 31, 0x24AE34u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AE34u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AE34u) { return; }
    ctx->pc = 0x24AE34u;
}
