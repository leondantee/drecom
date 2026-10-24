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

// Function: entry_0030d10c
// Address: 0x30d10c - 0x30d144
void entry_0030d10c_0x30d10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d10c_0x30d10c");
#endif

    switch (ctx->pc) {
        case 0x30d12cu: goto label_30d12c;
        default: break;
    }

    ctx->pc = 0x30d10cu;

    // 0x30d10c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d110: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d114: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d118: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x30d118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x30d11c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d120: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d124: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D124u;
    SET_GPR_U32(ctx, 31, 0x30D12Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D124u, 0x30D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D12Cu;
label_30d12c:
    // 0x30d12c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d130: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30d130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d138: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30d138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d13c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d140: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30d140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30d144u;
}
