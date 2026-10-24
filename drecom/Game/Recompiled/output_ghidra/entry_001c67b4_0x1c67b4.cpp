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

// Function: entry_001c67b4
// Address: 0x1c67b4 - 0x1c6824
void entry_001c67b4_0x1c67b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c67b4_0x1c67b4");
#endif

    ctx->pc = 0x1c67b4u;

    // 0x1c67b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67b8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c67b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c67bc: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C67BCu;
    {
        const bool branch_taken_0x1c67bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67bc) {
            ctx->pc = 0x1C6824u;
            return;
        }
    }
    ctx->pc = 0x1C67C4u;
    // 0x1c67c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67c8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c67c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c67cc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C67CCu;
    {
        const bool branch_taken_0x1c67cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67cc) {
            ctx->pc = 0x1C6824u;
            return;
        }
    }
    ctx->pc = 0x1C67D4u;
    // 0x1c67d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c67dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c67e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c67e4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C67E4u;
    {
        const bool branch_taken_0x1c67e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c67e4) {
            ctx->pc = 0x1C6824u;
            return;
        }
    }
    ctx->pc = 0x1C67ECu;
    // 0x1c67ec: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c67f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67f4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c67f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c67f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c67fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6800: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6808: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c680c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c680cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6810: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c6810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6814: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c6814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c6818: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c681c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c681cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6820: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c6820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c6824u;
}
