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

// Function: entry_001f3f84
// Address: 0x1f3f84 - 0x1f4004
void entry_001f3f84_0x1f3f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3f84_0x1f3f84");
#endif

    switch (ctx->pc) {
        case 0x1f3fb0u: goto label_1f3fb0;
        default: break;
    }

    ctx->pc = 0x1f3f84u;

    // 0x1f3f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f8c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f3f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3f9c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f3fa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3fa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3fa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3FA8u;
    SET_GPR_U32(ctx, 31, 0x1F3FB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3FA8u, 0x1F3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FB0u;
label_1f3fb0:
    // 0x1f3fb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f3fb8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f3fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f3fbc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f3fc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fc4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3fc8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f3fcc: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f3fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f3fd0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f3fd4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1f3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f3fd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fdc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f3fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3fe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fe4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f3fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f3fe8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3fec: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3ff0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3FF0u;
    {
        const bool branch_taken_0x1f3ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ff0) {
            ctx->pc = 0x1F4004u;
            return;
        }
    }
    ctx->pc = 0x1F3FF8u;
    // 0x1f3ff8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3ffc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4000: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f4004u;
}
