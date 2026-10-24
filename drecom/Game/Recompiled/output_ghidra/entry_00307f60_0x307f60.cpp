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

// Function: entry_00307f60
// Address: 0x307f60 - 0x307fb4
void entry_00307f60_0x307f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307f60_0x307f60");
#endif

    ctx->pc = 0x307f60u;

    // 0x307f60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f64: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x307f68: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x307f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x307f6c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x307F6Cu;
    {
        const bool branch_taken_0x307f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307f6c) {
            ctx->pc = 0x307FB4u;
            return;
        }
    }
    ctx->pc = 0x307F74u;
    // 0x307f74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f78: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x307f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x307f7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307f88: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x307f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f8c: 0x8fb400b8  lw          $s4, 0xB8($sp)
    ctx->pc = 0x307f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f90: 0xa2920001  sb          $s2, 0x1($s4)
    ctx->pc = 0x307f90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x307f94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307f9c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fa0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307fa4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fa8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x307fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x307fac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x307FACu;
    {
        const bool branch_taken_0x307fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fac) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307FB4u;
}
