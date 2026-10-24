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

// Function: entry_00147e5c
// Address: 0x147e5c - 0x147eac
void entry_00147e5c_0x147e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147e5c_0x147e5c");
#endif

    ctx->pc = 0x147e5cu;

    // 0x147e5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e60: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x147e64: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x147E64u;
    {
        const bool branch_taken_0x147e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e64) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147E6Cu;
    // 0x147e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147e70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x147e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x147e78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x147e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x147e80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x147e88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x147e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e8c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x147e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x147e90: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x147e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x147e94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x147e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x147e9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ea0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147ea4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x147EA4u;
    {
        const bool branch_taken_0x147ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ea4) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147EACu;
}
