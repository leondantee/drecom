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

// Function: entry_0020057c
// Address: 0x20057c - 0x2005a4
void entry_0020057c_0x20057c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020057c_0x20057c");
#endif

    ctx->pc = 0x20057cu;

    // 0x20057c: 0x3c0542a4  lui         $a1, 0x42A4
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17060 << 16));
    // 0x200580: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x200580u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200584: 0x0  nop
    ctx->pc = 0x200584u;
    // NOP
    // 0x200588: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x200588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20058c: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x20058cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x200590: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x200590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200594: 0x0  nop
    ctx->pc = 0x200594u;
    // NOP
    // 0x200598: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200598u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20059c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2005a0: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2005a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    ctx->pc = 0x2005a4u;
}
