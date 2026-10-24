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

// Function: entry_001335fc
// Address: 0x1335fc - 0x133640
void entry_001335fc_0x1335fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001335fc_0x1335fc");
#endif

    switch (ctx->pc) {
        case 0x13360cu: goto label_13360c;
        case 0x133618u: goto label_133618;
        default: break;
    }

    ctx->pc = 0x1335fcu;

    // 0x1335fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133604: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133604u;
    SET_GPR_U32(ctx, 31, 0x13360Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133604u, 0x13360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13360Cu;
label_13360c:
    // 0x13360c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133610: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133610u;
    SET_GPR_U32(ctx, 31, 0x133618u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133610u, 0x133618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133618u;
label_133618:
    // 0x133618: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13361c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13361cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133620: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133620u;
    {
        const bool branch_taken_0x133620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133620) {
            ctx->pc = 0x133640u;
            return;
        }
    }
    ctx->pc = 0x133628u;
    // 0x133628: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13362c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x13362cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x133630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133634: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133638: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x133638u;
    {
        const bool branch_taken_0x133638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133638) {
            ctx->pc = 0x133718u;
            return;
        }
    }
    ctx->pc = 0x133640u;
}
