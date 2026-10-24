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

// Function: entry_001cde54
// Address: 0x1cde54 - 0x1cdee4
void entry_001cde54_0x1cde54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cde54_0x1cde54");
#endif

    switch (ctx->pc) {
        case 0x1cde78u: goto label_1cde78;
        case 0x1cdeccu: goto label_1cdecc;
        default: break;
    }

    ctx->pc = 0x1cde54u;

    // 0x1cde54: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cde54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde58: 0x8cc31b68  lw          $v1, 0x1B68($a2)
    ctx->pc = 0x1cde58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7016)));
    // 0x1cde5c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CDE5Cu;
    {
        const bool branch_taken_0x1cde5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde5c) {
            ctx->pc = 0x1CDEE4u;
            return;
        }
    }
    ctx->pc = 0x1CDE64u;
    // 0x1cde64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cde64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cde68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde6c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cde70: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CDE70u;
    SET_GPR_U32(ctx, 31, 0x1CDE78u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CDE70u, 0x1CDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE78u;
label_1cde78:
    // 0x1cde78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cde78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cde7c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDE7Cu;
    {
        const bool branch_taken_0x1cde7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cde7c) {
            ctx->pc = 0x1CDEE4u;
            return;
        }
    }
    ctx->pc = 0x1CDE84u;
    // 0x1cde84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cde84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde88: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cde8c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1cde8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1cde90: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1cde90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cde94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cde94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1cde98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1cde98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1cde9c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cde9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cdea0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1cdea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cdea4: 0x34640016  ori         $a0, $v1, 0x16
    ctx->pc = 0x1cdea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22);
    // 0x1cdea8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdeac: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1cdeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cdeb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdeb4: 0x24a50220  addiu       $a1, $a1, 0x220
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
    // 0x1cdeb8: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1cdebc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1cdebcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdec0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1cdec0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdec4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CDEC4u;
    SET_GPR_U32(ctx, 31, 0x1CDECCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CDEC4u, 0x1CDECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDECCu;
label_1cdecc:
    // 0x1cdecc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cdeccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cded0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cded4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cded4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cded8: 0xac231a68  sw          $v1, 0x1A68($at)
    ctx->pc = 0x1cded8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    // 0x1cdedc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdee0: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1cdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    ctx->pc = 0x1cdee4u;
}
