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

// Function: entry_001cf8b4
// Address: 0x1cf8b4 - 0x1cf91c
void entry_001cf8b4_0x1cf8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf8b4_0x1cf8b4");
#endif

    ctx->pc = 0x1cf8b4u;

    // 0x1cf8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf8b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8bc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1cf8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf8c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf8c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8c8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cf8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf8cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf8d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8d8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cf8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf8dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cf8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cf8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf8e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8ec: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1cf8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf8f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf8f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf8fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf900: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1cf900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf904: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf908: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cf908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf90c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf910: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cf910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf914: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CF914u;
    {
        const bool branch_taken_0x1cf914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf914) {
            ctx->pc = 0x1CF94Cu;
            return;
        }
    }
    ctx->pc = 0x1CF91Cu;
}
