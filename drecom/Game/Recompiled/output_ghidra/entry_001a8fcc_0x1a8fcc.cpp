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

// Function: entry_001a8fcc
// Address: 0x1a8fcc - 0x1a9034
void entry_001a8fcc_0x1a8fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8fcc_0x1a8fcc");
#endif

    switch (ctx->pc) {
        case 0x1a902cu: goto label_1a902c;
        default: break;
    }

    ctx->pc = 0x1a8fccu;

    // 0x1a8fcc: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a8fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8fd0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A8FD0u;
    {
        const bool branch_taken_0x1a8fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fd0) {
            ctx->pc = 0x1A9088u;
            return;
        }
    }
    ctx->pc = 0x1A8FD8u;
    // 0x1a8fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8fdc: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8FDCu;
    {
        const bool branch_taken_0x1a8fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8fdc) {
            ctx->pc = 0x1A9034u;
            return;
        }
    }
    ctx->pc = 0x1A8FE4u;
    // 0x1a8fe4: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a8fe8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a8fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8fec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a8ff0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a8ff4: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a8ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a8ff8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8ffc: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9000: 0x34423100  ori         $v0, $v0, 0x3100
    ctx->pc = 0x1a9000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12544);
    // 0x1a9004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9008: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a9008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a900c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9010: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a9014: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a9018: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a901c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9020: 0x2445f148  addiu       $a1, $v0, -0xEB8
    ctx->pc = 0x1a9020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x1a9024: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9024u;
    SET_GPR_U32(ctx, 31, 0x1A902Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9024u, 0x1A902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A902Cu;
label_1a902c:
    // 0x1a902c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A902Cu;
    {
        const bool branch_taken_0x1a902c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a902c) {
            ctx->pc = 0x1A90D0u;
            return;
        }
    }
    ctx->pc = 0x1A9034u;
}
