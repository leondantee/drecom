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

// Function: Plw01_atk03_off
// Address: 0x1bff10 - 0x1c018c
void Plw01_atk03_off_0x1bff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk03_off_0x1bff10");
#endif

    switch (ctx->pc) {
        case 0x1bff9cu: goto label_1bff9c;
        case 0x1bffc4u: goto label_1bffc4;
        case 0x1c0004u: goto label_1c0004;
        case 0x1c002cu: goto label_1c002c;
        case 0x1c004cu: goto label_1c004c;
        case 0x1c005cu: goto label_1c005c;
        case 0x1c007cu: goto label_1c007c;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c009cu: goto label_1c009c;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00bcu: goto label_1c00bc;
        default: break;
    }

    ctx->pc = 0x1bff10u;

    // 0x1bff10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bff14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bff18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bff1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bff20: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bff20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bff24: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bff24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bff28: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bff2c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bff2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bff30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bff34: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1bff34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1bff38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bff3c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bff3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bff40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bff40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bff44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bff48: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BFF48u;
    {
        const bool branch_taken_0x1bff48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bff48) {
            ctx->pc = 0x1C006Cu;
            goto label_1c006c;
        }
    }
    ctx->pc = 0x1BFF50u;
    // 0x1bff50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff54: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BFF54u;
    {
        const bool branch_taken_0x1bff54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bff54) {
            ctx->pc = 0x1BFFD4u;
            goto label_1bffd4;
        }
    }
    ctx->pc = 0x1BFF5Cu;
    // 0x1bff5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF5Cu;
    {
        const bool branch_taken_0x1bff5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff5c) {
            ctx->pc = 0x1BFF6Cu;
            goto label_1bff6c;
        }
    }
    ctx->pc = 0x1BFF64u;
    // 0x1bff64: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1BFF64u;
    {
        const bool branch_taken_0x1bff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff64) {
            ctx->pc = 0x1C0178u;
            goto label_1c0178;
        }
    }
    ctx->pc = 0x1BFF6Cu;
label_1bff6c:
    // 0x1bff6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bff6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bff70: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bff74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFF74u;
    {
        const bool branch_taken_0x1bff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff74) {
            ctx->pc = 0x1BFFA4u;
            goto label_1bffa4;
        }
    }
    ctx->pc = 0x1BFF7Cu;
    // 0x1bff7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bff80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bff84: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bff88: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1bff88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1bff8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bff94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BFF94u;
    SET_GPR_U32(ctx, 31, 0x1BFF9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BFF94u, 0x1BFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF9Cu;
label_1bff9c:
    // 0x1bff9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFF9Cu;
    {
        const bool branch_taken_0x1bff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff9c) {
            ctx->pc = 0x1BFFC4u;
            goto label_1bffc4;
        }
    }
    ctx->pc = 0x1BFFA4u;
label_1bffa4:
    // 0x1bffa4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bffa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bffac: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bffb0: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1bffb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bffb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bffb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bffbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BFFBCu;
    SET_GPR_U32(ctx, 31, 0x1BFFC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BFFBCu, 0x1BFFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFC4u;
label_1bffc4:
    // 0x1bffc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bffc8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bffc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bffcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bffd0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bffd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bffd4:
    // 0x1bffd4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bffd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bffd8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bffdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFFDCu;
    {
        const bool branch_taken_0x1bffdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bffdc) {
            ctx->pc = 0x1C000Cu;
            goto label_1c000c;
        }
    }
    ctx->pc = 0x1BFFE4u;
    // 0x1bffe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bffe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bffec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfff0: 0x24060a16  addiu       $a2, $zero, 0xA16
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2582));
    // 0x1bfff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfff8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfffc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFFFCu;
    SET_GPR_U32(ctx, 31, 0x1C0004u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFFFCu, 0x1C0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0004u;
label_1c0004:
    // 0x1c0004: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0004u;
    {
        const bool branch_taken_0x1c0004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0004) {
            ctx->pc = 0x1C002Cu;
            goto label_1c002c;
        }
    }
    ctx->pc = 0x1C000Cu;
