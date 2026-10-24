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

// Function: entry_0030ef7c
// Address: 0x30ef7c - 0x30f020
void entry_0030ef7c_0x30ef7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ef7c_0x30ef7c");
#endif

    switch (ctx->pc) {
        case 0x30efacu: goto label_30efac;
        case 0x30effcu: goto label_30effc;
        case 0x30f01cu: goto label_30f01c;
        default: break;
    }

    ctx->pc = 0x30ef7cu;

    // 0x30ef7c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x30ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x30ef80: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30ef80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ef84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30ef88: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x30ef88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ef8c: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x30ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
    // 0x30ef90: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x30ef90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30ef94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30ef94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ef98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ef98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ef9c: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x30ef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x30efa0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30efa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30efa4: 0xc086488  jal         func_219220
    ctx->pc = 0x30EFA4u;
    SET_GPR_U32(ctx, 31, 0x30EFACu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30EFA4u, 0x30EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFACu;
label_30efac:
    // 0x30efac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30efacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30efb0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30efb4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x30efb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30efb8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30efb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30efbc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30efc0: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x30efc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x30efc4: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x30efc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x30efc8: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x30efc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30efcc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x30efccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30efd0: 0x3442020c  ori         $v0, $v0, 0x20C
    ctx->pc = 0x30efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)524);
    // 0x30efd4: 0x2683fffc  addiu       $v1, $s4, -0x4
    ctx->pc = 0x30efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x30efd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30efdc: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x30efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x30efe0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30efe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30efe4: 0x24c500e0  addiu       $a1, $a2, 0xE0
    ctx->pc = 0x30efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x30efe8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30efe8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30efec: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x30efecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30eff0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30eff0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eff4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30EFF4u;
    SET_GPR_U32(ctx, 31, 0x30EFFCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30EFF4u, 0x30EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFFCu;
label_30effc:
    // 0x30effc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30effcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f000: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f008: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30f008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f00c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f00cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f010: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30f010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f014: 0xc0561d4  jal         func_158750
    ctx->pc = 0x30F014u;
    SET_GPR_U32(ctx, 31, 0x30F01Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x30F014u, 0x30F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F01Cu;
label_30f01c:
    // 0x30f01c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30f01cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30f020u;
}
