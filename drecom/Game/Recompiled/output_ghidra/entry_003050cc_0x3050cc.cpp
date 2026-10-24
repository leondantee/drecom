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

// Function: entry_003050cc
// Address: 0x3050cc - 0x30510c
void entry_003050cc_0x3050cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003050cc_0x3050cc");
#endif

    switch (ctx->pc) {
        case 0x3050ecu: goto label_3050ec;
        default: break;
    }

    ctx->pc = 0x3050ccu;

    // 0x3050cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3050d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3050d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3050d8: 0x24062811  addiu       $a2, $zero, 0x2811
    ctx->pc = 0x3050d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10257));
    // 0x3050dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3050dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3050e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3050e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3050e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3050E4u;
    SET_GPR_U32(ctx, 31, 0x3050ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3050E4u, 0x3050ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050ECu;
label_3050ec:
    // 0x3050ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3050ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050f0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3050f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3050f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3050f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050f8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3050f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x3050fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3050fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305100: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305108: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30510cu;
}
