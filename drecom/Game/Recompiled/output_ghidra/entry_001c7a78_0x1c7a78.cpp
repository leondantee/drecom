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

// Function: entry_001c7a78
// Address: 0x1c7a78 - 0x1c7ae0
void entry_001c7a78_0x1c7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7a78_0x1c7a78");
#endif

    ctx->pc = 0x1c7a78u;

    // 0x1c7a78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7a7c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a80: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1c7a80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c7a84: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c7a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7a88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a8c: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1c7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c7a90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a94: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7aa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c7aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7aac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ab0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c7ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7ab4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ab8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1c7ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7abc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ac4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c7ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c7ac8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7acc: 0xa600127c  sh          $zero, 0x127C($s0)
    ctx->pc = 0x1c7accu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ad4: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c7ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7ad8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7AD8u;
    {
        const bool branch_taken_0x1c7ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ad8) {
            ctx->pc = 0x1C7B10u;
            return;
        }
    }
    ctx->pc = 0x1C7AE0u;
}
