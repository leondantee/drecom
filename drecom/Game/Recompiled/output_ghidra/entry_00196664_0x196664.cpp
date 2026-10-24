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

// Function: entry_00196664
// Address: 0x196664 - 0x196698
void entry_00196664_0x196664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196664_0x196664");
#endif

    ctx->pc = 0x196664u;

    // 0x196664: 0x11a880  sll         $s5, $s1, 2
    ctx->pc = 0x196664u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x196668: 0x215b821  addu        $s7, $s0, $s5
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x19666c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x19666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196670: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x196670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x196674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196678: 0x0  nop
    ctx->pc = 0x196678u;
    // NOP
    // 0x19667c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19667Cu;
    {
        const bool branch_taken_0x19667c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19667c) {
            ctx->pc = 0x196698u;
            return;
        }
    }
    ctx->pc = 0x196684u;
    // 0x196684: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x196684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x196688: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19668c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x19668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196690: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x196690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x196694: 0xafb100ac  sw          $s1, 0xAC($sp)
    ctx->pc = 0x196694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
    ctx->pc = 0x196698u;
}
