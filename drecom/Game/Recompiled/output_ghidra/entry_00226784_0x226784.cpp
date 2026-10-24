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

// Function: entry_00226784
// Address: 0x226784 - 0x2267d0
void entry_00226784_0x226784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226784_0x226784");
#endif

    ctx->pc = 0x226784u;

    // 0x226784: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x226788: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x226788u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x22678c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22678cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x226790: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x226790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x226794: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x226798: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x226798u;
    {
        const bool branch_taken_0x226798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226798) {
            ctx->pc = 0x2267D0u;
            return;
        }
    }
    ctx->pc = 0x2267A0u;
    // 0x2267a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2267a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267ac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2267acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2267b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2267b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2267bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2267c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2267c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2267c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2267ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2267d0u;
}
