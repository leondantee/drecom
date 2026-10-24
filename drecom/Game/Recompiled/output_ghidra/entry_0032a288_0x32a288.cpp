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

// Function: entry_0032a288
// Address: 0x32a288 - 0x32a2c8
void entry_0032a288_0x32a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a288_0x32a288");
#endif

    ctx->pc = 0x32a288u;

    // 0x32a288: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32a288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32a28c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a294: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32A294u;
    {
        const bool branch_taken_0x32a294 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a294) {
            ctx->pc = 0x32A2D8u;
            return;
        }
    }
    ctx->pc = 0x32A29Cu;
    // 0x32a29c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a2a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32A2A4u;
    {
        const bool branch_taken_0x32a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2a4) {
            ctx->pc = 0x32A2D0u;
            return;
        }
    }
    ctx->pc = 0x32A2ACu;
    // 0x32a2ac: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x32a2acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a2b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A2B4u;
    {
        const bool branch_taken_0x32a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2b4) {
            ctx->pc = 0x32A2C8u;
            return;
        }
    }
    ctx->pc = 0x32A2BCu;
    // 0x32a2bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2c0: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x32a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a2c4: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x32a2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32a2c8u;
}
