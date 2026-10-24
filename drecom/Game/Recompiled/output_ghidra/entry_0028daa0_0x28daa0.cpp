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

// Function: entry_0028daa0
// Address: 0x28daa0 - 0x28db3c
void entry_0028daa0_0x28daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028daa0_0x28daa0");
#endif

    switch (ctx->pc) {
        case 0x28db30u: goto label_28db30;
        default: break;
    }

    ctx->pc = 0x28daa0u;

    // 0x28daa0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28daa4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x28daa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28daa8: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x28DAA8u;
    {
        const bool branch_taken_0x28daa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28daa8) {
            ctx->pc = 0x28DB8Cu;
            return;
        }
    }
    ctx->pc = 0x28DAB0u;
    // 0x28dab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28dab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dab4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dab8: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28dab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28dabc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dac0: 0xac2027c0  sw          $zero, 0x27C0($at)
    ctx->pc = 0x28dac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C0u, _value); } while (0);
    // 0x28dac4: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28dac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dacc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28DACCu;
    {
        const bool branch_taken_0x28dacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dacc) {
            ctx->pc = 0x28DB3Cu;
            return;
        }
    }
    ctx->pc = 0x28DAD4u;
    // 0x28dad4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28dad8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x28dadc: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28dadcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28dae0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28dae4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28dae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28dae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28daec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x28daecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28daf0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28daf4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x28daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x28daf8: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x28daf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28dafc: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x28dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28db00: 0x346200a4  ori         $v0, $v1, 0xA4
    ctx->pc = 0x28db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)164);
    // 0x28db04: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x28db04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x28db08: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28db0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28db0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db10: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x28db14: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28db14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28db18: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x28db18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x28db1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28db1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28db20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28db20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28db24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28db24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28db28: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28DB28u;
    SET_GPR_U32(ctx, 31, 0x28DB30u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28DB28u, 0x28DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB30u;
label_28db30:
    // 0x28db30: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28db30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x28db34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DB34u;
    {
        const bool branch_taken_0x28db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db34) {
            ctx->pc = 0x28DB5Cu;
            return;
        }
    }
    ctx->pc = 0x28DB3Cu;
}
