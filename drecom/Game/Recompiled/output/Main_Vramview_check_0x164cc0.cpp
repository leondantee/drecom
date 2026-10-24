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

// Function: Main_Vramview_check
// Address: 0x164cc0 - 0x164ea0
void Main_Vramview_check_0x164cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_Vramview_check_0x164cc0");
#endif

    switch (ctx->pc) {
        case 0x164d44u: goto label_164d44;
        case 0x164d64u: goto label_164d64;
        case 0x164d84u: goto label_164d84;
        case 0x164d90u: goto label_164d90;
        case 0x164de0u: goto label_164de0;
        case 0x164e0cu: goto label_164e0c;
        case 0x164e18u: goto label_164e18;
        case 0x164e44u: goto label_164e44;
        case 0x164e50u: goto label_164e50;
        case 0x164e7cu: goto label_164e7c;
        case 0x164e90u: goto label_164e90;
        default: break;
    }

    ctx->pc = 0x164cc0u;

    // 0x164cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164cc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x164cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x164cc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164ccc: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x164cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x164cd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x164cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164cd4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x164cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x164cd8: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x164CD8u;
    {
        const bool branch_taken_0x164cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164cd8) {
            ctx->pc = 0x164E90u;
            goto label_164e90;
        }
    }
    ctx->pc = 0x164CE0u;
    // 0x164ce0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164ce4: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x164ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x164ce8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x164ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x164cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164cf0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x164CF0u;
    {
        const bool branch_taken_0x164cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164cf0) {
            ctx->pc = 0x164D98u;
            goto label_164d98;
        }
    }
    ctx->pc = 0x164CF8u;
    // 0x164cf8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164cfc: 0x8c225450  lw          $v0, 0x5450($at)
    ctx->pc = 0x164cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5450u));
    // 0x164d00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164d04: 0xac22fde0  sw          $v0, -0x220($at)
    ctx->pc = 0x164d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDE0u, _value); } while (0);
    // 0x164d08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164d0c: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x164d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x164d10: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x164d14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x164d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x164d18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164d1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164d20: 0xac221a44  sw          $v0, 0x1A44($at)
    ctx->pc = 0x164d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A44u, _value); } while (0);
    // 0x164d24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164d28: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164d2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x164d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x164d30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164D30u;
    {
        const bool branch_taken_0x164d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d30) {
            ctx->pc = 0x164D44u;
            goto label_164d44;
        }
    }
    ctx->pc = 0x164D38u;
    // 0x164d38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164d38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164d3c: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x164D3Cu;
    SET_GPR_U32(ctx, 31, 0x164D44u);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x164D3Cu, 0x164D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D44u;
label_164d44:
    // 0x164d44: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164d48: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164d4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164D50u;
    {
        const bool branch_taken_0x164d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d50) {
            ctx->pc = 0x164D64u;
            goto label_164d64;
        }
    }
    ctx->pc = 0x164D58u;
    // 0x164d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164d5c: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x164D5Cu;
    SET_GPR_U32(ctx, 31, 0x164D64u);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x164D5Cu, 0x164D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D64u;
label_164d64:
    // 0x164d64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164d68: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164d6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x164d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x164d70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164D70u;
    {
        const bool branch_taken_0x164d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d70) {
            ctx->pc = 0x164D84u;
            goto label_164d84;
        }
    }
    ctx->pc = 0x164D78u;
    // 0x164d78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164d7c: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x164D7Cu;
    SET_GPR_U32(ctx, 31, 0x164D84u);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x164D7Cu, 0x164D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D84u;
label_164d84:
    // 0x164d84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x164d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164d88: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x164D88u;
    SET_GPR_U32(ctx, 31, 0x164D90u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x164D88u, 0x164D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D90u;
label_164d90:
    // 0x164d90: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x164D90u;
    {
        const bool branch_taken_0x164d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d90) {
            ctx->pc = 0x164E90u;
            goto label_164e90;
        }
    }
    ctx->pc = 0x164D98u;
