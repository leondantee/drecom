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

// Function: entry_002549c0
// Address: 0x2549c0 - 0x2549e0
void entry_002549c0_0x2549c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002549c0_0x2549c0");
#endif

    ctx->pc = 0x2549c0u;

    // 0x2549c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2549c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2549c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2549c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2549cc: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2549d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2549d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2549d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2549d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2549d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2549d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2549dc: 0x0  nop
    ctx->pc = 0x2549dcu;
    // NOP
    ctx->pc = 0x2549e0u;
}
