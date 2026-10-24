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

// Function: entry_0029e958
// Address: 0x29e958 - 0x29e9b8
void entry_0029e958_0x29e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e958_0x29e958");
#endif

    ctx->pc = 0x29e958u;

    // 0x29e958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e95c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e960: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29e964: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29E964u;
    {
        const bool branch_taken_0x29e964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e964) {
            ctx->pc = 0x29E9B8u;
            return;
        }
    }
    ctx->pc = 0x29E96Cu;
    // 0x29e96c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e970: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e974: 0x9463004a  lhu         $v1, 0x4A($v1)
    ctx->pc = 0x29e974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x29e978: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e97c: 0x28610168  slti        $at, $v1, 0x168
    ctx->pc = 0x29e97cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x29e980: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E980u;
    {
        const bool branch_taken_0x29e980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e980) {
            ctx->pc = 0x29E9B8u;
            return;
        }
    }
    ctx->pc = 0x29E988u;
    // 0x29e988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e98c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e990: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e994: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29e998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e99c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e9a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e9b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e9b8u;
}
