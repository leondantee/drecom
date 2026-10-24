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

// Function: entry_001c28c4
// Address: 0x1c28c4 - 0x1c2934
void entry_001c28c4_0x1c28c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c28c4_0x1c28c4");
#endif

    ctx->pc = 0x1c28c4u;

    // 0x1c28c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28c8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c28c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c28cc: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C28CCu;
    {
        const bool branch_taken_0x1c28cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c28cc) {
            ctx->pc = 0x1C2934u;
            return;
        }
    }
    ctx->pc = 0x1C28D4u;
    // 0x1c28d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28d8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c28d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c28dc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C28DCu;
    {
        const bool branch_taken_0x1c28dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c28dc) {
            ctx->pc = 0x1C2934u;
            return;
        }
    }
    ctx->pc = 0x1C28E4u;
    // 0x1c28e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c28ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c28f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c28f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c28f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C28F4u;
    {
        const bool branch_taken_0x1c28f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28f4) {
            ctx->pc = 0x1C2934u;
            return;
        }
    }
    ctx->pc = 0x1C28FCu;
    // 0x1c28fc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c2900: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2904: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c2904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c2908: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c290c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2910: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2918: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c2918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c291c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c291cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2920: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2924: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c2924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c2928: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c292c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c292cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2930: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c2934u;
}
