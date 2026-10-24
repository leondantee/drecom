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

// Function: _motionComp0
// Address: 0x103d10 - 0x104044
void _motionComp0_0x103d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionComp0_0x103d10");
#endif

    switch (ctx->pc) {
        case 0x103d70u: goto label_103d70;
        case 0x103dc8u: goto label_103dc8;
        case 0x103de4u: goto label_103de4;
        case 0x103df8u: goto label_103df8;
        case 0x103e50u: goto label_103e50;
        default: break;
    }

    ctx->pc = 0x103d10u;

    // 0x103d10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x103d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x103d14: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x103d18: 0x8c433d28  lw          $v1, 0x3D28($v0)
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D28u));
    // 0x103d1c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x103d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x103d20: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x103d20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x103d24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x103d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103d28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103d2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x103d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103d38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x103d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x103d3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x103d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x103D40u;
    {
        const bool branch_taken_0x103d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x103d40) {
            ctx->pc = 0x103D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103D40u;
            // 0x103d44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103D48u;
            goto label_103d48;
        }
    }
    ctx->pc = 0x103D48u;
label_103d48:
    // 0x103d48: 0x32140001  andi        $s4, $s0, 0x1
    ctx->pc = 0x103d48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x103d4c: 0x1010  mfhi        $v0
    ctx->pc = 0x103d4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x103d50: 0x9012  mflo        $s2
    ctx->pc = 0x103d50u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x103d54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x103d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d58: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x103d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x103d5c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x103D5Cu;
    {
        const bool branch_taken_0x103d5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D5Cu;
        // 0x103d60: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d5c) {
            ctx->pc = 0x103DA8u;
            goto label_103da8;
        }
    }
    ctx->pc = 0x103D64u;
    // 0x103d64: 0x3c0f0038  lui         $t7, 0x38
    ctx->pc = 0x103d64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)56 << 16));
    // 0x103d68: 0x3c190038  lui         $t9, 0x38
    ctx->pc = 0x103d68u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)56 << 16));
    // 0x103d6c: 0x0  nop
    ctx->pc = 0x103d6cu;
    // NOP
label_103d70:
    // 0x103d70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x103d74: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x103d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x103d78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u));
    // 0x103d7c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x103d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x103d80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x103d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x103d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x103D84u;
    {
        const bool branch_taken_0x103d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x103d84) {
            ctx->pc = 0x103D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103d70;
        }
    }
    ctx->pc = 0x103D8Cu;
    // 0x103d8c: 0x25e241f8  addiu       $v0, $t7, 0x41F8
    ctx->pc = 0x103d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103d90: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103d94: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x103d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x103d98: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x103d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103d9c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x103d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103da0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x103DA0u;
    {
        const bool branch_taken_0x103da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DA0u;
        // 0x103da4: 0xac600138  sw          $zero, 0x138($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103da0) {
            ctx->pc = 0x103F30u;
            goto label_103f30;
        }
    }
    ctx->pc = 0x103DA8u;
label_103da8:
    // 0x103da8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x103da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x103dac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x103dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x103db0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x103DB0u;
    {
        const bool branch_taken_0x103db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103db0) {
            ctx->pc = 0x103DDCu;
            goto label_103ddc;
        }
    }
    ctx->pc = 0x103DB8u;
    // 0x103db8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x103dbc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x103dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dc0: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x103DC0u;
    SET_GPR_U32(ctx, 31, 0x103DC8u);
    ctx->pc = 0x103DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DC0u;
    // 0x103dc4: 0x2484c5c0  addiu       $a0, $a0, -0x3A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x103DC0u, 0x103DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DC8u;
label_103dc8:
    // 0x103dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103dcc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x103dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x103dd0: 0xac623d08  sw          $v0, 0x3D08($v1)
    ctx->pc = 0x103dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D08u, _value); } while (0);
    // 0x103dd4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x103DD4u;
    {
        const bool branch_taken_0x103dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD4u;
        // 0x103dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd4) {
            ctx->pc = 0x104024u;
            goto label_104024;
        }
    }
    ctx->pc = 0x103DDCu;
label_103ddc:
    // 0x103ddc: 0xc041012  jal         func_104048
    ctx->pc = 0x103DDCu;
    SET_GPR_U32(ctx, 31, 0x103DE4u);
    ctx->pc = 0x103DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DDCu;
    // 0x103de0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104048u, 0x103DDCu, 0x103DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DE4u;
