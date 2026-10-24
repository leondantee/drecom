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

// Function: entry_001cca74
// Address: 0x1cca74 - 0x1ccb00
void entry_001cca74_0x1cca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca74_0x1cca74");
#endif

    switch (ctx->pc) {
        case 0x1cca98u: goto label_1cca98;
        case 0x1ccae8u: goto label_1ccae8;
        default: break;
    }

    ctx->pc = 0x1cca74u;

    // 0x1cca74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca78: 0x8c631b68  lw          $v1, 0x1B68($v1)
    ctx->pc = 0x1cca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x1cca7c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CCA7Cu;
    {
        const bool branch_taken_0x1cca7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca7c) {
            ctx->pc = 0x1CCB00u;
            return;
        }
    }
    ctx->pc = 0x1CCA84u;
    // 0x1cca84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca8c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cca90: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CCA90u;
    SET_GPR_U32(ctx, 31, 0x1CCA98u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CCA90u, 0x1CCA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA98u;
label_1cca98:
    // 0x1cca98: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CCA98u;
    {
        const bool branch_taken_0x1cca98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca98) {
            ctx->pc = 0x1CCB00u;
            return;
        }
    }
    ctx->pc = 0x1CCAA0u;
    // 0x1ccaa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccaa4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ccaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ccaa8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ccaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ccaac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ccab0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ccab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ccab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ccab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ccab8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1ccab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ccabc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1ccabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ccac0: 0x34440016  ori         $a0, $v0, 0x16
    ctx->pc = 0x1ccac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1ccac4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccac8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1ccac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ccacc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccad0: 0x24650230  addiu       $a1, $v1, 0x230
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x1ccad4: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x1ccad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1ccad8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1ccad8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccadc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1ccadcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccae0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CCAE0u;
    SET_GPR_U32(ctx, 31, 0x1CCAE8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CCAE0u, 0x1CCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAE8u;
label_1ccae8:
    // 0x1ccae8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ccae8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccaec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccaf0: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1ccaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1ccaf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ccaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ccaf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ccaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ccafc: 0xac231a68  sw          $v1, 0x1A68($at)
    ctx->pc = 0x1ccafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1ccb00u;
}
