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

// Function: entry_002e6808
// Address: 0x2e6808 - 0x2e681c
void entry_002e6808_0x2e6808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6808_0x2e6808");
#endif

    ctx->pc = 0x2e6808u;

    // 0x2e6808: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e6808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e680c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6818: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x2e681cu;
}
