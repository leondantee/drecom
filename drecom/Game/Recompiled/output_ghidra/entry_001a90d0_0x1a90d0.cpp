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

// Function: entry_001a90d0
// Address: 0x1a90d0 - 0x1a9180
void entry_001a90d0_0x1a90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a90d0_0x1a90d0");
#endif

    ctx->pc = 0x1a90d0u;

    // 0x1a90d0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1a90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x1a90d4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1a90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1a90d8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1a90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1a90dc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1a90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1a90e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a90e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a90e8: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a90ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a90f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a90f4: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1a90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x1a90f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a90fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9100: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9108: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a910c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1a910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1a9110: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a9114: 0x34431a06  ori         $v1, $v0, 0x1A06
    ctx->pc = 0x1a9114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a9118: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a911c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a911cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9124: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9128: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1a9128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1a912c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9130: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9130u;
    {
        const bool branch_taken_0x1a9130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9130) {
            ctx->pc = 0x1A9180u;
            return;
        }
    }
    ctx->pc = 0x1A9138u;
    // 0x1a9138: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a913c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9140: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1a9140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1a9144: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a9148: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a914c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9150: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9154: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a9158: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a9158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a915c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9160: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a9160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9164: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a916c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9170: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1a9174: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9178: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9178u;
    {
        const bool branch_taken_0x1a9178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9178) {
            ctx->pc = 0x1A91D0u;
            return;
        }
    }
    ctx->pc = 0x1A9180u;
}
