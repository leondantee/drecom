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

// Function: entry_00360fd4
// Address: 0x360fd4 - 0x360ff0
void entry_00360fd4_0x360fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360fd4_0x360fd4");
#endif

    ctx->pc = 0x360fd4u;

    // 0x360fd4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x360fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360fd8: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x360fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x360fdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x360FDCu;
    {
        const bool branch_taken_0x360fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360fdc) {
            ctx->pc = 0x360FF0u;
            return;
        }
    }
    ctx->pc = 0x360FE4u;
    // 0x360fe4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x360fe4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360fe8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x360FE8u;
    {
        const bool branch_taken_0x360fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360fe8) {
            ctx->pc = 0x361094u;
            return;
        }
    }
    ctx->pc = 0x360FF0u;
}
