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

// Function: Plw01_atk04_atk
// Address: 0x1c0c20 - 0x1c0e90
void Plw01_atk04_atk_0x1c0c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk04_atk_0x1c0c20");
#endif

    switch (ctx->pc) {
        case 0x1c0ca0u: goto label_1c0ca0;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0ce0u: goto label_1c0ce0;
        case 0x1c0cf8u: goto label_1c0cf8;
        case 0x1c0d50u: goto label_1c0d50;
        case 0x1c0d5cu: goto label_1c0d5c;
        case 0x1c0d70u: goto label_1c0d70;
        case 0x1c0d7cu: goto label_1c0d7c;
        case 0x1c0df4u: goto label_1c0df4;
        default: break;
    }

    ctx->pc = 0x1c0c20u;

    // 0x1c0c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0c24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c0c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c0c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0c2c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c0c30: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c0c34: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c0c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c0c38: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c0c3c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c0c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c0c40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c44: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c0c48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c4c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c0c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0c50: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c0c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0c54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0c58: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C0C58u;
    {
        const bool branch_taken_0x1c0c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0c58) {
            ctx->pc = 0x1C0D14u;
            goto label_1c0d14;
        }
    }
    ctx->pc = 0x1C0C60u;
    // 0x1c0c60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0C60u;
    {
        const bool branch_taken_0x1c0c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c60) {
            ctx->pc = 0x1C0C70u;
            goto label_1c0c70;
        }
    }
    ctx->pc = 0x1C0C68u;
    // 0x1c0c68: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C0C68u;
    {
        const bool branch_taken_0x1c0c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c68) {
            ctx->pc = 0x1C0E7Cu;
            goto label_1c0e7c;
        }
    }
    ctx->pc = 0x1C0C70u;
