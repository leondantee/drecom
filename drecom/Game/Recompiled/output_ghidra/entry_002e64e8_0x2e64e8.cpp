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

// Function: entry_002e64e8
// Address: 0x2e64e8 - 0x2e64fc
void entry_002e64e8_0x2e64e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e64e8_0x2e64e8");
#endif

    ctx->pc = 0x2e64e8u;

    // 0x2e64e8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e64ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e64ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e64f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e64f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e64f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e64f8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x2e64fcu;
}
