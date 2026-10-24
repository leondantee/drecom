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

// Function: entry_0034f694
// Address: 0x34f694 - 0x34f714
void entry_0034f694_0x34f694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f694_0x34f694");
#endif

    ctx->pc = 0x34f694u;

    // 0x34f694: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x34f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x34f698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f6a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x34f6a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f6a8: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34f6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34f6ac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34f6b0: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x34f6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34f6b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f6b8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f6bc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34f6c0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x34f6c4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34f6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f6cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34f6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34f6d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34f6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f6d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34f6d8: 0x108300d1  beq         $a0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x34F6D8u;
    {
        const bool branch_taken_0x34f6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6d8) {
            ctx->pc = 0x34FA20u;
            return;
        }
    }
    ctx->pc = 0x34F6E0u;
    // 0x34f6e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34f6e4: 0x1083009f  beq         $a0, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x34F6E4u;
    {
        const bool branch_taken_0x34f6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6e4) {
            ctx->pc = 0x34F964u;
            return;
        }
    }
    ctx->pc = 0x34F6ECu;
    // 0x34f6ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f6f0: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x34F6F0u;
    {
        const bool branch_taken_0x34f6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6f0) {
            ctx->pc = 0x34F8A4u;
            return;
        }
    }
    ctx->pc = 0x34F6F8u;
    // 0x34f6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f6fc: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x34F6FCu;
    {
        const bool branch_taken_0x34f6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6fc) {
            ctx->pc = 0x34F7B8u;
            return;
        }
    }
    ctx->pc = 0x34F704u;
    // 0x34f704: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F704u;
    {
        const bool branch_taken_0x34f704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f704) {
            ctx->pc = 0x34F714u;
            return;
        }
    }
    ctx->pc = 0x34F70Cu;
    // 0x34f70c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x34F70Cu;
    {
        const bool branch_taken_0x34f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f70c) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34F714u;
}
