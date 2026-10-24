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

// Function: entry_0018edbc
// Address: 0x18edbc - 0x18edec
void entry_0018edbc_0x18edbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018edbc_0x18edbc");
#endif

    ctx->pc = 0x18edbcu;

    // 0x18edbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edc0: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18edc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edc8: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x18edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18edcc: 0xac4302ac  sw          $v1, 0x2AC($v0)
    ctx->pc = 0x18edccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 684), GPR_U32(ctx, 3));
    // 0x18edd0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EDD0u;
    {
        const bool branch_taken_0x18edd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18edd0) {
            ctx->pc = 0x18EDECu;
            return;
        }
    }
    ctx->pc = 0x18EDD8u;
    // 0x18edd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eddc: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x18eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18ede0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x18ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x18ede4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EDE4u;
    {
        const bool branch_taken_0x18ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ede4) {
            ctx->pc = 0x18EE00u;
            return;
        }
    }
    ctx->pc = 0x18EDECu;
}
