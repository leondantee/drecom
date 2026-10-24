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

// Function: entry_001d0988
// Address: 0x1d0988 - 0x1d09f0
void entry_001d0988_0x1d0988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0988_0x1d0988");
#endif

    ctx->pc = 0x1d0988u;

    // 0x1d0988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d098c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0990: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0994: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d0994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0998: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d099c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1d099cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d09a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d09a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d09a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d09acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d09b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d09b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d09bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09c0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1d09c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d09c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d09c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d09cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d09d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09d4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1d09d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d09d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09dc: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1d09dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d09e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09e4: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1d09e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d09e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D09E8u;
    {
        const bool branch_taken_0x1d09e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d09e8) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D09F0u;
}
