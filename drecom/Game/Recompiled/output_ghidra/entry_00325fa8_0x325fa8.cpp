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

// Function: entry_00325fa8
// Address: 0x325fa8 - 0x325fe8
void entry_00325fa8_0x325fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325fa8_0x325fa8");
#endif

    switch (ctx->pc) {
        case 0x325fe0u: goto label_325fe0;
        default: break;
    }

    ctx->pc = 0x325fa8u;

    // 0x325fa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fac: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x325facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x325fb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x325fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x325fb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x325fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325fb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x325FB8u;
    {
        const bool branch_taken_0x325fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fb8) {
            ctx->pc = 0x325FE8u;
            return;
        }
    }
    ctx->pc = 0x325FC0u;
    // 0x325fc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fcc: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x325fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x325fd0: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x325fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x325fd4: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x325fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x325fd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x325FD8u;
    SET_GPR_U32(ctx, 31, 0x325FE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x325FD8u, 0x325FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FE0u;
label_325fe0:
    // 0x325fe0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x325FE0u;
    {
        const bool branch_taken_0x325fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fe0) {
            ctx->pc = 0x326008u;
            return;
        }
    }
    ctx->pc = 0x325FE8u;
}
