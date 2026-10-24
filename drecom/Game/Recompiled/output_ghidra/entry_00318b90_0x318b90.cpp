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

// Function: entry_00318b90
// Address: 0x318b90 - 0x318be0
void entry_00318b90_0x318b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318b90_0x318b90");
#endif

    ctx->pc = 0x318b90u;

    // 0x318b90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b94: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x318b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x318b98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318b9c: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x318b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x318ba0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318ba4: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x318ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x318ba8: 0x2c610033  sltiu       $at, $v1, 0x33
    ctx->pc = 0x318ba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x318bac: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x318BACu;
    {
        const bool branch_taken_0x318bac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318bac) {
            ctx->pc = 0x318BE0u;
            return;
        }
    }
    ctx->pc = 0x318BB4u;
    // 0x318bb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318bb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318bc0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bc4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318bc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318bd0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318bd8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bdc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x318be0u;
}
