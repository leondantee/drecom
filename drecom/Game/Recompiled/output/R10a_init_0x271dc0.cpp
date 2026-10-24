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

// Function: R10a_init
// Address: 0x271dc0 - 0x271f9c
void R10a_init_0x271dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_init_0x271dc0");
#endif

    switch (ctx->pc) {
        case 0x271df0u: goto label_271df0;
        case 0x271df8u: goto label_271df8;
        case 0x271e08u: goto label_271e08;
        case 0x271e1cu: goto label_271e1c;
        case 0x271e30u: goto label_271e30;
        case 0x271e44u: goto label_271e44;
        case 0x271e58u: goto label_271e58;
        case 0x271e6cu: goto label_271e6c;
        case 0x271e80u: goto label_271e80;
        case 0x271ea4u: goto label_271ea4;
        case 0x271f34u: goto label_271f34;
        default: break;
    }

    ctx->pc = 0x271dc0u;

    // 0x271dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271dc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x271dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x271dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271dcc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x271dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x271dd0: 0x2450fe00  addiu       $s0, $v0, -0x200
    ctx->pc = 0x271dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x271dd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271dd8: 0xac20fd78  sw          $zero, -0x288($at)
    ctx->pc = 0x271dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD78u, _value); } while (0);
    // 0x271ddc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x271ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x271de0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271de0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271de4: 0x24061c20  addiu       $a2, $zero, 0x1C20
    ctx->pc = 0x271de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
    // 0x271de8: 0xc046314  jal         func_118C50
    ctx->pc = 0x271DE8u;
    SET_GPR_U32(ctx, 31, 0x271DF0u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x271DF0u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x271DF0u) { return; }
    ctx->pc = 0x271DF0u;
label_271df0:
    // 0x271df0: 0xc09db64  jal         func_276D90
    ctx->pc = 0x271DF0u;
    SET_GPR_U32(ctx, 31, 0x271DF8u);
    ctx->pc = 0x276D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D90u, 0x271DF0u, 0x271DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DF8u;
label_271df8:
    // 0x271df8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271dfc: 0x2444d1b0  addiu       $a0, $v0, -0x2E50
    ctx->pc = 0x271dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x271e00: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x271E00u;
    SET_GPR_U32(ctx, 31, 0x271E08u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x271E00u, 0x271E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E08u;
label_271e08:
    // 0x271e08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271e0c: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x271e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x271e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e14: 0xc096390  jal         func_258E40
    ctx->pc = 0x271E14u;
    SET_GPR_U32(ctx, 31, 0x271E1Cu);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x271E14u, 0x271E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E1Cu;
label_271e1c:
    // 0x271e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271e20: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x271e20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x271e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e28: 0xc096390  jal         func_258E40
    ctx->pc = 0x271E28u;
    SET_GPR_U32(ctx, 31, 0x271E30u);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x271E28u, 0x271E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E30u;
label_271e30:
    // 0x271e30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271e34: 0x8c24f9e8  lw          $a0, -0x618($at)
    ctx->pc = 0x271e34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x271e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e3c: 0xc096390  jal         func_258E40
    ctx->pc = 0x271E3Cu;
    SET_GPR_U32(ctx, 31, 0x271E44u);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x271E3Cu, 0x271E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E44u;
label_271e44:
    // 0x271e44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271e48: 0x8c24f9ec  lw          $a0, -0x614($at)
    ctx->pc = 0x271e48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x271e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e50: 0xc096390  jal         func_258E40
    ctx->pc = 0x271E50u;
    SET_GPR_U32(ctx, 31, 0x271E58u);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x271E50u, 0x271E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E58u;
label_271e58:
    // 0x271e58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271e5c: 0x8c24f9f0  lw          $a0, -0x610($at)
    ctx->pc = 0x271e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9F0u));
    // 0x271e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e64: 0xc096390  jal         func_258E40
    ctx->pc = 0x271E64u;
    SET_GPR_U32(ctx, 31, 0x271E6Cu);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x271E64u, 0x271E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E6Cu;
label_271e6c:
    // 0x271e6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271e70: 0x8c24f9f4  lw          $a0, -0x60C($at)
    ctx->pc = 0x271e70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9F4u));
    // 0x271e74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271e78: 0xc096390  jal         func_258E40
    ctx->pc = 0x271E78u;
    SET_GPR_U32(ctx, 31, 0x271E80u);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x271E78u, 0x271E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E80u;
