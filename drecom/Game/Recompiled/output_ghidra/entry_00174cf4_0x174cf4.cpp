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

// Function: entry_00174cf4
// Address: 0x174cf4 - 0x174d1c
void entry_00174cf4_0x174cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174cf4_0x174cf4");
#endif

    ctx->pc = 0x174cf4u;

    // 0x174cf4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x174cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174cf8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174cfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x174cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x174d00: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x174d04: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x174d04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174d08: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x174d08u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x174d0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x174d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x174d10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174D10u;
    {
        const bool branch_taken_0x174d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d10) {
            ctx->pc = 0x174D1Cu;
            return;
        }
    }
    ctx->pc = 0x174D18u;
    // 0x174d18: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x174d18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x174d1cu;
}
