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

// Function: entry_0035c294
// Address: 0x35c294 - 0x35c2b0
void entry_0035c294_0x35c294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c294_0x35c294");
#endif

    ctx->pc = 0x35c294u;

    // 0x35c294: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c298: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35c298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35c29c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C29Cu;
    {
        const bool branch_taken_0x35c29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c29c) {
            ctx->pc = 0x35C2B0u;
            return;
        }
    }
    ctx->pc = 0x35C2A4u;
    // 0x35c2a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35c2a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c2a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35C2A8u;
    {
        const bool branch_taken_0x35c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c2a8) {
            ctx->pc = 0x35C304u;
            return;
        }
    }
    ctx->pc = 0x35C2B0u;
}
