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

// Function: entry_00123fa8
// Address: 0x123fa8 - 0x124040
void entry_00123fa8_0x123fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123fa8_0x123fa8");
#endif

    ctx->pc = 0x123fa8u;

    // 0x123fa8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123fac: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x123facu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x123fb0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x123fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x123fb4: 0x3044f000  andi        $a0, $v0, 0xF000
    ctx->pc = 0x123fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x123fb8: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x123fbc: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x123FBCu;
    {
        const bool branch_taken_0x123fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fbc) {
            ctx->pc = 0x124240u;
            return;
        }
    }
    ctx->pc = 0x123FC4u;
    // 0x123fc4: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x123fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x123fc8: 0x1082008e  beq         $a0, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x123FC8u;
    {
        const bool branch_taken_0x123fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fc8) {
            ctx->pc = 0x124204u;
            return;
        }
    }
    ctx->pc = 0x123FD0u;
    // 0x123fd0: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x123fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x123fd4: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x123FD4u;
    {
        const bool branch_taken_0x123fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x123fd4) {
            ctx->pc = 0x1241B0u;
            return;
        }
    }
    ctx->pc = 0x123FDCu;
    // 0x123fdc: 0x24023000  addiu       $v0, $zero, 0x3000
    ctx->pc = 0x123fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x123fe0: 0x1082005e  beq         $a0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x123FE0u;
    {
        const bool branch_taken_0x123fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fe0) {
            ctx->pc = 0x12415Cu;
            return;
        }
    }
    ctx->pc = 0x123FE8u;
    // 0x123fe8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x123fec: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x123FECu;
    {
        const bool branch_taken_0x123fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fec) {
            ctx->pc = 0x124134u;
            return;
        }
    }
    ctx->pc = 0x123FF4u;
    // 0x123ff4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x123ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x123ff8: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x123FF8u;
    {
        const bool branch_taken_0x123ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x123ff8) {
            ctx->pc = 0x12410Cu;
            return;
        }
    }
    ctx->pc = 0x124000u;
    // 0x124000: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x124004: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x124004u;
    {
        const bool branch_taken_0x124004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x124004) {
            ctx->pc = 0x1240F4u;
            return;
        }
    }
    ctx->pc = 0x12400Cu;
    // 0x12400c: 0x24112000  addiu       $s1, $zero, 0x2000
    ctx->pc = 0x12400cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x124010: 0x1091002e  beq         $a0, $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x124010u;
    {
        const bool branch_taken_0x124010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x124010) {
            ctx->pc = 0x1240CCu;
            return;
        }
    }
    ctx->pc = 0x124018u;
    // 0x124018: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x124018u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12401c: 0x1092001f  beq         $a0, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x12401Cu;
    {
        const bool branch_taken_0x12401c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x12401c) {
            ctx->pc = 0x12409Cu;
            return;
        }
    }
    ctx->pc = 0x124024u;
    // 0x124024: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x124024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x124028: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x124028u;
    {
        const bool branch_taken_0x124028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124028) {
            ctx->pc = 0x124040u;
            return;
        }
    }
    ctx->pc = 0x124030u;
    // 0x124030: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124030u;
    {
        const bool branch_taken_0x124030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124030) {
            ctx->pc = 0x124040u;
            return;
        }
    }
    ctx->pc = 0x124038u;
    // 0x124038: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124038u;
    {
        const bool branch_taken_0x124038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124038) {
            ctx->pc = 0x124040u;
            return;
        }
    }
    ctx->pc = 0x124040u;
}
