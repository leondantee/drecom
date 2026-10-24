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

// Function: entry_002e1cd8
// Address: 0x2e1cd8 - 0x2e1dd0
void entry_002e1cd8_0x2e1cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1cd8_0x2e1cd8");
#endif

    ctx->pc = 0x2e1cd8u;

    // 0x2e1cd8: 0x2a630007  slti        $v1, $s3, 0x7
    ctx->pc = 0x2e1cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e1cdc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E1CDCu;
    {
        const bool branch_taken_0x2e1cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cdc) {
            ctx->pc = 0x2E1C9Cu;
            return;
        }
    }
    ctx->pc = 0x2E1CE4u;
    // 0x2e1ce4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ce8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1cec: 0x24720e10  addiu       $s2, $v1, 0xE10
    ctx->pc = 0x2e1cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x2e1cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1cf4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1cf8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1cfc: 0x8c720058  lw          $s2, 0x58($v1)
    ctx->pc = 0x2e1cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d04: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1d04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1d08: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1d0c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1d10: 0x24720990  addiu       $s2, $v1, 0x990
    ctx->pc = 0x2e1d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2e1d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d18: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1d18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1d1c: 0xa22000ce  sb          $zero, 0xCE($s1)
    ctx->pc = 0x2e1d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d20: 0xa22000d5  sb          $zero, 0xD5($s1)
    ctx->pc = 0x2e1d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d24: 0xa22000d6  sb          $zero, 0xD6($s1)
    ctx->pc = 0x2e1d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d28: 0xa22000d8  sb          $zero, 0xD8($s1)
    ctx->pc = 0x2e1d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d2c: 0xa22000d9  sb          $zero, 0xD9($s1)
    ctx->pc = 0x2e1d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d34: 0x0  nop
    ctx->pc = 0x2e1d34u;
    // NOP
    // 0x2e1d38: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2e1d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2e1d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d40: 0x0  nop
    ctx->pc = 0x2e1d40u;
    // NOP
    // 0x2e1d44: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2e1d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2e1d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d4c: 0x0  nop
    ctx->pc = 0x2e1d4cu;
    // NOP
    // 0x2e1d50: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2e1d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2e1d54: 0xa22000db  sb          $zero, 0xDB($s1)
    ctx->pc = 0x2e1d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1d5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1d60: 0x24702d50  addiu       $s0, $v1, 0x2D50
    ctx->pc = 0x2e1d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x2e1d64: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2e1d64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1d68: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2e1d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2e1d6c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2e1d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d74: 0x0  nop
    ctx->pc = 0x2e1d74u;
    // NOP
    // 0x2e1d78: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e1d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e1d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d80: 0x0  nop
    ctx->pc = 0x2e1d80u;
    // NOP
    // 0x2e1d84: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e1d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d8c: 0x0  nop
    ctx->pc = 0x2e1d8cu;
    // NOP
    // 0x2e1d90: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2e1d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2e1d94: 0x922300dc  lbu         $v1, 0xDC($s1)
    ctx->pc = 0x2e1d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2e1d98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1da0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E1DA0u;
    {
        const bool branch_taken_0x2e1da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1da0) {
            ctx->pc = 0x2E1E78u;
            return;
        }
    }
    ctx->pc = 0x2E1DA8u;
    // 0x2e1da8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1dac: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E1DACu;
    {
        const bool branch_taken_0x2e1dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1dac) {
            ctx->pc = 0x2E1E40u;
            return;
        }
    }
    ctx->pc = 0x2E1DB4u;
    // 0x2e1db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1db8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1DB8u;
    {
        const bool branch_taken_0x2e1db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1db8) {
            ctx->pc = 0x2E1E08u;
            return;
        }
    }
    ctx->pc = 0x2E1DC0u;
    // 0x2e1dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1DC0u;
    {
        const bool branch_taken_0x2e1dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dc0) {
            ctx->pc = 0x2E1DD0u;
            return;
        }
    }
    ctx->pc = 0x2E1DC8u;
    // 0x2e1dc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E1DC8u;
    {
        const bool branch_taken_0x2e1dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dc8) {
            ctx->pc = 0x2E1E08u;
            return;
        }
    }
    ctx->pc = 0x2E1DD0u;
}
