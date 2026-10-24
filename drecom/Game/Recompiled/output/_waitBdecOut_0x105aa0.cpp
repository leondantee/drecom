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

// Function: _waitBdecOut
// Address: 0x105aa0 - 0x105c9c
void _waitBdecOut_0x105aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitBdecOut_0x105aa0");
#endif

    switch (ctx->pc) {
        case 0x105abcu: goto label_105abc;
        case 0x105ae8u: goto label_105ae8;
        case 0x105b28u: goto label_105b28;
        case 0x105bd4u: goto label_105bd4;
        case 0x105becu: goto label_105bec;
        case 0x105c0cu: goto label_105c0c;
        case 0x105c10u: goto label_105c10;
        default: break;
    }

    ctx->pc = 0x105aa0u;

    // 0x105aa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x105aa4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x105aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x105aa8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x105aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x105aac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x105aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105ab0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x105ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x105ab4: 0xc041b46  jal         func_106D18
    ctx->pc = 0x105AB4u;
    SET_GPR_U32(ctx, 31, 0x105ABCu);
    ctx->pc = 0x105AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AB4u;
    // 0x105ab8: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x105AB4u, 0x105ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ABCu;
label_105abc:
    // 0x105abc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105ac0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x105ac8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x105AC8u;
    {
        const bool branch_taken_0x105ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AC8u;
        // 0x105acc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ac8) {
            ctx->pc = 0x105B58u;
            goto label_105b58;
        }
    }
    ctx->pc = 0x105AD0u;
    // 0x105ad0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x105ad8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105adc: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x105ADCu;
    {
        const bool branch_taken_0x105adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ADCu;
        // 0x105ae0: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105adc) {
            ctx->pc = 0x105B5Cu;
            goto label_105b5c;
        }
    }
    ctx->pc = 0x105AE4u;
    // 0x105ae4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x105ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_105ae8:
    // 0x105ae8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105aec: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x105aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x105af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105af0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u)); // MMIO: 0x1000b420
    // 0x105af4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x105AF4u;
    {
        const bool branch_taken_0x105af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AF4u;
        // 0x105af8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105af4) {
            ctx->pc = 0x105B2Cu;
            goto label_105b2c;
        }
    }
    ctx->pc = 0x105AFCu;
    // 0x105afc: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x105afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x105b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105b00u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000b400
    // 0x105b04: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x105b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x105b08: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x105B08u;
    {
        const bool branch_taken_0x105b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B08u;
        // 0x105b0c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b08) {
            ctx->pc = 0x105B2Cu;
            goto label_105b2c;
        }
    }
    ctx->pc = 0x105B10u;
    // 0x105b10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x105b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x105b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105b18: 0x8c443bf4  lw          $a0, 0x3BF4($v0)
    ctx->pc = 0x105b18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x105b1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x105b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b20: 0xc042914  jal         func_10A450
    ctx->pc = 0x105B20u;
    SET_GPR_U32(ctx, 31, 0x105B28u);
    ctx->pc = 0x105B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B20u;
    // 0x105b24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x105B20u, 0x105B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B28u;
label_105b28:
    // 0x105b28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105b2c:
    // 0x105b2c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105b30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105b30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000b020
    // 0x105b34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x105B34u;
    {
        const bool branch_taken_0x105b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B34u;
        // 0x105b38: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b34) {
            ctx->pc = 0x105B60u;
            goto label_105b60;
        }
    }
    ctx->pc = 0x105B3Cu;
    // 0x105b3c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105b40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x105b44: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105b48: 0x1060ffe7  beqz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x105B48u;
    {
        const bool branch_taken_0x105b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B48u;
        // 0x105b4c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b48) {
            ctx->pc = 0x105AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105ae8;
        }
    }
    ctx->pc = 0x105B50u;
    // 0x105b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105B50u;
    {
        const bool branch_taken_0x105b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105b50) {
            ctx->pc = 0x105B64u;
            goto label_105b64;
        }
    }
    ctx->pc = 0x105B58u;
