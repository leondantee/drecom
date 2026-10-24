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

// Function: Mem_alloc
// Address: 0x164ea0 - 0x164f94
void Mem_alloc_0x164ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mem_alloc_0x164ea0");
#endif

    switch (ctx->pc) {
        case 0x164ed8u: goto label_164ed8;
        default: break;
    }

    ctx->pc = 0x164ea0u;

    // 0x164ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164ea4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x164ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x164ea8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x164ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x164eac: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x164eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x164eb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164eb4: 0x8c235488  lw          $v1, 0x5488($at)
    ctx->pc = 0x164eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5488u));
    // 0x164eb8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x164eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x164ebc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164EBCu;
    {
        const bool branch_taken_0x164ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164ebc) {
            ctx->pc = 0x164EE4u;
            goto label_164ee4;
        }
    }
    ctx->pc = 0x164EC4u;
    // 0x164ec4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x164ec8: 0x2444ea90  addiu       $a0, $v0, -0x1570
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x164ecc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x164eccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164ed0: 0xc059c48  jal         func_167120
    ctx->pc = 0x164ED0u;
    SET_GPR_U32(ctx, 31, 0x164ED8u);
    ctx->pc = 0x167120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167120u, 0x164ED0u, 0x164ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164ED8u;
label_164ed8:
    // 0x164ed8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x164ed8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164edc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x164EDCu;
    {
        const bool branch_taken_0x164edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164edc) {
            ctx->pc = 0x164F84u;
            goto label_164f84;
        }
    }
    ctx->pc = 0x164EE4u;
label_164ee4:
    // 0x164ee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164ee8: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x164ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x164eec: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x164eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x164ef0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164ef4: 0x8c235488  lw          $v1, 0x5488($at)
    ctx->pc = 0x164ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5488u));
    // 0x164ef8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164efc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164f00: 0xac225488  sw          $v0, 0x5488($at)
    ctx->pc = 0x164f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5488u, _value); } while (0);
    // 0x164f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164f08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164f0c: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x164f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164f14: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x164f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x164f18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f1c: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x164f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x164f20: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x164F20u;
    {
        const bool branch_taken_0x164f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f20) {
            ctx->pc = 0x164F38u;
            goto label_164f38;
        }
    }
    ctx->pc = 0x164F28u;
    // 0x164f28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164f2c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x164f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x164f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164F30u;
    {
        const bool branch_taken_0x164f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f30) {
            ctx->pc = 0x164F44u;
            goto label_164f44;
        }
    }
    ctx->pc = 0x164F38u;
label_164f38:
    // 0x164f38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x164f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x164f40: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x164f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_164f44:
    // 0x164f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f48: 0x402027  not         $a0, $v0
    ctx->pc = 0x164f48u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x164f4c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x164f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x164f50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164f58: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x164f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x164f5c: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x164f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x164f60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x164f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x164f64: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x164f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x164f68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164f6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164f70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x164f74: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x164f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x164f78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x164f78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x164f7c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x164f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x164f80: 0x0  nop
    ctx->pc = 0x164f80u;
    // NOP
label_164f84:
    // 0x164f84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x164f84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164f88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x164f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x164f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x164F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164F94u;
}
