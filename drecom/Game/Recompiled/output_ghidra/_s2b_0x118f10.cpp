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

// Function: _s2b
// Address: 0x118f10 - 0x119058
void _s2b_0x118f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_s2b_0x118f10");
#endif

    switch (ctx->pc) {
        case 0x118f78u: goto label_118f78;
        case 0x118facu: goto label_118fac;
        case 0x118fc8u: goto label_118fc8;
        case 0x118fe0u: goto label_118fe0;
        case 0x119008u: goto label_119008;
        case 0x119024u: goto label_119024;
        default: break;
    }

    ctx->pc = 0x118f10u;

    // 0x118f10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118f14: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x118f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x118f18: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x118f1c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x118f1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f20: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x118f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x118f24: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x118f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x118f28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x118f2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x118f2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x118f30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118f38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118f3c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118f40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118f48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x118f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118f50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x118f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f54: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x118F54u;
    {
        const bool branch_taken_0x118f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118f54) {
            ctx->pc = 0x118F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118F54u;
            // 0x118f58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x118F5Cu;
            goto label_118f5c;
        }
    }
    ctx->pc = 0x118F5Cu;
label_118f5c:
    // 0x118f5c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x118f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f60: 0x1812  mflo        $v1
    ctx->pc = 0x118f60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x118f64: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x118f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118f68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118F68u;
    {
        const bool branch_taken_0x118f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F68u;
        // 0x118f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f68) {
            ctx->pc = 0x118F9Cu;
            goto label_118f9c;
        }
    }
    ctx->pc = 0x118F70u;
    // 0x118f70: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x118f70u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x118f74: 0x0  nop
    ctx->pc = 0x118f74u;
    // NOP
label_118f78:
    // 0x118f78: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x118f78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x118f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118f80: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x118f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118f84: 0x0  nop
    ctx->pc = 0x118f84u;
    // NOP
    // 0x118f88: 0x0  nop
    ctx->pc = 0x118f88u;
    // NOP
    // 0x118f8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118F8Cu;
    {
        const bool branch_taken_0x118f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118f8c) {
            ctx->pc = 0x118F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118f78;
        }
    }
    ctx->pc = 0x118F94u;
    // 0x118f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118F94u;
    {
        const bool branch_taken_0x118f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F94u;
        // 0x118f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f94) {
            ctx->pc = 0x118FA4u;
            goto label_118fa4;
        }
    }
    ctx->pc = 0x118F9Cu;
label_118f9c:
    // 0x118f9c: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x118f9cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x118fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_118fa4:
    // 0x118fa4: 0xc046348  jal         func_118D20
    ctx->pc = 0x118FA4u;
    SET_GPR_U32(ctx, 31, 0x118FACu);
    ctx->pc = 0x118FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FA4u;
    // 0x118fa8: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x118FA4u, 0x118FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FACu;
label_118fac:
    // 0x118fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118fb4: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x118fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x118fb8: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x118FB8u;
    {
        const bool branch_taken_0x118fb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x118FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FB8u;
        // 0x118fbc: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fb8) {
            ctx->pc = 0x118FF8u;
            goto label_118ff8;
        }
    }
    ctx->pc = 0x118FC0u;
    // 0x118fc0: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x118fc4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x118fc4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_118fc8:
    // 0x118fc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x118fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x118fd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118fd4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x118fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x118fd8: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x118FD8u;
    SET_GPR_U32(ctx, 31, 0x118FE0u);
    ctx->pc = 0x118FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FD8u;
    // 0x118fdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x118FD8u, 0x118FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FE0u;
label_118fe0:
    // 0x118fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fe4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x118fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x118fe8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118FE8u;
    {
        const bool branch_taken_0x118fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118fe8) {
            ctx->pc = 0x118FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118FE8u;
            // 0x118fec: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118fc8;
        }
    }
    ctx->pc = 0x118FF0u;
    // 0x118ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118FF0u;
    {
        const bool branch_taken_0x118ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FF0u;
        // 0x118ff4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ff0) {
            ctx->pc = 0x118FFCu;
            goto label_118ffc;
        }
    }
    ctx->pc = 0x118FF8u;
label_118ff8:
    // 0x118ff8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x118ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_118ffc:
    // 0x118ffc: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x118ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x119000: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119000u;
    {
        const bool branch_taken_0x119000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119000u;
        // 0x119004: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119000) {
            ctx->pc = 0x11902Cu;
            goto label_11902c;
        }
    }
    ctx->pc = 0x119008u;
label_119008:
    // 0x119008: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x119008u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11900c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119010: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x119014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x119014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x119018: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x11901c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x11901Cu;
    SET_GPR_U32(ctx, 31, 0x119024u);
    ctx->pc = 0x119020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11901Cu;
    // 0x119020: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x11901Cu, 0x119024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119024u;
label_119024:
    // 0x119024: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x119024u;
    {
        const bool branch_taken_0x119024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x119028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119024u;
        // 0x119028: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119024) {
            ctx->pc = 0x119008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119008;
        }
    }
    ctx->pc = 0x11902Cu;
label_11902c:
    // 0x11902c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11902cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119030: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x119030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119034: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x119034u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119038: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119038u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11903c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11903cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119040: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119044: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119048: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11904c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11904cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119050: 0x3e00008  jr          $ra
    ctx->pc = 0x119050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119050u;
        // 0x119054: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119058u;
}
