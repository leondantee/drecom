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

// Function: Plw01_atk04_off
// Address: 0x1c06d0 - 0x1c094c
void Plw01_atk04_off_0x1c06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk04_off_0x1c06d0");
#endif

    switch (ctx->pc) {
        case 0x1c075cu: goto label_1c075c;
        case 0x1c0784u: goto label_1c0784;
        case 0x1c07c4u: goto label_1c07c4;
        case 0x1c07ecu: goto label_1c07ec;
        case 0x1c080cu: goto label_1c080c;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c085cu: goto label_1c085c;
        case 0x1c0868u: goto label_1c0868;
        case 0x1c087cu: goto label_1c087c;
        default: break;
    }

    ctx->pc = 0x1c06d0u;

    // 0x1c06d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c06d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c06d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c06d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c06d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c06dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c06e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c06e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c06e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c06e8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c06ec: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c06ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c06f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c06f4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c06f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c06fc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c06fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0700: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c0700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0704: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0708: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C0708u;
    {
        const bool branch_taken_0x1c0708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0708) {
            ctx->pc = 0x1C082Cu;
            goto label_1c082c;
        }
    }
    ctx->pc = 0x1C0710u;
    // 0x1c0710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0714: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C0714u;
    {
        const bool branch_taken_0x1c0714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0714) {
            ctx->pc = 0x1C0794u;
            goto label_1c0794;
        }
    }
    ctx->pc = 0x1C071Cu;
    // 0x1c071c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C071Cu;
    {
        const bool branch_taken_0x1c071c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c071c) {
            ctx->pc = 0x1C072Cu;
            goto label_1c072c;
        }
    }
    ctx->pc = 0x1C0724u;
    // 0x1c0724: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C0724u;
    {
        const bool branch_taken_0x1c0724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0724) {
            ctx->pc = 0x1C0938u;
            goto label_1c0938;
        }
    }
    ctx->pc = 0x1C072Cu;
label_1c072c:
    // 0x1c072c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0730: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0730u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c0734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0734u;
    {
        const bool branch_taken_0x1c0734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0734) {
            ctx->pc = 0x1C0764u;
            goto label_1c0764;
        }
    }
    ctx->pc = 0x1C073Cu;
    // 0x1c073c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0744: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0748: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c074c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c074cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0750: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0754: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C0754u;
    SET_GPR_U32(ctx, 31, 0x1C075Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C0754u, 0x1C075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C075Cu;
label_1c075c:
    // 0x1c075c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C075Cu;
    {
        const bool branch_taken_0x1c075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c075c) {
            ctx->pc = 0x1C0784u;
            goto label_1c0784;
        }
    }
    ctx->pc = 0x1C0764u;
label_1c0764:
    // 0x1c0764: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0768: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c076c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c076cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0770: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c0770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c0774: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0778: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c077c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C077Cu;
    SET_GPR_U32(ctx, 31, 0x1C0784u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C077Cu, 0x1C0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0784u;
label_1c0784:
    // 0x1c0784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0788: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c078c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0790: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0794:
    // 0x1c0794: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0798: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c079c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C079Cu;
    {
        const bool branch_taken_0x1c079c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c079c) {
            ctx->pc = 0x1C07CCu;
            goto label_1c07cc;
        }
    }
    ctx->pc = 0x1C07A4u;
    // 0x1c07a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07ac: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c07acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c07b0: 0x24061420  addiu       $a2, $zero, 0x1420
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5152));
    // 0x1c07b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c07b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c07b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c07bc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C07BCu;
    SET_GPR_U32(ctx, 31, 0x1C07C4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C07BCu, 0x1C07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07C4u;
label_1c07c4:
    // 0x1c07c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C07C4u;
    {
        const bool branch_taken_0x1c07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c07c4) {
            ctx->pc = 0x1C07ECu;
            goto label_1c07ec;
        }
    }
    ctx->pc = 0x1C07CCu;
