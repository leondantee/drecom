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

// Function: entry_00155de0
// Address: 0x155de0 - 0x155e2c
void entry_00155de0_0x155de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155de0_0x155de0");
#endif

    ctx->pc = 0x155de0u;

    // 0x155de0: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x155de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x155de4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x155de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x155de8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155dec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155df0: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155df4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155df8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155e04: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x155E04u;
    {
        const bool branch_taken_0x155e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e04) {
            ctx->pc = 0x155F30u;
            return;
        }
    }
    ctx->pc = 0x155E0Cu;
    // 0x155e0c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x155e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155e10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155E10u;
    {
        const bool branch_taken_0x155e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e10) {
            ctx->pc = 0x155E2Cu;
            return;
        }
    }
    ctx->pc = 0x155E18u;
    // 0x155e18: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x155e18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155e1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x155e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155e20: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x155e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x155e24: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x155E24u;
    {
        const bool branch_taken_0x155e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e24) {
            ctx->pc = 0x155F30u;
            return;
        }
    }
    ctx->pc = 0x155E2Cu;
}
