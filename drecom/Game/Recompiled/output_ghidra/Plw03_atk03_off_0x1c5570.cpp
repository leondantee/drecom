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

// Function: Plw03_atk03_off
// Address: 0x1c5570 - 0x1c57d4
void Plw03_atk03_off_0x1c5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk03_off_0x1c5570");
#endif

    switch (ctx->pc) {
        case 0x1c55fcu: goto label_1c55fc;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5664u: goto label_1c5664;
        case 0x1c568cu: goto label_1c568c;
        case 0x1c56acu: goto label_1c56ac;
        case 0x1c56bcu: goto label_1c56bc;
        case 0x1c56dcu: goto label_1c56dc;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c571cu: goto label_1c571c;
        default: break;
    }

    ctx->pc = 0x1c5570u;

    // 0x1c5570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5574: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c5574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c5578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c557c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c5580: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c5584: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c5584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c5588: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c5588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c558c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c558cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c5590: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5594: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c5594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c5598: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c559c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c559cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c55a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c55a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c55a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c55a8: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C55A8u;
    {
        const bool branch_taken_0x1c55a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c55a8) {
            ctx->pc = 0x1C56CCu;
            goto label_1c56cc;
        }
    }
    ctx->pc = 0x1C55B0u;
    // 0x1c55b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c55b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c55b4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C55B4u;
    {
        const bool branch_taken_0x1c55b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c55b4) {
            ctx->pc = 0x1C5634u;
            goto label_1c5634;
        }
    }
    ctx->pc = 0x1C55BCu;
    // 0x1c55bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55BCu;
    {
        const bool branch_taken_0x1c55bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55bc) {
            ctx->pc = 0x1C55CCu;
            goto label_1c55cc;
        }
    }
    ctx->pc = 0x1C55C4u;
    // 0x1c55c4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C55C4u;
    {
        const bool branch_taken_0x1c55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55c4) {
            ctx->pc = 0x1C57C0u;
            goto label_1c57c0;
        }
    }
    ctx->pc = 0x1C55CCu;
label_1c55cc:
    // 0x1c55cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c55ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c55d0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c55d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C55D4u;
    {
        const bool branch_taken_0x1c55d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55d4) {
            ctx->pc = 0x1C5604u;
            goto label_1c5604;
        }
    }
    ctx->pc = 0x1C55DCu;
    // 0x1c55dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c55e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c55e4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c55e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c55e8: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c55ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c55ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c55f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c55f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c55f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C55F4u;
    SET_GPR_U32(ctx, 31, 0x1C55FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C55F4u, 0x1C55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55FCu;
label_1c55fc:
    // 0x1c55fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C55FCu;
    {
        const bool branch_taken_0x1c55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55fc) {
            ctx->pc = 0x1C5624u;
            goto label_1c5624;
        }
    }
    ctx->pc = 0x1C5604u;
label_1c5604:
    // 0x1c5604: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5608: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c560c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5610: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c5610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c5614: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5618: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c561c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C561Cu;
    SET_GPR_U32(ctx, 31, 0x1C5624u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C561Cu, 0x1C5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5624u;
label_1c5624:
    // 0x1c5624: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5628: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c562c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5630: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5634:
    // 0x1c5634: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5638: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5638u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c563c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C563Cu;
    {
        const bool branch_taken_0x1c563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c563c) {
            ctx->pc = 0x1C566Cu;
            goto label_1c566c;
        }
    }
    ctx->pc = 0x1C5644u;
    // 0x1c5644: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5648: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c564c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5650: 0x24061410  addiu       $a2, $zero, 0x1410
    ctx->pc = 0x1c5650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x1c5654: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5658: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c565c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C565Cu;
    SET_GPR_U32(ctx, 31, 0x1C5664u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C565Cu, 0x1C5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5664u;
label_1c5664:
    // 0x1c5664: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5664u;
    {
        const bool branch_taken_0x1c5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5664) {
            ctx->pc = 0x1C568Cu;
            goto label_1c568c;
        }
    }
    ctx->pc = 0x1C566Cu;
