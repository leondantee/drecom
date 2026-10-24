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

// Function: Plw02_atk03_off
// Address: 0x1c2b80 - 0x1c2de4
void Plw02_atk03_off_0x1c2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk03_off_0x1c2b80");
#endif

    switch (ctx->pc) {
        case 0x1c2c0cu: goto label_1c2c0c;
        case 0x1c2c34u: goto label_1c2c34;
        case 0x1c2c74u: goto label_1c2c74;
        case 0x1c2c9cu: goto label_1c2c9c;
        case 0x1c2cbcu: goto label_1c2cbc;
        case 0x1c2cccu: goto label_1c2ccc;
        case 0x1c2cecu: goto label_1c2cec;
        case 0x1c2cf8u: goto label_1c2cf8;
        case 0x1c2d0cu: goto label_1c2d0c;
        case 0x1c2d18u: goto label_1c2d18;
        case 0x1c2d2cu: goto label_1c2d2c;
        default: break;
    }

    ctx->pc = 0x1c2b80u;

    // 0x1c2b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2b84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c2b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2b8c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c2b90: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c2b94: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c2b98: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c2b9c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c2b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c2ba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ba4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c2ba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2bac: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c2bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2bb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c2bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2bb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2bb8: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C2BB8u;
    {
        const bool branch_taken_0x1c2bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2bb8) {
            ctx->pc = 0x1C2CDCu;
            goto label_1c2cdc;
        }
    }
    ctx->pc = 0x1C2BC0u;
    // 0x1c2bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2bc4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C2BC4u;
    {
        const bool branch_taken_0x1c2bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2bc4) {
            ctx->pc = 0x1C2C44u;
            goto label_1c2c44;
        }
    }
    ctx->pc = 0x1C2BCCu;
    // 0x1c2bcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2BCCu;
    {
        const bool branch_taken_0x1c2bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2bcc) {
            ctx->pc = 0x1C2BDCu;
            goto label_1c2bdc;
        }
    }
    ctx->pc = 0x1C2BD4u;
    // 0x1c2bd4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C2BD4u;
    {
        const bool branch_taken_0x1c2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2bd4) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2BDCu;
label_1c2bdc:
    // 0x1c2bdc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2be0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2be4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2BE4u;
    {
        const bool branch_taken_0x1c2be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2be4) {
            ctx->pc = 0x1C2C14u;
            goto label_1c2c14;
        }
    }
    ctx->pc = 0x1C2BECu;
    // 0x1c2bec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2bf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2bf4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2bf8: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c2bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c2bfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2c00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2c04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2C04u;
    SET_GPR_U32(ctx, 31, 0x1C2C0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2C04u, 0x1C2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C0Cu;
label_1c2c0c:
    // 0x1c2c0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2C0Cu;
    {
        const bool branch_taken_0x1c2c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c0c) {
            ctx->pc = 0x1C2C34u;
            goto label_1c2c34;
        }
    }
    ctx->pc = 0x1C2C14u;
label_1c2c14:
    // 0x1c2c14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c1c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2c20: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c2c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c2c24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2c28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2c2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2C2Cu, 0x1C2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C34u;
label_1c2c34:
    // 0x1c2c34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c38: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2c40: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2c44:
    // 0x1c2c44: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2c48: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2c4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2C4Cu;
    {
        const bool branch_taken_0x1c2c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c4c) {
            ctx->pc = 0x1C2C7Cu;
            goto label_1c2c7c;
        }
    }
    ctx->pc = 0x1C2C54u;
    // 0x1c2c54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c5c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2c60: 0x24061410  addiu       $a2, $zero, 0x1410
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x1c2c64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2c68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2c6c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C2C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C74u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C2C6Cu, 0x1C2C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C74u;
label_1c2c74:
    // 0x1c2c74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2C74u;
    {
        const bool branch_taken_0x1c2c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c74) {
            ctx->pc = 0x1C2C9Cu;
            goto label_1c2c9c;
        }
    }
    ctx->pc = 0x1C2C7Cu;
label_1c2c7c:
    // 0x1c2c7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c84: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2c88: 0x24060a10  addiu       $a2, $zero, 0xA10
    ctx->pc = 0x1c2c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2576));
    // 0x1c2c8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2c90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2c94: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C2C94u;
    SET_GPR_U32(ctx, 31, 0x1C2C9Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C2C94u, 0x1C2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C9Cu;
label_1c2c9c:
    // 0x1c2c9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2ca0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c2ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c2ca4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ca8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2cac: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2cb0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2cb4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C2CB4u;
    SET_GPR_U32(ctx, 31, 0x1C2CBCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C2CB4u, 0x1C2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CBCu;
label_1c2cbc:
    // 0x1c2cbc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c2cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c2cc0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c2cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2cc4: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C2CC4u;
    SET_GPR_U32(ctx, 31, 0x1C2CCCu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C2CC4u, 0x1C2CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CCCu;
label_1c2ccc:
    // 0x1c2ccc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2cd0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2cd8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2cdc:
    // 0x1c2cdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ce0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2ce0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2ce4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2CE4u;
    SET_GPR_U32(ctx, 31, 0x1C2CECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2CE4u, 0x1C2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CECu;
label_1c2cec:
    // 0x1c2cec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2cf0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2CF0u;
    SET_GPR_U32(ctx, 31, 0x1C2CF8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2CF0u, 0x1C2CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CF8u;
label_1c2cf8:
    // 0x1c2cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2cfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2d04: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2D04u;
    SET_GPR_U32(ctx, 31, 0x1C2D0Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2D04u, 0x1C2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D0Cu;
label_1c2d0c:
    // 0x1c2d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d10: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2D10u;
    SET_GPR_U32(ctx, 31, 0x1C2D18u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2D10u, 0x1C2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D18u;
label_1c2d18:
    // 0x1c2d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d20: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2d24: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2D24u;
    SET_GPR_U32(ctx, 31, 0x1C2D2Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2D24u, 0x1C2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D2Cu;
label_1c2d2c:
    // 0x1c2d2c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C2D2Cu;
    {
        const bool branch_taken_0x1c2d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d2c) {
            ctx->pc = 0x1C2DB8u;
            goto label_1c2db8;
        }
    }
    ctx->pc = 0x1C2D34u;
    // 0x1c2d34: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2d38: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c2d3c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2D3Cu;
    {
        const bool branch_taken_0x1c2d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d3c) {
            ctx->pc = 0x1C2D88u;
            goto label_1c2d88;
        }
    }
    ctx->pc = 0x1C2D44u;
    // 0x1c2d44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d48: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2d4c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c2d50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2d54: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2D54u;
    {
        const bool branch_taken_0x1c2d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d54) {
            ctx->pc = 0x1C2D88u;
            goto label_1c2d88;
        }
    }
    ctx->pc = 0x1C2D5Cu;
    // 0x1c2d5c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d60: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2d64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2d68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c2d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c2d6c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c2d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d78: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d84: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c2d88:
    // 0x1c2d88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d8c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c2d90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C2D90u;
    {
        const bool branch_taken_0x1c2d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d90) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2D98u;
    // 0x1c2d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2da0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2da8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2dac: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2db0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2DB0u;
    {
        const bool branch_taken_0x1c2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2db0) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2DB8u;
label_1c2db8:
    // 0x1c2db8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2dbc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2dc0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c2dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2dc8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2dcc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c2dd0:
    // 0x1c2dd0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c2dd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2dd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c2dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c2ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2DE4u;
}
