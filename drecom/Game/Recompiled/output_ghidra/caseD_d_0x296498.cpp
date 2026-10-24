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

// Function: caseD_d
// Address: 0x296498 - 0x2964b0
void caseD_d_0x296498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x296498");
#endif

    ctx->pc = 0x296498u;

    // 0x296498: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x296498u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29649c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x29649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2964a0: 0xa06069cc  sb          $zero, 0x69CC($v1)
    ctx->pc = 0x2964a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27084), (uint8_t)GPR_U32(ctx, 0));
    // 0x2964a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2964a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2964a8: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x2964a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x2964ac: 0x0  nop
    ctx->pc = 0x2964acu;
    // NOP
    ctx->pc = 0x2964b0u;
}
