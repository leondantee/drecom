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

// Function: entry_00346fbc
// Address: 0x346fbc - 0x3470a8
void entry_00346fbc_0x346fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346fbc_0x346fbc");
#endif

    ctx->pc = 0x346fbcu;

    // 0x346fbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346fc0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346fc4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346fc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346fc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346fcc: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x346fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x346fd0: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x346FD0u;
    {
        const bool branch_taken_0x346fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x346fd0) {
            ctx->pc = 0x3470A8u;
            return;
        }
    }
    ctx->pc = 0x346FD8u;
    // 0x346fd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346fdc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346fe0: 0x247036b0  addiu       $s0, $v1, 0x36B0
    ctx->pc = 0x346fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x346fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346fe8: 0x0  nop
    ctx->pc = 0x346fe8u;
    // NOP
    // 0x346fec: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ff4: 0x0  nop
    ctx->pc = 0x346ff4u;
    // NOP
    // 0x346ff8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347000: 0x0  nop
    ctx->pc = 0x347000u;
    // NOP
    // 0x347004: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x347004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x347008: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x347008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34700c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x347010: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347014: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x347014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347018: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x347018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34701c: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x34701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347020: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x347020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x347024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347028: 0x0  nop
    ctx->pc = 0x347028u;
    // NOP
    // 0x34702c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x34702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x347030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347034: 0x0  nop
    ctx->pc = 0x347034u;
    // NOP
    // 0x347038: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x347038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x34703c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34703cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347040: 0x0  nop
    ctx->pc = 0x347040u;
    // NOP
    // 0x347044: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x347044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x347048: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x347048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34704c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347050: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347054: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347058: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34705c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34705cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347060: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x347060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x347064: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34706c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347070: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347074: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x347074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x347078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34707c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347080: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x347080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x347084: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x347084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x347088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34708c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347090: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x347090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x347094: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347098: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34709c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x34709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3470a0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3470a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3470a4: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x3470a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3470a8u;
}
