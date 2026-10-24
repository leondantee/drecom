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

// Function: caseD_4
// Address: 0x26c590 - 0x26c5d8
void caseD_4_0x26c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x26c590");
#endif

    ctx->pc = 0x26c590u;

    // 0x26c590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c594: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x26c594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
    // 0x26c598: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26C598u;
    {
        const bool branch_taken_0x26c598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c598) {
            ctx->pc = 0x26C5D8u;
            return;
        }
    }
    ctx->pc = 0x26C5A0u;
    // 0x26c5a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c5a4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x26c5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x26c5a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26c5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26c5ac: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x26c5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x26c5b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C5B0u;
    {
        const bool branch_taken_0x26c5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5b0) {
            ctx->pc = 0x26C5D8u;
            return;
        }
    }
    ctx->pc = 0x26C5B8u;
    // 0x26c5b8: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x26c5b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c5bc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x26c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x26c5c0: 0x30450080  andi        $a1, $v0, 0x80
    ctx->pc = 0x26c5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x26c5c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C5C4u;
    {
        const bool branch_taken_0x26c5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5c4) {
            ctx->pc = 0x26C5D8u;
            return;
        }
    }
    ctx->pc = 0x26C5CCu;
    // 0x26c5cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c5d0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c5d4: 0xace61b68  sw          $a2, 0x1B68($a3)
    ctx->pc = 0x26c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 6));
    ctx->pc = 0x26c5d8u;
}
