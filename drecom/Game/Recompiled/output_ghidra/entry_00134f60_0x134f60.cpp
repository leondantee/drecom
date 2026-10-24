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

// Function: entry_00134f60
// Address: 0x134f60 - 0x134f7c
void entry_00134f60_0x134f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f60_0x134f60");
#endif

    ctx->pc = 0x134f60u;

    // 0x134f60: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x134f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x134f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134f68: 0x0  nop
    ctx->pc = 0x134f68u;
    // NOP
    // 0x134f6c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x134f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x134f70: 0x9202009d  lbu         $v0, 0x9D($s0)
    ctx->pc = 0x134f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 157)));
    // 0x134f74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134f78: 0xa202009d  sb          $v0, 0x9D($s0)
    ctx->pc = 0x134f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 157), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x134f7cu;
}
