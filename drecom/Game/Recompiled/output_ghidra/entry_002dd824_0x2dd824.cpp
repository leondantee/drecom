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

// Function: entry_002dd824
// Address: 0x2dd824 - 0x2dd860
void entry_002dd824_0x2dd824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd824_0x2dd824");
#endif

    ctx->pc = 0x2dd824u;

    // 0x2dd824: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd828: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2dd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd82c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2dd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2dd830: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2dd830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2dd834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd838: 0x0  nop
    ctx->pc = 0x2dd838u;
    // NOP
    // 0x2dd83c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd83cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd840: 0x0  nop
    ctx->pc = 0x2dd840u;
    // NOP
    // 0x2dd844: 0x45000160  bc1f        . + 4 + (0x160 << 2)
    ctx->pc = 0x2DD844u;
    {
        const bool branch_taken_0x2dd844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd844) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD84Cu;
    // 0x2dd84c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2dd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd854: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dd854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd858: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x2DD858u;
    {
        const bool branch_taken_0x2dd858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd858) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD860u;
}
