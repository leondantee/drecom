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

// Function: Plw02_atk03_on
// Address: 0x1c2df0 - 0x1c30a8
void Plw02_atk03_on_0x1c2df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk03_on_0x1c2df0");
#endif

    switch (ctx->pc) {
        case 0x1c2e7cu: goto label_1c2e7c;
        case 0x1c2ea4u: goto label_1c2ea4;
        case 0x1c2ee4u: goto label_1c2ee4;
        case 0x1c2f0cu: goto label_1c2f0c;
        case 0x1c2f2cu: goto label_1c2f2c;
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f54u: goto label_1c2f54;
        case 0x1c2f74u: goto label_1c2f74;
        case 0x1c2f80u: goto label_1c2f80;
        case 0x1c2f94u: goto label_1c2f94;
        case 0x1c2fa0u: goto label_1c2fa0;
        case 0x1c2ff0u: goto label_1c2ff0;
        default: break;
    }

    ctx->pc = 0x1c2df0u;

    // 0x1c2df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2df4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c2df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2dfc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c2e00: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c2e04: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c2e08: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c2e0c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c2e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c2e10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e14: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c2e18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e1c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c2e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2e20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c2e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2e24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2e28: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C2E28u;
    {
        const bool branch_taken_0x1c2e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2e28) {
            ctx->pc = 0x1C2F64u;
            goto label_1c2f64;
        }
    }
    ctx->pc = 0x1C2E30u;
    // 0x1c2e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2e34: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C2E34u;
    {
        const bool branch_taken_0x1c2e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2e34) {
            ctx->pc = 0x1C2EB4u;
            goto label_1c2eb4;
        }
    }
    ctx->pc = 0x1C2E3Cu;
    // 0x1c2e3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2E3Cu;
    {
        const bool branch_taken_0x1c2e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e3c) {
            ctx->pc = 0x1C2E4Cu;
            goto label_1c2e4c;
        }
    }
    ctx->pc = 0x1C2E44u;
    // 0x1c2e44: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C2E44u;
    {
        const bool branch_taken_0x1c2e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e44) {
            ctx->pc = 0x1C3094u;
            goto label_1c3094;
        }
    }
    ctx->pc = 0x1C2E4Cu;
label_1c2e4c:
    // 0x1c2e4c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2e50: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2e54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2E54u;
    {
        const bool branch_taken_0x1c2e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e54) {
            ctx->pc = 0x1C2E84u;
            goto label_1c2e84;
        }
    }
    ctx->pc = 0x1C2E5Cu;
    // 0x1c2e5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e64: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2e68: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c2e6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2e70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2e74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2E74u;
    SET_GPR_U32(ctx, 31, 0x1C2E7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2E74u, 0x1C2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E7Cu;
label_1c2e7c:
    // 0x1c2e7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2E7Cu;
    {
        const bool branch_taken_0x1c2e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e7c) {
            ctx->pc = 0x1C2EA4u;
            goto label_1c2ea4;
        }
    }
    ctx->pc = 0x1C2E84u;
label_1c2e84:
    // 0x1c2e84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e8c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2e90: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c2e94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2e98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2e9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C2EA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2E9Cu, 0x1C2EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EA4u;
label_1c2ea4:
    // 0x1c2ea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ea8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2eac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2eb0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2eb4:
    // 0x1c2eb4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2eb8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2ebc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2EBCu;
    {
        const bool branch_taken_0x1c2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ebc) {
            ctx->pc = 0x1C2EECu;
            goto label_1c2eec;
        }
    }
    ctx->pc = 0x1C2EC4u;
    // 0x1c2ec4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ecc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2ed0: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c2ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c2ed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ed8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2edc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C2EDCu;
    SET_GPR_U32(ctx, 31, 0x1C2EE4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C2EDCu, 0x1C2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EE4u;
label_1c2ee4:
    // 0x1c2ee4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2EE4u;
    {
        const bool branch_taken_0x1c2ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ee4) {
            ctx->pc = 0x1C2F0Cu;
            goto label_1c2f0c;
        }
    }
    ctx->pc = 0x1C2EECu;
