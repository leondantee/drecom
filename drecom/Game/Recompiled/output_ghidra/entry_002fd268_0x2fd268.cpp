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

// Function: entry_002fd268
// Address: 0x2fd268 - 0x2fd2a0
void entry_002fd268_0x2fd268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd268_0x2fd268");
#endif

    ctx->pc = 0x2fd268u;

    // 0x2fd268: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd26c: 0x8c710100  lw          $s1, 0x100($v1)
    ctx->pc = 0x2fd26cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2fd270: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fd270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fd274: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fd274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fd278: 0x12230116  beq         $s1, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x2FD278u;
    {
        const bool branch_taken_0x2fd278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fd278) {
            ctx->pc = 0x2FD6D4u;
            return;
        }
    }
    ctx->pc = 0x2FD280u;
    // 0x2fd280: 0x864315f0  lh          $v1, 0x15F0($s2)
    ctx->pc = 0x2fd280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5616)));
    // 0x2fd284: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fd284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fd288: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd288u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd28c: 0x39e3c  dsll32      $s3, $v1, 24
    ctx->pc = 0x2fd28cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fd290: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x2fd290u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x2fd294: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2fd294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fd298: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2FD298u;
    {
        const bool branch_taken_0x2fd298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd298) {
            ctx->pc = 0x2FD390u;
            return;
        }
    }
    ctx->pc = 0x2FD2A0u;
}
