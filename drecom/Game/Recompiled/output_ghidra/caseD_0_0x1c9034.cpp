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

// Function: caseD_0
// Address: 0x1c9034 - 0x1c90c8
void caseD_0_0x1c9034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c9034");
#endif

    switch (ctx->pc) {
        case 0x1c906cu: goto label_1c906c;
        case 0x1c90c0u: goto label_1c90c0;
        default: break;
    }

    ctx->pc = 0x1c9034u;

    // 0x1c9034: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9038: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c903c: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x1c9040: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1c9040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c9044: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c9048: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c9048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c904c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9050: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9054: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c9058: 0x2406079f  addiu       $a2, $zero, 0x79F
    ctx->pc = 0x1c9058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1951));
    // 0x1c905c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c905cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c9064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C9064u;
    SET_GPR_U32(ctx, 31, 0x1C906Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C9064u, 0x1C906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C906Cu;
label_1c906c:
    // 0x1c906c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9070: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c9070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c9074: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1c9074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1c9078: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1c9078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1c907c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C907Cu;
    {
        const bool branch_taken_0x1c907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c907c) {
            ctx->pc = 0x1C90C8u;
            return;
        }
    }
    ctx->pc = 0x1C9084u;
    // 0x1c9084: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1c9084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c9088: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c908c: 0xa0641576  sb          $a0, 0x1576($v1)
    ctx->pc = 0x1c908cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9090: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c9090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9094: 0x8ce30130  lw          $v1, 0x130($a3)
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1c9098: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
    // 0x1c909c: 0x34c24000  ori         $v0, $a2, 0x4000
    ctx->pc = 0x1c909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1c90a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c90a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c90a4: 0x24090300  addiu       $t1, $zero, 0x300
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1c90a8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x1c90a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1c90ac: 0x246a0030  addiu       $t2, $v1, 0x30
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1c90b0: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x1c90b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c90b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c90b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c90b8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C90B8u;
    SET_GPR_U32(ctx, 31, 0x1C90C0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C90B8u, 0x1C90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90C0u;
label_1c90c0:
    // 0x1c90c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C90C0u;
    {
        const bool branch_taken_0x1c90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90c0) {
            ctx->pc = 0x1C90D4u;
            return;
        }
    }
    ctx->pc = 0x1C90C8u;
}
