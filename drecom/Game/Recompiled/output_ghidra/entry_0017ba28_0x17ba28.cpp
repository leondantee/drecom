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

// Function: entry_0017ba28
// Address: 0x17ba28 - 0x17ba60
void entry_0017ba28_0x17ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba28_0x17ba28");
#endif

    ctx->pc = 0x17ba28u;

    // 0x17ba28: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17ba2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ba30: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17ba34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ba38: 0x0  nop
    ctx->pc = 0x17ba38u;
    // NOP
    // 0x17ba3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17ba3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17ba40: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17ba44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ba48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ba4c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ba50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ba54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17ba58: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x17BA58u;
    {
        const bool branch_taken_0x17ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba58) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17BA60u;
}
