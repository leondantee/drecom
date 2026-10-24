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

// Function: entry_00285998
// Address: 0x285998 - 0x2859b4
void entry_00285998_0x285998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285998_0x285998");
#endif

    ctx->pc = 0x285998u;

    // 0x285998: 0x9226683f  lbu         $a2, 0x683F($s1)
    ctx->pc = 0x285998u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x28599c: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x28599cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2859a0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2859a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2859a4: 0x7963c  dsll32      $s2, $a3, 24
    ctx->pc = 0x2859a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2859a8: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2859a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x2859ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2859ACu;
    {
        const bool branch_taken_0x2859ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859ac) {
            ctx->pc = 0x2859C0u;
            return;
        }
    }
    ctx->pc = 0x2859B4u;
}
