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

// Function: entry_0036cd04
// Address: 0x36cd04 - 0x36cd38
void entry_0036cd04_0x36cd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cd04_0x36cd04");
#endif

    ctx->pc = 0x36cd04u;

    // 0x36cd04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36cd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36cd08: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x36cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x36cd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36cd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cd10: 0x0  nop
    ctx->pc = 0x36cd10u;
    // NOP
    // 0x36cd14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x36cd14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x36cd18: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x36cd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36cd1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cd20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cd28: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cd2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36cd30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cd34: 0x0  nop
    ctx->pc = 0x36cd34u;
    // NOP
    ctx->pc = 0x36cd38u;
}
