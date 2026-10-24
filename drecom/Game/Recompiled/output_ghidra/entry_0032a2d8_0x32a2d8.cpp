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

// Function: entry_0032a2d8
// Address: 0x32a2d8 - 0x32a314
void entry_0032a2d8_0x32a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a2d8_0x32a2d8");
#endif

    ctx->pc = 0x32a2d8u;

    // 0x32a2d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a2dc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2e4: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32A2E4u;
    {
        const bool branch_taken_0x32a2e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a2e4) {
            ctx->pc = 0x32A314u;
            return;
        }
    }
    ctx->pc = 0x32A2ECu;
    // 0x32a2ec: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32a2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32a2f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A2F4u;
    {
        const bool branch_taken_0x32a2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2f4) {
            ctx->pc = 0x32A314u;
            return;
        }
    }
    ctx->pc = 0x32A2FCu;
    // 0x32a2fc: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x32a2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a304: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x32a304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a308: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32a30c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x32a30cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a310: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x32a310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32a314u;
}
