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

// Function: entry_00329b24
// Address: 0x329b24 - 0x329b74
void entry_00329b24_0x329b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329b24_0x329b24");
#endif

    ctx->pc = 0x329b24u;

    // 0x329b24: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329b28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329b30: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329B30u;
    {
        const bool branch_taken_0x329b30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329b30) {
            ctx->pc = 0x329B74u;
            return;
        }
    }
    ctx->pc = 0x329B38u;
    // 0x329b38: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329b3c: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329b3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b44: 0x0  nop
    ctx->pc = 0x329b44u;
    // NOP
    // 0x329b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329b50: 0x0  nop
    ctx->pc = 0x329b50u;
    // NOP
    // 0x329b54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x329B54u;
    {
        const bool branch_taken_0x329b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329b54) {
            ctx->pc = 0x329B74u;
            return;
        }
    }
    ctx->pc = 0x329B5Cu;
    // 0x329b5c: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329b60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x329b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x329b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b68: 0x0  nop
    ctx->pc = 0x329b68u;
    // NOP
    // 0x329b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x329b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x329b70: 0xe6002824  swc1        $f0, 0x2824($s0)
    ctx->pc = 0x329b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
    ctx->pc = 0x329b74u;
}
