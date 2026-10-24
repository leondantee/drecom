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

// Function: entry_00107ca8
// Address: 0x107ca8 - 0x107cb4
void entry_00107ca8_0x107ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ca8_0x107ca8");
#endif

    ctx->pc = 0x107ca8u;

    // 0x107ca8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x107ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107cac: 0x8c623dc0  lw          $v0, 0x3DC0($v1)
    ctx->pc = 0x107cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15808)));
    // 0x107cb0: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x107cb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    ctx->pc = 0x107cb4u;
}
