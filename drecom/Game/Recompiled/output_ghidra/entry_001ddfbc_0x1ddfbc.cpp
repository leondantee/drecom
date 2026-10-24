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

// Function: entry_001ddfbc
// Address: 0x1ddfbc - 0x1ddfdc
void entry_001ddfbc_0x1ddfbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddfbc_0x1ddfbc");
#endif

    ctx->pc = 0x1ddfbcu;

    // 0x1ddfbc: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1ddfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1ddfc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfc4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDFC4u;
    {
        const bool branch_taken_0x1ddfc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ddfc4) {
            ctx->pc = 0x1DDFDCu;
            return;
        }
    }
    ctx->pc = 0x1DDFCCu;
    // 0x1ddfcc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1ddfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ddfd0: 0xa7a300f6  sh          $v1, 0xF6($sp)
    ctx->pc = 0x1ddfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddfd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDFD4u;
    {
        const bool branch_taken_0x1ddfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfd4) {
            ctx->pc = 0x1DDFE0u;
            return;
        }
    }
    ctx->pc = 0x1DDFDCu;
}