label_1c2eec:
    // 0x1c2eec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ef4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2ef8: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c2ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c2efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2f00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2f04: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C2F04u;
    SET_GPR_U32(ctx, 31, 0x1C2F0Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C2F04u, 0x1C2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F0Cu;
label_1c2f0c:
    // 0x1c2f0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2f10: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c2f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c2f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f18: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2f1c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c2f20: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1c2f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c2f24: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C2F24u;
    SET_GPR_U32(ctx, 31, 0x1C2F2Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C2F24u, 0x1C2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F2Cu;
label_1c2f2c:
    // 0x1c2f2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f34: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2f38: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2f3c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C2F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F44u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C2F3Cu, 0x1C2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F44u;
label_1c2f44:
    // 0x1c2f44: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c2f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c2f48: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2f4c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F54u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C2F4Cu, 0x1C2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F54u;
label_1c2f54:
    // 0x1c2f54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f58: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2f60: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2f64:
    // 0x1c2f64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2f6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2F6Cu, 0x1C2F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F74u;
label_1c2f74:
    // 0x1c2f74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2F78u;
    SET_GPR_U32(ctx, 31, 0x1C2F80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2F78u, 0x1C2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F80u;
label_1c2f80:
    // 0x1c2f80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2f8c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F94u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2F8Cu, 0x1C2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F94u;
label_1c2f94:
    // 0x1c2f94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2f98: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2F98u;
    SET_GPR_U32(ctx, 31, 0x1C2FA0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2F98u, 0x1C2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FA0u;
label_1c2fa0:
    // 0x1c2fa0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2fa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2fa8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2FA8u;
    {
        const bool branch_taken_0x1c2fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fa8) {
            ctx->pc = 0x1C2FDCu;
            goto label_1c2fdc;
        }
    }
    ctx->pc = 0x1C2FB0u;
    // 0x1c2fb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2fb4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2fb8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c2fbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c2fc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2FC0u;
    {
        const bool branch_taken_0x1c2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fc0) {
            ctx->pc = 0x1C2FDCu;
            goto label_1c2fdc;
        }
    }
    ctx->pc = 0x1C2FC8u;
    // 0x1c2fc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2fcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2fd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2fd4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2fd8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c2fdc:
    // 0x1c2fdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2fe0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2fe4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2fe8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2FE8u;
    SET_GPR_U32(ctx, 31, 0x1C2FF0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2FE8u, 0x1C2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FF0u;
label_1c2ff0:
    // 0x1c2ff0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2FF0u;
    {
        const bool branch_taken_0x1c2ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ff0) {
            ctx->pc = 0x1C3024u;
            goto label_1c3024;
        }
    }
    ctx->pc = 0x1C2FF8u;
    // 0x1c2ff8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ffc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3000: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3004: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3008: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c300c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c300cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c3010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3014: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c3014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c301c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3020: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c3024:
    // 0x1c3024: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3028: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c3028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c302c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C302Cu;
    {
        const bool branch_taken_0x1c302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c302c) {
            ctx->pc = 0x1C3094u;
            goto label_1c3094;
        }
    }
    ctx->pc = 0x1C3034u;
    // 0x1c3034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3038: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c303c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C303Cu;
    {
        const bool branch_taken_0x1c303c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c303c) {
            ctx->pc = 0x1C3094u;
            goto label_1c3094;
        }
    }
    ctx->pc = 0x1C3044u;
    // 0x1c3044: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3048: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c304c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3050: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3054: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3054u;
    {
        const bool branch_taken_0x1c3054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3054) {
            ctx->pc = 0x1C3094u;
            goto label_1c3094;
        }
    }
    ctx->pc = 0x1C305Cu;
    // 0x1c305c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c3060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3064: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c3064u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c3068: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c306c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3070: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3074: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3078: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c3078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c307c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3080: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3084: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c308c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3090: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c3094:
    // 0x1c3094: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c3094u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c309c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c309cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30A8u;
}
