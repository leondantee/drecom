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

// Function: entry_00185e58
// Address: 0x185e58 - 0x185e5c
void entry_00185e58_0x185e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185e58_0x185e58");
#endif

    ctx->pc = 0x185e58u;

    // 0x185e58: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x185e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 724), bits); }
    ctx->pc = 0x185e5cu;
}
