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

// Function: entry_0014c09c
// Address: 0x14c09c - 0x14c110
void entry_0014c09c_0x14c09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c09c_0x14c09c");
#endif

    switch (ctx->pc) {
        case 0x14c0acu: goto label_14c0ac;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d8u: goto label_14c0d8;
        default: break;
    }

    ctx->pc = 0x14c09cu;

    // 0x14c09c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c0a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c0a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C0A4u;
    SET_GPR_U32(ctx, 31, 0x14C0ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C0A4u, 0x14C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0ACu;
label_14c0ac:
    // 0x14c0ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0b0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14C0B0u;
    SET_GPR_U32(ctx, 31, 0x14C0B8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C0B0u, 0x14C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0B8u;
label_14c0b8:
    // 0x14c0b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c0bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c0c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c0c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C0C4u;
    SET_GPR_U32(ctx, 31, 0x14C0CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C0C4u, 0x14C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0CCu;
label_14c0cc:
    // 0x14c0cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c0d0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C0D0u;
    SET_GPR_U32(ctx, 31, 0x14C0D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C0D0u, 0x14C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0D8u;
label_14c0d8:
    // 0x14c0d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0dc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14c0dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x14c0e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c0e4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14c0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c0e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c0f0: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x14C0F0u;
    {
        const bool branch_taken_0x14c0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0f0) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C0F8u;
    // 0x14c0f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14c0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14c100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c104: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14c104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c108: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x14C108u;
    {
        const bool branch_taken_0x14c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c108) {
            ctx->pc = 0x14C2A8u;
            return;
        }
    }
    ctx->pc = 0x14C110u;
}
