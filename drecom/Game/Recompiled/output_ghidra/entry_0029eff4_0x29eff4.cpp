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

// Function: entry_0029eff4
// Address: 0x29eff4 - 0x29f054
void entry_0029eff4_0x29eff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029eff4_0x29eff4");
#endif

    ctx->pc = 0x29eff4u;

    // 0x29eff4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eff8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29effc: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29f000: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29F000u;
    {
        const bool branch_taken_0x29f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f000) {
            ctx->pc = 0x29F054u;
            return;
        }
    }
    ctx->pc = 0x29F008u;
    // 0x29f008: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f00c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f010: 0x9463004a  lhu         $v1, 0x4A($v1)
    ctx->pc = 0x29f010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x29f014: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29f018: 0x28610168  slti        $at, $v1, 0x168
    ctx->pc = 0x29f018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x29f01c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29F01Cu;
    {
        const bool branch_taken_0x29f01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f01c) {
            ctx->pc = 0x29F054u;
            return;
        }
    }
    ctx->pc = 0x29F024u;
    // 0x29f024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f02c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f030: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29f034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f038: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f03c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f040: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f044: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f048: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f04c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f050: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f054u;
}
