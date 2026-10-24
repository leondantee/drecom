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

// Function: _ipuVdec
// Address: 0x106e70 - 0x107024
void _ipuVdec_0x106e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ipuVdec_0x106e70");
#endif

    switch (ctx->pc) {
        case 0x106ed8u: goto label_106ed8;
        case 0x106ef4u: goto label_106ef4;
        case 0x106f80u: goto label_106f80;
        case 0x106f98u: goto label_106f98;
        default: break;
    }

    ctx->pc = 0x106e70u;

    // 0x106e70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x106e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x106e74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106e78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106e7c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106e80: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x106e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x106e84: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106e88: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x106e8c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x106e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x106e90: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x106e94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x106e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ea0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106ea4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106eacu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x106eb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x106eb4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x106eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x106eb8: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x106EB8u;
    {
        const bool branch_taken_0x106eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EB8u;
        // 0x106ebc: 0x48680  sll         $s0, $a0, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106eb8) {
            ctx->pc = 0x106F24u;
            goto label_106f24;
        }
    }
    ctx->pc = 0x106EC0u;
    // 0x106ec0: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x106ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x106ec4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x106ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x106ec8: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x106ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x106ecc: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x106eccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x106ed0: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x106ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x106ed4: 0x0  nop
    ctx->pc = 0x106ed4u;
    // NOP
label_106ed8:
    // 0x106ed8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x106ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106edc: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106ee0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106EE0u;
    {
        const bool branch_taken_0x106ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EE0u;
        // 0x106ee4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ee0) {
            ctx->pc = 0x106EF8u;
            goto label_106ef8;
        }
    }
    ctx->pc = 0x106EE8u;
    // 0x106ee8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x106ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106eec: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106EECu;
    SET_GPR_U32(ctx, 31, 0x106EF4u);
    ctx->pc = 0x106EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106EECu;
    // 0x106ef0: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106EECu, 0x106EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EF4u;
label_106ef4:
    // 0x106ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106ef8:
    // 0x106ef8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106efc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x106f00: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x106f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x106f04: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x106f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x106f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106f08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x106f0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106f10: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x106f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x106f14: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x106F14u;
    {
        const bool branch_taken_0x106f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x106F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F14u;
        // 0x106f18: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f14) {
            ctx->pc = 0x106ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106ed8;
        }
    }
    ctx->pc = 0x106F1Cu;
    // 0x106f1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x106F1Cu;
    {
        const bool branch_taken_0x106f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F1Cu;
        // 0x106f20: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f1c) {
            ctx->pc = 0x106F40u;
            goto label_106f40;
        }
    }
    ctx->pc = 0x106F24u;
label_106f24:
    // 0x106f24: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x106f24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x106f28: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x106f28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x106f2c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x106f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x106f30: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x106f34: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x106f34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x106f38: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x106f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x106f3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_106f40:
    // 0x106f40: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x106f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x106f44: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x106f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x106f48: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x106f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x106f4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x106f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x106f50: 0x26453a70  addiu       $a1, $s2, 0x3A70
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 14960));
    // 0x106f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106f58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106f5c: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x106f5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106f60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106f64: 0x4c1000f  bgez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x106F64u;
    {
        const bool branch_taken_0x106f64 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x106F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F64u;
        // 0x106f68: 0xae633c24  sw          $v1, 0x3C24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f64) {
            ctx->pc = 0x106FA4u;
            goto label_106fa4;
        }
    }
    ctx->pc = 0x106F6Cu;
    // 0x106f6c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x106f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x106f70: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x106f70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x106f74: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x106f74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x106f78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f7c: 0x0  nop
    ctx->pc = 0x106f7cu;
    // NOP
label_106f80:
    // 0x106f80: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106f84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106F84u;
    {
        const bool branch_taken_0x106f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F84u;
        // 0x106f88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f84) {
            ctx->pc = 0x106F98u;
            goto label_106f98;
        }
    }
    ctx->pc = 0x106F8Cu;
    // 0x106f8c: 0x8e443bf4  lw          $a0, 0x3BF4($s2)
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15348)));
    // 0x106f90: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106F90u;
    SET_GPR_U32(ctx, 31, 0x106F98u);
    ctx->pc = 0x106F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F90u;
    // 0x106f94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106F90u, 0x106F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F98u;
label_106f98:
    // 0x106f98: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x106f98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106f9c: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x106F9Cu;
    {
        const bool branch_taken_0x106f9c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x106FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F9Cu;
        // 0x106fa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f9c) {
            ctx->pc = 0x106F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106f80;
        }
    }
    ctx->pc = 0x106FA4u;
label_106fa4:
    // 0x106fa4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106fa8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x106fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x106fac: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x106facu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x106fb0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x106fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106fb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x106fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x106fb8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x106fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x106fbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106fbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x106fc0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106FC0u;
    {
        const bool branch_taken_0x106fc0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FC0u;
        // 0x106fc4: 0xaea34498  sw          $v1, 0x4498($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 17560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fc0) {
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106FC8u;
    // 0x106fc8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x106fcc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x106fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x106fd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106FD0u;
    {
        const bool branch_taken_0x106fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD0u;
        // 0x106fd4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fd0) {
            ctx->pc = 0x106FDCu;
            goto label_106fdc;
        }
    }
    ctx->pc = 0x106FD8u;
label_106fd8:
    // 0x106fd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x106fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_106fdc:
    // 0x106fdc: 0xae82449c  sw          $v0, 0x449C($s4)
    ctx->pc = 0x106fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17564), GPR_U32(ctx, 2));
    // 0x106fe0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x106fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x106fe4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106fe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x106fe8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x106fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x106fec: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x106fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106ff0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x106ff4: 0xaec33d08  sw          $v1, 0x3D08($s6)
    ctx->pc = 0x106ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15624), GPR_U32(ctx, 3));
    // 0x106ff8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x106ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x106ffc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x106ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107000: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x107000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107004: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x107004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107008: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10700c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10700cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107010: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107014: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10701c: 0x3e00008  jr          $ra
    ctx->pc = 0x10701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10701Cu;
        // 0x107020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107024u;
}
