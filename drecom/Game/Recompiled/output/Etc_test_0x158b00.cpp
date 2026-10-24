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

// Function: Etc_test
// Address: 0x158b00 - 0x158d18
void Etc_test_0x158b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Etc_test_0x158b00");
#endif

    switch (ctx->pc) {
        case 0x158c4cu: goto label_158c4c;
        default: break;
    }

    ctx->pc = 0x158b00u;

    // 0x158b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158b04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x158b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x158b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158b10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158b14: 0x8c23fde0  lw          $v1, -0x220($at)
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x158b18: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x158b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x158b1c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x158b1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x158b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158b24: 0x8c24fde0  lw          $a0, -0x220($at)
    ctx->pc = 0x158b24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x158b28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158b2c: 0x14830070  bne         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x158B2Cu;
    {
        const bool branch_taken_0x158b2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b2c) {
            ctx->pc = 0x158CF0u;
            goto label_158cf0;
        }
    }
    ctx->pc = 0x158B34u;
    // 0x158b34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158b38: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x158b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x158b3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158b40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x158b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x158b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158b48: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x158b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x158b4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158b50: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x158b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x158b54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158B54u;
    {
        const bool branch_taken_0x158b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b54) {
            ctx->pc = 0x158B70u;
            goto label_158b70;
        }
    }
    ctx->pc = 0x158B5Cu;
    // 0x158b5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158b60: 0x8c22f840  lw          $v0, -0x7C0($at)
    ctx->pc = 0x158b60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158b68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158b6c: 0xac22f840  sw          $v0, -0x7C0($at)
    ctx->pc = 0x158b6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF840u, _value); } while (0);
label_158b70:
    // 0x158b70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158b74: 0x8c22f840  lw          $v0, -0x7C0($at)
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158b78: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158B78u;
    {
        const bool branch_taken_0x158b78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x158b78) {
            ctx->pc = 0x158B8Cu;
            goto label_158b8c;
        }
    }
    ctx->pc = 0x158B80u;
    // 0x158b80: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158b84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x158B84u;
    {
        const bool branch_taken_0x158b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b84) {
            ctx->pc = 0x158BBCu;
            goto label_158bbc;
        }
    }
    ctx->pc = 0x158B8Cu;
label_158b8c:
    // 0x158b8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158b90: 0x8c22f840  lw          $v0, -0x7C0($at)
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158b94: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x158b94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x158b98: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x158B98u;
    {
        const bool branch_taken_0x158b98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b98) {
            ctx->pc = 0x158BACu;
            goto label_158bac;
        }
    }
    ctx->pc = 0x158BA0u;
    // 0x158ba0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x158ba0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158BA4u;
    {
        const bool branch_taken_0x158ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ba4) {
            ctx->pc = 0x158BB8u;
            goto label_158bb8;
        }
    }
    ctx->pc = 0x158BACu;
label_158bac:
    // 0x158bac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158bb0: 0x8c31f840  lw          $s1, -0x7C0($at)
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158bb4: 0x0  nop
    ctx->pc = 0x158bb4u;
    // NOP
label_158bb8:
    // 0x158bb8: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x158bb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_158bbc:
    // 0x158bbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158bc0: 0xac30f840  sw          $s0, -0x7C0($at)
    ctx->pc = 0x158bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EF840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF840u, _value); } while (0);
    // 0x158bc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158bc8: 0x94220092  lhu         $v0, 0x92($at)
    ctx->pc = 0x158bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0092u));
    // 0x158bcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158bd0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x158bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x158bd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158BD4u;
    {
        const bool branch_taken_0x158bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bd4) {
            ctx->pc = 0x158BF0u;
            goto label_158bf0;
        }
    }
    ctx->pc = 0x158BDCu;
    // 0x158bdc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158be0: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x158be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x158be4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x158be8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158bec: 0xa0224f10  sb          $v0, 0x4F10($at)
    ctx->pc = 0x158becu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
