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

// Function: entry_0012966c
// Address: 0x12966c - 0x1296b4
void entry_0012966c_0x12966c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012966c_0x12966c");
#endif

    ctx->pc = 0x12966cu;

    // 0x12966c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12966cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x129670: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x129670u;
    {
        const bool branch_taken_0x129670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129670) {
            ctx->pc = 0x1296B4u;
            return;
        }
    }
    ctx->pc = 0x129678u;
    // 0x129678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12967c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129680: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129684: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x129684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x129688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12968c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12968cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129690: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129694: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129698: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12969c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12969cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1296a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1296a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1296a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1296a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1296a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1296a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1296ac: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x1296ACu;
    {
        const bool branch_taken_0x1296ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296ac) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x1296B4u;
}
