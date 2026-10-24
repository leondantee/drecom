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

// Function: entry_0015db74
// Address: 0x15db74 - 0x15db94
void entry_0015db74_0x15db74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015db74_0x15db74");
#endif

    ctx->pc = 0x15db74u;

    // 0x15db74: 0x8e021408  lw          $v0, 0x1408($s0)
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15db78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15db78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15db7c: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15db80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15db84: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15db84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15db88: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x15db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db8c: 0xe6001400  swc1        $f0, 0x1400($s0)
    ctx->pc = 0x15db8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
    // 0x15db90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15db90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15db94u;
}
