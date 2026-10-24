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

// Function: entry_002736f8
// Address: 0x2736f8 - 0x273720
void entry_002736f8_0x2736f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002736f8_0x2736f8");
#endif

    ctx->pc = 0x2736f8u;

    // 0x2736f8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x2736f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2736fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2736fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x273700: 0x2402015e  addiu       $v0, $zero, 0x15E
    ctx->pc = 0x273700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x273704: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273704u;
    {
        const bool branch_taken_0x273704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273704) {
            ctx->pc = 0x273720u;
            return;
        }
    }
    ctx->pc = 0x27370Cu;
    // 0x27370c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x273710: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x273710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x273714: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x273714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x273718: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x273718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x27371c: 0x0  nop
    ctx->pc = 0x27371cu;
    // NOP
    ctx->pc = 0x273720u;
}
