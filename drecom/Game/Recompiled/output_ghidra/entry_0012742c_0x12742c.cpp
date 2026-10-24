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

// Function: entry_0012742c
// Address: 0x12742c - 0x127474
void entry_0012742c_0x12742c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012742c_0x12742c");
#endif

    ctx->pc = 0x12742cu;

    // 0x12742c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12742cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x127430: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x127430u;
    {
        const bool branch_taken_0x127430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127430) {
            ctx->pc = 0x127474u;
            return;
        }
    }
    ctx->pc = 0x127438u;
    // 0x127438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12743c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127440: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127444: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x127448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12744c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12744cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127454: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127458: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12745c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12745cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127460: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x127460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127468: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12746c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x12746Cu;
    {
        const bool branch_taken_0x12746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12746c) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127474u;
}