label_105b58:
    // 0x105b58: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x105b58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_105b5c:
    // 0x105b5c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x105b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_105b60:
    // 0x105b60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105b64:
    // 0x105b64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105b68: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x105b68u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x105b6c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105b70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x105b70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x105b74: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x105b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105b78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x105b78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x105b7c: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x105B7Cu;
    {
        const bool branch_taken_0x105b7c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B7Cu;
        // 0x105b80: 0xae234498  sw          $v1, 0x4498($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b7c) {
            ctx->pc = 0x105BA8u;
            goto label_105ba8;
        }
    }
    ctx->pc = 0x105B84u;
    // 0x105b84: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x105b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x105b88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105B88u;
    {
        const bool branch_taken_0x105b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B88u;
        // 0x105b8c: 0x2604449c  addiu       $a0, $s0, 0x449C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b88) {
            ctx->pc = 0x105B9Cu;
            goto label_105b9c;
        }
    }
    ctx->pc = 0x105B90u;
    // 0x105b90: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x105b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105B94u;
    {
        const bool branch_taken_0x105b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B94u;
        // 0x105b98: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b94) {
            ctx->pc = 0x105BA0u;
            goto label_105ba0;
        }
    }
    ctx->pc = 0x105B9Cu;
label_105b9c:
    // 0x105b9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x105b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105ba0:
    // 0x105ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x105BA0u;
    {
        const bool branch_taken_0x105ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BA0u;
        // 0x105ba4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ba0) {
            ctx->pc = 0x105BB0u;
            goto label_105bb0;
        }
    }
    ctx->pc = 0x105BA8u;
label_105ba8:
    // 0x105ba8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x105bac: 0xae02449c  sw          $v0, 0x449C($s0)
    ctx->pc = 0x105bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17564), GPR_U32(ctx, 2));
label_105bb0:
    // 0x105bb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105bb4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x105bbc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105bc0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x105BC0u;
    {
        const bool branch_taken_0x105bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BC0u;
        // 0x105bc4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bc0) {
            ctx->pc = 0x105C80u;
            goto label_105c80;
        }
    }
    ctx->pc = 0x105BC8u;
    // 0x105bc8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x105bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x105bcc: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x105BCCu;
    SET_GPR_U32(ctx, 31, 0x105BD4u);
    ctx->pc = 0x105BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BCCu;
    // 0x105bd0: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x105BCCu, 0x105BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BD4u;
label_105bd4:
    // 0x105bd4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x105bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105bdc: 0x8e043bf4  lw          $a0, 0x3BF4($s0)
    ctx->pc = 0x105bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15348)));
    // 0x105be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105be4: 0xc042914  jal         func_10A450
    ctx->pc = 0x105BE4u;
    SET_GPR_U32(ctx, 31, 0x105BECu);
    ctx->pc = 0x105BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BE4u;
    // 0x105be8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x105BE4u, 0x105BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BECu;
label_105bec:
    // 0x105bec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x105bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105bf4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x105bf8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x105bf8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x105bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c00: 0x8e043bf4  lw          $a0, 0x3BF4($s0)
    ctx->pc = 0x105c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15348)));
    // 0x105c04: 0xc042914  jal         func_10A450
    ctx->pc = 0x105C04u;
    SET_GPR_U32(ctx, 31, 0x105C0Cu);
    ctx->pc = 0x105C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C04u;
    // 0x105c08: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x105C04u, 0x105C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C0Cu;
label_105c0c:
    // 0x105c0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_105c10:
    // 0x105c10: 0x42000039  di
    ctx->pc = 0x105c10u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x105c14: 0x40f  sync.p
    ctx->pc = 0x105c14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105c18: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x105c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x105c1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105c20: 0x0  nop
    ctx->pc = 0x105c20u;
    // NOP
    // 0x105c24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105C24u;
    {
        const bool branch_taken_0x105c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105c24) {
            ctx->pc = 0x105C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105c10;
        }
    }
    ctx->pc = 0x105C2Cu;
    // 0x105c2c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x105c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x105c30: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x105c34: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x105c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x105c38: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x105c3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x105c40: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x105c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x105c44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105c48: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x105c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x105c4c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x105c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x105c50: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x105c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x105c54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105c54u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2)); // MMIO: 0x1000f590
    // 0x105c58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x105c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x105c5c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x105c5cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x105c60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x105c64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x105c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x105c68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x105c6c: 0x42000038  ei
    ctx->pc = 0x105c6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x105c70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x105c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c78: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105c7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x105c7cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 0)); // MMIO: 0x1000b020
label_105c80:
    // 0x105c80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x105c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x105c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105c88: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x105c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105c8c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x105c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105c90: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x105c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105c94: 0x3e00008  jr          $ra
    ctx->pc = 0x105C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C94u;
        // 0x105c98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105C9Cu;
}
