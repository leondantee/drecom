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

// Function: entry_0012848c
// Address: 0x12848c - 0x1284d4
void entry_0012848c_0x12848c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012848c_0x12848c");
#endif

    ctx->pc = 0x12848cu;

    // 0x12848c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12848cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x128490: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x128490u;
    {
        const bool branch_taken_0x128490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128490) {
            ctx->pc = 0x1284D4u;
            return;
        }
    }
    ctx->pc = 0x128498u;
    // 0x128498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12849c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1284a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1284a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1284a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1284a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1284ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1284acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1284b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1284b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1284b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1284b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1284bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1284bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1284c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1284c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1284c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1284c8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1284cc: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x1284CCu;
    {
        const bool branch_taken_0x1284cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284cc) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1284D4u;
}
