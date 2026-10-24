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

// Function: entry_001cf4b4
// Address: 0x1cf4b4 - 0x1cf51c
void entry_001cf4b4_0x1cf4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4b4_0x1cf4b4");
#endif

    ctx->pc = 0x1cf4b4u;

    // 0x1cf4b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf4b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cf4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf4c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf4c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cf4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf4cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf4d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf4dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cf4e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf4e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4ec: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cf4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf4f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf4f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf4fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf500: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1cf500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cf504: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf508: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1cf508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf50c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf510: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cf510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf514: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CF514u;
    {
        const bool branch_taken_0x1cf514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf514) {
            ctx->pc = 0x1CF54Cu;
            return;
        }
    }
    ctx->pc = 0x1CF51Cu;
}
