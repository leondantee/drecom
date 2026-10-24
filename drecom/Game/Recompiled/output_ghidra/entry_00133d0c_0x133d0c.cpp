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

// Function: entry_00133d0c
// Address: 0x133d0c - 0x133d50
void entry_00133d0c_0x133d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d0c_0x133d0c");
#endif

    switch (ctx->pc) {
        case 0x133d1cu: goto label_133d1c;
        case 0x133d28u: goto label_133d28;
        default: break;
    }

    ctx->pc = 0x133d0cu;

    // 0x133d0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133d14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133D14u;
    SET_GPR_U32(ctx, 31, 0x133D1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133D14u, 0x133D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D1Cu;
label_133d1c:
    // 0x133d1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d20: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133D20u;
    SET_GPR_U32(ctx, 31, 0x133D28u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133D20u, 0x133D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D28u;
label_133d28:
    // 0x133d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d2c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133d30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133D30u;
    {
        const bool branch_taken_0x133d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d30) {
            ctx->pc = 0x133D50u;
            return;
        }
    }
    ctx->pc = 0x133D38u;
    // 0x133d38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d3c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x133d40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133d44: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133d44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133d48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x133D48u;
    {
        const bool branch_taken_0x133d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d48) {
            ctx->pc = 0x133D80u;
            return;
        }
    }
    ctx->pc = 0x133D50u;
}
