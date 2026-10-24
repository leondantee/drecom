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

// Function: entry_002309d8
// Address: 0x2309d8 - 0x230a1c
void entry_002309d8_0x2309d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002309d8_0x2309d8");
#endif

    switch (ctx->pc) {
        case 0x2309f8u: goto label_2309f8;
        case 0x230a08u: goto label_230a08;
        case 0x230a14u: goto label_230a14;
        default: break;
    }

    ctx->pc = 0x2309d8u;

    // 0x2309d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2309e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2309e4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2309e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2309ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2309f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2309F0u;
    SET_GPR_U32(ctx, 31, 0x2309F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2309F0u, 0x2309F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309F8u;
label_2309f8:
    // 0x2309f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2309fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230a00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x230A00u;
    SET_GPR_U32(ctx, 31, 0x230A08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x230A00u, 0x230A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A08u;
label_230a08:
    // 0x230a08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x230A0Cu;
    SET_GPR_U32(ctx, 31, 0x230A14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x230A0Cu, 0x230A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A14u;
label_230a14:
    // 0x230a14: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x230A14u;
    {
        const bool branch_taken_0x230a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230a14) {
            ctx->pc = 0x230CA4u;
            return;
        }
    }
    ctx->pc = 0x230A1Cu;
}
