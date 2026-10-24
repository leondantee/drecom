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

// Function: entry_001ff3b8
// Address: 0x1ff3b8 - 0x1ff3dc
void entry_001ff3b8_0x1ff3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff3b8_0x1ff3b8");
#endif

    ctx->pc = 0x1ff3b8u;

    // 0x1ff3b8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff3bc: 0x90a50344  lbu         $a1, 0x344($a1)
    ctx->pc = 0x1ff3bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1ff3c0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1ff3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff3c4: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x1ff3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff3c8: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1FF3C8u;
    {
        const bool branch_taken_0x1ff3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3c8) {
            ctx->pc = 0x1FF2CCu;
            return;
        }
    }
    ctx->pc = 0x1FF3D0u;
    // 0x1ff3d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ff3d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff3d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF3D4u;
    {
        const bool branch_taken_0x1ff3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3d4) {
            ctx->pc = 0x1FF418u;
            return;
        }
    }
    ctx->pc = 0x1FF3DCu;
}
