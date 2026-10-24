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

// Function: entry_001cf698
// Address: 0x1cf698 - 0x1cf700
void entry_001cf698_0x1cf698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf698_0x1cf698");
#endif

    ctx->pc = 0x1cf698u;

    // 0x1cf698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf69c: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf69cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6a0: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x1cf6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cf6a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf6a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6ac: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1cf6acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf6b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6b8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6bc: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x1cf6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cf6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cf6c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf6cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6d0: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1cf6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf6e0: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6e4: 0xa603127a  sh          $v1, 0x127A($s0)
    ctx->pc = 0x1cf6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf6e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6ec: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cf6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf6f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf6f4: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cf6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CF6F8u;
    {
        const bool branch_taken_0x1cf6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6f8) {
            ctx->pc = 0x1CF730u;
            return;
        }
    }
    ctx->pc = 0x1CF700u;
}
