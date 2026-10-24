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

// Function: entry_00346ed0
// Address: 0x346ed0 - 0x346fbc
void entry_00346ed0_0x346ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346ed0_0x346ed0");
#endif

    ctx->pc = 0x346ed0u;

    // 0x346ed0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ed4: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346ed8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346edc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346edcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346ee0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x346ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x346ee4: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x346EE4u;
    {
        const bool branch_taken_0x346ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x346ee4) {
            ctx->pc = 0x346FBCu;
            return;
        }
    }
    ctx->pc = 0x346EECu;
    // 0x346eec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ef0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346ef4: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x346ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346efc: 0x0  nop
    ctx->pc = 0x346efcu;
    // NOP
    // 0x346f00: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f08: 0x0  nop
    ctx->pc = 0x346f08u;
    // NOP
    // 0x346f0c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f14: 0x0  nop
    ctx->pc = 0x346f14u;
    // NOP
    // 0x346f18: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x346f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x346f1c: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x346f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f20: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x346f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x346f24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346f28: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x346f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f2c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x346f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x346f30: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x346f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f34: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x346f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x346f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f3c: 0x0  nop
    ctx->pc = 0x346f3cu;
    // NOP
    // 0x346f40: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x346f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x346f44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f48: 0x0  nop
    ctx->pc = 0x346f48u;
    // NOP
    // 0x346f4c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x346f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x346f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f54: 0x0  nop
    ctx->pc = 0x346f54u;
    // NOP
    // 0x346f58: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x346f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x346f5c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x346f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x346f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346f64: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x346f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x346f68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x346f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x346f6c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x346f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x346f74: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x346f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x346f78: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x346f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f80: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f84: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x346f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x346f88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x346f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x346f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f90: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x346f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x346f98: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x346f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x346f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346fa0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346fa4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x346fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x346fa8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346fac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x346facu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346fb0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x346fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346fb4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346fb8: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x346fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x346fbcu;
}
