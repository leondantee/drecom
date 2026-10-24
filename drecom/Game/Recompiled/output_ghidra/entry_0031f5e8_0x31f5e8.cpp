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

// Function: entry_0031f5e8
// Address: 0x31f5e8 - 0x31f688
void entry_0031f5e8_0x31f5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f5e8_0x31f5e8");
#endif

    ctx->pc = 0x31f5e8u;

    // 0x31f5e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f5ec: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x31f5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x31f5f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f5f4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31f5f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31f5f8: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x31F5F8u;
    {
        const bool branch_taken_0x31f5f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5f8) {
            ctx->pc = 0x31F5BCu;
            return;
        }
    }
    ctx->pc = 0x31F600u;
    // 0x31f600: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f604: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x31f604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f608: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f60c: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x31f60cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f610: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f614: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x31f614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f618: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f61c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x31f61cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f620: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f624: 0xac600278  sw          $zero, 0x278($v1)
    ctx->pc = 0x31f624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 0));
    // 0x31f628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f62c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x31f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f630: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x31f630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x31f634: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x31f634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x31f638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f63c: 0x0  nop
    ctx->pc = 0x31f63cu;
    // NOP
    // 0x31f640: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31f640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f644: 0x0  nop
    ctx->pc = 0x31f644u;
    // NOP
    // 0x31f648: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x31F648u;
    {
        const bool branch_taken_0x31f648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f648) {
            ctx->pc = 0x31F6C4u;
            return;
        }
    }
    ctx->pc = 0x31F650u;
    // 0x31f650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f654: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x31f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f65c: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x31f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f660: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31f660u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31f664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f668: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f66c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F66Cu;
    {
        const bool branch_taken_0x31f66c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31f66c) {
            ctx->pc = 0x31F688u;
            return;
        }
    }
    ctx->pc = 0x31F674u;
    // 0x31f674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f678: 0x0  nop
    ctx->pc = 0x31f678u;
    // NOP
    // 0x31f67c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31F680u;
    {
        const bool branch_taken_0x31f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f680) {
            ctx->pc = 0x31F6A4u;
            return;
        }
    }
    ctx->pc = 0x31F688u;
}
