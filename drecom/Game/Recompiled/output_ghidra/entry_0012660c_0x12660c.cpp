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

// Function: entry_0012660c
// Address: 0x12660c - 0x126654
void entry_0012660c_0x12660c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012660c_0x12660c");
#endif

    ctx->pc = 0x12660cu;

    // 0x12660c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12660cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x126610: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x126610u;
    {
        const bool branch_taken_0x126610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126610) {
            ctx->pc = 0x126654u;
            return;
        }
    }
    ctx->pc = 0x126618u;
    // 0x126618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12661c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126620: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126624: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x126624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x126628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12662c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12662cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126634: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126638: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12663c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12663cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126640: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x126640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126644: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126648: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12664c: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x12664Cu;
    {
        const bool branch_taken_0x12664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12664c) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126654u;
}
