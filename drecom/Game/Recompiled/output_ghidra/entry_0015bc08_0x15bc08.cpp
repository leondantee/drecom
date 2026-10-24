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

// Function: entry_0015bc08
// Address: 0x15bc08 - 0x15bc50
void entry_0015bc08_0x15bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc08_0x15bc08");
#endif

    ctx->pc = 0x15bc08u;

    // 0x15bc08: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc0c: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x15bc10: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bc14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc18: 0x0  nop
    ctx->pc = 0x15bc18u;
    // NOP
    // 0x15bc1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15bc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bc20: 0x0  nop
    ctx->pc = 0x15bc20u;
    // NOP
    // 0x15bc24: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15BC24u;
    {
        const bool branch_taken_0x15bc24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bc24) {
            ctx->pc = 0x15BC50u;
            return;
        }
    }
    ctx->pc = 0x15BC2Cu;
    // 0x15bc2c: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc30: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x15bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x15bc34: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bc38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc3c: 0x0  nop
    ctx->pc = 0x15bc3cu;
    // NOP
    // 0x15bc40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15bc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15bc44: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x15bc48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BC48u;
    {
        const bool branch_taken_0x15bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc48) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BC50u;
}
