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

// Function: entry_00205330
// Address: 0x205330 - 0x205350
void entry_00205330_0x205330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205330_0x205330");
#endif

    ctx->pc = 0x205330u;

    // 0x205330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205334: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x205334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x205338: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x205338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20533c: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x20533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x205340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205344: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x205348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20534c: 0x0  nop
    ctx->pc = 0x20534cu;
    // NOP
    ctx->pc = 0x205350u;
}
