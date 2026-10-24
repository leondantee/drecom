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

// Function: entry_001faf60
// Address: 0x1faf60 - 0x1fafd0
void entry_001faf60_0x1faf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faf60_0x1faf60");
#endif

    ctx->pc = 0x1faf60u;

    // 0x1faf60: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1faf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1faf64: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1faf64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf68: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FAF68u;
    {
        const bool branch_taken_0x1faf68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf68) {
            ctx->pc = 0x1FAF1Cu;
            return;
        }
    }
    ctx->pc = 0x1FAF70u;
    // 0x1faf70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faf74: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1faf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faf78: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1faf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1faf7c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1faf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1faf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1faf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faf84: 0x0  nop
    ctx->pc = 0x1faf84u;
    // NOP
    // 0x1faf88: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1faf88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1faf8c: 0x0  nop
    ctx->pc = 0x1faf8cu;
    // NOP
    // 0x1faf90: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FAF90u;
    {
        const bool branch_taken_0x1faf90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1faf90) {
            ctx->pc = 0x1FB00Cu;
            return;
        }
    }
    ctx->pc = 0x1FAF98u;
    // 0x1faf98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faf9c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1faf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fafa0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fafa4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fafa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fafa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fafac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fafb0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fafb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fafb4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAFB4u;
    {
        const bool branch_taken_0x1fafb4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fafb4) {
            ctx->pc = 0x1FAFD0u;
            return;
        }
    }
    ctx->pc = 0x1FAFBCu;
    // 0x1fafbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fafbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fafc0: 0x0  nop
    ctx->pc = 0x1fafc0u;
    // NOP
    // 0x1fafc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fafc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fafc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAFC8u;
    {
        const bool branch_taken_0x1fafc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fafc8) {
            ctx->pc = 0x1FAFECu;
            return;
        }
    }
    ctx->pc = 0x1FAFD0u;
}
