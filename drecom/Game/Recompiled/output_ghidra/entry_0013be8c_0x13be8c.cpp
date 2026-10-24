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

// Function: entry_0013be8c
// Address: 0x13be8c - 0x13beb8
void entry_0013be8c_0x13be8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013be8c_0x13be8c");
#endif

    ctx->pc = 0x13be8cu;

    // 0x13be8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13be8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13be90: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13be94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13be94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be98: 0x0  nop
    ctx->pc = 0x13be98u;
    // NOP
    // 0x13be9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13be9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bea4: 0x0  nop
    ctx->pc = 0x13bea4u;
    // NOP
    // 0x13bea8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13BEA8u;
    {
        const bool branch_taken_0x13bea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bea8) {
            ctx->pc = 0x13BEB8u;
            return;
        }
    }
    ctx->pc = 0x13BEB0u;
    // 0x13beb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13beb4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    ctx->pc = 0x13beb8u;
}
