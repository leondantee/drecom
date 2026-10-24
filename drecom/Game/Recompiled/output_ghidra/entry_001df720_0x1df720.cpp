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

// Function: entry_001df720
// Address: 0x1df720 - 0x1df760
void entry_001df720_0x1df720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df720_0x1df720");
#endif

    ctx->pc = 0x1df720u;

    // 0x1df720: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x1df720u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1df724: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x1df724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1df728: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x1df728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1df72c: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x1df72cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1df730: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x1df730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1df734: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x1df734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df738: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1df738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1df73c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x1df73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df740: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x1df740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df748: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1df748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1df74c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF74Cu;
    {
        const bool branch_taken_0x1df74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df74c) {
            ctx->pc = 0x1DF760u;
            return;
        }
    }
    ctx->pc = 0x1DF754u;
    // 0x1df754: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1df754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df758: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1df758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1df75c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1df75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1df760u;
}
