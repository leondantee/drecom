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

// Function: entry_001a6e2c
// Address: 0x1a6e2c - 0x1a70d0
void entry_001a6e2c_0x1a6e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6e2c_0x1a6e2c");
#endif

    switch (ctx->pc) {
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6fb8u: goto label_1a6fb8;
        case 0x1a6fccu: goto label_1a6fcc;
        case 0x1a6fdcu: goto label_1a6fdc;
        case 0x1a6fe8u: goto label_1a6fe8;
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70ccu: goto label_1a70cc;
        default: break;
    }

    ctx->pc = 0x1a6e2cu;

    // 0x1a6e2c: 0x92270314  lbu         $a3, 0x314($s1)
    ctx->pc = 0x1a6e2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a6e30: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1a6e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a6e34: 0x30660001  andi        $a2, $v1, 0x1
    ctx->pc = 0x1a6e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a6e38: 0x10c000a5  beqz        $a2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1A6E38u;
    {
        const bool branch_taken_0x1a6e38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e38) {
            ctx->pc = 0x1A70D0u;
            return;
        }
    }
    ctx->pc = 0x1A6E40u;
    // 0x1a6e40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6e44: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6e48: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6e50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6e54: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x1a6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 4));
    // 0x1a6e58: 0x3c065c00  lui         $a2, 0x5C00
    ctx->pc = 0x1a6e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23552 << 16));
    // 0x1a6e5c: 0x34c61a06  ori         $a2, $a2, 0x1A06
    ctx->pc = 0x1a6e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6662);
    // 0x1a6e60: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6e64: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6e68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6e6c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6e70: 0xac460134  sw          $a2, 0x134($v0)
    ctx->pc = 0x1a6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 6));
    // 0x1a6e74: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a6e78: 0x34444040  ori         $a0, $v0, 0x4040
    ctx->pc = 0x1a6e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a6e7c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6e80: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6e84: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6e88: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6e8c: 0x24620138  addiu       $v0, $v1, 0x138
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x1a6e90: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6e94: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a6e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a6e98: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6E98u;
    SET_GPR_U32(ctx, 31, 0x1A6EA0u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6E98u, 0x1A6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EA0u;
label_1a6ea0:
    // 0x1a6ea0: 0x3c054070  lui         $a1, 0x4070
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16496 << 16));
    // 0x1a6ea4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1a6ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a6ea8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a6ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6eac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6eacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6eb0: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A6EB0u;
    SET_GPR_U32(ctx, 31, 0x1A6EB8u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A6EB0u, 0x1A6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EB8u;
label_1a6eb8:
    // 0x1a6eb8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a6eb8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6ebc: 0x8e2202fc  lw          $v0, 0x2FC($s1)
    ctx->pc = 0x1a6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    // 0x1a6ec0: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6ec0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6ec4: 0x0  nop
    ctx->pc = 0x1a6ec4u;
    // NOP
    // 0x1a6ec8: 0x0  nop
    ctx->pc = 0x1a6ec8u;
    // NOP
    // 0x1a6ecc: 0x2012  mflo        $a0
    ctx->pc = 0x1a6eccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a6ed0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6ED0u;
    SET_GPR_U32(ctx, 31, 0x1A6ED8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6ED0u, 0x1A6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ED8u;
label_1a6ed8:
    // 0x1a6ed8: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1a6ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a6edc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6edcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6ee0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A6EE0u;
    SET_GPR_U32(ctx, 31, 0x1A6EE8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A6EE0u, 0x1A6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6ee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6eec: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A6EECu;
    SET_GPR_U32(ctx, 31, 0x1A6EF4u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A6EECu, 0x1A6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EF4u;
label_1a6ef4:
    // 0x1a6ef4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1a6ef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6ef8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6efc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6f00: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a6f04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6f08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a6f0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6f10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6f14: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a6f18: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1a6f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6f1c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6f20: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6f24: 0x24628120  addiu       $v0, $v1, -0x7EE0
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a6f28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a6f2c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a6f30: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a6f34: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a6f38: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a6f3c: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x1a6f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a6f40: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6f44: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6f48: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6f4c: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1a6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1a6f50: 0x2462013c  addiu       $v0, $v1, 0x13C
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 316));
    // 0x1a6f54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6f58: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a6f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6f5c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6f60: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6f64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6f68: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6f6c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x1a6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1a6f70: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a6f74: 0x92230311  lbu         $v1, 0x311($s1)
    ctx->pc = 0x1a6f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 785)));
    // 0x1a6f78: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1a6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a6f7c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a6f80: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6f84: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a6f88: 0x8e2202fc  lw          $v0, 0x2FC($s1)
    ctx->pc = 0x1a6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    // 0x1a6f8c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1a6f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6f90: 0xd3001b  divu        $zero, $a2, $s3
    ctx->pc = 0x1a6f90u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1a6f94: 0x0  nop
    ctx->pc = 0x1a6f94u;
    // NOP
    // 0x1a6f98: 0x0  nop
    ctx->pc = 0x1a6f98u;
    // NOP
    // 0x1a6f9c: 0x2012  mflo        $a0
    ctx->pc = 0x1a6f9cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a6fa0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6FA0u;
    SET_GPR_U32(ctx, 31, 0x1A6FA8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6FA0u, 0x1A6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FA8u;
label_1a6fa8:
    // 0x1a6fa8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a6fa8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a6facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a6fb0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6FB0u;
    SET_GPR_U32(ctx, 31, 0x1A6FB8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6FB0u, 0x1A6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FB8u;
label_1a6fb8:
    // 0x1a6fb8: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a6fbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6fc0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fc4: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A6FC4u;
    SET_GPR_U32(ctx, 31, 0x1A6FCCu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A6FC4u, 0x1A6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FCCu;
label_1a6fcc:
    // 0x1a6fcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fd0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1a6fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a6fd4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A6FD4u;
    SET_GPR_U32(ctx, 31, 0x1A6FDCu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A6FD4u, 0x1A6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FDCu;
label_1a6fdc:
    // 0x1a6fdc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6fdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fe0: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A6FE0u;
    SET_GPR_U32(ctx, 31, 0x1A6FE8u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A6FE0u, 0x1A6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FE8u;
label_1a6fe8:
    // 0x1a6fe8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a6fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6fec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6ff0: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a6ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6ff8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a6ffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7000: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a7000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7004: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a7004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a7008: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1a7008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a700c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a7010: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a7014: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1a7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1a7018: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a701c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a7020: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a7020u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a7024: 0x0  nop
    ctx->pc = 0x1a7024u;
    // NOP
    // 0x1a7028: 0x0  nop
    ctx->pc = 0x1a7028u;
    // NOP
    // 0x1a702c: 0x1812  mflo        $v1
    ctx->pc = 0x1a702cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a7030: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a7034: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7038: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a703c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7040: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7044: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1a7044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a7048: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a704c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a704cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7054: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7058: 0x24420144  addiu       $v0, $v0, 0x144
    ctx->pc = 0x1a7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 324));
    // 0x1a705c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a705cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7060: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a7060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7064: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a7064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7068: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a7068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a706c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7070: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7074: 0x24620148  addiu       $v0, $v1, 0x148
    ctx->pc = 0x1a7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x1a7078: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a7078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a707c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a707cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7080: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7084: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7088: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x1a7088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a708c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a7090: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a7094: 0x24650130  addiu       $a1, $v1, 0x130
    ctx->pc = 0x1a7094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x1a7098: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A7098u;
    SET_GPR_U32(ctx, 31, 0x1A70A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A7098u, 0x1A70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70A0u;
label_1a70a0:
    // 0x1a70a0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a70a4: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1a70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a70a8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a70ac: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a70b0: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a70b4: 0x2491821  addu        $v1, $s2, $t1
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1a70b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a70bc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a70c0: 0x24650220  addiu       $a1, $v1, 0x220
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x1a70c4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A70C4u;
    SET_GPR_U32(ctx, 31, 0x1A70CCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A70C4u, 0x1A70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70CCu;
label_1a70cc:
    // 0x1a70cc: 0x0  nop
    ctx->pc = 0x1a70ccu;
    // NOP
    ctx->pc = 0x1a70d0u;
}
