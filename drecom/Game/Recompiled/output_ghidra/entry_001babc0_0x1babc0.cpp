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

// Function: entry_001babc0
// Address: 0x1babc0 - 0x1bac14
void entry_001babc0_0x1babc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001babc0_0x1babc0");
#endif

    switch (ctx->pc) {
        case 0x1babd4u: goto label_1babd4;
        case 0x1babfcu: goto label_1babfc;
        default: break;
    }

    ctx->pc = 0x1babc0u;

    // 0x1babc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1babc4: 0x247212c0  addiu       $s2, $v1, 0x12C0
    ctx->pc = 0x1babc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1babc8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1babc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1babcc: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1BABCCu;
    SET_GPR_U32(ctx, 31, 0x1BABD4u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BABCCu, 0x1BABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABD4u;
label_1babd4:
    // 0x1babd4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BABD4u;
    {
        const bool branch_taken_0x1babd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1babd4) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BABDCu;
    // 0x1babdc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1babdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1babe0: 0x90c509db  lbu         $a1, 0x9DB($a2)
    ctx->pc = 0x1babe0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2523)));
    // 0x1babe4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1babe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1babe8: 0x30650010  andi        $a1, $v1, 0x10
    ctx->pc = 0x1babe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1babec: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BABECu;
    {
        const bool branch_taken_0x1babec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babec) {
            ctx->pc = 0x1BAC14u;
            return;
        }
    }
    ctx->pc = 0x1BABF4u;
    // 0x1babf4: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BABF4u;
    SET_GPR_U32(ctx, 31, 0x1BABFCu);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BABF4u, 0x1BABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABFCu;
label_1babfc:
    // 0x1babfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BABFCu;
    {
        const bool branch_taken_0x1babfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babfc) {
            ctx->pc = 0x1BAC14u;
            return;
        }
    }
    ctx->pc = 0x1BAC04u;
    // 0x1bac04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac08: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1bac08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BAC0Cu;
    {
        const bool branch_taken_0x1bac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac0c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BAC14u;
}
