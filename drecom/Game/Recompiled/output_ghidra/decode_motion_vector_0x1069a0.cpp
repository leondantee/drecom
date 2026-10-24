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

// Function: decode_motion_vector
// Address: 0x1069a0 - 0x106a28
void decode_motion_vector_0x1069a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decode_motion_vector_0x1069a0");
#endif

    ctx->pc = 0x1069a0u;

    // 0x1069a0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1069a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1069a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1069a8: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1069a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1069ac: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x1069acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1069b0: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1069b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1069b4: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1069B4u;
    {
        const bool branch_taken_0x1069b4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1069B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069B4u;
        // 0x1069b8: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069b4) {
            ctx->pc = 0x1069E8u;
            goto label_1069e8;
        }
    }
    ctx->pc = 0x1069BCu;
    // 0x1069bc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1069bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1069c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1069c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1069c4: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1069c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1069c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1069cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1069d0: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x1069d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1069d4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1069D4u;
    {
        const bool branch_taken_0x1069d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1069D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069D4u;
        // 0x1069d8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069d4) {
            ctx->pc = 0x106A1Cu;
            goto label_106a1c;
        }
    }
    ctx->pc = 0x1069DCu;
    // 0x1069dc: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x1069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1069e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1069E0u;
    {
        const bool branch_taken_0x1069e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069E0u;
        // 0x1069e4: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069e0) {
            ctx->pc = 0x106A18u;
            goto label_106a18;
        }
    }
    ctx->pc = 0x1069E8u;
label_1069e8:
    // 0x1069e8: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1069E8u;
    {
        const bool branch_taken_0x1069e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069E8u;
        // 0x1069ec: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069e8) {
            ctx->pc = 0x106A1Cu;
            goto label_106a1c;
        }
    }
    ctx->pc = 0x1069F0u;
    // 0x1069f0: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1069f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x1069f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1069f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1069f8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1069fc: 0x91823  negu        $v1, $t1
    ctx->pc = 0x1069fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x106a00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x106a04: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x106a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x106a08: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x106a08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x106a0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x106A0Cu;
    {
        const bool branch_taken_0x106a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A0Cu;
        // 0x106a10: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a0c) {
            ctx->pc = 0x106A18u;
            goto label_106a18;
        }
    }
    ctx->pc = 0x106A14u;
    // 0x106a14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x106a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_106a18:
    // 0x106a18: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x106a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_106a1c:
    // 0x106a1c: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x106a1cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x106a20: 0x3e00008  jr          $ra
    ctx->pc = 0x106A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A20u;
        // 0x106a24: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A28u;
}