label_1c566c:
    // 0x1c566c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5674: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5678: 0x24060a10  addiu       $a2, $zero, 0xA10
    ctx->pc = 0x1c5678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2576));
    // 0x1c567c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c567cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5680: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5684: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5684u;
    SET_GPR_U32(ctx, 31, 0x1C568Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5684u, 0x1C568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C568Cu;
label_1c568c:
    // 0x1c568c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c568cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5690: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5694: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5698: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c569c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c56a0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c56a4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C56A4u;
    SET_GPR_U32(ctx, 31, 0x1C56ACu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C56A4u, 0x1C56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56ACu;
label_1c56ac:
    // 0x1c56ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c56acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c56b0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c56b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c56b4: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C56B4u;
    SET_GPR_U32(ctx, 31, 0x1C56BCu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C56B4u, 0x1C56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56BCu;
label_1c56bc:
    // 0x1c56bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56c0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c56c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c56c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c56c8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c56c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c56cc:
    // 0x1c56cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c56ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c56d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c56d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C56D4u;
    SET_GPR_U32(ctx, 31, 0x1C56DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C56D4u, 0x1C56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56DCu;
label_1c56dc:
    // 0x1c56dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C56E0u;
    SET_GPR_U32(ctx, 31, 0x1C56E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C56E0u, 0x1C56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56E8u;
label_1c56e8:
    // 0x1c56e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c56e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c56ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c56ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c56f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c56f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c56f4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C56F4u;
    SET_GPR_U32(ctx, 31, 0x1C56FCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C56F4u, 0x1C56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56FCu;
label_1c56fc:
    // 0x1c56fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5700: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5700u;
    SET_GPR_U32(ctx, 31, 0x1C5708u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5700u, 0x1C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c570c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5710: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5714: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5714u;
    SET_GPR_U32(ctx, 31, 0x1C571Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5714u, 0x1C571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C571Cu;
label_1c571c:
    // 0x1c571c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C571Cu;
    {
        const bool branch_taken_0x1c571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c571c) {
            ctx->pc = 0x1C57A8u;
            goto label_1c57a8;
        }
    }
    ctx->pc = 0x1C5724u;
    // 0x1c5724: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5728: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c572c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C572Cu;
    {
        const bool branch_taken_0x1c572c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c572c) {
            ctx->pc = 0x1C5778u;
            goto label_1c5778;
        }
    }
    ctx->pc = 0x1C5734u;
    // 0x1c5734: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5738: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c573c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c573cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c5740: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5744: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5744u;
    {
        const bool branch_taken_0x1c5744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5744) {
            ctx->pc = 0x1C5778u;
            goto label_1c5778;
        }
    }
    ctx->pc = 0x1C574Cu;
    // 0x1c574c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5750: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5754: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5758: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c5758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c575c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c575cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5768: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c576c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5774: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c5778:
    // 0x1c5778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c577c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c5780: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5780u;
    {
        const bool branch_taken_0x1c5780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5780) {
            ctx->pc = 0x1C57C0u;
            goto label_1c57c0;
        }
    }
    ctx->pc = 0x1C5788u;
    // 0x1c5788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c578c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5790: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5794: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5798: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c579c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c579cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c57a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C57A0u;
    {
        const bool branch_taken_0x1c57a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c57a0) {
            ctx->pc = 0x1C57C0u;
            goto label_1c57c0;
        }
    }
    ctx->pc = 0x1C57A8u;
label_1c57a8:
    // 0x1c57a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c57ac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c57acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c57b0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c57b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c57b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c57b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c57b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c57bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c57c0:
    // 0x1c57c0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c57c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c57c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c57c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c57c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c57cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C57CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C57CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C57D4u;
}
