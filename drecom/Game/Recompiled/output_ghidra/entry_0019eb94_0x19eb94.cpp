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

// Function: entry_0019eb94
// Address: 0x19eb94 - 0x19ebf4
void entry_0019eb94_0x19eb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb94_0x19eb94");
#endif

    ctx->pc = 0x19eb94u;

    // 0x19eb94: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb98: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb9c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19eba0: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x19eba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x19eba4: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EBA4u;
    {
        const bool branch_taken_0x19eba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eba4) {
            ctx->pc = 0x19EBF4u;
            return;
        }
    }
    ctx->pc = 0x19EBACu;
    // 0x19ebac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebb0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebb4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19ebb8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ebbc: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x19ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x19ebc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19ebc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19ebc4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ebc8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19ebc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19ebcc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EBCCu;
    {
        const bool branch_taken_0x19ebcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19ebcc) {
            ctx->pc = 0x19EBF4u;
            return;
        }
    }
    ctx->pc = 0x19EBD4u;
    // 0x19ebd4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebd8: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebdc: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x19ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x19ebe0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebe4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebe8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x19ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x19ebec: 0xc067e4c  jal         func_19F930
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F930u, 0x19EBECu, 0x19EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBF4u;
}
