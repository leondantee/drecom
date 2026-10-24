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

// Function: entry_001c3024
// Address: 0x1c3024 - 0x1c3094
void entry_001c3024_0x1c3024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3024_0x1c3024");
#endif

    ctx->pc = 0x1c3024u;

    // 0x1c3024: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3028: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c3028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c302c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C302Cu;
    {
        const bool branch_taken_0x1c302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c302c) {
            ctx->pc = 0x1C3094u;
            return;
        }
    }
    ctx->pc = 0x1C3034u;
    // 0x1c3034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3038: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c303c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C303Cu;
    {
        const bool branch_taken_0x1c303c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c303c) {
            ctx->pc = 0x1C3094u;
            return;
        }
    }
    ctx->pc = 0x1C3044u;
    // 0x1c3044: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3048: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c304c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3050: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3054: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3054u;
    {
        const bool branch_taken_0x1c3054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3054) {
            ctx->pc = 0x1C3094u;
            return;
        }
    }
    ctx->pc = 0x1C305Cu;
    // 0x1c305c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c3060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3064: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c3064u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c3068: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c306c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3070: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3074: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3078: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c3078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c307c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3080: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3084: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c308c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3090: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c3094u;
}
