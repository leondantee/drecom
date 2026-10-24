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

// Function: entry_001e9ee4
// Address: 0x1e9ee4 - 0x1e9f2c
void entry_001e9ee4_0x1e9ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9ee4_0x1e9ee4");
#endif

    switch (ctx->pc) {
        case 0x1e9f24u: goto label_1e9f24;
        default: break;
    }

    ctx->pc = 0x1e9ee4u;

    // 0x1e9ee4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9ee8: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x1e9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9eec: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1e9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1e9ef0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e9ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1e9ef4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9EF4u;
    {
        const bool branch_taken_0x1e9ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ef4) {
            ctx->pc = 0x1E9F2Cu;
            return;
        }
    }
    ctx->pc = 0x1E9EFCu;
    // 0x1e9efc: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1e9efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f00: 0x84c210a6  lh          $v0, 0x10A6($a2)
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
    // 0x1e9f04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e9f08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9f08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9f0c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9F0Cu;
    {
        const bool branch_taken_0x1e9f0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e9f0c) {
            ctx->pc = 0x1E9F2Cu;
            return;
        }
    }
    ctx->pc = 0x1E9F14u;
    // 0x1e9f14: 0x8fb500d8  lw          $s5, 0xD8($sp)
    ctx->pc = 0x1e9f14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f18: 0x26a410b0  addiu       $a0, $s5, 0x10B0
    ctx->pc = 0x1e9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4272));
    // 0x1e9f1c: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x1E9F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F24u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x1E9F1Cu, 0x1E9F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F24u;
label_1e9f24:
    // 0x1e9f24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9F24u;
    {
        const bool branch_taken_0x1e9f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f24) {
            ctx->pc = 0x1E9F3Cu;
            return;
        }
    }
    ctx->pc = 0x1E9F2Cu;
}
