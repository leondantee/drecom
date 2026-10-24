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

// Function: entry_00363a9c
// Address: 0x363a9c - 0x363ad4
void entry_00363a9c_0x363a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363a9c_0x363a9c");
#endif

    ctx->pc = 0x363a9cu;

    // 0x363a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363aa4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363aa8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x363aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x363aac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ab0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ab8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ac0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363ac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ac8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363acc: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x363ACCu;
    {
        const bool branch_taken_0x363acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363acc) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363AD4u;
}
