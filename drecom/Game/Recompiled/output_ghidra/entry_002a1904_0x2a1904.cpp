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

// Function: entry_002a1904
// Address: 0x2a1904 - 0x2a1938
void entry_002a1904_0x2a1904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1904_0x2a1904");
#endif

    switch (ctx->pc) {
        case 0x2a1930u: goto label_2a1930;
        default: break;
    }

    ctx->pc = 0x2a1904u;

    // 0x2a1904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1908: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a190c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a190cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1910: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1914: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1918: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a191c: 0x24060803  addiu       $a2, $zero, 0x803
    ctx->pc = 0x2a191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x2a1920: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1924: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1928: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1928u;
    SET_GPR_U32(ctx, 31, 0x2A1930u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1928u, 0x2A1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1930u;
label_2a1930:
    // 0x2a1930: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1934: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2a1934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2a1938u;
}
