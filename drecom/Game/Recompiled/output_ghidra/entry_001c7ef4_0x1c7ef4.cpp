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

// Function: entry_001c7ef4
// Address: 0x1c7ef4 - 0x1c7f5c
void entry_001c7ef4_0x1c7ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7ef4_0x1c7ef4");
#endif

    ctx->pc = 0x1c7ef4u;

    // 0x1c7ef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7efc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c7efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7f00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7f04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c7f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7f0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c7f10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1c7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1c7f24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7f28: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f2c: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1c7f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c7f30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7f3c: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f40: 0xa603127a  sh          $v1, 0x127A($s0)
    ctx->pc = 0x1c7f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7f44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f48: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1c7f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7f4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f50: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1c7f50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7F54u;
    {
        const bool branch_taken_0x1c7f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f54) {
            ctx->pc = 0x1C7F8Cu;
            return;
        }
    }
    ctx->pc = 0x1C7F5Cu;
}
