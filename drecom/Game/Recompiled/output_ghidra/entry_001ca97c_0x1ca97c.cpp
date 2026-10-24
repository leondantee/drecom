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

// Function: entry_001ca97c
// Address: 0x1ca97c - 0x1ca9ac
void entry_001ca97c_0x1ca97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca97c_0x1ca97c");
#endif

    switch (ctx->pc) {
        case 0x1ca99cu: goto label_1ca99c;
        default: break;
    }

    ctx->pc = 0x1ca97cu;

    // 0x1ca97c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca980: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca984: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca988: 0x24061e6e  addiu       $a2, $zero, 0x1E6E
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7790));
    // 0x1ca98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca990: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca994: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA994u;
    SET_GPR_U32(ctx, 31, 0x1CA99Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA994u, 0x1CA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA99Cu;
label_1ca99c:
    // 0x1ca99c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ca99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1ca9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ca9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca9a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ca9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ca9acu;
}
