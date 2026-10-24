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

// Function: entry_002fc974
// Address: 0x2fc974 - 0x2fc9b8
void entry_002fc974_0x2fc974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc974_0x2fc974");
#endif

    ctx->pc = 0x2fc974u;

    // 0x2fc974: 0x16363c  dsll32      $a2, $s6, 24
    ctx->pc = 0x2fc974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fc978: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2fc978u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x2fc97c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2fc97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fc980: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x2fc980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2fc984: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2fc984u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2fc988: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fc988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc98c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc98cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc990: 0x3b63c  dsll32      $s6, $v1, 24
    ctx->pc = 0x2fc990u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc994: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc994u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc998: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2fc998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fc99c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc99cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc9a0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC9A0u;
    {
        const bool branch_taken_0x2fc9a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fc9a0) {
            ctx->pc = 0x2FC9B8u;
            return;
        }
    }
    ctx->pc = 0x2FC9A8u;
    // 0x2fc9a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2fc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc9ac: 0x3b63c  dsll32      $s6, $v1, 24
    ctx->pc = 0x2fc9acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc9b0: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc9b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc9b4: 0x0  nop
    ctx->pc = 0x2fc9b4u;
    // NOP
    ctx->pc = 0x2fc9b8u;
}
