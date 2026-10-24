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

// Function: entry_0031875c
// Address: 0x31875c - 0x3187ac
void entry_0031875c_0x31875c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031875c_0x31875c");
#endif

    ctx->pc = 0x31875cu;

    // 0x31875c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318760: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x318760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x318764: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318768: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x318768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x31876c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318770: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x318770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x318774: 0x2c610033  sltiu       $at, $v1, 0x33
    ctx->pc = 0x318774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x318778: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x318778u;
    {
        const bool branch_taken_0x318778 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318778) {
            ctx->pc = 0x3187ACu;
            return;
        }
    }
    ctx->pc = 0x318780u;
    // 0x318780: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318784: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318788: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31878c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318790: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318794: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318798: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31879c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3187a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3187a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3187a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3187a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3187a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3187a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3187acu;
}
