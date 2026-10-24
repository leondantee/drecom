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

// Function: entry_0022cd8c
// Address: 0x22cd8c - 0x22cda0
void entry_0022cd8c_0x22cd8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cd8c_0x22cd8c");
#endif

    ctx->pc = 0x22cd8cu;

    // 0x22cd8c: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x22cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
    // 0x22cd90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cd9c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x22cda0u;
}
