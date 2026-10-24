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

// Function: entry_001f2d58
// Address: 0x1f2d58 - 0x1f2d80
void entry_001f2d58_0x1f2d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2d58_0x1f2d58");
#endif

    ctx->pc = 0x1f2d58u;

    // 0x1f2d58: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2d60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d68: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2d6c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x1f2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1f2d70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d74: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1f2d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2d78: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1F2D78u;
    {
        const bool branch_taken_0x1f2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d78) {
            ctx->pc = 0x1F2F30u;
            return;
        }
    }
    ctx->pc = 0x1F2D80u;
}
