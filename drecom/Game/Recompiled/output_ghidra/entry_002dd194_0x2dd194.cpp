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

// Function: entry_002dd194
// Address: 0x2dd194 - 0x2dd1d8
void entry_002dd194_0x2dd194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd194_0x2dd194");
#endif

    ctx->pc = 0x2dd194u;

    // 0x2dd194: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd198: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dd198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dd19c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DD19Cu;
    {
        const bool branch_taken_0x2dd19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd19c) {
            ctx->pc = 0x2DD1D8u;
            return;
        }
    }
    ctx->pc = 0x2DD1A4u;
    // 0x2dd1a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd1a8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dd1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd1b0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1b4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd1b8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dd1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd1c0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dd1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd1c8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd1cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dd1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd1d4: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2dd1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2dd1d8u;
}
