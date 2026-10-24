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

// Function: entry_00118e38
// Address: 0x118e38 - 0x118ed8
void entry_00118e38_0x118e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118e38_0x118e38");
#endif

    switch (ctx->pc) {
        case 0x118ea4u: goto label_118ea4;
        case 0x118ec0u: goto label_118ec0;
        case 0x118eccu: goto label_118ecc;
        default: break;
    }

    ctx->pc = 0x118e38u;

label_118e38:
    // 0x118e38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x118e3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x118e40: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x118e40u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x118e44: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x118e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x118e48: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x118e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x118e4c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x118e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x118e50: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x118e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118e54: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x118e58: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x118e5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x118e60: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x118e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x118e64: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x118e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x118e68: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x118e68u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x118e6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x118e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x118e70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x118e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x118e74: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x118E74u;
    {
        const bool branch_taken_0x118e74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x118E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E74u;
        // 0x118e78: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e74) {
            ctx->pc = 0x118E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e38;
        }
    }
    ctx->pc = 0x118E7Cu;
    // 0x118e7c: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x118E7Cu;
    {
        const bool branch_taken_0x118e7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E7Cu;
        // 0x118e80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e7c) {
            ctx->pc = 0x118EECu;
            return;
        }
    }
    ctx->pc = 0x118E84u;
    // 0x118e84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x118e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x118e88: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x118e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118e8c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x118E8Cu;
    {
        const bool branch_taken_0x118e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E8Cu;
        // 0x118e90: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e8c) {
            ctx->pc = 0x118ED8u;
            return;
        }
    }
    ctx->pc = 0x118E94u;
    // 0x118e94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x118e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x118e98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e9c: 0xc046348  jal         func_118D20
    ctx->pc = 0x118E9Cu;
    SET_GPR_U32(ctx, 31, 0x118EA4u);
    ctx->pc = 0x118EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E9Cu;
    // 0x118ea0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x118E9Cu, 0x118EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EA4u;
label_118ea4:
    // 0x118ea4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x118ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x118ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eac: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x118eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x118eb0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x118eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x118eb4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x118eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x118eb8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x118EB8u;
    SET_GPR_U32(ctx, 31, 0x118EC0u);
    ctx->pc = 0x118EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EB8u;
    // 0x118ebc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x118EC0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118EC0u) { return; }
    ctx->pc = 0x118EC0u;
label_118ec0:
    // 0x118ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x118ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ec4: 0xc046372  jal         func_118DC8
    ctx->pc = 0x118EC4u;
    SET_GPR_U32(ctx, 31, 0x118ECCu);
    ctx->pc = 0x118EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EC4u;
    // 0x118ec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x118EC4u, 0x118ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118ECCu;
label_118ecc:
    // 0x118ecc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x118eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ed0: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x118ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x118ed4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x118ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x118ed8u;
}
