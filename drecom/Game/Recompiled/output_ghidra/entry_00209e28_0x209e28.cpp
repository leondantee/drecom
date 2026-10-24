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

// Function: entry_00209e28
// Address: 0x209e28 - 0x209ef0
void entry_00209e28_0x209e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e28_0x209e28");
#endif

    switch (ctx->pc) {
        case 0x209e6cu: goto label_209e6c;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eecu: goto label_209eec;
        default: break;
    }

    ctx->pc = 0x209e28u;

    // 0x209e28: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x209e2c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x209E2Cu;
    {
        const bool branch_taken_0x209e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e2c) {
            ctx->pc = 0x209E10u;
            return;
        }
    }
    ctx->pc = 0x209E34u;
    // 0x209e34: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e38: 0xac601368  sw          $zero, 0x1368($v1)
    ctx->pc = 0x209e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4968), GPR_U32(ctx, 0));
    // 0x209e3c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e40: 0xac801374  sw          $zero, 0x1374($a0)
    ctx->pc = 0x209e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4980), GPR_U32(ctx, 0));
    // 0x209e44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209e48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209e4c: 0xe4209388  swc1        $f0, -0x6C78($at)
    ctx->pc = 0x209e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619388u, _value); } while (0); }
    // 0x209e50: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x209e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x209e54: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x209e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x209e58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x209e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209e5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209e60: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x209e64: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x209E64u;
    SET_GPR_U32(ctx, 31, 0x209E6Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x209E64u, 0x209E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E6Cu;
label_209e6c:
    // 0x209e6c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x209e6cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209e70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209e74: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x209e74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x209e78: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x209e7c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x209e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x209e80: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x209e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x209e84: 0x24030505  addiu       $v1, $zero, 0x505
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x209e88: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x209e88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x209e8c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e90: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x209e94: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x209e98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x209e98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209e9c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x209e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209ea0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x209ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x209ea4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x209ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x209ea8: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x209ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x209eac: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x209eb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x209eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209eb4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x209eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209eb8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x209eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209ebc: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x209ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x209ec0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x209EC0u;
    SET_GPR_U32(ctx, 31, 0x209EC8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x209EC8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x209EC8u) { return; }
    ctx->pc = 0x209EC8u;
label_209ec8:
    // 0x209ec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x209ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209ecc: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x209eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x209ed0: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x209ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x209ed4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x209ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209ed8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x209ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x209edc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x209ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x209ee4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x209EE4u;
    SET_GPR_U32(ctx, 31, 0x209EECu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x209EE4u, 0x209EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EECu;
label_209eec:
    // 0x209eec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x209eecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x209ef0u;
}
