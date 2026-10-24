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

// Function: entry_003710ac
// Address: 0x3710ac - 0x37112c
void entry_003710ac_0x3710ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003710ac_0x3710ac");
#endif

    switch (ctx->pc) {
        case 0x3710bcu: goto label_3710bc;
        case 0x3710c8u: goto label_3710c8;
        case 0x3710d4u: goto label_3710d4;
        case 0x3710e0u: goto label_3710e0;
        default: break;
    }

    ctx->pc = 0x3710acu;

    // 0x3710ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3710b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3710b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3710B4u;
    SET_GPR_U32(ctx, 31, 0x3710BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3710B4u, 0x3710BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710BCu;
label_3710bc:
    // 0x3710bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710c0: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3710C0u;
    SET_GPR_U32(ctx, 31, 0x3710C8u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3710C0u, 0x3710C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710C8u;
label_3710c8:
    // 0x3710c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710cc: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3710CCu;
    SET_GPR_U32(ctx, 31, 0x3710D4u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3710CCu, 0x3710D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710D4u;
label_3710d4:
    // 0x3710d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710d8: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3710D8u;
    SET_GPR_U32(ctx, 31, 0x3710E0u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3710D8u, 0x3710E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710E0u;
label_3710e0:
    // 0x3710e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3710e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3710e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3710e8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3710E8u;
    {
        const bool branch_taken_0x3710e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3710e8) {
            ctx->pc = 0x37112Cu;
            return;
        }
    }
    ctx->pc = 0x3710F0u;
    // 0x3710f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3710f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3710f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3710f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3710f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3710fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3710fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371104: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x371104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x371108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37110c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37110cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x371110: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371114: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x371114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x371118: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37111c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37111cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371120: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x371120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371128: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x371128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x37112cu;
}