label_271e80:
    // 0x271e80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271e84: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x271e84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x271e88: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x271e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x271e8c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x271E8Cu;
    {
        const bool branch_taken_0x271e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271e8c) {
            ctx->pc = 0x271F3Cu;
            goto label_271f3c;
        }
    }
    ctx->pc = 0x271E94u;
    // 0x271e94: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271e98: 0x2444d020  addiu       $a0, $v0, -0x2FE0
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x271e9c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x271E9Cu;
    SET_GPR_U32(ctx, 31, 0x271EA4u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x271E9Cu, 0x271EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271EA4u;
label_271ea4:
    // 0x271ea4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x271ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x271ea8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271eac: 0xa022d551  sb          $v0, -0x2AAF($at)
    ctx->pc = 0x271eacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x271eb0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x271eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x271eb4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271eb8: 0xac22d558  sw          $v0, -0x2AA8($at)
    ctx->pc = 0x271eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD558u, _value); } while (0);
    // 0x271ebc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x271ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x271ec0: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x271ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
    // 0x271ec4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271ec8: 0xac22d55c  sw          $v0, -0x2AA4($at)
    ctx->pc = 0x271ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD55Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD55Cu, _value); } while (0);
    // 0x271ecc: 0x3c0244ca  lui         $v0, 0x44CA
    ctx->pc = 0x271eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17610 << 16));
    // 0x271ed0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x271ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x271ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271ed8: 0x0  nop
    ctx->pc = 0x271ed8u;
    // NOP
    // 0x271edc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x271edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x271ee0: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x271ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x271ee4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x271ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x271ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271eec: 0x0  nop
    ctx->pc = 0x271eecu;
    // NOP
    // 0x271ef0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x271ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x271ef4: 0x3c02c5a4  lui         $v0, 0xC5A4
    ctx->pc = 0x271ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50596 << 16));
    // 0x271ef8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x271ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x271efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271f00: 0x0  nop
    ctx->pc = 0x271f00u;
    // NOP
    // 0x271f04: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x271f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x271f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x271f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x271f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271f10: 0x0  nop
    ctx->pc = 0x271f10u;
    // NOP
    // 0x271f14: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x271f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x271f18: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x271f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x271f1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x271f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271f20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x271f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271f24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x271f24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271f28: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x271f28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271f2c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x271F2Cu;
    SET_GPR_U32(ctx, 31, 0x271F34u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x271F2Cu, 0x271F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F34u;
label_271f34:
    // 0x271f34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271F34u;
    {
        const bool branch_taken_0x271f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271f34) {
            ctx->pc = 0x271F48u;
            goto label_271f48;
        }
    }
    ctx->pc = 0x271F3Cu;
label_271f3c:
    // 0x271f3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271f40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f44: 0xa023d551  sb          $v1, -0x2AAF($at)
    ctx->pc = 0x271f44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
label_271f48:
    // 0x271f48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x271f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271f4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f50: 0xa023d411  sb          $v1, -0x2BEF($at)
    ctx->pc = 0x271f50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x271f54: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x271f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x271f58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f5c: 0xa023d413  sb          $v1, -0x2BED($at)
    ctx->pc = 0x271f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD413u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD413u, _value); } while (0);
    // 0x271f60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f68: 0xa423d418  sh          $v1, -0x2BE8($at)
    ctx->pc = 0x271f68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD418u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD418u, _value); } while (0);
    // 0x271f6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f70: 0xa420d41a  sh          $zero, -0x2BE6($at)
    ctx->pc = 0x271f70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Au, _value); } while (0);
    // 0x271f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271f78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f7c: 0xa423d41c  sh          $v1, -0x2BE4($at)
    ctx->pc = 0x271f7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD41Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Cu, _value); } while (0);
    // 0x271f80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f84: 0xa420d41e  sh          $zero, -0x2BE2($at)
    ctx->pc = 0x271f84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Eu, _value); } while (0);
    // 0x271f88: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x271f88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271f90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x271f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271f94: 0x3e00008  jr          $ra
    ctx->pc = 0x271F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271F9Cu;
}