label_1c000c:
    // 0x1c000c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0010: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0014: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0018: 0x24060a16  addiu       $a2, $zero, 0xA16
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2582));
    // 0x1c001c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c001cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0020: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0024: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0024u;
    SET_GPR_U32(ctx, 31, 0x1C002Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0024u, 0x1C002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C002Cu;
label_1c002c:
    // 0x1c002c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c002cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0030: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c0030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c0034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c003c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0040: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c0040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0044: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C0044u;
    SET_GPR_U32(ctx, 31, 0x1C004Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C0044u, 0x1C004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C004Cu;
label_1c004c:
    // 0x1c004c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c004cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c0050: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0054: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C0054u;
    SET_GPR_U32(ctx, 31, 0x1C005Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C0054u, 0x1C005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C005Cu;
label_1c005c:
    // 0x1c005c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0060: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0068: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c006c:
    // 0x1c006c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0070: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0074: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0074u;
    SET_GPR_U32(ctx, 31, 0x1C007Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0074u, 0x1C007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C007Cu;
label_1c007c:
    // 0x1c007c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c007cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0080: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0080u;
    SET_GPR_U32(ctx, 31, 0x1C0088u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0080u, 0x1C0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0088u;
label_1c0088:
    // 0x1c0088: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c008c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0094: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0094u;
    SET_GPR_U32(ctx, 31, 0x1C009Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0094u, 0x1C009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C009Cu;
label_1c009c:
    // 0x1c009c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00a0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C00A0u;
    SET_GPR_U32(ctx, 31, 0x1C00A8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C00A0u, 0x1C00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00A8u;
label_1c00a8:
    // 0x1c00a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c00acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00b0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c00b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c00b4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C00B4u;
    SET_GPR_U32(ctx, 31, 0x1C00BCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C00B4u, 0x1C00BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00BCu;
label_1c00bc:
    // 0x1c00bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C00BCu;
    {
        const bool branch_taken_0x1c00bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00bc) {
            ctx->pc = 0x1C0160u;
            goto label_1c0160;
        }
    }
    ctx->pc = 0x1C00C4u;
    // 0x1c00c4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c00c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c00c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c00cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C00CCu;
    {
        const bool branch_taken_0x1c00cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00cc) {
            ctx->pc = 0x1C0100u;
            goto label_1c0100;
        }
    }
    ctx->pc = 0x1C00D4u;
    // 0x1c00d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c00dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c00e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c00e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c00e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C00E4u;
    {
        const bool branch_taken_0x1c00e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00e4) {
            ctx->pc = 0x1C0100u;
            goto label_1c0100;
        }
    }
    ctx->pc = 0x1C00ECu;
    // 0x1c00ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00f0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c00f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c00f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c00f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c00f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c00fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c0100:
    // 0x1c0100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0104: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c0108: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c010c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c010cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0110: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0110u;
    {
        const bool branch_taken_0x1c0110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0110) {
            ctx->pc = 0x1C0130u;
            goto label_1c0130;
        }
    }
    ctx->pc = 0x1C0118u;
    // 0x1c0118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c011c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0120: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0128: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c012c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c012cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c0130:
    // 0x1c0130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0134: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c0138: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0138u;
    {
        const bool branch_taken_0x1c0138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0138) {
            ctx->pc = 0x1C0178u;
            goto label_1c0178;
        }
    }
    ctx->pc = 0x1C0140u;
    // 0x1c0140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0148: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c014c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0154: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c0154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0158u;
    {
        const bool branch_taken_0x1c0158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0158) {
            ctx->pc = 0x1C0178u;
            goto label_1c0178;
        }
    }
    ctx->pc = 0x1C0160u;
label_1c0160:
    // 0x1c0160: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0164: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0168: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c016c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c016cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0170: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0174: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c0178:
    // 0x1c0178: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c0178u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c017c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c017cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0180: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c0184: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C018Cu;
}
