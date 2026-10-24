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

// Function: entry_002a0f44
// Address: 0x2a0f44 - 0x2a0fd8
void entry_002a0f44_0x2a0f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0f44_0x2a0f44");
#endif

    switch (ctx->pc) {
        case 0x2a0f54u: goto label_2a0f54;
        case 0x2a0f68u: goto label_2a0f68;
        case 0x2a0f78u: goto label_2a0f78;
        case 0x2a0fb4u: goto label_2a0fb4;
        default: break;
    }

    ctx->pc = 0x2a0f44u;

    // 0x2a0f44: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a0f48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a0f4c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A0F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F54u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A0F4Cu, 0x2A0F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F54u;
label_2a0f54:
    // 0x2a0f54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0f54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0f58: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f5c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a0f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a0f60: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A0F60u;
    SET_GPR_U32(ctx, 31, 0x2A0F68u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A0F60u, 0x2A0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F68u;
label_2a0f68:
    // 0x2a0f68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0f68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0f6c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f70: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A0F70u;
    SET_GPR_U32(ctx, 31, 0x2A0F78u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A0F70u, 0x2A0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F78u;
label_2a0f78:
    // 0x2a0f78: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f7c: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2a0f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a0f80: 0x108001c8  beqz        $a0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2A0F80u;
    {
        const bool branch_taken_0x2a0f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f80) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A0F88u;
    // 0x2a0f88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0f8c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f90: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a0f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a0f94: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f98: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a0f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a0fa0: 0x24060421  addiu       $a2, $zero, 0x421
    ctx->pc = 0x2a0fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x2a0fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0fa8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a0fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a0fac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A0FACu;
    SET_GPR_U32(ctx, 31, 0x2A0FB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A0FACu, 0x2A0FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FB4u;
label_2a0fb4:
    // 0x2a0fb4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fb8: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x2a0fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0fbc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fc0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2a0fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0fc4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a0fc8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fcc: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2a0fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a0fd0: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2A0FD0u;
    {
        const bool branch_taken_0x2a0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0fd0) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A0FD8u;
}
