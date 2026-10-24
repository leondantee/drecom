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

// Function: entry_00329c58
// Address: 0x329c58 - 0x329c78
void entry_00329c58_0x329c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329c58_0x329c58");
#endif

    ctx->pc = 0x329c58u;

    // 0x329c58: 0x92032905  lbu         $v1, 0x2905($s0)
    ctx->pc = 0x329c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10501)));
    // 0x329c5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329c64: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329C64u;
    {
        const bool branch_taken_0x329c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329c64) {
            ctx->pc = 0x329C78u;
            return;
        }
    }
    ctx->pc = 0x329C6Cu;
    // 0x329c6c: 0x92032909  lbu         $v1, 0x2909($s0)
    ctx->pc = 0x329c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10505)));
    // 0x329c70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329c74: 0xa2032909  sb          $v1, 0x2909($s0)
    ctx->pc = 0x329c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10505), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x329c78u;
}