label_158bf0:
    // 0x158bf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158bf4: 0x94220092  lhu         $v0, 0x92($at)
    ctx->pc = 0x158bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0092u));
    // 0x158bf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158bfc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x158bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x158c00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158C00u;
    {
        const bool branch_taken_0x158c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c00) {
            ctx->pc = 0x158C1Cu;
            goto label_158c1c;
        }
    }
    ctx->pc = 0x158C08u;
    // 0x158c08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c0c: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x158c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x158c10: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x158c14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c18: 0xa0224f10  sb          $v0, 0x4F10($at)
    ctx->pc = 0x158c18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
label_158c1c:
    // 0x158c1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c20: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x158c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x158c24: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x158c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158c28: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x158c2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x158c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x158c30: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x158c34: 0x3442020c  ori         $v0, $v0, 0x20C
    ctx->pc = 0x158c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)524);
    // 0x158c38: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x158c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x158c3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x158c40: 0x2445e9d0  addiu       $a1, $v0, -0x1630
    ctx->pc = 0x158c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x158c44: 0xc059b14  jal         func_166C50
    ctx->pc = 0x158C44u;
    SET_GPR_U32(ctx, 31, 0x158C4Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x158C44u, 0x158C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C4Cu;
label_158c4c:
    // 0x158c4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c50: 0x8c24f840  lw          $a0, -0x7C0($at)
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158c54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158c58: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x158C58u;
    {
        const bool branch_taken_0x158c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158c58) {
            ctx->pc = 0x158CC4u;
            goto label_158cc4;
        }
    }
    ctx->pc = 0x158C60u;
    // 0x158c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158c64: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158C64u;
    {
        const bool branch_taken_0x158c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158c64) {
            ctx->pc = 0x158CB0u;
            goto label_158cb0;
        }
    }
    ctx->pc = 0x158C6Cu;
    // 0x158c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158c70: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C70u;
    {
        const bool branch_taken_0x158c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158c70) {
            ctx->pc = 0x158C88u;
            goto label_158c88;
        }
    }
    ctx->pc = 0x158C78u;
    // 0x158c78: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158C78u;
    {
        const bool branch_taken_0x158c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c78) {
            ctx->pc = 0x158CF0u;
            goto label_158cf0;
        }
    }
    ctx->pc = 0x158C80u;
    // 0x158c80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x158C80u;
    {
        const bool branch_taken_0x158c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c80) {
            ctx->pc = 0x158CF0u;
            goto label_158cf0;
        }
    }
    ctx->pc = 0x158C88u;
label_158c88:
    // 0x158c88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c8c: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x158c8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x158c90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158c94: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x158c98: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x158c9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x158c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x158ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158ca4: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x158ca4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x158ca8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158CA8u;
    {
        const bool branch_taken_0x158ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ca8) {
            ctx->pc = 0x158CF0u;
            goto label_158cf0;
        }
    }
    ctx->pc = 0x158CB0u;
label_158cb0:
    // 0x158cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158cb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158cb8: 0xa0234f11  sb          $v1, 0x4F11($at)
    ctx->pc = 0x158cb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x158cbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x158CBCu;
    {
        const bool branch_taken_0x158cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cbc) {
            ctx->pc = 0x158CF0u;
            goto label_158cf0;
        }
    }
    ctx->pc = 0x158CC4u;
label_158cc4:
    // 0x158cc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158cc8: 0xac20f840  sw          $zero, -0x7C0($at)
    ctx->pc = 0x158cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF840u, _value); } while (0);
    // 0x158ccc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158cd0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x158cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x158cd4: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x158cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x158cd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x158cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x158cdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x158cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x158ce0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158ce4: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x158ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x158ce8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158cec: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x158cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
label_158cf0:
    // 0x158cf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158cf4: 0x8c23fde0  lw          $v1, -0x220($at)
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x158cf8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x158cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x158cfc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x158cfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x158d00: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x158d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158d10: 0x3e00008  jr          $ra
    ctx->pc = 0x158D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D18u;
}