label_103de4:
    // 0x103de4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103de8: 0x3c180038  lui         $t8, 0x38
    ctx->pc = 0x103de8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)56 << 16));
    // 0x103dec: 0x3c0f0038  lui         $t7, 0x38
    ctx->pc = 0x103decu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)56 << 16));
    // 0x103df0: 0x3c190038  lui         $t9, 0x38
    ctx->pc = 0x103df0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)56 << 16));
    // 0x103df4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x103df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_103df8:
    // 0x103df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103dfc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x103dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x103e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x103e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x103e04: 0x0  nop
    ctx->pc = 0x103e04u;
    // NOP
    // 0x103e08: 0x0  nop
    ctx->pc = 0x103e08u;
    // NOP
    // 0x103e0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x103E0Cu;
    {
        const bool branch_taken_0x103e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103e0c) {
            ctx->pc = 0x103DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103df8;
        }
    }
    ctx->pc = 0x103E14u;
    // 0x103e14: 0x25e641f8  addiu       $a2, $t7, 0x41F8
    ctx->pc = 0x103e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103e18: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103e1c: 0x8cc40280  lw          $a0, 0x280($a2)
    ctx->pc = 0x103e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x103e20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x103e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x103e24: 0x8f033bec  lw          $v1, 0x3BEC($t8)
    ctx->pc = 0x103e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 15340)));
    // 0x103e28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x103e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x103e2c: 0x872818  mult        $a1, $a0, $a3
    ctx->pc = 0x103e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103e30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x103e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x103e38: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x103e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x103e3c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x103e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x103e40: 0x8c8d012c  lw          $t5, 0x12C($a0)
    ctx->pc = 0x103e40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x103e44: 0x19a00022  blez        $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x103E44u;
    {
        const bool branch_taken_0x103e44 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x103E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E44u;
        // 0x103e48: 0x656025  or          $t4, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e44) {
            ctx->pc = 0x103ED0u;
            goto label_103ed0;
        }
    }
    ctx->pc = 0x103E4Cu;
    // 0x103e4c: 0x25aeffff  addiu       $t6, $t5, -0x1
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_103e50:
    // 0x103e50: 0x25e641f8  addiu       $a2, $t7, 0x41F8
    ctx->pc = 0x103e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103e54: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103e58: 0x8cc20280  lw          $v0, 0x280($a2)
    ctx->pc = 0x103e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x103e5c: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x103e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x103e60: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x103e64: 0x16e4026  xor         $t0, $t3, $t6
    ctx->pc = 0x103e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 14));
    // 0x103e68: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x103e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103e6c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x103e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x103e70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103e74: 0x3c0a3000  lui         $t2, 0x3000
    ctx->pc = 0x103e74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12288 << 16));
    // 0x103e78: 0x354a0030  ori         $t2, $t2, 0x30
    ctx->pc = 0x103e78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)48);
    // 0x103e7c: 0x8280a  movz        $a1, $zero, $t0
    ctx->pc = 0x103e7cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x103e80: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x103e84: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x103e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x103e88: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x103e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x103e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103e90: 0x16d402a  slt         $t0, $t3, $t5
    ctx->pc = 0x103e90u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x103e94: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x103e98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x103e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e9c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x103e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x103ea0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x103ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x103ea4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x103ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x103ea8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x103ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x103eac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x103eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x103eb0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x103eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x103eb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x103eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x103eb8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x103eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x103ebc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x103ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x103ec0: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x103ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x103ec4: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x103ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x103ec8: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x103EC8u;
    {
        const bool branch_taken_0x103ec8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x103ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC8u;
        // 0x103ecc: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ec8) {
            ctx->pc = 0x103E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103e50;
        }
    }
    ctx->pc = 0x103ED0u;
label_103ed0:
    // 0x103ed0: 0xf  sync
    ctx->pc = 0x103ed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x103ed4: 0x25e941f8  addiu       $t1, $t7, 0x41F8
    ctx->pc = 0x103ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103ed8: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x103ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103edc: 0x8d240280  lw          $a0, 0x280($t1)
    ctx->pc = 0x103edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 640)));
    // 0x103ee0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103ee4: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x103ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x103ee8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x103eec: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x103eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x103ef0: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x103ef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x103ef4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103ef8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103efc: 0x34a5d420  ori         $a1, $a1, 0xD420
    ctx->pc = 0x103efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54304);
    // 0x103f00: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x103f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x103f04: 0x240a0105  addiu       $t2, $zero, 0x105
    ctx->pc = 0x103f04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x103f08: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103f0c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x103f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x103f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103f14: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x103f18: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x103f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x103f1c: 0x8f033bec  lw          $v1, 0x3BEC($t8)
    ctx->pc = 0x103f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 15340)));
    // 0x103f20: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x103f20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x103f24: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x103f24u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x103f28: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x103f28u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 10));
    // 0x103f2c: 0xad2b0138  sw          $t3, 0x138($t1)
    ctx->pc = 0x103f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 11));
