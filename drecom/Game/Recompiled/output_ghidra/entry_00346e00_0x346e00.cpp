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

// Function: entry_00346e00
// Address: 0x346e00 - 0x346ed0
void entry_00346e00_0x346e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346e00_0x346e00");
#endif

    ctx->pc = 0x346e00u;

    // 0x346e00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346e04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346e08: 0x247039d0  addiu       $s0, $v1, 0x39D0
    ctx->pc = 0x346e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
    // 0x346e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e10: 0x0  nop
    ctx->pc = 0x346e10u;
    // NOP
    // 0x346e14: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e1c: 0x0  nop
    ctx->pc = 0x346e1cu;
    // NOP
    // 0x346e20: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e28: 0x0  nop
    ctx->pc = 0x346e28u;
    // NOP
    // 0x346e2c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x346e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x346e30: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x346e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e34: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x346e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x346e38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346e3c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x346e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e40: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x346e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x346e44: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x346e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e48: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x346e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x346e4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e50: 0x0  nop
    ctx->pc = 0x346e50u;
    // NOP
    // 0x346e54: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x346e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x346e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e5c: 0x0  nop
    ctx->pc = 0x346e5cu;
    // NOP
    // 0x346e60: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x346e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x346e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e68: 0x0  nop
    ctx->pc = 0x346e68u;
    // NOP
    // 0x346e6c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x346e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x346e70: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x346e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346e74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x346e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346e78: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x346e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x346e7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x346e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x346e80: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346e84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x346e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x346e88: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x346e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x346e8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x346e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e94: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346e98: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x346e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x346e9c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x346e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x346ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ea4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346ea8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x346ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x346eac: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x346eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x346eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346eb4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346eb8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x346eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x346ebc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346ec0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x346ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346ec4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x346ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346ec8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346ecc: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x346eccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x346ed0u;
}
