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

// Function: entry_001c2230
// Address: 0x1c2230 - 0x1c2284
void entry_001c2230_0x1c2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2230_0x1c2230");
#endif

    switch (ctx->pc) {
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2268u: goto label_1c2268;
        default: break;
    }

    ctx->pc = 0x1c2230u;

    // 0x1c2230: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2234: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2238: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c223c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c223cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2244: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2248: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2248u;
    SET_GPR_U32(ctx, 31, 0x1C2250u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2248u, 0x1C2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2250u;
label_1c2250:
    // 0x1c2250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2254: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2258: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c2258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c225c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c2260: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C2260u;
    SET_GPR_U32(ctx, 31, 0x1C2268u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C2260u, 0x1C2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2268u;
label_1c2268:
    // 0x1c2268: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1c2268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c226c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2270: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c2270u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c2274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2278: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c227c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2280: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c2284u;
}
