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

// Function: caseD_5
// Address: 0x14dbf8 - 0x14dc10
void caseD_5_0x14dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14dbf8");
#endif

    ctx->pc = 0x14dbf8u;

    // 0x14dbf8: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dbfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dc00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dc00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14dc04: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14DC04u;
    {
        const bool branch_taken_0x14dc04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14dc04) {
            ctx->pc = 0x14DC10u;
            return;
        }
    }
    ctx->pc = 0x14DC0Cu;
    // 0x14dc0c: 0xa60013ac  sh          $zero, 0x13AC($s0)
    ctx->pc = 0x14dc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14dc10u;
}
