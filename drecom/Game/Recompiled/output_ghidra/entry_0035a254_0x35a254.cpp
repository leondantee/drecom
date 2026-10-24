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

// Function: entry_0035a254
// Address: 0x35a254 - 0x35a270
void entry_0035a254_0x35a254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a254_0x35a254");
#endif

    ctx->pc = 0x35a254u;

    // 0x35a254: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a258: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35a258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35a25c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A25Cu;
    {
        const bool branch_taken_0x35a25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a25c) {
            ctx->pc = 0x35A270u;
            return;
        }
    }
    ctx->pc = 0x35A264u;
    // 0x35a264: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a264u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a268: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x35A268u;
    {
        const bool branch_taken_0x35a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a268) {
            ctx->pc = 0x35A314u;
            return;
        }
    }
    ctx->pc = 0x35A270u;
}
