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

// Function: entry_0034c7a8
// Address: 0x34c7a8 - 0x34c814
void entry_0034c7a8_0x34c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c7a8_0x34c7a8");
#endif

    switch (ctx->pc) {
        case 0x34c808u: goto label_34c808;
        default: break;
    }

    ctx->pc = 0x34c7a8u;

    // 0x34c7a8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7ac: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x34c7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x34c7b0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x34c7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x34c7b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34c7b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34c7b8: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x34c7b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x34c7bc: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x34C7BCu;
    {
        const bool branch_taken_0x34c7bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c7bc) {
            ctx->pc = 0x34C83Cu;
            return;
        }
    }
    ctx->pc = 0x34C7C4u;
    // 0x34c7c4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7c8: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x34c7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x34c7cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34c7d0: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x34c7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x34c7d4: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x34C7D4u;
    {
        const bool branch_taken_0x34c7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c7d4) {
            ctx->pc = 0x34C814u;
            return;
        }
    }
    ctx->pc = 0x34C7DCu;
    // 0x34c7dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c7e0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7e4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x34c7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c7e8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7ec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7f0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34c7f4: 0x2406042a  addiu       $a2, $zero, 0x42A
    ctx->pc = 0x34c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x34c7f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c7fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c800: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C800u;
    SET_GPR_U32(ctx, 31, 0x34C808u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C800u, 0x34C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C808u;
label_34c808:
    // 0x34c808: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c808u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c80c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34C80Cu;
    {
        const bool branch_taken_0x34c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c80c) {
            ctx->pc = 0x34C83Cu;
            return;
        }
    }
    ctx->pc = 0x34C814u;
}
