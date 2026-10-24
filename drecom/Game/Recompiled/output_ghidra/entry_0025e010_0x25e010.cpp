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

// Function: entry_0025e010
// Address: 0x25e010 - 0x25e084
void entry_0025e010_0x25e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e010_0x25e010");
#endif

    switch (ctx->pc) {
        case 0x25e07cu: goto label_25e07c;
        default: break;
    }

    ctx->pc = 0x25e010u;

    // 0x25e010: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25e014: 0x12c200e6  beq         $s6, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x25E014u;
    {
        const bool branch_taken_0x25e014 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e014) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25E01Cu;
    // 0x25e01c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25e020: 0x12c200e3  beq         $s6, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x25E020u;
    {
        const bool branch_taken_0x25e020 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e020) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25E028u;
    // 0x25e028: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e02c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e030: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25e034: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25E034u;
    {
        const bool branch_taken_0x25e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e034) {
            ctx->pc = 0x25E084u;
            return;
        }
    }
    ctx->pc = 0x25E03Cu;
    // 0x25e03c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e040: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25e040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e044: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e048: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e04c: 0x8c8504b0  lw          $a1, 0x4B0($a0)
    ctx->pc = 0x25e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x25e050: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x25e050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x25e054: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25e054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e058: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e05c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e060: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e064: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x25e064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e068: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25e068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25e06c: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x25e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x25e070: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25e074: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25E074u;
    SET_GPR_U32(ctx, 31, 0x25E07Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25E074u, 0x25E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E07Cu;
label_25e07c:
    // 0x25e07c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25E07Cu;
    {
        const bool branch_taken_0x25e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e07c) {
            ctx->pc = 0x25E0A0u;
            return;
        }
    }
    ctx->pc = 0x25E084u;
}
