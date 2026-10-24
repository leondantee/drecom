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

// Function: entry_00122028
// Address: 0x122028 - 0x1220d4
void entry_00122028_0x122028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122028_0x122028");
#endif

    switch (ctx->pc) {
        case 0x122038u: goto label_122038;
        case 0x122068u: goto label_122068;
        default: break;
    }

    ctx->pc = 0x122028u;

    // 0x122028: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12202c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x12202cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x122030: 0xc048044  jal         func_120110
    ctx->pc = 0x122030u;
    SET_GPR_U32(ctx, 31, 0x122038u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x122030u, 0x122038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122038u;
label_122038:
    // 0x122038: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x122038u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12203c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122040: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x122040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x122044: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x122048: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x122048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x12204c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122050: 0x2404050d  addiu       $a0, $zero, 0x50D
    ctx->pc = 0x122050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x122054: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x122054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x122058: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x122058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12205c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12205cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x122060: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x122060u;
    SET_GPR_U32(ctx, 31, 0x122068u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x122060u, 0x122068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122068u;
label_122068:
    // 0x122068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x122068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12206c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12206cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122070: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x122070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x122074: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x122078: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x122078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x12207c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12207Cu;
    {
        const bool branch_taken_0x12207c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12207c) {
            ctx->pc = 0x1220D4u;
            return;
        }
    }
    ctx->pc = 0x122084u;
    // 0x122084: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122088: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x122088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12208c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x122090: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x122094: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x122094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x122098: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12209c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1220a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1220a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1220a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1220a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1220a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1220a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1220ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1220acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1220b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1220b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1220b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1220b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1220b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1220b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1220bc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1220bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1220c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1220c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1220c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1220c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1220c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1220c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1220cc: 0x10000318  b           . + 4 + (0x318 << 2)
    ctx->pc = 0x1220CCu;
    {
        const bool branch_taken_0x1220cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1220cc) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1220D4u;
}
