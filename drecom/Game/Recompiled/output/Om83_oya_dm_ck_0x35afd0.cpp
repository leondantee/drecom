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

// Function: Om83_oya_dm_ck
// Address: 0x35afd0 - 0x35b084
void Om83_oya_dm_ck_0x35afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_oya_dm_ck_0x35afd0");
#endif

    ctx->pc = 0x35afd0u;

    // 0x35afd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35afd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35afd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35afdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35afe0: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35afe4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35AFE4u;
    {
        const bool branch_taken_0x35afe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35afe4) {
            ctx->pc = 0x35AFFCu;
            goto label_35affc;
        }
    }
    ctx->pc = 0x35AFECu;
    // 0x35afec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35aff0: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35aff4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x35AFF4u;
    {
        const bool branch_taken_0x35aff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35aff4) {
            ctx->pc = 0x35B074u;
            goto label_35b074;
        }
    }
    ctx->pc = 0x35AFFCu;
label_35affc:
    // 0x35affc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b000: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35b004: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x35b004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x35b008: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35b008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35b00c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x35b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35b010: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35B010u;
    {
        const bool branch_taken_0x35b010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b010) {
            ctx->pc = 0x35B074u;
            goto label_35b074;
        }
    }
    ctx->pc = 0x35B018u;
    // 0x35b018: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b01c: 0x8c701334  lw          $s0, 0x1334($v1)
    ctx->pc = 0x35b01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35b020: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x35b020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x35b024: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35b024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35b028: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35b028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35b02c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35B02Cu;
    {
        const bool branch_taken_0x35b02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b02c) {
            ctx->pc = 0x35B074u;
            goto label_35b074;
        }
    }
    ctx->pc = 0x35B034u;
    // 0x35b034: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b038: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b03c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b03cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b040: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b044: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b04c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b05c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b060: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x35b060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b064: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35b064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35b068: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35b068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35b06c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35b06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35b070: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35b070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
label_35b074:
    // 0x35b074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b07c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B084u;
}
