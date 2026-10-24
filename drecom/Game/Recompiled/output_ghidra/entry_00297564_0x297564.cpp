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

// Function: entry_00297564
// Address: 0x297564 - 0x29757c
void entry_00297564_0x297564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297564_0x297564");
#endif

    ctx->pc = 0x297564u;

    // 0x297564: 0x3c028010  lui         $v0, 0x8010
    ctx->pc = 0x297564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32784 << 16));
    // 0x297568: 0x34436010  ori         $v1, $v0, 0x6010
    ctx->pc = 0x297568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24592);
    // 0x29756c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x29756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297570: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297574: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x297574u;
    {
        const bool branch_taken_0x297574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297574) {
            ctx->pc = 0x2975A8u;
            return;
        }
    }
    ctx->pc = 0x29757Cu;
}
