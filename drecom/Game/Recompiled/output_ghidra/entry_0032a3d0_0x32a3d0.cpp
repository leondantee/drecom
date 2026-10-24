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

// Function: entry_0032a3d0
// Address: 0x32a3d0 - 0x32a3f8
void entry_0032a3d0_0x32a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a3d0_0x32a3d0");
#endif

    ctx->pc = 0x32a3d0u;

    // 0x32a3d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a3d4: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a3dc: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A3DCu;
    {
        const bool branch_taken_0x32a3dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a3dc) {
            ctx->pc = 0x32A3F8u;
            return;
        }
    }
    ctx->pc = 0x32A3E4u;
    // 0x32a3e4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x32a3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a3e8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a3e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a3f0: 0x14c300b7  bne         $a2, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x32A3F0u;
    {
        const bool branch_taken_0x32a3f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a3f0) {
            ctx->pc = 0x32A6D0u;
            return;
        }
    }
    ctx->pc = 0x32A3F8u;
}
