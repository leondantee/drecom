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

// Function: Plw02_atk00_off
// Address: 0x1c1cc0 - 0x1c1ec8
void Plw02_atk00_off_0x1c1cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk00_off_0x1c1cc0");
#endif

    switch (ctx->pc) {
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e18u: goto label_1c1e18;
        default: break;
    }

    ctx->pc = 0x1c1cc0u;

    // 0x1c1cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1cc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c1cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c1cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1ccc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c1cd0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c1cd4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c1cd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1cdc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c1cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1ce0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1ce8: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C1CE8u;
    {
        const bool branch_taken_0x1c1ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1ce8) {
            ctx->pc = 0x1C1DA8u;
            goto label_1c1da8;
        }
    }
    ctx->pc = 0x1C1CF0u;
    // 0x1c1cf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1CF0u;
    {
        const bool branch_taken_0x1c1cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1cf0) {
            ctx->pc = 0x1C1D00u;
            goto label_1c1d00;
        }
    }
    ctx->pc = 0x1C1CF8u;
    // 0x1c1cf8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C1CF8u;
    {
        const bool branch_taken_0x1c1cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1cf8) {
            ctx->pc = 0x1C1EB4u;
            goto label_1c1eb4;
        }
    }
    ctx->pc = 0x1C1D00u;
label_1c1d00:
    // 0x1c1d00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d04: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1d08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d0c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c1d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c1d10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1d14: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c1d18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1D18u;
    {
        const bool branch_taken_0x1c1d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d18) {
            ctx->pc = 0x1C1D48u;
            goto label_1c1d48;
        }
    }
    ctx->pc = 0x1C1D20u;
    // 0x1c1d20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d28: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1d2c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x1c1d30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1d34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1d38: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C1D38u;
    SET_GPR_U32(ctx, 31, 0x1C1D40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C1D38u, 0x1C1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D40u;
label_1c1d40:
    // 0x1c1d40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1D40u;
    {
        const bool branch_taken_0x1c1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d40) {
            ctx->pc = 0x1C1D68u;
            goto label_1c1d68;
        }
    }
    ctx->pc = 0x1C1D48u;
label_1c1d48:
    // 0x1c1d48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d50: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1d54: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x1c1d58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1d5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1d60: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C1D60u;
    SET_GPR_U32(ctx, 31, 0x1C1D68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C1D60u, 0x1C1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D68u;
label_1c1d68:
    // 0x1c1d68: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1d6c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c1d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c1d70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d78: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c1d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1d7c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c1d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c1d80: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C1D80u;
    SET_GPR_U32(ctx, 31, 0x1C1D88u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C1D80u, 0x1C1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D88u;
label_1c1d88:
    // 0x1c1d88: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c1d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c1d8c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1d90: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1C1D90u;
    SET_GPR_U32(ctx, 31, 0x1C1D98u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1C1D90u, 0x1C1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D98u;
label_1c1d98:
    // 0x1c1d98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1d9c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c1d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1da4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c1da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c1da8:
    // 0x1c1da8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1dac: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1db0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1db4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c1db8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1dc0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C1DC0u;
    SET_GPR_U32(ctx, 31, 0x1C1DC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C1DC0u, 0x1C1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DC8u;
label_1c1dc8:
    // 0x1c1dc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1dcc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1DCCu;
    SET_GPR_U32(ctx, 31, 0x1C1DD4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1DCCu, 0x1C1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DD4u;
label_1c1dd4:
    // 0x1c1dd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1dd8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ddc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1de0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C1DE0u;
    SET_GPR_U32(ctx, 31, 0x1C1DE8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C1DE0u, 0x1C1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DE8u;
label_1c1de8:
    // 0x1c1de8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c1de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1dec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C1DECu;
    SET_GPR_U32(ctx, 31, 0x1C1DF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C1DECu, 0x1C1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DF4u;
label_1c1df4:
    // 0x1c1df4: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C1DF4u;
    SET_GPR_U32(ctx, 31, 0x1C1DFCu);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C1DF4u, 0x1C1DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DFCu;
label_1c1dfc:
    // 0x1c1dfc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C1DFCu;
    {
        const bool branch_taken_0x1c1dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1dfc) {
            ctx->pc = 0x1C1EB4u;
            goto label_1c1eb4;
        }
    }
    ctx->pc = 0x1C1E04u;
    // 0x1c1e04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e0c: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1e10: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C1E10u;
    SET_GPR_U32(ctx, 31, 0x1C1E18u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C1E10u, 0x1C1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E18u;
label_1c1e18:
    // 0x1c1e18: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C1E18u;
    {
        const bool branch_taken_0x1c1e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e18) {
            ctx->pc = 0x1C1E9Cu;
            goto label_1c1e9c;
        }
    }
    ctx->pc = 0x1C1E20u;
    // 0x1c1e20: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c1e24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c1e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c1e28: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1E28u;
    {
        const bool branch_taken_0x1c1e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e28) {
            ctx->pc = 0x1C1E70u;
            goto label_1c1e70;
        }
    }
    ctx->pc = 0x1C1E30u;
    // 0x1c1e30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e34: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1e38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1e3c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1e40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1E40u;
    {
        const bool branch_taken_0x1c1e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e40) {
            ctx->pc = 0x1C1E70u;
            goto label_1c1e70;
        }
    }
    ctx->pc = 0x1C1E48u;
    // 0x1c1e48: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e4c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1e50: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1e54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c1e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c1e58: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c1e5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e64: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c1e70:
    // 0x1c1e70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e74: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c1e78: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1E78u;
    {
        const bool branch_taken_0x1c1e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e78) {
            ctx->pc = 0x1C1EB4u;
            goto label_1c1eb4;
        }
    }
    ctx->pc = 0x1C1E80u;
    // 0x1c1e80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1e84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e88: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1e8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1e94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1E94u;
    {
        const bool branch_taken_0x1c1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e94) {
            ctx->pc = 0x1C1EB4u;
            goto label_1c1eb4;
        }
    }
    ctx->pc = 0x1C1E9Cu;
label_1c1e9c:
    // 0x1c1e9c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c1e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ea0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1ea4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c1ea8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c1ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c1eac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1eb0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c1eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c1eb4:
    // 0x1c1eb4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c1eb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ebc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c1ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1EC8u;
}
