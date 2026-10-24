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

// Function: caseD_2
// Address: 0x34c130 - 0x34c1f4
void caseD_2_0x34c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x34c130");
#endif

    switch (ctx->pc) {
        case 0x34c140u: goto label_34c140;
        case 0x34c154u: goto label_34c154;
        case 0x34c164u: goto label_34c164;
        case 0x34c1acu: goto label_34c1ac;
        default: break;
    }

    ctx->pc = 0x34c130u;

    // 0x34c130: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34c138: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C138u;
    SET_GPR_U32(ctx, 31, 0x34C140u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C138u, 0x34C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C140u;
label_34c140:
    // 0x34c140: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c140u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c144: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c14c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C14Cu;
    SET_GPR_U32(ctx, 31, 0x34C154u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C14Cu, 0x34C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C154u;
label_34c154:
    // 0x34c154: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c154u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c158: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c15c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C15Cu;
    SET_GPR_U32(ctx, 31, 0x34C164u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C15Cu, 0x34C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C164u;
label_34c164:
    // 0x34c164: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c164u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c168: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c16c: 0x8465127a  lh          $a1, 0x127A($v1)
    ctx->pc = 0x34c16cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x34c170: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x34c170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x34c174: 0xa467127a  sh          $a3, 0x127A($v1)
    ctx->pc = 0x34c174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 7));
    // 0x34c178: 0x14a00355  bnez        $a1, . + 4 + (0x355 << 2)
    ctx->pc = 0x34C178u;
    {
        const bool branch_taken_0x34c178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c178) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C180u;
    // 0x34c180: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c184: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c188: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x34c188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c18c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c190: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c194: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34c194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34c198: 0x24060428  addiu       $a2, $zero, 0x428
    ctx->pc = 0x34c198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x34c19c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c1a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c1a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C1A4u;
    SET_GPR_U32(ctx, 31, 0x34C1ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C1A4u, 0x34C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1ACu;
label_34c1ac:
    // 0x34c1ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c1acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c1b0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c1b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34c1b8: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34c1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34c1bc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34c1c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c1c4: 0x34650002  ori         $a1, $v1, 0x2
    ctx->pc = 0x34c1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x34c1c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x34c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x34c1cc: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34c1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c1d0: 0x8ce302d0  lw          $v1, 0x2D0($a3)
    ctx->pc = 0x34c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
    // 0x34c1d4: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34c1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34c1d8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34c1dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c1e0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x34c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x34c1e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34c1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34c1e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34c1ec: 0x10000338  b           . + 4 + (0x338 << 2)
    ctx->pc = 0x34C1ECu;
    {
        const bool branch_taken_0x34c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c1ec) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C1F4u;
}
