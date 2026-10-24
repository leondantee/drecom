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

// Function: entry_0032a37c
// Address: 0x32a37c - 0x32a3b0
void entry_0032a37c_0x32a37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a37c_0x32a37c");
#endif

    ctx->pc = 0x32a37cu;

    // 0x32a37c: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x32a37cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a380: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x32a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x32a384: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x32a384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a388: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x32a388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32a38c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a38cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a390: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A390u;
    {
        const bool branch_taken_0x32a390 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32a390) {
            ctx->pc = 0x32A3B0u;
            return;
        }
    }
    ctx->pc = 0x32A398u;
    // 0x32a398: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x32a398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a39c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a3a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a3a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a3a4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x32a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x32a3a8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32a3a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32a3ac: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32a3b0u;
}
