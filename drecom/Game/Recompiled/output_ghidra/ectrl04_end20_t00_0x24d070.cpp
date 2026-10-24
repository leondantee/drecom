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

// Function: ectrl04_end20_t00
// Address: 0x24d070 - 0x24d138
void ectrl04_end20_t00_0x24d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl04_end20_t00_0x24d070");
#endif

    ctx->pc = 0x24d070u;

    // 0x24d070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24d078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d07c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x24d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24d080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d084: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24d084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d088: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x24d088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24d08c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d090: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24d090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24d094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d098: 0x8c710100  lw          $s1, 0x100($v1)
    ctx->pc = 0x24d098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x24d09c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d0a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d0a4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D0A4u;
    {
        const bool branch_taken_0x24d0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d0a4) {
            ctx->pc = 0x24D0B8u;
            goto label_24d0b8;
        }
    }
    ctx->pc = 0x24D0ACu;
    // 0x24d0ac: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x24d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x24d0b0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d0b4: 0xae23020c  sw          $v1, 0x20C($s1)
    ctx->pc = 0x24d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 3));
label_24d0b8:
    // 0x24d0b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d0bc: 0x8c700104  lw          $s0, 0x104($v1)
    ctx->pc = 0x24d0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24d0c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d0c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d0c8: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D0C8u;
    {
        const bool branch_taken_0x24d0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d0c8) {
            ctx->pc = 0x24D0DCu;
            goto label_24d0dc;
        }
    }
    ctx->pc = 0x24D0D0u;
    // 0x24d0d0: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24d0d4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d0d8: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
label_24d0dc:
    // 0x24d0dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d0e0: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x24d0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x24d0e4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d0e8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d0ec: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D0ECu;
    {
        const bool branch_taken_0x24d0ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d0ec) {
            ctx->pc = 0x24D100u;
            goto label_24d100;
        }
    }
    ctx->pc = 0x24D0F4u;
    // 0x24d0f4: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24d0f8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d0fc: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
label_24d100:
    // 0x24d100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d104: 0x8c70010c  lw          $s0, 0x10C($v1)
    ctx->pc = 0x24d104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x24d108: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d10c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d110: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D110u;
    {
        const bool branch_taken_0x24d110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d110) {
            ctx->pc = 0x24D124u;
            goto label_24d124;
        }
    }
    ctx->pc = 0x24D118u;
    // 0x24d118: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24d11c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d120: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24d120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
label_24d124:
    // 0x24d124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d12c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24d12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d130: 0x3e00008  jr          $ra
    ctx->pc = 0x24D130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D138u;
}
