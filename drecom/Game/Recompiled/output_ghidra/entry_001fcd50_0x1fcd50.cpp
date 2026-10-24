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

// Function: entry_001fcd50
// Address: 0x1fcd50 - 0x1fcdc8
void entry_001fcd50_0x1fcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcd50_0x1fcd50");
#endif

    ctx->pc = 0x1fcd50u;

    // 0x1fcd50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd54: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fcd54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fcd58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcd5c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fcd5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fcd60: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FCD60u;
    {
        const bool branch_taken_0x1fcd60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd60) {
            ctx->pc = 0x1FCD14u;
            return;
        }
    }
    ctx->pc = 0x1FCD68u;
    // 0x1fcd68: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd6c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fcd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcd70: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1fcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fcd74: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fcd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fcd78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcd78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcd7c: 0x0  nop
    ctx->pc = 0x1fcd7cu;
    // NOP
    // 0x1fcd80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fcd80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fcd84: 0x0  nop
    ctx->pc = 0x1fcd84u;
    // NOP
    // 0x1fcd88: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FCD88u;
    {
        const bool branch_taken_0x1fcd88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fcd88) {
            ctx->pc = 0x1FCE04u;
            return;
        }
    }
    ctx->pc = 0x1FCD90u;
    // 0x1fcd90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd94: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fcd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcd98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd9c: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fcd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcda0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fcda0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fcda4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcda8: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fcda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fcdac: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCDACu;
    {
        const bool branch_taken_0x1fcdac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fcdac) {
            ctx->pc = 0x1FCDC8u;
            return;
        }
    }
    ctx->pc = 0x1FCDB4u;
    // 0x1fcdb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcdb8: 0x0  nop
    ctx->pc = 0x1fcdb8u;
    // NOP
    // 0x1fcdbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fcdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fcdc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCDC0u;
    {
        const bool branch_taken_0x1fcdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdc0) {
            ctx->pc = 0x1FCDE4u;
            return;
        }
    }
    ctx->pc = 0x1FCDC8u;
}
