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

// Function: Plw01_atk01_off
// Address: 0x1bef80 - 0x1bf1fc
void Plw01_atk01_off_0x1bef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk01_off_0x1bef80");
#endif

    switch (ctx->pc) {
        case 0x1bf00cu: goto label_1bf00c;
        case 0x1bf034u: goto label_1bf034;
        case 0x1bf074u: goto label_1bf074;
        case 0x1bf09cu: goto label_1bf09c;
        case 0x1bf0bcu: goto label_1bf0bc;
        case 0x1bf0ccu: goto label_1bf0cc;
        case 0x1bf0ecu: goto label_1bf0ec;
        case 0x1bf0f8u: goto label_1bf0f8;
        case 0x1bf10cu: goto label_1bf10c;
        case 0x1bf118u: goto label_1bf118;
        case 0x1bf12cu: goto label_1bf12c;
        default: break;
    }

    ctx->pc = 0x1bef80u;

    // 0x1bef80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bef84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bef88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bef8c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bef90: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bef94: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bef94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bef98: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bef9c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bef9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1befa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1befa4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1befa4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1befa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1befa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1befac: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1befacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1befb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1befb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1befb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1befb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1befb8: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BEFB8u;
    {
        const bool branch_taken_0x1befb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1befb8) {
            ctx->pc = 0x1BF0DCu;
            goto label_1bf0dc;
        }
    }
    ctx->pc = 0x1BEFC0u;
    // 0x1befc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1befc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1befc4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BEFC4u;
    {
        const bool branch_taken_0x1befc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1befc4) {
            ctx->pc = 0x1BF044u;
            goto label_1bf044;
        }
    }
    ctx->pc = 0x1BEFCCu;
    // 0x1befcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEFCCu;
    {
        const bool branch_taken_0x1befcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1befcc) {
            ctx->pc = 0x1BEFDCu;
            goto label_1befdc;
        }
    }
    ctx->pc = 0x1BEFD4u;
    // 0x1befd4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1BEFD4u;
    {
        const bool branch_taken_0x1befd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1befd4) {
            ctx->pc = 0x1BF1E8u;
            goto label_1bf1e8;
        }
    }
    ctx->pc = 0x1BEFDCu;
label_1befdc:
    // 0x1befdc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1befdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1befe0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1befe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1befe4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BEFE4u;
    {
        const bool branch_taken_0x1befe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1befe4) {
            ctx->pc = 0x1BF014u;
            goto label_1bf014;
        }
    }
    ctx->pc = 0x1BEFECu;
    // 0x1befec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1beff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1beff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1beff4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1beff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1beff8: 0x2406140d  addiu       $a2, $zero, 0x140D
    ctx->pc = 0x1beff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5133));
    // 0x1beffc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1beffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf000: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf004: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF004u;
    SET_GPR_U32(ctx, 31, 0x1BF00Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF004u, 0x1BF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF00Cu;
label_1bf00c:
    // 0x1bf00c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF00Cu;
    {
        const bool branch_taken_0x1bf00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf00c) {
            ctx->pc = 0x1BF034u;
            goto label_1bf034;
        }
    }
    ctx->pc = 0x1BF014u;
label_1bf014:
    // 0x1bf014: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf018: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf01c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf020: 0x24060a0d  addiu       $a2, $zero, 0xA0D
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x1bf024: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf028: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf02c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF02Cu;
    SET_GPR_U32(ctx, 31, 0x1BF034u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF02Cu, 0x1BF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF034u;
label_1bf034:
    // 0x1bf034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf038: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf040: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf044:
    // 0x1bf044: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf048: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf048u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf04c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF04Cu;
    {
        const bool branch_taken_0x1bf04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf04c) {
            ctx->pc = 0x1BF07Cu;
            goto label_1bf07c;
        }
    }
    ctx->pc = 0x1BF054u;
    // 0x1bf054: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf058: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf05c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf060: 0x2406140c  addiu       $a2, $zero, 0x140C
    ctx->pc = 0x1bf060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5132));
    // 0x1bf064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf068: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf06c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF06Cu;
    SET_GPR_U32(ctx, 31, 0x1BF074u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF06Cu, 0x1BF074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF074u;
label_1bf074:
    // 0x1bf074: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF074u;
    {
        const bool branch_taken_0x1bf074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf074) {
            ctx->pc = 0x1BF09Cu;
            goto label_1bf09c;
        }
    }
    ctx->pc = 0x1BF07Cu;
