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

// Function: entry_002fc598
// Address: 0x2fc598 - 0x2fc5d8
void entry_002fc598_0x2fc598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc598_0x2fc598");
#endif

    ctx->pc = 0x2fc598u;

    // 0x2fc598: 0x17263c  dsll32      $a0, $s7, 24
    ctx->pc = 0x2fc598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc59c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc59cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc5a0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2fc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2fc5a4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2fc5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2fc5a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2fc5a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2fc5ac: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fc5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc5b0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc5b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc5b4: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x2fc5b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc5b8: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2fc5b8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x2fc5bc: 0x171e3c  dsll32      $v1, $s7, 24
    ctx->pc = 0x2fc5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc5c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc5c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc5c4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC5C4u;
    {
        const bool branch_taken_0x2fc5c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fc5c4) {
            ctx->pc = 0x2FC5D8u;
            return;
        }
    }
    ctx->pc = 0x2FC5CCu;
    // 0x2fc5cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc5d0: 0x4be3c  dsll32      $s7, $a0, 24
    ctx->pc = 0x2fc5d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc5d4: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2fc5d4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    ctx->pc = 0x2fc5d8u;
}
