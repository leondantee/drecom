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

// Function: entry_001abf38
// Address: 0x1abf38 - 0x1abf80
void entry_001abf38_0x1abf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abf38_0x1abf38");
#endif

    ctx->pc = 0x1abf38u;

label_1abf38:
    // 0x1abf38: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abf3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abf44: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abf44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf48: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abf4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abf50: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abf50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abf54: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abf54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abf58: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abf5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abf60: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABF60u;
    {
        const bool branch_taken_0x1abf60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abf60) {
            ctx->pc = 0x1ABF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abf38;
        }
    }
    ctx->pc = 0x1ABF68u;
    // 0x1abf68: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1abf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1abf6c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abf70: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abf70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abf74: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1abf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abf78: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abf7c: 0x24703f40  addiu       $s0, $v1, 0x3F40
    ctx->pc = 0x1abf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16192));
    ctx->pc = 0x1abf80u;
}
