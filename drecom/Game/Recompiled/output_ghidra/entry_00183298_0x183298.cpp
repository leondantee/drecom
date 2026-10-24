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

// Function: entry_00183298
// Address: 0x183298 - 0x1832c0
void entry_00183298_0x183298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183298_0x183298");
#endif

    ctx->pc = 0x183298u;

    // 0x183298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18329c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x18329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832a0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1832a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1832a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1832a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832a8: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1832ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1832ACu;
    {
        const bool branch_taken_0x1832ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1832ac) {
            ctx->pc = 0x1832C0u;
            return;
        }
    }
    ctx->pc = 0x1832B4u;
    // 0x1832b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1832b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1832b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832bc: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x1832bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    ctx->pc = 0x1832c0u;
}
