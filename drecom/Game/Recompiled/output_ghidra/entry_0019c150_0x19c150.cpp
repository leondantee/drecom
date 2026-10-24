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

// Function: entry_0019c150
// Address: 0x19c150 - 0x19c198
void entry_0019c150_0x19c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c150_0x19c150");
#endif

    switch (ctx->pc) {
        case 0x19c16cu: goto label_19c16c;
        default: break;
    }

    ctx->pc = 0x19c150u;

    // 0x19c150: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c154: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x19c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x19c158: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x19c15c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x19c15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19c160: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19c160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19c164: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19C164u;
    SET_GPR_U32(ctx, 31, 0x19C16Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19C164u, 0x19C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C16Cu;
label_19c16c:
    // 0x19c16c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19c170: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c174: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x19c174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c178: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c17c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19c17cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19c180: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c184: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x19c184u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19c188: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c18c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19c18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19c190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c194: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19c194u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19c198u;
}
