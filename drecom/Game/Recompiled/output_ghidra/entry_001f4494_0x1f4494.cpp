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

// Function: entry_001f4494
// Address: 0x1f4494 - 0x1f44b8
void entry_001f4494_0x1f4494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4494_0x1f4494");
#endif

    ctx->pc = 0x1f4494u;

    // 0x1f4494: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4498: 0xa4a0127a  sh          $zero, 0x127A($a1)
    ctx->pc = 0x1f4498u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f449c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44a0: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x1f44a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f44a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f44a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f44a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f44ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f44acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f44b4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f44b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1f44b8u;
}
