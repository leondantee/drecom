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

// Function: entry_00276834
// Address: 0x276834 - 0x276848
void entry_00276834_0x276834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276834_0x276834");
#endif

    ctx->pc = 0x276834u;

    // 0x276834: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x276834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x276838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27683c: 0x0  nop
    ctx->pc = 0x27683cu;
    // NOP
    // 0x276840: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276844: 0x0  nop
    ctx->pc = 0x276844u;
    // NOP
    ctx->pc = 0x276848u;
}
