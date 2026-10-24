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

// Function: entry_00102014
// Address: 0x102014 - 0x1020b0
void entry_00102014_0x102014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102014_0x102014");
#endif

    ctx->pc = 0x102014u;

    // 0x102014: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x102014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x102018: 0x244239b8  addiu       $v0, $v0, 0x39B8
    ctx->pc = 0x102018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14776));
    // 0x10201c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10201cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x102020: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x102020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x102024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102028: 0x248439c8  addiu       $a0, $a0, 0x39C8
    ctx->pc = 0x102028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14792));
    // 0x10202c: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x10202cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102030: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x102030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x102034: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102038: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x102038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x10203c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x102040: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x102040u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x102044: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x102044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x102048: 0x248439d8  addiu       $a0, $a0, 0x39D8
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14808));
    // 0x10204c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x10204cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x102050: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x102050u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102054: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x102054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x102058: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x102058u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x10205c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x102060: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x102060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x102064: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x102068: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x10206c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x10206cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102070: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102074: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x102074u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x102078: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x102078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x10207c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10207cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x102080: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x102080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x102084: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x102084u;
    {
        const bool branch_taken_0x102084 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x102088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102084u;
        // 0x102088: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102084) {
            ctx->pc = 0x1020B0u;
            return;
        }
    }
    ctx->pc = 0x10208Cu;
    // 0x10208c: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x10208cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x102090: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102094: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x102094u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x102098: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x102098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x10209c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1020a0: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1020a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1020a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1020a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1020a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1020A8u;
    {
        const bool branch_taken_0x1020a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020A8u;
        // 0x1020ac: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020a8) {
            ctx->pc = 0x1020BCu;
            return;
        }
    }
    ctx->pc = 0x1020B0u;
}
