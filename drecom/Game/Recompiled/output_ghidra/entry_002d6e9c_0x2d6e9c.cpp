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

// Function: entry_002d6e9c
// Address: 0x2d6e9c - 0x2d6f4c
void entry_002d6e9c_0x2d6e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6e9c_0x2d6e9c");
#endif

    ctx->pc = 0x2d6e9cu;

    // 0x2d6e9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ea0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d6ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d6ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6ea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6eac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D6EACu;
    {
        const bool branch_taken_0x2d6eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6eac) {
            ctx->pc = 0x2D6F58u;
            return;
        }
    }
    ctx->pc = 0x2D6EB4u;
    // 0x2d6eb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6eb8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d6ebc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D6EBCu;
    {
        const bool branch_taken_0x2d6ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ebc) {
            ctx->pc = 0x2D6F4Cu;
            return;
        }
    }
    ctx->pc = 0x2D6EC4u;
    // 0x2d6ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6ec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ecc: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6ed0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6ed4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d6ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6ed8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2d6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6edc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ee0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6ee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6ee8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d6ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6eec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ef0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6ef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6ef8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d6ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6efc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f00: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6f04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6f08: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d6f08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f10: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6f14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6f18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d6f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6f20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d6f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6f28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d6f2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d6f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6f34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d6f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f40: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d6f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d6f4cu;
}
