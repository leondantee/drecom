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

// Function: entry_002dc564
// Address: 0x2dc564 - 0x2dc5c0
void entry_002dc564_0x2dc564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc564_0x2dc564");
#endif

    ctx->pc = 0x2dc564u;

    // 0x2dc564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc568: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dc568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dc56c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DC56Cu;
    {
        const bool branch_taken_0x2dc56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc56c) {
            ctx->pc = 0x2DC5ECu;
            return;
        }
    }
    ctx->pc = 0x2DC574u;
    // 0x2dc574: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dc574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dc578: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc57c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dc57cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc580: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC580u;
    {
        const bool branch_taken_0x2dc580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc580) {
            ctx->pc = 0x2DC5C0u;
            return;
        }
    }
    ctx->pc = 0x2DC588u;
    // 0x2dc588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc58c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc590: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc594: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2dc594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc598: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc59c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dc59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc5a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc5acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc5b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC5B8u;
    {
        const bool branch_taken_0x2dc5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5b8) {
            ctx->pc = 0x2DC5ECu;
            return;
        }
    }
    ctx->pc = 0x2DC5C0u;
}
