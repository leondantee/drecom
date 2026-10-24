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

// Function: entry_001389b0
// Address: 0x1389b0 - 0x138a18
void entry_001389b0_0x1389b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001389b0_0x1389b0");
#endif

    ctx->pc = 0x1389b0u;

    // 0x1389b0: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x1389b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x1389b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1389b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1389b8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1389b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1389bc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1389BCu;
    {
        const bool branch_taken_0x1389bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389bc) {
            ctx->pc = 0x138A18u;
            return;
        }
    }
    ctx->pc = 0x1389C4u;
    // 0x1389c4: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x1389c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x1389c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1389c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1389cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1389ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1389d0: 0x24634ec8  addiu       $v1, $v1, 0x4EC8
    ctx->pc = 0x1389d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x1389d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1389d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1389d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1389d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1389dc: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1389dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1389e0: 0x12a0c0  sll         $s4, $s2, 3
    ctx->pc = 0x1389e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1389e4: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1389e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1389e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1389ec: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x1389ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1389f0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1389f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1389f4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1389f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1389f8: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1389fc: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1389fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138a00: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138a04: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138a08: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138a08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138a0c: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x138a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x138a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138a14: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x138a14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x138a18u;
}
