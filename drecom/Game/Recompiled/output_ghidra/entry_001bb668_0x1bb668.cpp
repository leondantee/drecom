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

// Function: entry_001bb668
// Address: 0x1bb668 - 0x1bb690
void entry_001bb668_0x1bb668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb668_0x1bb668");
#endif

    switch (ctx->pc) {
        case 0x1bb680u: goto label_1bb680;
        default: break;
    }

    ctx->pc = 0x1bb668u;

    // 0x1bb668: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb66c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb670: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x1bb674: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1bb674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1bb678: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1BB680u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BB680u) { return; }
    ctx->pc = 0x1BB680u;
label_1bb680:
    // 0x1bb680: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb684: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bb684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bb688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb68c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bb690u;
}
