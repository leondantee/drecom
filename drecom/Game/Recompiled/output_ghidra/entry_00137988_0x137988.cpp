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

// Function: entry_00137988
// Address: 0x137988 - 0x1379b8
void entry_00137988_0x137988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137988_0x137988");
#endif

    ctx->pc = 0x137988u;

    // 0x137988: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13798c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x137990: 0xa0600f30  sb          $zero, 0xF30($v1)
    ctx->pc = 0x137990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3888), (uint8_t)GPR_U32(ctx, 0));
    // 0x137994: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137998: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x137998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x13799c: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x13799cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1379a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1379a4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1379a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1379a8: 0xa0801170  sb          $zero, 0x1170($a0)
    ctx->pc = 0x1379a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4464), (uint8_t)GPR_U32(ctx, 0));
    // 0x1379ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1379acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1379b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1379B0u;
    {
        const bool branch_taken_0x1379b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379b0) {
            ctx->pc = 0x1379E0u;
            return;
        }
    }
    ctx->pc = 0x1379B8u;
}
