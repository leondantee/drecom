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

// Function: entry_00321030
// Address: 0x321030 - 0x3210d0
void entry_00321030_0x321030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321030_0x321030");
#endif

    ctx->pc = 0x321030u;

    // 0x321030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321034: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x321034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x321038: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32103c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x32103cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321040: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x321040u;
    {
        const bool branch_taken_0x321040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321040) {
            ctx->pc = 0x321004u;
            return;
        }
    }
    ctx->pc = 0x321048u;
    // 0x321048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32104c: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x32104cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x321050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321054: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x321054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x321058: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32105c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x32105cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x321060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321064: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x321064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x321068: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32106c: 0xac600278  sw          $zero, 0x278($v1)
    ctx->pc = 0x32106cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 0));
    // 0x321070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321074: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x321074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321078: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x321078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x32107c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32107cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x321080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321084: 0x0  nop
    ctx->pc = 0x321084u;
    // NOP
    // 0x321088: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x321088u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32108c: 0x0  nop
    ctx->pc = 0x32108cu;
    // NOP
    // 0x321090: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x321090u;
    {
        const bool branch_taken_0x321090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x321090) {
            ctx->pc = 0x32110Cu;
            return;
        }
    }
    ctx->pc = 0x321098u;
    // 0x321098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32109c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x32109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3210a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3210a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3210a4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x3210a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3210a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3210a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3210ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3210acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3210b0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3210b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3210b4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3210B4u;
    {
        const bool branch_taken_0x3210b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3210b4) {
            ctx->pc = 0x3210D0u;
            return;
        }
    }
    ctx->pc = 0x3210BCu;
    // 0x3210bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3210bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3210c0: 0x0  nop
    ctx->pc = 0x3210c0u;
    // NOP
    // 0x3210c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3210c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3210c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3210C8u;
    {
        const bool branch_taken_0x3210c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3210c8) {
            ctx->pc = 0x3210ECu;
            return;
        }
    }
    ctx->pc = 0x3210D0u;
}