label_1bf07c:
    // 0x1bf07c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf080: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf084: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf088: 0x24060a0c  addiu       $a2, $zero, 0xA0C
    ctx->pc = 0x1bf088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2572));
    // 0x1bf08c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf090: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf094: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF094u;
    SET_GPR_U32(ctx, 31, 0x1BF09Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF094u, 0x1BF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF09Cu;
label_1bf09c:
    // 0x1bf09c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf0a0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bf0a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bf0a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0ac: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bf0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf0b0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bf0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf0b4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BF0B4u;
    SET_GPR_U32(ctx, 31, 0x1BF0BCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BF0B4u, 0x1BF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0BCu;
label_1bf0bc:
    // 0x1bf0bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bf0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bf0c0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bf0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf0c4: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BF0C4u;
    SET_GPR_U32(ctx, 31, 0x1BF0CCu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BF0C4u, 0x1BF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0CCu;
label_1bf0cc:
    // 0x1bf0cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0d0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf0d8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf0dc:
    // 0x1bf0dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf0e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF0E4u;
    SET_GPR_U32(ctx, 31, 0x1BF0ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF0E4u, 0x1BF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0ECu;
label_1bf0ec:
    // 0x1bf0ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF0F0u;
    SET_GPR_U32(ctx, 31, 0x1BF0F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF0F0u, 0x1BF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0F8u;
label_1bf0f8:
    // 0x1bf0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf0fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf104: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF104u;
    SET_GPR_U32(ctx, 31, 0x1BF10Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF104u, 0x1BF10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF10Cu;
label_1bf10c:
    // 0x1bf10c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf110: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF110u;
    SET_GPR_U32(ctx, 31, 0x1BF118u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF110u, 0x1BF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF118u;
label_1bf118:
    // 0x1bf118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf11c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf120: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bf120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf124: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BF124u;
    SET_GPR_U32(ctx, 31, 0x1BF12Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BF124u, 0x1BF12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF12Cu;
label_1bf12c:
    // 0x1bf12c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF12Cu;
    {
        const bool branch_taken_0x1bf12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf12c) {
            ctx->pc = 0x1BF1D0u;
            goto label_1bf1d0;
        }
    }
    ctx->pc = 0x1BF134u;
    // 0x1bf134: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bf134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf138: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bf138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bf13c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF13Cu;
    {
        const bool branch_taken_0x1bf13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf13c) {
            ctx->pc = 0x1BF170u;
            goto label_1bf170;
        }
    }
    ctx->pc = 0x1BF144u;
    // 0x1bf144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf148: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf14c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bf150: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf154: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF154u;
    {
        const bool branch_taken_0x1bf154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf154) {
            ctx->pc = 0x1BF170u;
            goto label_1bf170;
        }
    }
    ctx->pc = 0x1BF15Cu;
    // 0x1bf15c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf160: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf164: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf168: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf16c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bf170:
    // 0x1bf170: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf174: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf178: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf17c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF180u;
    {
        const bool branch_taken_0x1bf180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf180) {
            ctx->pc = 0x1BF1A0u;
            goto label_1bf1a0;
        }
    }
    ctx->pc = 0x1BF188u;
    // 0x1bf188: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf18c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf190: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf194: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf19c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf19cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bf1a0:
    // 0x1bf1a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1a4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bf1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bf1a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF1A8u;
    {
        const bool branch_taken_0x1bf1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1a8) {
            ctx->pc = 0x1BF1E8u;
            goto label_1bf1e8;
        }
    }
    ctx->pc = 0x1BF1B0u;
    // 0x1bf1b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1b8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf1bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1c4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf1c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF1C8u;
    {
        const bool branch_taken_0x1bf1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1c8) {
            ctx->pc = 0x1BF1E8u;
            goto label_1bf1e8;
        }
    }
    ctx->pc = 0x1BF1D0u;
label_1bf1d0:
    // 0x1bf1d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1d4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf1d8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf1dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf1e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf1e4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bf1e8:
    // 0x1bf1e8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bf1e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf1f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bf1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bf1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF1FCu;
}
