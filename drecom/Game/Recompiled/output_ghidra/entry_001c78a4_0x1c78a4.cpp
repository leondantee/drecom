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

// Function: entry_001c78a4
// Address: 0x1c78a4 - 0x1c790c
void entry_001c78a4_0x1c78a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c78a4_0x1c78a4");
#endif

    ctx->pc = 0x1c78a4u;

    // 0x1c78a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78ac: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c78acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c78b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c78b4: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c78b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78b8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1c78b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c78bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78c0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c78c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c78c4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78c8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1c78c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c78cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c78d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c78d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78dc: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1c78dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c78e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c78e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c78e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c78ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78f0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c78f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c78f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c78f8: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1c78f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c78fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7900: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1c7900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7904: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7904u;
    {
        const bool branch_taken_0x1c7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7904) {
            ctx->pc = 0x1C793Cu;
            return;
        }
    }
    ctx->pc = 0x1C790Cu;
}
