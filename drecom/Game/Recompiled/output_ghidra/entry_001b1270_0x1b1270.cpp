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

// Function: entry_001b1270
// Address: 0x1b1270 - 0x1b1298
void entry_001b1270_0x1b1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1270_0x1b1270");
#endif

    ctx->pc = 0x1b1270u;

    // 0x1b1270: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b1274: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b1274u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b1278: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b127c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b127cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b1280: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b1280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b1284: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b1284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1288: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1B1288u;
    {
        const bool branch_taken_0x1b1288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1288) {
            ctx->pc = 0x1B1128u;
            return;
        }
    }
    ctx->pc = 0x1B1290u;
    // 0x1b1290: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B1290u;
    {
        const bool branch_taken_0x1b1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1290) {
            ctx->pc = 0x1B1300u;
            return;
        }
    }
    ctx->pc = 0x1B1298u;
}
