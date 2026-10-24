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

// Function: entry_001e1210
// Address: 0x1e1210 - 0x1e1244
void entry_001e1210_0x1e1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1210_0x1e1210");
#endif

    ctx->pc = 0x1e1210u;

    // 0x1e1210: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1214: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1e1214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e1218: 0x17c0feef  bnez        $fp, . + 4 + (-0x111 << 2)
    ctx->pc = 0x1E1218u;
    {
        const bool branch_taken_0x1e1218 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1218) {
            ctx->pc = 0x1E0DD8u;
            return;
        }
    }
    ctx->pc = 0x1E1220u;
    // 0x1e1220: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e1220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1224: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e1224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e1228: 0x16e30006  bne         $s7, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1228u;
    {
        const bool branch_taken_0x1e1228 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1228) {
            ctx->pc = 0x1E1244u;
            return;
        }
    }
    ctx->pc = 0x1E1230u;
    // 0x1e1230: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1234: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e1238: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e123c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e1240: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e1240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e1244u;
}
