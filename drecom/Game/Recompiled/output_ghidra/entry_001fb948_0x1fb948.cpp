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

// Function: entry_001fb948
// Address: 0x1fb948 - 0x1fb978
void entry_001fb948_0x1fb948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb948_0x1fb948");
#endif

    ctx->pc = 0x1fb948u;

    // 0x1fb948: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb94c: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1fb94cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb950: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fb950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb958: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fb958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb95c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb960: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fb960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb964: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB964u;
    {
        const bool branch_taken_0x1fb964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb964) {
            ctx->pc = 0x1FB978u;
            return;
        }
    }
    ctx->pc = 0x1FB96Cu;
    // 0x1fb96c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb970: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb974: 0xa0a30abc  sb          $v1, 0xABC($a1)
    ctx->pc = 0x1fb974u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2748), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1fb978u;
}
