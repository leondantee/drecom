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

// Function: entry_001c3784
// Address: 0x1c3784 - 0x1c37f4
void entry_001c3784_0x1c3784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3784_0x1c3784");
#endif

    ctx->pc = 0x1c3784u;

    // 0x1c3784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3788: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c3788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c378c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C378Cu;
    {
        const bool branch_taken_0x1c378c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c378c) {
            ctx->pc = 0x1C37F4u;
            return;
        }
    }
    ctx->pc = 0x1C3794u;
    // 0x1c3794: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3798: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c379c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C379Cu;
    {
        const bool branch_taken_0x1c379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c379c) {
            ctx->pc = 0x1C37F4u;
            return;
        }
    }
    ctx->pc = 0x1C37A4u;
    // 0x1c37a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c37ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c37acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c37b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c37b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c37b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C37B4u;
    {
        const bool branch_taken_0x1c37b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c37b4) {
            ctx->pc = 0x1C37F4u;
            return;
        }
    }
    ctx->pc = 0x1C37BCu;
    // 0x1c37bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c37c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37c4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c37c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c37c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c37cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37d0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c37d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c37d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c37d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c37dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c37dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c37e4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c37e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c37ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c37ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c37f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c37f4u;
}