label_164d98:
    // 0x164d98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164d9c: 0x8c22fde0  lw          $v0, -0x220($at)
    ctx->pc = 0x164d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x164da0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164da4: 0xac225450  sw          $v0, 0x5450($at)
    ctx->pc = 0x164da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5450u, _value); } while (0);
    // 0x164da8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x164da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x164dac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164db0: 0xac22fde0  sw          $v0, -0x220($at)
    ctx->pc = 0x164db0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDE0u, _value); } while (0);
    // 0x164db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164db8: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x164db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x164dbc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x164dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x164dc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x164dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x164dc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164dc8: 0xac221a44  sw          $v0, 0x1A44($at)
    ctx->pc = 0x164dc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A44u, _value); } while (0);
    // 0x164dcc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164dd0: 0xac205458  sw          $zero, 0x5458($at)
    ctx->pc = 0x164dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164dd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164dd8: 0xc067524  jal         func_19D490
    ctx->pc = 0x164DD8u;
    SET_GPR_U32(ctx, 31, 0x164DE0u);
    ctx->pc = 0x19D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D490u, 0x164DD8u, 0x164DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DE0u;
label_164de0:
    // 0x164de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164de4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164DE4u;
    {
        const bool branch_taken_0x164de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164de4) {
            ctx->pc = 0x164E0Cu;
            goto label_164e0c;
        }
    }
    ctx->pc = 0x164DECu;
    // 0x164dec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164df0: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164df4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x164df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x164df8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164dfc: 0xac225458  sw          $v0, 0x5458($at)
    ctx->pc = 0x164dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164e00: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164e04: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x164E04u;
    SET_GPR_U32(ctx, 31, 0x164E0Cu);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x164E04u, 0x164E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E0Cu;
label_164e0c:
    // 0x164e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e10: 0xc067524  jal         func_19D490
    ctx->pc = 0x164E10u;
    SET_GPR_U32(ctx, 31, 0x164E18u);
    ctx->pc = 0x19D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D490u, 0x164E10u, 0x164E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E18u;
label_164e18:
    // 0x164e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e1c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164E1Cu;
    {
        const bool branch_taken_0x164e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164e1c) {
            ctx->pc = 0x164E44u;
            goto label_164e44;
        }
    }
    ctx->pc = 0x164E24u;
    // 0x164e24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164e28: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164e28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164e2c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x164e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x164e30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164e34: 0xac225458  sw          $v0, 0x5458($at)
    ctx->pc = 0x164e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e3c: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x164E3Cu;
    SET_GPR_U32(ctx, 31, 0x164E44u);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x164E3Cu, 0x164E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E44u;
label_164e44:
    // 0x164e44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164e48: 0xc067524  jal         func_19D490
    ctx->pc = 0x164E48u;
    SET_GPR_U32(ctx, 31, 0x164E50u);
    ctx->pc = 0x19D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D490u, 0x164E48u, 0x164E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E50u;
label_164e50:
    // 0x164e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e54: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164E54u;
    {
        const bool branch_taken_0x164e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164e54) {
            ctx->pc = 0x164E7Cu;
            goto label_164e7c;
        }
    }
    ctx->pc = 0x164E5Cu;
    // 0x164e5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164e60: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164e64: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x164e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x164e68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164e6c: 0xac225458  sw          $v0, 0x5458($at)
    ctx->pc = 0x164e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164e74: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x164E74u;
    SET_GPR_U32(ctx, 31, 0x164E7Cu);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x164E74u, 0x164E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E7Cu;
label_164e7c:
    // 0x164e7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x164e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164e80: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x164e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x164e84: 0x24452da0  addiu       $a1, $v0, 0x2DA0
    ctx->pc = 0x164e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x164e88: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x164E88u;
    SET_GPR_U32(ctx, 31, 0x164E90u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x164E88u, 0x164E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E90u;
label_164e90:
    // 0x164e90: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x164e90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164e94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x164e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x164e98: 0x3e00008  jr          $ra
    ctx->pc = 0x164E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164EA0u;
}
