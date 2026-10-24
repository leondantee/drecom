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

// Function: entry_0034dc2c
// Address: 0x34dc2c - 0x34ddbc
void entry_0034dc2c_0x34dc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034dc2c_0x34dc2c");
#endif

    ctx->pc = 0x34dc2cu;

    // 0x34dc2c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc30: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x34dc30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x34dc34: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x34DC34u;
    {
        const bool branch_taken_0x34dc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dc34) {
            ctx->pc = 0x34DDBCu;
            return;
        }
    }
    ctx->pc = 0x34DC3Cu;
    // 0x34dc3c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc40: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc44: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x34dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dc48: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc50: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x34dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34dc54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34dc58: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc60: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x34dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc64: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x34dc64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34dc68: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc6c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34dc70: 0xc46101f4  lwc1        $f1, 0x1F4($v1)
    ctx->pc = 0x34dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dc74: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x34dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x34dc78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dc78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dc7c: 0x0  nop
    ctx->pc = 0x34dc7cu;
    // NOP
    // 0x34dc80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34dc80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34dc84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34dc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dc88: 0x0  nop
    ctx->pc = 0x34dc88u;
    // NOP
    // 0x34dc8c: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x34DC8Cu;
    {
        const bool branch_taken_0x34dc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34dc8c) {
            ctx->pc = 0x34DDBCu;
            return;
        }
    }
    ctx->pc = 0x34DC94u;
    // 0x34dc94: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc98: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34dc9c: 0x24703cf0  addiu       $s0, $v1, 0x3CF0
    ctx->pc = 0x34dc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x34dca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dca4: 0x0  nop
    ctx->pc = 0x34dca4u;
    // NOP
    // 0x34dca8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34dca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34dcac: 0x3c123f00  lui         $s2, 0x3F00
    ctx->pc = 0x34dcacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16128 << 16));
    // 0x34dcb0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x34dcb0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcb4: 0x0  nop
    ctx->pc = 0x34dcb4u;
    // NOP
    // 0x34dcb8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34dcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34dcbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dcbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcc0: 0x0  nop
    ctx->pc = 0x34dcc0u;
    // NOP
    // 0x34dcc4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34dcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34dcc8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dccc: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x34dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dcd0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34dcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34dcd4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dcd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dcdc: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x34dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dce0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34dce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34dce4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dce8: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x34dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dcec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x34dcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x34dcf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34dcf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcf8: 0x0  nop
    ctx->pc = 0x34dcf8u;
    // NOP
    // 0x34dcfc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x34dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x34dd00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd04: 0x0  nop
    ctx->pc = 0x34dd04u;
    // NOP
    // 0x34dd08: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x34dd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x34dd0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd10: 0x0  nop
    ctx->pc = 0x34dd10u;
    // NOP
    // 0x34dd14: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x34dd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x34dd18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd1c: 0x0  nop
    ctx->pc = 0x34dd1cu;
    // NOP
    // 0x34dd20: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x34dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x34dd24: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34dd2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x34dd30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34dd34: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34dd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dd3c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd48: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd4c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x34dd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x34dd50: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd54: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd5c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd60: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x34dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x34dd64: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd68: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd70: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd74: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x34dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x34dd78: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd7c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd88: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x34dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x34dd8c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x34dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x34dd90: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x34dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34dd94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd98: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x34dd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x34dda0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34dda4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dda4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dda8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ddac: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34ddb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ddb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddb8: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x34ddb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34ddbcu;
}
