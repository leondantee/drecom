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

// Function: entry_00302ad8
// Address: 0x302ad8 - 0x302b18
void entry_00302ad8_0x302ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302ad8_0x302ad8");
#endif

    ctx->pc = 0x302ad8u;

    // 0x302ad8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302adc: 0x8c631274  lw          $v1, 0x1274($v1)
    ctx->pc = 0x302adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x302ae0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302AE0u;
    {
        const bool branch_taken_0x302ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302ae0) {
            ctx->pc = 0x302B18u;
            return;
        }
    }
    ctx->pc = 0x302AE8u;
    // 0x302ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302af0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302af8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302afc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302b00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302b18u;
}
