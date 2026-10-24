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

// Function: entry_00252fac
// Address: 0x252fac - 0x252fc8
void entry_00252fac_0x252fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252fac_0x252fac");
#endif

    ctx->pc = 0x252facu;

    // 0x252fac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252fb0: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252fb8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252fbc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252fc0: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x252FC0u;
    {
        const bool branch_taken_0x252fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252fc0) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x252FC8u;
}
