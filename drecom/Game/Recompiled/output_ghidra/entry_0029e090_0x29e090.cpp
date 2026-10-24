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

// Function: entry_0029e090
// Address: 0x29e090 - 0x29e128
void entry_0029e090_0x29e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e090_0x29e090");
#endif

    switch (ctx->pc) {
        case 0x29e0a0u: goto label_29e0a0;
        case 0x29e0acu: goto label_29e0ac;
        case 0x29e0bcu: goto label_29e0bc;
        case 0x29e0c8u: goto label_29e0c8;
        case 0x29e104u: goto label_29e104;
        case 0x29e10cu: goto label_29e10c;
        default: break;
    }

    ctx->pc = 0x29e090u;

    // 0x29e090: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e098: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29E098u;
    SET_GPR_U32(ctx, 31, 0x29E0A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29E098u, 0x29E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0A0u;
label_29e0a0:
    // 0x29e0a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0a4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29E0A4u;
    SET_GPR_U32(ctx, 31, 0x29E0ACu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29E0A4u, 0x29E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0ACu;
label_29e0ac:
    // 0x29e0ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e0b4: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29E0B4u;
    SET_GPR_U32(ctx, 31, 0x29E0BCu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29E0B4u, 0x29E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0BCu;
label_29e0bc:
    // 0x29e0bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0c0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29E0C0u;
    SET_GPR_U32(ctx, 31, 0x29E0C8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29E0C0u, 0x29E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0C8u;
label_29e0c8:
    // 0x29e0c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0cc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x29e0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x29e0d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29E0D0u;
    {
        const bool branch_taken_0x29e0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0d0) {
            ctx->pc = 0x29E128u;
            return;
        }
    }
    ctx->pc = 0x29E0D8u;
    // 0x29e0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e0dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29e0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e0e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e0f0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x29e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e0f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e0f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e0fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E0FCu;
    SET_GPR_U32(ctx, 31, 0x29E104u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E0FCu, 0x29E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E104u;
label_29e104:
    // 0x29e104: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E104u;
    SET_GPR_U32(ctx, 31, 0x29E10Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E104u, 0x29E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E10Cu;
label_29e10c:
    // 0x29e10c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e110: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x29e114: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x29e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x29e118: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x29e118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29e11c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x29e11cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x29e120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e124: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x29e124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x29e128u;
}
