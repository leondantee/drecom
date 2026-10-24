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

// Function: entry_002a76d4
// Address: 0x2a76d4 - 0x2a7764
void entry_002a76d4_0x2a76d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a76d4_0x2a76d4");
#endif

    switch (ctx->pc) {
        case 0x2a76e4u: goto label_2a76e4;
        case 0x2a76f4u: goto label_2a76f4;
        case 0x2a7704u: goto label_2a7704;
        case 0x2a7740u: goto label_2a7740;
        default: break;
    }

    ctx->pc = 0x2a76d4u;

    // 0x2a76d4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a76d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a76dc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A76DCu;
    SET_GPR_U32(ctx, 31, 0x2A76E4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A76DCu, 0x2A76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76E4u;
label_2a76e4:
    // 0x2a76e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a76e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a76e8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76ec: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A76ECu;
    SET_GPR_U32(ctx, 31, 0x2A76F4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A76ECu, 0x2A76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76F4u;
label_2a76f4:
    // 0x2a76f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a76f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a76f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76fc: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A76FCu;
    SET_GPR_U32(ctx, 31, 0x2A7704u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A76FCu, 0x2A7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7704u;
label_2a7704:
    // 0x2a7704: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7708: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a7708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a770c: 0x10600185  beqz        $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x2A770Cu;
    {
        const bool branch_taken_0x2a770c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a770c) {
            ctx->pc = 0x2A7D24u;
            return;
        }
    }
    ctx->pc = 0x2A7714u;
    // 0x2a7714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a7714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7718: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a771c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a771cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7720: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7724: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7728: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a772c: 0x24060421  addiu       $a2, $zero, 0x421
    ctx->pc = 0x2a772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x2a7730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7734: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7738: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7738u;
    SET_GPR_U32(ctx, 31, 0x2A7740u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7738u, 0x2A7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7740u;
label_2a7740:
    // 0x2a7740: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7744: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x2a7744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7748: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a774c: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2a774cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7750: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a7754: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7758: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2a7758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a775c: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2A775Cu;
    {
        const bool branch_taken_0x2a775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a775c) {
            ctx->pc = 0x2A7D24u;
            return;
        }
    }
    ctx->pc = 0x2A7764u;
}
