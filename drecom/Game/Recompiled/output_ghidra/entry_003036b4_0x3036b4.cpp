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

// Function: entry_003036b4
// Address: 0x3036b4 - 0x303700
void entry_003036b4_0x3036b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003036b4_0x3036b4");
#endif

    switch (ctx->pc) {
        case 0x3036e0u: goto label_3036e0;
        default: break;
    }

    ctx->pc = 0x3036b4u;

    // 0x3036b4: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3036b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3036b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3036b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3036bc: 0xac43136c  sw          $v1, 0x136C($v0)
    ctx->pc = 0x3036bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4972), GPR_U32(ctx, 3));
    // 0x3036c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3036c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3036c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3036c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3036c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3036c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3036cc: 0x24060a08  addiu       $a2, $zero, 0xA08
    ctx->pc = 0x3036ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
    // 0x3036d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3036d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3036d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3036d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3036D8u;
    SET_GPR_U32(ctx, 31, 0x3036E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3036D8u, 0x3036E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3036E0u;
label_3036e0:
    // 0x3036e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3036e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3036e4: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x3036e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x3036e8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3036e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3036ec: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x3036ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x3036f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3036f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3036f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3036f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3036f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3036f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3036fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3036fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x303700u;
}
