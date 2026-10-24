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

// Function: entry_00291d28
// Address: 0x291d28 - 0x291dec
void entry_00291d28_0x291d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291d28_0x291d28");
#endif

    switch (ctx->pc) {
        case 0x291da0u: goto label_291da0;
        case 0x291ddcu: goto label_291ddc;
        default: break;
    }

    ctx->pc = 0x291d28u;

    // 0x291d28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x291d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x291d2c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x291d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x291d30: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291d34: 0x34451043  ori         $a1, $v0, 0x1043
    ctx->pc = 0x291d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x291d38: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x291d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x291d3c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291d40: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291d48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x291d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291d4c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x291d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x291d50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x291d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291d54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291d58: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291d5c: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291d60: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x291d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291d64: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x291d64u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x291d68: 0x0  nop
    ctx->pc = 0x291d68u;
    // NOP
    // 0x291d6c: 0x0  nop
    ctx->pc = 0x291d6cu;
    // NOP
    // 0x291d70: 0x2812  mflo        $a1
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x291d74: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x291d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291d78: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x291d78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x291d7c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x291d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x291d80: 0x34440064  ori         $a0, $v0, 0x64
    ctx->pc = 0x291d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x291d84: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x291d84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x291d88: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291d8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x291d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291d90: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x291d90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x291d94: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291d94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291d98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291D98u;
    SET_GPR_U32(ctx, 31, 0x291DA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291D98u, 0x291DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DA0u;
label_291da0:
    // 0x291da0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x291da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291da4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291da8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291da8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291dac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x291dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x291db0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x291db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x291db4: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x291db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x291db8: 0x34c51048  ori         $a1, $a2, 0x1048
    ctx->pc = 0x291db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4168);
    // 0x291dbc: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x291dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x291dc0: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x291dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x291dc4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291dc8: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291dcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291dd0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291dd4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291DD4u;
    SET_GPR_U32(ctx, 31, 0x291DDCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291DD4u, 0x291DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DDCu;
label_291ddc:
    // 0x291ddc: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x291ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291de0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x291de0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x291de4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x291DE4u;
    {
        const bool branch_taken_0x291de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291de4) {
            ctx->pc = 0x291EA8u;
            return;
        }
    }
    ctx->pc = 0x291DECu;
}
