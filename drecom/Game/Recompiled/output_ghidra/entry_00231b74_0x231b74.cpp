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

// Function: entry_00231b74
// Address: 0x231b74 - 0x231c0c
void entry_00231b74_0x231b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231b74_0x231b74");
#endif

    switch (ctx->pc) {
        case 0x231b8cu: goto label_231b8c;
        case 0x231be0u: goto label_231be0;
        case 0x231becu: goto label_231bec;
        default: break;
    }

    ctx->pc = 0x231b74u;

    // 0x231b74: 0xa3a00166  sb          $zero, 0x166($sp)
    ctx->pc = 0x231b74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 358), (uint8_t)GPR_U32(ctx, 0));
    // 0x231b78: 0xa3a00167  sb          $zero, 0x167($sp)
    ctx->pc = 0x231b78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 359), (uint8_t)GPR_U32(ctx, 0));
    // 0x231b7c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231b80: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x231b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x231b84: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x231B84u;
    SET_GPR_U32(ctx, 31, 0x231B8Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x231B84u, 0x231B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B8Cu;
label_231b8c:
    // 0x231b8c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231b8cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231b90: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x231B90u;
    {
        const bool branch_taken_0x231b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b90) {
            ctx->pc = 0x231D0Cu;
            return;
        }
    }
    ctx->pc = 0x231B98u;
    // 0x231b98: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231b9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x231b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x231ba0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x231ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x231ba4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x231ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x231ba8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x231ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x231bac: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x231bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x231bb0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x231bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x231bb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x231bb8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x231bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x231bbc: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231bc0: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x231bc4: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x231bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x231bc8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x231bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x231bcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231bccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x231bd0: 0x24e70880  addiu       $a3, $a3, 0x880
    ctx->pc = 0x231bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x231bd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x231bd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x231bd8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x231BD8u;
    SET_GPR_U32(ctx, 31, 0x231BE0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x231BD8u, 0x231BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BE0u;
label_231be0:
    // 0x231be0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x231be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231be4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x231BE4u;
    SET_GPR_U32(ctx, 31, 0x231BECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x231BE4u, 0x231BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BECu;
label_231bec:
    // 0x231bec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231becu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231bf0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231BF0u;
    {
        const bool branch_taken_0x231bf0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x231bf0) {
            ctx->pc = 0x231C0Cu;
            return;
        }
    }
    ctx->pc = 0x231BF8u;
    // 0x231bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231bfc: 0x0  nop
    ctx->pc = 0x231bfcu;
    // NOP
    // 0x231c00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x231c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231c04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231C04u;
    {
        const bool branch_taken_0x231c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c04) {
            ctx->pc = 0x231C28u;
            return;
        }
    }
    ctx->pc = 0x231C0Cu;
}
