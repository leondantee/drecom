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

// Function: entry_00329994
// Address: 0x329994 - 0x329a20
void entry_00329994_0x329994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329994_0x329994");
#endif

    ctx->pc = 0x329994u;

    // 0x329994: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329998: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32999c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3299a0: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3299A0u;
    {
        const bool branch_taken_0x3299a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3299a0) {
            ctx->pc = 0x329A2Cu;
            return;
        }
    }
    ctx->pc = 0x3299A8u;
    // 0x3299a8: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x3299a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3299ac: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3299acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3299b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3299b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3299b4: 0x0  nop
    ctx->pc = 0x3299b4u;
    // NOP
    // 0x3299b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3299b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3299bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3299bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3299c0: 0x0  nop
    ctx->pc = 0x3299c0u;
    // NOP
    // 0x3299c4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x3299C4u;
    {
        const bool branch_taken_0x3299c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3299c4) {
            ctx->pc = 0x329A20u;
            return;
        }
    }
    ctx->pc = 0x3299CCu;
    // 0x3299cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3299ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3299d0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x3299d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3299d4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3299d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3299d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3299d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3299dc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3299DCu;
    {
        const bool branch_taken_0x3299dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3299dc) {
            ctx->pc = 0x329A20u;
            return;
        }
    }
    ctx->pc = 0x3299E4u;
    // 0x3299e4: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x3299e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3299e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3299e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3299ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3299ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3299f0: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3299F0u;
    {
        const bool branch_taken_0x3299f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3299f0) {
            ctx->pc = 0x329A20u;
            return;
        }
    }
    ctx->pc = 0x3299F8u;
    // 0x3299f8: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x3299f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x3299fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3299fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329a00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329A00u;
    {
        const bool branch_taken_0x329a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a00) {
            ctx->pc = 0x329A20u;
            return;
        }
    }
    ctx->pc = 0x329A08u;
    // 0x329a08: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a10: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329a14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329a18: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329a1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329a20u;
}
