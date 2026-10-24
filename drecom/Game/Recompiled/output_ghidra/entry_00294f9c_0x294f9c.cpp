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

// Function: entry_00294f9c
// Address: 0x294f9c - 0x294fd8
void entry_00294f9c_0x294f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294f9c_0x294f9c");
#endif

    switch (ctx->pc) {
        case 0x294fd0u: goto label_294fd0;
        default: break;
    }

    ctx->pc = 0x294f9cu;

    // 0x294f9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x294f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x294fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294fa4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x294fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x294fa8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x294fac: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x294facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x294fb0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x294fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x294fb4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x294fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x294fb8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x294fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x294fbc: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x294fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x294fc0: 0x24640130  addiu       $a0, $v1, 0x130
    ctx->pc = 0x294fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x294fc4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x294fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294fc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x294FC8u;
    SET_GPR_U32(ctx, 31, 0x294FD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x294FD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294FD0u) { return; }
    ctx->pc = 0x294FD0u;
label_294fd0:
    // 0x294fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x294fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x294fd4: 0x0  nop
    ctx->pc = 0x294fd4u;
    // NOP
    ctx->pc = 0x294fd8u;
}
