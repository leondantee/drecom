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

// Function: SdrInit
// Address: 0x338ac0 - 0x338c54
void SdrInit_0x338ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrInit_0x338ac0");
#endif

    switch (ctx->pc) {
        case 0x338af0u: goto label_338af0;
        case 0x338afcu: goto label_338afc;
        case 0x338b10u: goto label_338b10;
        case 0x338b28u: goto label_338b28;
        case 0x338b48u: goto label_338b48;
        case 0x338b60u: goto label_338b60;
        case 0x338b9cu: goto label_338b9c;
        case 0x338bb8u: goto label_338bb8;
        case 0x338be8u: goto label_338be8;
        case 0x338c04u: goto label_338c04;
        case 0x338c3cu: goto label_338c3c;
        default: break;
    }

    ctx->pc = 0x338ac0u;

    // 0x338ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x338ac4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x338ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x338ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338acc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338ad0: 0x8c225448  lw          $v0, 0x5448($at)
    ctx->pc = 0x338ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895448u));
    // 0x338ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338AD4u;
    {
        const bool branch_taken_0x338ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ad4) {
            ctx->pc = 0x338AE8u;
            goto label_338ae8;
        }
    }
    ctx->pc = 0x338ADCu;
    // 0x338adc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338adcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338ae0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x338AE0u;
    {
        const bool branch_taken_0x338ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ae0) {
            ctx->pc = 0x338C40u;
            goto label_338c40;
        }
    }
    ctx->pc = 0x338AE8u;
label_338ae8:
    // 0x338ae8: 0xc0ce268  jal         func_3389A0
    ctx->pc = 0x338AE8u;
    SET_GPR_U32(ctx, 31, 0x338AF0u);
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x338AE8u, 0x338AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AF0u;
label_338af0:
    // 0x338af0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x338af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338af4: 0xc0854d2  jal         func_215348
    ctx->pc = 0x338AF4u;
    SET_GPR_U32(ctx, 31, 0x338AFCu);
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x338AFCu;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338AFCu) { return; }
    ctx->pc = 0x338AFCu;
label_338afc:
    // 0x338afc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338b00: 0x244452d0  addiu       $a0, $v0, 0x52D0
    ctx->pc = 0x338b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
    // 0x338b04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x338b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338b08: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338B08u;
    SET_GPR_U32(ctx, 31, 0x338B10u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338B08u, 0x338B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B10u;
label_338b10:
    // 0x338b10: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338B10u;
    {
        const bool branch_taken_0x338b10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338b10) {
            ctx->pc = 0x338B34u;
            goto label_338b34;
        }
    }
    ctx->pc = 0x338B18u;
    // 0x338b18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338b1c: 0x24442230  addiu       $a0, $v0, 0x2230
    ctx->pc = 0x338b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8752));
    // 0x338b20: 0xc046760  jal         func_119D80
    ctx->pc = 0x338B20u;
    SET_GPR_U32(ctx, 31, 0x338B28u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338B28u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338B28u) { return; }
    ctx->pc = 0x338B28u;
label_338b28:
    // 0x338b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338b2c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x338B2Cu;
    {
        const bool branch_taken_0x338b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338b2c) {
            ctx->pc = 0x338C40u;
            goto label_338c40;
        }
    }
    ctx->pc = 0x338B34u;
label_338b34:
    // 0x338b34: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338b38: 0x24445300  addiu       $a0, $v0, 0x5300
    ctx->pc = 0x338b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x338b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b40: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338B40u;
    SET_GPR_U32(ctx, 31, 0x338B48u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338B40u, 0x338B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B48u;
label_338b48:
    // 0x338b48: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338B48u;
    {
        const bool branch_taken_0x338b48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338b48) {
            ctx->pc = 0x338B6Cu;
            goto label_338b6c;
        }
    }
    ctx->pc = 0x338B50u;
    // 0x338b50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338b54: 0x24442270  addiu       $a0, $v0, 0x2270
    ctx->pc = 0x338b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8816));
    // 0x338b58: 0xc046760  jal         func_119D80
    ctx->pc = 0x338B58u;
    SET_GPR_U32(ctx, 31, 0x338B60u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338B60u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338B60u) { return; }
    ctx->pc = 0x338B60u;
label_338b60:
    // 0x338b60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338b64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x338B64u;
    {
        const bool branch_taken_0x338b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338b64) {
            ctx->pc = 0x338C40u;
            goto label_338c40;
        }
    }
    ctx->pc = 0x338B6Cu;
