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

// Function: entry_00310614
// Address: 0x310614 - 0x31066c
void entry_00310614_0x310614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310614_0x310614");
#endif

    ctx->pc = 0x310614u;

    // 0x310614: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310618: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x310618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x31061c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310620: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x310620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x310624: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x310624u;
    {
        const bool branch_taken_0x310624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310624) {
            ctx->pc = 0x31066Cu;
            return;
        }
    }
    ctx->pc = 0x31062Cu;
    // 0x31062c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31062cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310630: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x310634: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310638: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x31063c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310640: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310644: 0x24701440  addiu       $s0, $v1, 0x1440
    ctx->pc = 0x310644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5184));
    // 0x310648: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31064c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x31064cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310650: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x310650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x310654: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310658: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x310658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x31065c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310660: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310664: 0x24700630  addiu       $s0, $v1, 0x630
    ctx->pc = 0x310664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x310668: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31066cu;
}
