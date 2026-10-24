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

// Function: entry_0029a7ec
// Address: 0x29a7ec - 0x29a800
void entry_0029a7ec_0x29a7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a7ec_0x29a7ec");
#endif

    ctx->pc = 0x29a7ecu;

    // 0x29a7ec: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7f0: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x29a7f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29a7f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a7f8: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x29a7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a7fc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x29a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x29a800u;
}
