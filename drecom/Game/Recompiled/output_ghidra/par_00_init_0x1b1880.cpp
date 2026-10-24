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

// Function: par_00_init
// Address: 0x1b1880 - 0x1b18ec
void par_00_init_0x1b1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("par_00_init_0x1b1880");
#endif

    switch (ctx->pc) {
        case 0x1b18c4u: goto label_1b18c4;
        case 0x1b18d8u: goto label_1b18d8;
        default: break;
    }

    ctx->pc = 0x1b1880u;

    // 0x1b1880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1884: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b1888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b188c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b188cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1b1890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b1894: 0x8c5002a0  lw          $s0, 0x2A0($v0)
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x1b1898: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b189c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b189cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b18a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b18a4: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1b18a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b18a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1b18ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b18acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b18b4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1b18b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b18b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b18bc: 0xc0c9c18  jal         func_327060
    ctx->pc = 0x1B18BCu;
    SET_GPR_U32(ctx, 31, 0x1B18C4u);
    ctx->pc = 0x327060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327060u, 0x1B18BCu, 0x1B18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18C4u;
label_1b18c4:
    // 0x1b18c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b18c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b18cc: 0x8c45029c  lw          $a1, 0x29C($v0)
    ctx->pc = 0x1b18ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x1b18d0: 0xc0c9c7c  jal         func_3271F0
    ctx->pc = 0x1B18D0u;
    SET_GPR_U32(ctx, 31, 0x1B18D8u);
    ctx->pc = 0x3271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3271F0u, 0x1B18D0u, 0x1B18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18D8u;
label_1b18d8:
    // 0x1b18d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b18d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b18dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b18dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b18e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b18e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B18E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B18E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B18ECu;
}
