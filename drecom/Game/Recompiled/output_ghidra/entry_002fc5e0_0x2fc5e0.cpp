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

// Function: entry_002fc5e0
// Address: 0x2fc5e0 - 0x2fc628
void entry_002fc5e0_0x2fc5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc5e0_0x2fc5e0");
#endif

    ctx->pc = 0x2fc5e0u;

    // 0x2fc5e0: 0x2e040002  sltiu       $a0, $s0, 0x2
    ctx->pc = 0x2fc5e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc5e4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2FC5E4u;
    {
        const bool branch_taken_0x2fc5e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc5e4) {
            ctx->pc = 0x2FC598u;
            return;
        }
    }
    ctx->pc = 0x2FC5ECu;
    // 0x2fc5ec: 0x171e3c  dsll32      $v1, $s7, 24
    ctx->pc = 0x2fc5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc5f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc5f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc5f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc5f8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2fc5f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2fc5fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2fc5fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2fc600: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2fc600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2fc604: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc608: 0xa3a3016f  sb          $v1, 0x16F($sp)
    ctx->pc = 0x2fc608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fc60c: 0x83a5016f  lb          $a1, 0x16F($sp)
    ctx->pc = 0x2fc60cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc610: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x2fc610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2fc614: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc618: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC618u;
    {
        const bool branch_taken_0x2fc618 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2fc618) {
            ctx->pc = 0x2FC628u;
            return;
        }
    }
    ctx->pc = 0x2FC620u;
    // 0x2fc620: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fc620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc624: 0xa3a4016f  sb          $a0, 0x16F($sp)
    ctx->pc = 0x2fc624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2fc628u;
}
