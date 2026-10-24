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

// Function: entry_0027c320
// Address: 0x27c320 - 0x27c350
void entry_0027c320_0x27c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c320_0x27c320");
#endif

    ctx->pc = 0x27c320u;

    // 0x27c320: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27c324: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x27c328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c32c: 0x0  nop
    ctx->pc = 0x27c32cu;
    // NOP
    // 0x27c330: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27c330u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27c334: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27c338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c33c: 0x0  nop
    ctx->pc = 0x27c33cu;
    // NOP
    // 0x27c340: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c344: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27c348: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27C348u;
    {
        const bool branch_taken_0x27c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c348) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C350u;
}
