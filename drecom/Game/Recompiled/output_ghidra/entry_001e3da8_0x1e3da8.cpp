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

// Function: entry_001e3da8
// Address: 0x1e3da8 - 0x1e3dc8
void entry_001e3da8_0x1e3da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3da8_0x1e3da8");
#endif

    ctx->pc = 0x1e3da8u;

    // 0x1e3da8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3dac: 0x0  nop
    ctx->pc = 0x1e3dacu;
    // NOP
    // 0x1e3db0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3DB0u;
    {
        const bool branch_taken_0x1e3db0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3db0) {
            ctx->pc = 0x1E3DC8u;
            return;
        }
    }
    ctx->pc = 0x1E3DB8u;
    // 0x1e3db8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3dbc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e3dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e3dc0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e3dc4: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3dc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1e3dc8u;
}
