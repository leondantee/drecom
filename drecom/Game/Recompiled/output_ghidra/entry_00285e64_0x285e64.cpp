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

// Function: entry_00285e64
// Address: 0x285e64 - 0x285e80
void entry_00285e64_0x285e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285e64_0x285e64");
#endif

    ctx->pc = 0x285e64u;

    // 0x285e64: 0x9223683f  lbu         $v1, 0x683F($s1)
    ctx->pc = 0x285e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x285e68: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285e6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285e6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285e70: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x285e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285e74: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285e74u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x285e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285E78u;
    {
        const bool branch_taken_0x285e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e78) {
            ctx->pc = 0x285E8Cu;
            return;
        }
    }
    ctx->pc = 0x285E80u;
}