label_103f30:
    // 0x103f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103f34: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x103F34u;
    {
        const bool branch_taken_0x103f34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x103F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F34u;
        // 0x103f38: 0x25e241f8  addiu       $v0, $t7, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f34) {
            ctx->pc = 0x103F60u;
            goto label_103f60;
        }
    }
    ctx->pc = 0x103F3Cu;
    // 0x103f3c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x103f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x103f40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103F40u;
    {
        const bool branch_taken_0x103f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F40u;
        // 0x103f44: 0x25e241f8  addiu       $v0, $t7, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f40) {
            ctx->pc = 0x103F60u;
            goto label_103f60;
        }
    }
    ctx->pc = 0x103F48u;
    // 0x103f48: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103f4c: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x103f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x103f50: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x103f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103f54: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x103f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x103F58u;
    {
        const bool branch_taken_0x103f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F58u;
        // 0x103f5c: 0xac730134  sw          $s3, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f58) {
            ctx->pc = 0x103F74u;
            goto label_103f74;
        }
    }
    ctx->pc = 0x103F60u;
label_103f60:
    // 0x103f60: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103f64: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x103f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x103f68: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x103f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103f6c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x103f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103f70: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x103f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_103f74:
    // 0x103f74: 0x25e741f8  addiu       $a3, $t7, 0x41F8
    ctx->pc = 0x103f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103f78: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103f7c: 0x8ce20280  lw          $v0, 0x280($a3)
    ctx->pc = 0x103f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x103f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x103f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103f84: 0x8f243dac  lw          $a0, 0x3DAC($t9)
    ctx->pc = 0x103f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 15788)));
    // 0x103f88: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x103f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103f8c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x103f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x103f90: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x103F90u;
    {
        const bool branch_taken_0x103f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x103F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F90u;
        // 0x103f94: 0xac540130  sw          $s4, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f90) {
            ctx->pc = 0x103FD0u;
            goto label_103fd0;
        }
    }
    ctx->pc = 0x103F98u;
    // 0x103f98: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x103f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x103f9c: 0x8ce40280  lw          $a0, 0x280($a3)
    ctx->pc = 0x103f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x103fa0: 0x8c453e44  lw          $a1, 0x3E44($v0)
    ctx->pc = 0x103fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383E44u));
    // 0x103fa4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x103fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x103fa8: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x103fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103fac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x103facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x103fb0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x103fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x103fb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x103fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x103fb8: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x103fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103fbc: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x103fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x103fc0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x103fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103fc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103fc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x103FC8u;
    {
        const bool branch_taken_0x103fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FC8u;
        // 0x103fcc: 0xac830128  sw          $v1, 0x128($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fc8) {
            ctx->pc = 0x104020u;
            goto label_104020;
        }
    }
    ctx->pc = 0x103FD0u;
label_103fd0:
    // 0x103fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103fd4: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103FD4u;
    {
        const bool branch_taken_0x103fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x103fd4) {
            ctx->pc = 0x103FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103FD4u;
            // 0x103fd8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103FE8u;
            goto label_103fe8;
        }
    }
    ctx->pc = 0x103FDCu;
    // 0x103fdc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x103fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x103fe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103FE0u;
    {
        const bool branch_taken_0x103fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE0u;
        // 0x103fe4: 0x8c423e4c  lw          $v0, 0x3E4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe0) {
            ctx->pc = 0x103FECu;
            goto label_103fec;
        }
    }
    ctx->pc = 0x103FE8u;
label_103fe8:
    // 0x103fe8: 0x8c423e48  lw          $v0, 0x3E48($v0)
    ctx->pc = 0x103fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15944)));
label_103fec:
    // 0x103fec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x103fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x103ff0: 0x25e641f8  addiu       $a2, $t7, 0x41F8
    ctx->pc = 0x103ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103ff4: 0x8cc50280  lw          $a1, 0x280($a2)
    ctx->pc = 0x103ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x103ff8: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x103ffc: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x103ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104000: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104004: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x104004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x104008: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10400c: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x10400cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104010: 0xa34018  mult        $t0, $a1, $v1
    ctx->pc = 0x104010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x104014: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x104018: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x104018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10401c: 0xaca20128  sw          $v0, 0x128($a1)
    ctx->pc = 0x10401cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
label_104020:
    // 0x104020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104024:
    // 0x104024: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x104024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104028: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104028u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10402c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10402cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10403c: 0x3e00008  jr          $ra
    ctx->pc = 0x10403Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10403Cu;
        // 0x104040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10403Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104044u;
}
