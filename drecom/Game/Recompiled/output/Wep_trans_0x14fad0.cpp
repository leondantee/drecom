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

// Function: Wep_trans
// Address: 0x14fad0 - 0x14fc2c
void Wep_trans_0x14fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wep_trans_0x14fad0");
#endif

    switch (ctx->pc) {
        case 0x14fb18u: goto label_14fb18;
        case 0x14fb74u: goto label_14fb74;
        case 0x14fbd0u: goto label_14fbd0;
        default: break;
    }

    ctx->pc = 0x14fad0u;

    // 0x14fad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14fad4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x14fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x14fad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14fadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14fae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14fae4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14fae8: 0x2470a4a0  addiu       $s0, $v1, -0x5B60
    ctx->pc = 0x14fae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x14faec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14faecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14faf0: 0x2471b700  addiu       $s1, $v1, -0x4900
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x14faf4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14faf8: 0x24729240  addiu       $s2, $v1, -0x6DC0
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x14fafc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9248u));
    // 0x14fb00: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14fb04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB04u;
    {
        const bool branch_taken_0x14fb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb04) {
            ctx->pc = 0x14FB20u;
            goto label_14fb20;
        }
    }
    ctx->pc = 0x14FB0Cu;
    // 0x14fb0c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14fb0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14fb10: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x14FB10u;
    SET_GPR_U32(ctx, 31, 0x14FB18u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14FB10u, 0x14FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB18u;
label_14fb18:
    // 0x14fb18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14FB18u;
    {
        const bool branch_taken_0x14fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb18) {
            ctx->pc = 0x14FB58u;
            goto label_14fb58;
        }
    }
    ctx->pc = 0x14FB20u;
label_14fb20:
    // 0x14fb20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb24: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fb28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fb2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb30: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14fb34: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x14fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x14fb38: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x14fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x14fb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb40: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fb44: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fb48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb4c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14fb50: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x14fb54: 0xae430134  sw          $v1, 0x134($s2)
    ctx->pc = 0x14fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 3));
label_14fb58:
    // 0x14fb58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fb5c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14fb60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB60u;
    {
        const bool branch_taken_0x14fb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb60) {
            ctx->pc = 0x14FB7Cu;
            goto label_14fb7c;
        }
    }
    ctx->pc = 0x14FB68u;
    // 0x14fb68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14fb68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14fb6c: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x14FB6Cu;
    SET_GPR_U32(ctx, 31, 0x14FB74u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14FB6Cu, 0x14FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB74u;
label_14fb74:
    // 0x14fb74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14FB74u;
    {
        const bool branch_taken_0x14fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb74) {
            ctx->pc = 0x14FBB4u;
            goto label_14fbb4;
        }
    }
    ctx->pc = 0x14FB7Cu;
label_14fb7c:
    // 0x14fb7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb80: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fb84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fb88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fb90: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x14fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x14fb94: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x14fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x14fb98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb9c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fba0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fba8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fbac: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x14fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x14fbb0: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x14fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
label_14fbb4:
    // 0x14fbb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14fbb8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14fbbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FBBCu;
    {
        const bool branch_taken_0x14fbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbbc) {
            ctx->pc = 0x14FBD8u;
            goto label_14fbd8;
        }
    }
    ctx->pc = 0x14FBC4u;
    // 0x14fbc4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14fbc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14fbc8: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x14FBC8u;
    SET_GPR_U32(ctx, 31, 0x14FBD0u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14FBC8u, 0x14FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBD0u;
label_14fbd0:
    // 0x14fbd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14FBD0u;
    {
        const bool branch_taken_0x14fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbd0) {
            ctx->pc = 0x14FC10u;
            goto label_14fc10;
        }
    }
    ctx->pc = 0x14FBD8u;
label_14fbd8:
    // 0x14fbd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fbdc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fbe0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fbe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fbe8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14fbec: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x14fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x14fbf0: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x14fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x14fbf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fbf8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fbfc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fc00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fc04: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14fc08: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x14fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x14fc0c: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x14fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
label_14fc10:
    // 0x14fc10: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x14fc10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fc14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14fc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14fc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14fc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fc20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x14FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FC2Cu;
}
