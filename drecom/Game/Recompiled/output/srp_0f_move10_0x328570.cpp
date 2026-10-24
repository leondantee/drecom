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

// Function: srp_0f_move10
// Address: 0x328570 - 0x3286f8
void srp_0f_move10_0x328570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0f_move10_0x328570");
#endif

    switch (ctx->pc) {
        case 0x328598u: goto label_328598;
        case 0x3285c4u: goto label_3285c4;
        case 0x328600u: goto label_328600;
        case 0x32860cu: goto label_32860c;
        case 0x328618u: goto label_328618;
        case 0x328620u: goto label_328620;
        case 0x328658u: goto label_328658;
        case 0x328690u: goto label_328690;
        default: break;
    }

    ctx->pc = 0x328570u;

    // 0x328570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x328574: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x328574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x328578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32857c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x32857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x328580: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328584: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x328584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328588: 0x244502b0  addiu       $a1, $v0, 0x2B0
    ctx->pc = 0x328588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x32858c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x32858cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328590: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x328590u;
    SET_GPR_U32(ctx, 31, 0x328598u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x328590u, 0x328598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328598u;
label_328598:
    // 0x328598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32859c: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x32859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3285a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3285a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3285a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3285a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3285a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3285ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3285acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3285b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3285b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3285b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3285b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3285b8: 0xc44c0270  lwc1        $f12, 0x270($v0)
    ctx->pc = 0x3285b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3285bc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x3285BCu;
    SET_GPR_U32(ctx, 31, 0x3285C4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x3285C4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3285C4u) { return; }
    ctx->pc = 0x3285C4u;
label_3285c4:
    // 0x3285c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3285c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3285c8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3285c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3285cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3285ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3285d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3285d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3285d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3285d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3285d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3285d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3285dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3285dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3285e0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3285e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3285e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3285e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3285e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3285e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3285ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3285ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3285f0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3285f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3285f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3285f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3285f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3285F8u;
    SET_GPR_U32(ctx, 31, 0x328600u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3285F8u, 0x328600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328600u;
label_328600:
    // 0x328600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x328600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328604: 0xc0ca294  jal         func_328A50
    ctx->pc = 0x328604u;
    SET_GPR_U32(ctx, 31, 0x32860Cu);
    ctx->pc = 0x328A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A50u, 0x328604u, 0x32860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32860Cu;
label_32860c:
    // 0x32860c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x32860cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328610: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x328610u;
    {
        const bool branch_taken_0x328610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328610) {
            ctx->pc = 0x3286C8u;
            goto label_3286c8;
        }
    }
    ctx->pc = 0x328618u;
label_328618:
    // 0x328618: 0xc067648  jal         func_19D920
    ctx->pc = 0x328618u;
    SET_GPR_U32(ctx, 31, 0x328620u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328618u, 0x328620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328620u;
label_328620:
    // 0x328620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328624: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x328624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328628: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32862c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328638: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x328638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32863c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32863cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328640: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328644: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32864c: 0xe4400480  swc1        $f0, 0x480($v0)
    ctx->pc = 0x32864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1152), bits); }
    // 0x328650: 0xc067648  jal         func_19D920
    ctx->pc = 0x328650u;
    SET_GPR_U32(ctx, 31, 0x328658u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328650u, 0x328658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328658u;
label_328658:
    // 0x328658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32865c: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x32865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328664: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32866c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328670: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x328670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x328674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328678: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32867c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328684: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x328684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x328688: 0xc067648  jal         func_19D920
    ctx->pc = 0x328688u;
    SET_GPR_U32(ctx, 31, 0x328690u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328688u, 0x328690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328690u;
label_328690:
    // 0x328690: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328694: 0xc4610274  lwc1        $f1, 0x274($v1)
    ctx->pc = 0x328694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32869c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32869cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3286a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3286a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3286a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3286a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3286a8: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x3286a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3286ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3286acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3286b0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3286b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3286b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3286b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3286b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3286bc: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x3286bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x3286c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3286c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3286c4: 0x0  nop
    ctx->pc = 0x3286c4u;
    // NOP
label_3286c8:
    // 0x3286c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3286c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3286cc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3286ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3286d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3286d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3286d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3286d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3286d8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3286d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3286dc: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3286DCu;
    {
        const bool branch_taken_0x3286dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3286dc) {
            ctx->pc = 0x328618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328618;
        }
    }
    ctx->pc = 0x3286E4u;
    // 0x3286e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3286e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3286e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3286e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3286ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3286ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3286f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3286F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3286F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3286F8u;
}
