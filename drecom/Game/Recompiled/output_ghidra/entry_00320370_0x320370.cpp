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

// Function: entry_00320370
// Address: 0x320370 - 0x3203e8
void entry_00320370_0x320370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320370_0x320370");
#endif

    ctx->pc = 0x320370u;

    // 0x320370: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320374: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320378: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32037c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x32037cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320380: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320380u;
    {
        const bool branch_taken_0x320380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320380) {
            ctx->pc = 0x320334u;
            return;
        }
    }
    ctx->pc = 0x320388u;
    // 0x320388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32038c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x32038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320390: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x320390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x320394: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x320394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x320398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32039c: 0x0  nop
    ctx->pc = 0x32039cu;
    // NOP
    // 0x3203a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3203a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3203a4: 0x0  nop
    ctx->pc = 0x3203a4u;
    // NOP
    // 0x3203a8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x3203A8u;
    {
        const bool branch_taken_0x3203a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3203a8) {
            ctx->pc = 0x320424u;
            return;
        }
    }
    ctx->pc = 0x3203B0u;
    // 0x3203b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3203b4: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x3203b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3203b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3203bc: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x3203bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3203c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3203c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3203c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3203c8: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3203c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3203cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3203CCu;
    {
        const bool branch_taken_0x3203cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3203cc) {
            ctx->pc = 0x3203E8u;
            return;
        }
    }
    ctx->pc = 0x3203D4u;
    // 0x3203d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3203d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3203d8: 0x0  nop
    ctx->pc = 0x3203d8u;
    // NOP
    // 0x3203dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3203dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3203e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3203E0u;
    {
        const bool branch_taken_0x3203e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3203e0) {
            ctx->pc = 0x320404u;
            return;
        }
    }
    ctx->pc = 0x3203E8u;
}
