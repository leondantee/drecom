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

// Function: entry_00338ee0
// Address: 0x338ee0 - 0x338f00
void entry_00338ee0_0x338ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338ee0_0x338ee0");
#endif

    ctx->pc = 0x338ee0u;

    // 0x338ee0: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x338ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338ee4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338ee8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338eec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338EECu;
    {
        const bool branch_taken_0x338eec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338eec) {
            ctx->pc = 0x338F00u;
            return;
        }
    }
    ctx->pc = 0x338EF4u;
    // 0x338ef4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x338ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338EF8u;
    {
        const bool branch_taken_0x338ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ef8) {
            ctx->pc = 0x338F04u;
            return;
        }
    }
    ctx->pc = 0x338F00u;
}
