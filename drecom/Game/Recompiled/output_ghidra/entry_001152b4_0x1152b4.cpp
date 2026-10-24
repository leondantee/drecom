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

// Function: entry_001152b4
// Address: 0x1152b4 - 0x1152c0
void entry_001152b4_0x1152b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001152b4_0x1152b4");
#endif

    ctx->pc = 0x1152b4u;

    // 0x1152b4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1152b8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1152b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1152bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1152bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1152c0u;
}
