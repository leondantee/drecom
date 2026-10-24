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

// Function: entry_00306280
// Address: 0x306280 - 0x306330
void entry_00306280_0x306280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306280_0x306280");
#endif

    switch (ctx->pc) {
        case 0x306310u: goto label_306310;
        default: break;
    }

    ctx->pc = 0x306280u;

    // 0x306280: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x306280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306284: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x306284u;
    {
        const bool branch_taken_0x306284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306284) {
            ctx->pc = 0x305F68u;
            return;
        }
    }
    ctx->pc = 0x30628Cu;
    // 0x30628c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306290: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x306290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x306294: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x306294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x306298: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x306298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x30629c: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x30629Cu;
    {
        const bool branch_taken_0x30629c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30629c) {
            ctx->pc = 0x306468u;
            return;
        }
    }
    ctx->pc = 0x3062A4u;
    // 0x3062a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3062a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3062a8: 0x244296c0  addiu       $v0, $v0, -0x6940
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x3062ac: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3062b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3062b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3996C0u));
    // 0x3062b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3062b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3062b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3062b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3062bc: 0x244296d0  addiu       $v0, $v0, -0x6930
    ctx->pc = 0x3062bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x3062c0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3062c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3062c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3062c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3996D0u));
    // 0x3062c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3062c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3062cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3062d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3062d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3062d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3062d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3062d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3062d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3062dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3062dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3062e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3062e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3062e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3062e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3062e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3062e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3062ec: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x3062ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x3062f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3062f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3062f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3062f8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3062f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3062fc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3062fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x306300: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x306300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x306304: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x306304u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306308: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x306308u;
    SET_GPR_U32(ctx, 31, 0x306310u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x306308u, 0x306310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306310u;
label_306310:
    // 0x306310: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x306310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306314: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x306314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x306318: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x306318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x30631c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x306320: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x306320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x306324: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x306324u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306328: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x306328u;
    {
        const bool branch_taken_0x306328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306328) {
            ctx->pc = 0x306448u;
            return;
        }
    }
    ctx->pc = 0x306330u;
}
