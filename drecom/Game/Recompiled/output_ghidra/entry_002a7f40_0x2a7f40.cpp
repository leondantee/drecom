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

// Function: entry_002a7f40
// Address: 0x2a7f40 - 0x2a7fcc
void entry_002a7f40_0x2a7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7f40_0x2a7f40");
#endif

    switch (ctx->pc) {
        case 0x2a7f50u: goto label_2a7f50;
        case 0x2a7f5cu: goto label_2a7f5c;
        case 0x2a7f68u: goto label_2a7f68;
        case 0x2a7fa8u: goto label_2a7fa8;
        default: break;
    }

    ctx->pc = 0x2a7f40u;

    // 0x2a7f40: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7f44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7f48: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7F48u;
    SET_GPR_U32(ctx, 31, 0x2A7F50u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7F48u, 0x2A7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F50u;
label_2a7f50:
    // 0x2a7f50: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f54: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A7F54u;
    SET_GPR_U32(ctx, 31, 0x2A7F5Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A7F54u, 0x2A7F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F5Cu;
label_2a7f5c:
    // 0x2a7f5c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f60: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A7F60u;
    SET_GPR_U32(ctx, 31, 0x2A7F68u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A7F60u, 0x2A7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F68u;
label_2a7f68:
    // 0x2a7f68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a7f68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7f6c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f70: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2a7f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a7f74: 0x10800198  beqz        $a0, . + 4 + (0x198 << 2)
    ctx->pc = 0x2A7F74u;
    {
        const bool branch_taken_0x2a7f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f74) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A7F7Cu;
    // 0x2a7f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7f80: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2a7f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7f88: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f8c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f90: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a7f94: 0x24060421  addiu       $a2, $zero, 0x421
    ctx->pc = 0x2a7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x2a7f98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7fa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7FA0u;
    SET_GPR_U32(ctx, 31, 0x2A7FA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7FA0u, 0x2A7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FA8u;
label_2a7fa8:
    // 0x2a7fa8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fac: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x2a7facu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7fb0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fb4: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2a7fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7fb8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a7fbc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fc0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2a7fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a7fc4: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x2A7FC4u;
    {
        const bool branch_taken_0x2a7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fc4) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A7FCCu;
}
