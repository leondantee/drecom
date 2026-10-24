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

// Function: entry_00307eac
// Address: 0x307eac - 0x307ef8
void entry_00307eac_0x307eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307eac_0x307eac");
#endif

    ctx->pc = 0x307eacu;

    // 0x307eac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307eb0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x307eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x307eb4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x307eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307eb8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x307eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x307ebc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307EBCu;
    {
        const bool branch_taken_0x307ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ebc) {
            ctx->pc = 0x307EF8u;
            return;
        }
    }
    ctx->pc = 0x307EC4u;
    // 0x307ec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307ec8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ecc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307ed0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ed4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x307ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ed8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307edc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ee0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ee4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x307ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ee8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307eec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307ef0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x307EF0u;
    {
        const bool branch_taken_0x307ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ef0) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307EF8u;
}