label_1c07cc:
    // 0x1c07cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c07ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07d4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c07d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c07d8: 0x24060a20  addiu       $a2, $zero, 0xA20
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2592));
    // 0x1c07dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c07dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c07e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c07e4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C07E4u;
    SET_GPR_U32(ctx, 31, 0x1C07ECu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C07E4u, 0x1C07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07ECu;
label_1c07ec:
    // 0x1c07ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c07ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c07f0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c07f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c07f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07fc: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0800: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0804: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C0804u;
    SET_GPR_U32(ctx, 31, 0x1C080Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C0804u, 0x1C080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C080Cu;
label_1c080c:
    // 0x1c080c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c0810: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0814: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C0814u;
    SET_GPR_U32(ctx, 31, 0x1C081Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C0814u, 0x1C081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C081Cu;
label_1c081c:
    // 0x1c081c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0820: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0828: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c082c:
    // 0x1c082c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0830: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0834: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0834u;
    SET_GPR_U32(ctx, 31, 0x1C083Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0834u, 0x1C083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C083Cu;
label_1c083c:
    // 0x1c083c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0840: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0840u;
    SET_GPR_U32(ctx, 31, 0x1C0848u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0840u, 0x1C0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0848u;
label_1c0848:
    // 0x1c0848: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c084c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0854: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0854u;
    SET_GPR_U32(ctx, 31, 0x1C085Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0854u, 0x1C085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C085Cu;
label_1c085c:
    // 0x1c085c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0860: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0860u;
    SET_GPR_U32(ctx, 31, 0x1C0868u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0860u, 0x1C0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0868u;
label_1c0868:
    // 0x1c0868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c086c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0870: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0874: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C0874u;
    SET_GPR_U32(ctx, 31, 0x1C087Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C0874u, 0x1C087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C087Cu;
label_1c087c:
    // 0x1c087c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C087Cu;
    {
        const bool branch_taken_0x1c087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c087c) {
            ctx->pc = 0x1C0920u;
            goto label_1c0920;
        }
    }
    ctx->pc = 0x1C0884u;
    // 0x1c0884: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c0884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0888: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c0888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c088c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C088Cu;
    {
        const bool branch_taken_0x1c088c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c088c) {
            ctx->pc = 0x1C08C0u;
            goto label_1c08c0;
        }
    }
    ctx->pc = 0x1C0894u;
    // 0x1c0894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0898: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c089c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c08a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c08a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c08a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C08A4u;
    {
        const bool branch_taken_0x1c08a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c08a4) {
            ctx->pc = 0x1C08C0u;
            goto label_1c08c0;
        }
    }
    ctx->pc = 0x1C08ACu;
    // 0x1c08ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c08b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c08b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c08b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c08b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c08bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c08c0:
    // 0x1c08c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c08c4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c08c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c08cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c08ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c08d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C08D0u;
    {
        const bool branch_taken_0x1c08d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c08d0) {
            ctx->pc = 0x1C08F0u;
            goto label_1c08f0;
        }
    }
    ctx->pc = 0x1C08D8u;
    // 0x1c08d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c08e0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c08e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c08e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c08ec: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c08ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c08f0:
    // 0x1c08f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c08f4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c08f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C08F8u;
    {
        const bool branch_taken_0x1c08f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c08f8) {
            ctx->pc = 0x1C0938u;
            goto label_1c0938;
        }
    }
    ctx->pc = 0x1C0900u;
    // 0x1c0900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0904: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0908: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c090c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0910: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0914: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c0914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0918u;
    {
        const bool branch_taken_0x1c0918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0918) {
            ctx->pc = 0x1C0938u;
            goto label_1c0938;
        }
    }
    ctx->pc = 0x1C0920u;
label_1c0920:
    // 0x1c0920: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0924: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0928: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c092c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0930: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0934: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c0938:
    // 0x1c0938: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c0938u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c093c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c093cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0940: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c0940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c0944: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C094Cu;
}
