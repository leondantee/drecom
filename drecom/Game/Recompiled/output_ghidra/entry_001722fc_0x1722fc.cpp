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

// Function: entry_001722fc
// Address: 0x1722fc - 0x17230c
void entry_001722fc_0x1722fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001722fc_0x1722fc");
#endif

    ctx->pc = 0x1722fcu;

    // 0x1722fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1722fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x172300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172304: 0x0  nop
    ctx->pc = 0x172304u;
    // NOP
    // 0x172308: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x17230cu;
}
