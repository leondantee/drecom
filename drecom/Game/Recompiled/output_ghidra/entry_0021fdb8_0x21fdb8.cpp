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

// Function: entry_0021fdb8
// Address: 0x21fdb8 - 0x21fe24
void entry_0021fdb8_0x21fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fdb8_0x21fdb8");
#endif

    switch (ctx->pc) {
        case 0x21fdc4u: goto label_21fdc4;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fe08u: goto label_21fe08;
        default: break;
    }

    ctx->pc = 0x21fdb8u;

    // 0x21fdb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21fdbc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x21FDBCu;
    SET_GPR_U32(ctx, 31, 0x21FDC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x21FDBCu, 0x21FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDC4u;
label_21fdc4:
    // 0x21fdc4: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x21fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x21fdc8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fdcc: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21fdd0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x21fdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21fdd4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fdd8: 0x24478b6c  addiu       $a3, $v0, -0x7494
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937452));
    // 0x21fddc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x21FDDCu;
    SET_GPR_U32(ctx, 31, 0x21FDE4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x21FDDCu, 0x21FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDE4u;
label_21fde4:
    // 0x21fde4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x21fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x21fde8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fdec: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fdf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21fdf4: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x21fdf8: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21fdfc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x21fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x21fe00: 0xc059e1c  jal         func_167870
    ctx->pc = 0x21FE00u;
    SET_GPR_U32(ctx, 31, 0x21FE08u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x21FE00u, 0x21FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE08u;
label_21fe08:
    // 0x21fe08: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x21fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x21fe0c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x21fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x21fe10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE10u;
    {
        const bool branch_taken_0x21fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe10) {
            ctx->pc = 0x21FE24u;
            return;
        }
    }
    ctx->pc = 0x21FE18u;
    // 0x21fe18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x21fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21fe1c: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x21FE1Cu;
    {
        const bool branch_taken_0x21fe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe1c) {
            ctx->pc = 0x220438u;
            return;
        }
    }
    ctx->pc = 0x21FE24u;
}
