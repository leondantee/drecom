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

// Function: entry_00164c00
// Address: 0x164c00 - 0x164cb4
void entry_00164c00_0x164c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c00_0x164c00");
#endif

    ctx->pc = 0x164c00u;

label_164c00:
    // 0x164c00: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x164c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164c04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x164c08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x164c0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164c10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x164c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x164c14: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x164c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x164c18: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x164c1c: 0x246358a0  addiu       $v1, $v1, 0x58A0
    ctx->pc = 0x164c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22688));
    // 0x164c20: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x164c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164c24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x164c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x164c28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x164c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x164c2c: 0x3c035c00  lui         $v1, 0x5C00
    ctx->pc = 0x164c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23552 << 16));
    // 0x164c30: 0x34631a06  ori         $v1, $v1, 0x1A06
    ctx->pc = 0x164c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6662);
    // 0x164c34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x164c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x164c38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x164c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164c3c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x164c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x164c40: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x164c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x164c44: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x164c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x164c48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x164c4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x164c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x164c50: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164c54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x164c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x164c58: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x164c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x164c5c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x164c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x164c60: 0x246358a0  addiu       $v1, $v1, 0x58A0
    ctx->pc = 0x164c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22688));
    // 0x164c64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164c68: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x164c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x164c6c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x164c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x164c70: 0x34651043  ori         $a1, $v1, 0x1043
    ctx->pc = 0x164c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x164c74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x164c78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x164c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x164c7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164c80: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x164c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x164c84: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x164c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x164c88: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x164c8c: 0x246358a0  addiu       $v1, $v1, 0x58A0
    ctx->pc = 0x164c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22688));
    // 0x164c90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164c94: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x164c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x164c98: 0x1600ffd9  bnez        $s0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x164C98u;
    {
        const bool branch_taken_0x164c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c98) {
            ctx->pc = 0x164C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164c00;
        }
    }
    ctx->pc = 0x164CA0u;
    // 0x164ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164ca8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x164ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x164cac: 0x3e00008  jr          $ra
    ctx->pc = 0x164CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164CB4u;
}
