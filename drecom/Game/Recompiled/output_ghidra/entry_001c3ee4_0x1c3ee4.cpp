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

// Function: entry_001c3ee4
// Address: 0x1c3ee4 - 0x1c3f54
void entry_001c3ee4_0x1c3ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3ee4_0x1c3ee4");
#endif

    ctx->pc = 0x1c3ee4u;

    // 0x1c3ee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ee8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c3ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c3eec: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3EECu;
    {
        const bool branch_taken_0x1c3eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3eec) {
            ctx->pc = 0x1C3F54u;
            return;
        }
    }
    ctx->pc = 0x1C3EF4u;
    // 0x1c3ef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ef8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c3efc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3EFCu;
    {
        const bool branch_taken_0x1c3efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3efc) {
            ctx->pc = 0x1C3F54u;
            return;
        }
    }
    ctx->pc = 0x1C3F04u;
    // 0x1c3f04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c3f0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3f10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3f14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3F14u;
    {
        const bool branch_taken_0x1c3f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f14) {
            ctx->pc = 0x1C3F54u;
            return;
        }
    }
    ctx->pc = 0x1C3F1Cu;
    // 0x1c3f1c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c3f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c3f20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f24: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c3f24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c3f28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3f2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f30: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3f34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c3f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3f3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3f44: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3f48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3f4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3f50: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c3f54u;
}
