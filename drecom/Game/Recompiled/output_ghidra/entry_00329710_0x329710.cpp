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

// Function: entry_00329710
// Address: 0x329710 - 0x32973c
void entry_00329710_0x329710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329710_0x329710");
#endif

    ctx->pc = 0x329710u;

    // 0x329710: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x329710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329714: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329718: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329718u;
    {
        const bool branch_taken_0x329718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329718) {
            ctx->pc = 0x32973Cu;
            return;
        }
    }
    ctx->pc = 0x329720u;
    // 0x329720: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x329720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x329724: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329728: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329728u;
    {
        const bool branch_taken_0x329728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329728) {
            ctx->pc = 0x32973Cu;
            return;
        }
    }
    ctx->pc = 0x329730u;
    // 0x329730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329734: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329738: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x329738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32973cu;
}
