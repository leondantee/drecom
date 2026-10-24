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

// Function: entry_00197fa4
// Address: 0x197fa4 - 0x197fdc
void entry_00197fa4_0x197fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197fa4_0x197fa4");
#endif

    switch (ctx->pc) {
        case 0x197fc4u: goto label_197fc4;
        default: break;
    }

    ctx->pc = 0x197fa4u;

    // 0x197fa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197fa8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197fac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x197facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x197fb0: 0x24065a1c  addiu       $a2, $zero, 0x5A1C
    ctx->pc = 0x197fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23068));
    // 0x197fb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197fb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x197fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x197fbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x197FBCu;
    SET_GPR_U32(ctx, 31, 0x197FC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x197FBCu, 0x197FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FC4u;
label_197fc4:
    // 0x197fc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197fc8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x197fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x197fcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197fd0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x197fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x197fd4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x197FD4u;
    {
        const bool branch_taken_0x197fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197fd4) {
            ctx->pc = 0x198074u;
            return;
        }
    }
    ctx->pc = 0x197FDCu;
}
