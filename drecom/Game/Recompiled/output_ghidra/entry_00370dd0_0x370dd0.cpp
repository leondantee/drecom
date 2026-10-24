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

// Function: entry_00370dd0
// Address: 0x370dd0 - 0x370e54
void entry_00370dd0_0x370dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370dd0_0x370dd0");
#endif

    switch (ctx->pc) {
        case 0x370de0u: goto label_370de0;
        case 0x370decu: goto label_370dec;
        case 0x370df8u: goto label_370df8;
        case 0x370e04u: goto label_370e04;
        case 0x370e4cu: goto label_370e4c;
        default: break;
    }

    ctx->pc = 0x370dd0u;

    // 0x370dd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370dd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370dd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370dd8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370DD8u;
    SET_GPR_U32(ctx, 31, 0x370DE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370DD8u, 0x370DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DE0u;
label_370de0:
    // 0x370de0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370de4: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370DE4u;
    SET_GPR_U32(ctx, 31, 0x370DECu);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370DE4u, 0x370DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DECu;
label_370dec:
    // 0x370dec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370df0: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370DF0u;
    SET_GPR_U32(ctx, 31, 0x370DF8u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370DF0u, 0x370DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DF8u;
label_370df8:
    // 0x370df8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370dfc: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370DFCu;
    SET_GPR_U32(ctx, 31, 0x370E04u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370DFCu, 0x370E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E04u;
label_370e04:
    // 0x370e04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x370e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x370e0c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x370E0Cu;
    {
        const bool branch_taken_0x370e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e0c) {
            ctx->pc = 0x370EECu;
            return;
        }
    }
    ctx->pc = 0x370E14u;
    // 0x370e14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x370e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e18: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x370e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x370e1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x370e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x370e20: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x370e20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370e24: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x370E24u;
    {
        const bool branch_taken_0x370e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e24) {
            ctx->pc = 0x370E54u;
            return;
        }
    }
    ctx->pc = 0x370E2Cu;
    // 0x370e2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370e38: 0x24061e0b  addiu       $a2, $zero, 0x1E0B
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7691));
    // 0x370e3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370e44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370E44u;
    SET_GPR_U32(ctx, 31, 0x370E4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370E44u, 0x370E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E4Cu;
label_370e4c:
    // 0x370e4c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x370E4Cu;
    {
        const bool branch_taken_0x370e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e4c) {
            ctx->pc = 0x370EECu;
            return;
        }
    }
    ctx->pc = 0x370E54u;
}
