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

// Function: entry_00362924
// Address: 0x362924 - 0x362940
void entry_00362924_0x362924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362924_0x362924");
#endif

    ctx->pc = 0x362924u;

    // 0x362924: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362928: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x362928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x36292c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36292Cu;
    {
        const bool branch_taken_0x36292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36292c) {
            ctx->pc = 0x362940u;
            return;
        }
    }
    ctx->pc = 0x362934u;
    // 0x362934: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362934u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362938: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x362938u;
    {
        const bool branch_taken_0x362938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362938) {
            ctx->pc = 0x3629E4u;
            return;
        }
    }
    ctx->pc = 0x362940u;
}
