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

// Function: entry_0016eca8
// Address: 0x16eca8 - 0x16ecc8
void entry_0016eca8_0x16eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eca8_0x16eca8");
#endif

    ctx->pc = 0x16eca8u;

    // 0x16eca8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ecac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x16ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16ecb0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16ECB0u;
    {
        const bool branch_taken_0x16ecb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ecb0) {
            ctx->pc = 0x16ECC8u;
            return;
        }
    }
    ctx->pc = 0x16ECB8u;
    // 0x16ecb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ecbc: 0xa7a200de  sh          $v0, 0xDE($sp)
    ctx->pc = 0x16ecbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 222), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ecc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16ECC0u;
    {
        const bool branch_taken_0x16ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecc0) {
            ctx->pc = 0x16ECE8u;
            return;
        }
    }
    ctx->pc = 0x16ECC8u;
}