label_1c0c70:
    // 0x1c0c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c74: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c0c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c0c78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0C78u;
    {
        const bool branch_taken_0x1c0c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c78) {
            ctx->pc = 0x1C0CC0u;
            goto label_1c0cc0;
        }
    }
    ctx->pc = 0x1C0C80u;
    // 0x1c0c80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c88: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0c8c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1c0c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c0c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0c98: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0C98u;
    SET_GPR_U32(ctx, 31, 0x1C0CA0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0C98u, 0x1C0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CA0u;
label_1c0ca0:
    // 0x1c0ca0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0ca4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0ca8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1c0ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c0cac: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c0cb0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0CB0u;
    SET_GPR_U32(ctx, 31, 0x1C0CB8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0CB0u, 0x1C0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CB8u;
label_1c0cb8:
    // 0x1c0cb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C0CB8u;
    {
        const bool branch_taken_0x1c0cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cb8) {
            ctx->pc = 0x1C0CF8u;
            goto label_1c0cf8;
        }
    }
    ctx->pc = 0x1C0CC0u;
label_1c0cc0:
    // 0x1c0cc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0cc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0cc8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0ccc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c0cd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0cd4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0cd8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0CD8u;
    SET_GPR_U32(ctx, 31, 0x1C0CE0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0CD8u, 0x1C0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CE0u;
label_1c0ce0:
    // 0x1c0ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0ce4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0ce8: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c0cec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c0cf0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0CF0u;
    SET_GPR_U32(ctx, 31, 0x1C0CF8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0CF0u, 0x1C0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CF8u;
label_1c0cf8:
    // 0x1c0cf8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c0cfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d00: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c0d00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c0d04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d08: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0d10: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0d14:
    // 0x1c0d14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d18: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c0d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c0d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c0d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0d20: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1c0d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1c0d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0D24u;
    {
        const bool branch_taken_0x1c0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d24) {
            ctx->pc = 0x1C0D40u;
            goto label_1c0d40;
        }
    }
    ctx->pc = 0x1C0D2Cu;
    // 0x1c0d2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c0d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c0d30: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c0d34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c0d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c0d38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c0d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c0d3c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c0d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c0d40:
    // 0x1c0d40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0d48: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0D48u;
    SET_GPR_U32(ctx, 31, 0x1C0D50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0D48u, 0x1C0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D50u;
label_1c0d50:
    // 0x1c0d50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d54: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0D54u;
    SET_GPR_U32(ctx, 31, 0x1C0D5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0D54u, 0x1C0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D5Cu;
label_1c0d5c:
    // 0x1c0d5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0d60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0d68: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0D68u;
    SET_GPR_U32(ctx, 31, 0x1C0D70u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0D68u, 0x1C0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D70u;
label_1c0d70:
    // 0x1c0d70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0d74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0D74u;
    SET_GPR_U32(ctx, 31, 0x1C0D7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0D74u, 0x1C0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D7Cu;
label_1c0d7c:
    // 0x1c0d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d80: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c0d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c0d84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c0d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0d88: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c0d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c0d8c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C0D8Cu;
    {
        const bool branch_taken_0x1c0d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d8c) {
            ctx->pc = 0x1C0DFCu;
            goto label_1c0dfc;
        }
    }
    ctx->pc = 0x1C0D94u;
    // 0x1c0d94: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0d98: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c0d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c0d9c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0D9Cu;
    {
        const bool branch_taken_0x1c0d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d9c) {
            ctx->pc = 0x1C0DFCu;
            goto label_1c0dfc;
        }
    }
    ctx->pc = 0x1C0DA4u;
    // 0x1c0da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0da8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c0dac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c0db0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0db4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0DB4u;
    {
        const bool branch_taken_0x1c0db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db4) {
            ctx->pc = 0x1C0DFCu;
            goto label_1c0dfc;
        }
    }
    ctx->pc = 0x1C0DBCu;
    // 0x1c0dbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0dc0: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c0dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c0dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0DC4u;
    {
        const bool branch_taken_0x1c0dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0dc4) {
            ctx->pc = 0x1C0DDCu;
            goto label_1c0ddc;
        }
    }
    ctx->pc = 0x1C0DCCu;
    // 0x1c0dcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0dd0: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1c0dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0DD4u;
    {
        const bool branch_taken_0x1c0dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0dd4) {
            ctx->pc = 0x1C0DE8u;
            goto label_1c0de8;
        }
    }
    ctx->pc = 0x1C0DDCu;
label_1c0ddc:
    // 0x1c0ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0de0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0de4: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1c0de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
label_1c0de8:
    // 0x1c0de8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0dec: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1C0DECu;
    SET_GPR_U32(ctx, 31, 0x1C0DF4u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1C0DECu, 0x1C0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DF4u;
label_1c0df4:
    // 0x1c0df4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C0DF4u;
    {
        const bool branch_taken_0x1c0df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0df4) {
            ctx->pc = 0x1C0E7Cu;
            goto label_1c0e7c;
        }
    }
    ctx->pc = 0x1C0DFCu;
label_1c0dfc:
    // 0x1c0dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e00: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c0e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c0e04: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0E04u;
    {
        const bool branch_taken_0x1c0e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e04) {
            ctx->pc = 0x1C0E7Cu;
            goto label_1c0e7c;
        }
    }
    ctx->pc = 0x1C0E0Cu;
    // 0x1c0e0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e10: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1c0e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1c0e14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0E14u;
    {
        const bool branch_taken_0x1c0e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e14) {
            ctx->pc = 0x1C0E2Cu;
            goto label_1c0e2c;
        }
    }
    ctx->pc = 0x1C0E1Cu;
    // 0x1c0e1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e20: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1c0e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0e24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0E24u;
    {
        const bool branch_taken_0x1c0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e24) {
            ctx->pc = 0x1C0E38u;
            goto label_1c0e38;
        }
    }
    ctx->pc = 0x1C0E2Cu;
label_1c0e2c:
    // 0x1c0e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e34: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1c0e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
label_1c0e38:
    // 0x1c0e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e40: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e48: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c0e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c0e4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c0e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0e50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0E50u;
    {
        const bool branch_taken_0x1c0e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e50) {
            ctx->pc = 0x1C0E68u;
            goto label_1c0e68;
        }
    }
    ctx->pc = 0x1C0E58u;
    // 0x1c0e58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c0e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0e60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0E60u;
    {
        const bool branch_taken_0x1c0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e60) {
            ctx->pc = 0x1C0E74u;
            goto label_1c0e74;
        }
    }
    ctx->pc = 0x1C0E68u;
label_1c0e68:
    // 0x1c0e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e70: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c0e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c0e74:
    // 0x1c0e74: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0E74u;
    {
        const bool branch_taken_0x1c0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e74) {
            ctx->pc = 0x1C0E7Cu;
            goto label_1c0e7c;
        }
    }
    ctx->pc = 0x1C0E7Cu;
label_1c0e7c:
    // 0x1c0e7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c0e7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0e84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c0e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c0e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0E90u;
}
