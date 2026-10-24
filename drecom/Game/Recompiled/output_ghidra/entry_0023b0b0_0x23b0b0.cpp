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

// Function: entry_0023b0b0
// Address: 0x23b0b0 - 0x23b0c0
void entry_0023b0b0_0x23b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b0b0_0x23b0b0");
#endif

    ctx->pc = 0x23b0b0u;

    // 0x23b0b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b0b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b0bc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x23b0c0u;
}
