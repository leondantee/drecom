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

// Function: Eff_status_load
// Address: 0x18aa80 - 0x18abf8
void Eff_status_load_0x18aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_status_load_0x18aa80");
#endif

    switch (ctx->pc) {
        case 0x18aad4u: goto label_18aad4;
        case 0x18ab04u: goto label_18ab04;
        case 0x18ab38u: goto label_18ab38;
        case 0x18ab68u: goto label_18ab68;
        case 0x18ab94u: goto label_18ab94;
        case 0x18abb8u: goto label_18abb8;
        default: break;
    }

    ctx->pc = 0x18aa80u;

    // 0x18aa80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18aa84: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x18aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x18aa88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18aa8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18aa90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18aa94: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18aa98: 0x2451a630  addiu       $s1, $v0, -0x59D0
    ctx->pc = 0x18aa98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18aa9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aaa0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x18aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x18aaa4: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x18aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x18aaa8: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18aaac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18aaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18aab0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aab4: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x18aab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x18aab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aabc: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x18aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x18aac0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aac4: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18aac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    // 0x18aac8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18aac8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18aacc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18AACCu;
    {
        const bool branch_taken_0x18aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aacc) {
            ctx->pc = 0x18AAF0u;
            goto label_18aaf0;
        }
    }
    ctx->pc = 0x18AAD4u;
label_18aad4:
    // 0x18aad4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18aad8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18aadc: 0x2442a608  addiu       $v0, $v0, -0x59F8
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944264));
    // 0x18aae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18aae4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18aae8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18aaec: 0x0  nop
    ctx->pc = 0x18aaecu;
    // NOP
label_18aaf0:
    // 0x18aaf0: 0x1a00fff8  blez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18AAF0u;
    {
        const bool branch_taken_0x18aaf0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x18aaf0) {
            ctx->pc = 0x18AAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aad4;
        }
    }
    ctx->pc = 0x18AAF8u;
    // 0x18aaf8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18aaf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18aafc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18AAFCu;
    {
        const bool branch_taken_0x18aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aafc) {
            ctx->pc = 0x18AB18u;
            goto label_18ab18;
        }
    }
    ctx->pc = 0x18AB04u;
label_18ab04:
    // 0x18ab04: 0x240200bb  addiu       $v0, $zero, 0xBB
    ctx->pc = 0x18ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18ab08: 0xa2220020  sb          $v0, 0x20($s1)
    ctx->pc = 0x18ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ab0c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x18ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18ab10: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x18ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ab14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18ab14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18ab18:
    // 0x18ab18: 0x1a00fffa  blez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AB18u;
    {
        const bool branch_taken_0x18ab18 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x18ab18) {
            ctx->pc = 0x18AB04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ab04;
        }
    }
    ctx->pc = 0x18AB20u;
    // 0x18ab20: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x18ab24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab28: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab30: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18AB30u;
    SET_GPR_U32(ctx, 31, 0x18AB38u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18AB30u, 0x18AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB38u;
label_18ab38:
    // 0x18ab38: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18ab38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18ab3c: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x18AB3Cu;
    {
        const bool branch_taken_0x18ab3c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x18ab3c) {
            ctx->pc = 0x18AB7Cu;
            goto label_18ab7c;
        }
    }
    ctx->pc = 0x18AB44u;
    // 0x18ab44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab48: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ab4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18ab50: 0xac22a608  sw          $v0, -0x59F8($at)
    ctx->pc = 0x18ab50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A608u, _value); } while (0);
    // 0x18ab54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab58: 0x8c24ac50  lw          $a0, -0x53B0($at)
    ctx->pc = 0x18ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18ab60: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x18AB60u;
    SET_GPR_U32(ctx, 31, 0x18AB68u);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x18AB60u, 0x18AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB68u;
label_18ab68:
    // 0x18ab68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab6c: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab70: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18ab74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab78: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18ab78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18ab7c:
    // 0x18ab7c: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x18ab80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab84: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab8c: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18AB8Cu;
    SET_GPR_U32(ctx, 31, 0x18AB94u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18AB8Cu, 0x18AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB94u;
label_18ab94:
    // 0x18ab94: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18ab94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18ab98: 0x640000c  bltz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x18AB98u;
    {
        const bool branch_taken_0x18ab98 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x18ab98) {
            ctx->pc = 0x18ABCCu;
            goto label_18abcc;
        }
    }
    ctx->pc = 0x18ABA0u;
    // 0x18aba0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18aba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x18aba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aba8: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18abac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18abacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18abb0: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18ABB0u;
    SET_GPR_U32(ctx, 31, 0x18ABB8u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18ABB0u, 0x18ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABB8u;
label_18abb8:
    // 0x18abb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18abbc: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18abc0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18abc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18abc8: 0xac23ac50  sw          $v1, -0x53B0($at)
    ctx->pc = 0x18abc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
label_18abcc:
    // 0x18abcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18abccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18abd0: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18abd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18abd8: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x18abd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x18abdc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x18abdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18abe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18abe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18abe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18abe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18abe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18abe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18abec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x18ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ABF8u;
}
