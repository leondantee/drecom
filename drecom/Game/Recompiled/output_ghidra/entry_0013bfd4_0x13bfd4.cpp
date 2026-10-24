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

// Function: entry_0013bfd4
// Address: 0x13bfd4 - 0x13c034
void entry_0013bfd4_0x13bfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bfd4_0x13bfd4");
#endif

    switch (ctx->pc) {
        case 0x13c02cu: goto label_13c02c;
        default: break;
    }

    ctx->pc = 0x13bfd4u;

    // 0x13bfd4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13bfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bfd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13bfdc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13bfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13bfe0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13BFE0u;
    {
        const bool branch_taken_0x13bfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfe0) {
            ctx->pc = 0x13C060u;
            return;
        }
    }
    ctx->pc = 0x13BFE8u;
    // 0x13bfe8: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x13bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13bfec: 0x1860001c  blez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13BFECu;
    {
        const bool branch_taken_0x13bfec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13bfec) {
            ctx->pc = 0x13C060u;
            return;
        }
    }
    ctx->pc = 0x13BFF4u;
    // 0x13bff4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13bff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bffc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13c000: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13C000u;
    {
        const bool branch_taken_0x13c000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c000) {
            ctx->pc = 0x13C034u;
            return;
        }
    }
    ctx->pc = 0x13C008u;
    // 0x13c008: 0x8e0600a4  lw          $a2, 0xA4($s0)
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13c00c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13c00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13c010: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13c014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c018: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c01c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x13c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13c020: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13c024: 0xc06aef8  jal         func_1ABBE0
    ctx->pc = 0x13C024u;
    SET_GPR_U32(ctx, 31, 0x13C02Cu);
    ctx->pc = 0x1ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBE0u, 0x13C024u, 0x13C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C02Cu;
label_13c02c:
    // 0x13c02c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C02Cu;
    {
        const bool branch_taken_0x13c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c02c) {
            ctx->pc = 0x13C060u;
            return;
        }
    }
    ctx->pc = 0x13C034u;
}
