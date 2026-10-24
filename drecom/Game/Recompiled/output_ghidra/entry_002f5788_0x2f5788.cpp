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

// Function: entry_002f5788
// Address: 0x2f5788 - 0x2f57ac
void entry_002f5788_0x2f5788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5788_0x2f5788");
#endif

    ctx->pc = 0x2f5788u;

    // 0x2f5788: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f578c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2f578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f5790: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5794: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5798: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F5798u;
    {
        const bool branch_taken_0x2f5798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5798) {
            ctx->pc = 0x2F5868u;
            return;
        }
    }
    ctx->pc = 0x2F57A0u;
    // 0x2f57a0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f57a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f57a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F57A4u;
    {
        const bool branch_taken_0x2f57a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f57a4) {
            ctx->pc = 0x2F5850u;
            return;
        }
    }
    ctx->pc = 0x2F57ACu;
}
