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

// Function: entry_00273ae8
// Address: 0x273ae8 - 0x273b00
void entry_00273ae8_0x273ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273ae8_0x273ae8");
#endif

    ctx->pc = 0x273ae8u;

    // 0x273ae8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273ae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273aec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273AECu;
    {
        const bool branch_taken_0x273aec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273aec) {
            ctx->pc = 0x273B00u;
            return;
        }
    }
    ctx->pc = 0x273AF4u;
    // 0x273af4: 0x2416001d  addiu       $s6, $zero, 0x1D
    ctx->pc = 0x273af4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x273af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273AF8u;
    {
        const bool branch_taken_0x273af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273af8) {
            ctx->pc = 0x273B08u;
            return;
        }
    }
    ctx->pc = 0x273B00u;
}
