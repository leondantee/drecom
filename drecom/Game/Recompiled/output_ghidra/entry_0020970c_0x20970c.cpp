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

// Function: entry_0020970c
// Address: 0x20970c - 0x20971c
void entry_0020970c_0x20970c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020970c_0x20970c");
#endif

    ctx->pc = 0x20970cu;

    // 0x20970c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x209710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209714: 0x0  nop
    ctx->pc = 0x209714u;
    // NOP
    // 0x209718: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x209718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x20971cu;
}
