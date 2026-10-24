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

// Function: entry_001212bc
// Address: 0x1212bc - 0x1212d8
void entry_001212bc_0x1212bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001212bc_0x1212bc");
#endif

    ctx->pc = 0x1212bcu;

    // 0x1212bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1212bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1212c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1212c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1212c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1212c8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1212c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1212cc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1212CCu;
    {
        const bool branch_taken_0x1212cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212cc) {
            ctx->pc = 0x1212D8u;
            return;
        }
    }
    ctx->pc = 0x1212D4u;
    // 0x1212d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1212d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1212d8u;
}
