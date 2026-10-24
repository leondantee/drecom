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

// Function: entry_0019bfac
// Address: 0x19bfac - 0x19c00c
void entry_0019bfac_0x19bfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bfac_0x19bfac");
#endif

    switch (ctx->pc) {
        case 0x19c004u: goto label_19c004;
        default: break;
    }

    ctx->pc = 0x19bfacu;

    // 0x19bfac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfb0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bfb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bfb8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19bfbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BFBCu;
    {
        const bool branch_taken_0x19bfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfbc) {
            ctx->pc = 0x19C01Cu;
            return;
        }
    }
    ctx->pc = 0x19BFC4u;
    // 0x19bfc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfc8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bfc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bfcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bfd0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x19bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x19bfd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BFD4u;
    {
        const bool branch_taken_0x19bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfd4) {
            ctx->pc = 0x19C01Cu;
            return;
        }
    }
    ctx->pc = 0x19BFDCu;
    // 0x19bfdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfe0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bfe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bfe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bfe8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bfec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BFECu;
    {
        const bool branch_taken_0x19bfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfec) {
            ctx->pc = 0x19C00Cu;
            return;
        }
    }
    ctx->pc = 0x19BFF4u;
    // 0x19bff4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bff8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19bffc: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19BFFCu;
    SET_GPR_U32(ctx, 31, 0x19C004u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19BFFCu, 0x19C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C004u;
label_19c004:
    // 0x19c004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19C004u;
    {
        const bool branch_taken_0x19c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c004) {
            ctx->pc = 0x19C01Cu;
            return;
        }
    }
    ctx->pc = 0x19C00Cu;
}
