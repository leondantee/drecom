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

// Function: entry_0019bbe8
// Address: 0x19bbe8 - 0x19bbfc
void entry_0019bbe8_0x19bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bbe8_0x19bbe8");
#endif

    ctx->pc = 0x19bbe8u;

    // 0x19bbe8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19bbec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bbf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bbf4: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19bbf8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19bbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x19bbfcu;
}
