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

// Function: entry_00363ad4
// Address: 0x363ad4 - 0x363b0c
void entry_00363ad4_0x363ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363ad4_0x363ad4");
#endif

    ctx->pc = 0x363ad4u;

    // 0x363ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ad8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363adc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ae0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x363ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x363ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ae8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363aec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363af0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363af4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363af8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363b04: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x363B04u;
    {
        const bool branch_taken_0x363b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b04) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363B0Cu;
}
