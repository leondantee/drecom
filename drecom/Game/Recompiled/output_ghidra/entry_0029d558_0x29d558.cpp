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

// Function: entry_0029d558
// Address: 0x29d558 - 0x29d568
void entry_0029d558_0x29d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d558_0x29d558");
#endif

    ctx->pc = 0x29d558u;

    // 0x29d558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d55c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d560: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d564: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x29d568u;
}
