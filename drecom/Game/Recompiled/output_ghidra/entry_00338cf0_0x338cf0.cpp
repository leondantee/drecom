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

// Function: entry_00338cf0
// Address: 0x338cf0 - 0x338d10
void entry_00338cf0_0x338cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338cf0_0x338cf0");
#endif

    ctx->pc = 0x338cf0u;

    // 0x338cf0: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x338cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338cf4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338cf8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338cfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338CFCu;
    {
        const bool branch_taken_0x338cfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338cfc) {
            ctx->pc = 0x338D10u;
            return;
        }
    }
    ctx->pc = 0x338D04u;
    // 0x338d04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x338d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338D08u;
    {
        const bool branch_taken_0x338d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d08) {
            ctx->pc = 0x338D14u;
            return;
        }
    }
    ctx->pc = 0x338D10u;
}
