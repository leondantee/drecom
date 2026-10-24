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

// Function: entry_00329bcc
// Address: 0x329bcc - 0x329c08
void entry_00329bcc_0x329bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329bcc_0x329bcc");
#endif

    ctx->pc = 0x329bccu;

    // 0x329bcc: 0x9203290f  lbu         $v1, 0x290F($s0)
    ctx->pc = 0x329bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10511)));
    // 0x329bd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329bd4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x329BD4u;
    {
        const bool branch_taken_0x329bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329bd4) {
            ctx->pc = 0x329C08u;
            return;
        }
    }
    ctx->pc = 0x329BDCu;
    // 0x329bdc: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329be0: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329be8: 0x0  nop
    ctx->pc = 0x329be8u;
    // NOP
    // 0x329bec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329bf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329bf4: 0x0  nop
    ctx->pc = 0x329bf4u;
    // NOP
    // 0x329bf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x329BF8u;
    {
        const bool branch_taken_0x329bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329bf8) {
            ctx->pc = 0x329C08u;
            return;
        }
    }
    ctx->pc = 0x329C00u;
    // 0x329c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329c04: 0xa203290f  sb          $v1, 0x290F($s0)
    ctx->pc = 0x329c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10511), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x329c08u;
}
