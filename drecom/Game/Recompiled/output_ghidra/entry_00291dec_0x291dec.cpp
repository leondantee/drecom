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

// Function: entry_00291dec
// Address: 0x291dec - 0x291ea8
void entry_00291dec_0x291dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291dec_0x291dec");
#endif

    switch (ctx->pc) {
        case 0x291e64u: goto label_291e64;
        case 0x291ea0u: goto label_291ea0;
        default: break;
    }

    ctx->pc = 0x291decu;

    // 0x291dec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x291decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x291df0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x291df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x291df4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x291df8: 0x34a61043  ori         $a2, $a1, 0x1043
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4163);
    // 0x291dfc: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x291dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x291e00: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291e04: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291e0c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x291e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291e10: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x291e14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x291e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x291e18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291e1c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291e20: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291e24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291e28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x291e28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x291e2c: 0x0  nop
    ctx->pc = 0x291e2cu;
    // NOP
    // 0x291e30: 0x0  nop
    ctx->pc = 0x291e30u;
    // NOP
    // 0x291e34: 0x1012  mflo        $v0
    ctx->pc = 0x291e34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x291e38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291e3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291e3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291e44: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x291e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x291e48: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291e48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291e4c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291e54: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291e54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291e58: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291e5c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291E5Cu;
    SET_GPR_U32(ctx, 31, 0x291E64u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291E5Cu, 0x291E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E64u;
label_291e64:
    // 0x291e64: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291e68: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291e68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291e6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291e70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291e74: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291e78: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x291e7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291e80: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x291e84: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291e84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291e88: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291e90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291e90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291e94: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291e94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291e98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291E98u;
    SET_GPR_U32(ctx, 31, 0x291EA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291E98u, 0x291EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EA0u;
label_291ea0:
    // 0x291ea0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291ea4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291ea4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x291ea8u;
}
