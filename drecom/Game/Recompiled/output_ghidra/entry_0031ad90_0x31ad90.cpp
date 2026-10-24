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

// Function: entry_0031ad90
// Address: 0x31ad90 - 0x31addc
void entry_0031ad90_0x31ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ad90_0x31ad90");
#endif

    ctx->pc = 0x31ad90u;

    // 0x31ad90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad94: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ad94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ad98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ad98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ad9c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x31ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31ada0: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31ADA0u;
    {
        const bool branch_taken_0x31ada0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ada0) {
            ctx->pc = 0x31ADDCu;
            return;
        }
    }
    ctx->pc = 0x31ADA8u;
    // 0x31ada8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31adac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31adb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31adb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31adbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31adc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31adc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31adc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31adcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31add0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31add0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31add4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x31ADD4u;
    {
        const bool branch_taken_0x31add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31add4) {
            ctx->pc = 0x31AE48u;
            return;
        }
    }
    ctx->pc = 0x31ADDCu;
}
