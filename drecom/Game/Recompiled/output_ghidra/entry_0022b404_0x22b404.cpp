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

// Function: entry_0022b404
// Address: 0x22b404 - 0x22b418
void entry_0022b404_0x22b404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b404_0x22b404");
#endif

    ctx->pc = 0x22b404u;

    // 0x22b404: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22b408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b40c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b410: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22b410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b414: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x22b414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    ctx->pc = 0x22b418u;
}
