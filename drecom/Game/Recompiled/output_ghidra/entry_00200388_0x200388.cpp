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

// Function: entry_00200388
// Address: 0x200388 - 0x200404
void entry_00200388_0x200388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200388_0x200388");
#endif

    ctx->pc = 0x200388u;

    // 0x200388: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20038c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x20038cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x200390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x200390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x200398: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x200398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20039c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x20039Cu;
    {
        const bool branch_taken_0x20039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20039c) {
            ctx->pc = 0x20034Cu;
            return;
        }
    }
    ctx->pc = 0x2003A4u;
    // 0x2003a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003a8: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x2003a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2003ac: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x2003b0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2003b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2003b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2003b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2003b8: 0x0  nop
    ctx->pc = 0x2003b8u;
    // NOP
    // 0x2003bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2003bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2003c0: 0x0  nop
    ctx->pc = 0x2003c0u;
    // NOP
    // 0x2003c4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2003C4u;
    {
        const bool branch_taken_0x2003c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2003c4) {
            ctx->pc = 0x200440u;
            return;
        }
    }
    ctx->pc = 0x2003CCu;
    // 0x2003cc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003d0: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x2003d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2003d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003d8: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x2003d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2003dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2003dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2003e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003e4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x2003e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x2003e8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2003E8u;
    {
        const bool branch_taken_0x2003e8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2003e8) {
            ctx->pc = 0x200404u;
            return;
        }
    }
    ctx->pc = 0x2003F0u;
    // 0x2003f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2003f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2003f4: 0x0  nop
    ctx->pc = 0x2003f4u;
    // NOP
    // 0x2003f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2003f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2003fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2003FCu;
    {
        const bool branch_taken_0x2003fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003fc) {
            ctx->pc = 0x200420u;
            return;
        }
    }
    ctx->pc = 0x200404u;
}