label_338b6c:
    // 0x338b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b70: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x338b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x338b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b78: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x338b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x338b7c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x338b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x338b80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338b84: 0x8c229a10  lw          $v0, -0x65F0($at)
    ctx->pc = 0x338b84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338b88: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x338B88u;
    {
        const bool branch_taken_0x338b88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338b88) {
            ctx->pc = 0x338BCCu;
            goto label_338bcc;
        }
    }
    ctx->pc = 0x338B90u;
    // 0x338b90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x338b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x338b94: 0xc084a88  jal         func_212A20
    ctx->pc = 0x338B94u;
    SET_GPR_U32(ctx, 31, 0x338B9Cu);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x338B9Cu;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338B9Cu) { return; }
    ctx->pc = 0x338B9Cu;
label_338b9c:
    // 0x338b9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x338b9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x338ba0: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338BA0u;
    {
        const bool branch_taken_0x338ba0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x338ba0) {
            ctx->pc = 0x338BC4u;
            goto label_338bc4;
        }
    }
    ctx->pc = 0x338BA8u;
    // 0x338ba8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338bac: 0x244422b0  addiu       $a0, $v0, 0x22B0
    ctx->pc = 0x338bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
    // 0x338bb0: 0xc046760  jal         func_119D80
    ctx->pc = 0x338BB0u;
    SET_GPR_U32(ctx, 31, 0x338BB8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338BB8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338BB8u) { return; }
    ctx->pc = 0x338BB8u;
label_338bb8:
    // 0x338bb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338bbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x338BBCu;
    {
        const bool branch_taken_0x338bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338bbc) {
            ctx->pc = 0x338C40u;
            goto label_338c40;
        }
    }
    ctx->pc = 0x338BC4u;
label_338bc4:
    // 0x338bc4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338bc8: 0xac309a10  sw          $s0, -0x65F0($at)
    ctx->pc = 0x338bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3A9A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A9A10u, _value); } while (0);
label_338bcc:
    // 0x338bcc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338bd0: 0x8c229a18  lw          $v0, -0x65E8($at)
    ctx->pc = 0x338bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x338bd4: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x338BD4u;
    {
        const bool branch_taken_0x338bd4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338bd4) {
            ctx->pc = 0x338C18u;
            goto label_338c18;
        }
    }
    ctx->pc = 0x338BDCu;
    // 0x338bdc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x338bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x338be0: 0xc084a88  jal         func_212A20
    ctx->pc = 0x338BE0u;
    SET_GPR_U32(ctx, 31, 0x338BE8u);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x338BE8u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338BE8u) { return; }
    ctx->pc = 0x338BE8u;
label_338be8:
    // 0x338be8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x338be8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x338bec: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338BECu;
    {
        const bool branch_taken_0x338bec = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x338bec) {
            ctx->pc = 0x338C10u;
            goto label_338c10;
        }
    }
    ctx->pc = 0x338BF4u;
    // 0x338bf4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338bf8: 0x244422e0  addiu       $a0, $v0, 0x22E0
    ctx->pc = 0x338bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8928));
    // 0x338bfc: 0xc046760  jal         func_119D80
    ctx->pc = 0x338BFCu;
    SET_GPR_U32(ctx, 31, 0x338C04u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338C04u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338C04u) { return; }
    ctx->pc = 0x338C04u;
label_338c04:
    // 0x338c04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338c08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x338C08u;
    {
        const bool branch_taken_0x338c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338c08) {
            ctx->pc = 0x338C40u;
            goto label_338c40;
        }
    }
    ctx->pc = 0x338C10u;
label_338c10:
    // 0x338c10: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338c14: 0xac309a18  sw          $s0, -0x65E8($at)
    ctx->pc = 0x338c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3A9A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A9A18u, _value); } while (0);
label_338c18:
    // 0x338c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338c20: 0xac225448  sw          $v0, 0x5448($at)
    ctx->pc = 0x338c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895448u, _value); } while (0);
    // 0x338c24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338c28: 0x24442310  addiu       $a0, $v0, 0x2310
    ctx->pc = 0x338c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8976));
    // 0x338c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c30: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x338c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338c34: 0xc046760  jal         func_119D80
    ctx->pc = 0x338C34u;
    SET_GPR_U32(ctx, 31, 0x338C3Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338C3Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338C3Cu) { return; }
    ctx->pc = 0x338C3Cu;
label_338c3c:
    // 0x338c3c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338c3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338c40:
    // 0x338c40: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x338c40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338c48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x338c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x338c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x338C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338C54u;
}
