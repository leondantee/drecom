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

// Function: Plw03_atk05_on
// Address: 0x1c6580 - 0x1c6838
void Plw03_atk05_on_0x1c6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk05_on_0x1c6580");
#endif

    switch (ctx->pc) {
        case 0x1c660cu: goto label_1c660c;
        case 0x1c6634u: goto label_1c6634;
        case 0x1c6674u: goto label_1c6674;
        case 0x1c669cu: goto label_1c669c;
        case 0x1c66bcu: goto label_1c66bc;
        case 0x1c66d4u: goto label_1c66d4;
        case 0x1c66e4u: goto label_1c66e4;
        case 0x1c6704u: goto label_1c6704;
        case 0x1c6710u: goto label_1c6710;
        case 0x1c6724u: goto label_1c6724;
        case 0x1c6730u: goto label_1c6730;
        case 0x1c6780u: goto label_1c6780;
        default: break;
    }

    ctx->pc = 0x1c6580u;

    // 0x1c6580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6584: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c6584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c6588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c658c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c6590: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c6590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c6594: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c6594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c6598: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c6598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c659c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c659cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c65a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65a4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c65a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c65a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65ac: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c65acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c65b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c65b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c65b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c65b8: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C65B8u;
    {
        const bool branch_taken_0x1c65b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c65b8) {
            ctx->pc = 0x1C66F4u;
            goto label_1c66f4;
        }
    }
    ctx->pc = 0x1C65C0u;
    // 0x1c65c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c65c4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C65C4u;
    {
        const bool branch_taken_0x1c65c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c65c4) {
            ctx->pc = 0x1C6644u;
            goto label_1c6644;
        }
    }
    ctx->pc = 0x1C65CCu;
    // 0x1c65cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C65CCu;
    {
        const bool branch_taken_0x1c65cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65cc) {
            ctx->pc = 0x1C65DCu;
            goto label_1c65dc;
        }
    }
    ctx->pc = 0x1C65D4u;
    // 0x1c65d4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C65D4u;
    {
        const bool branch_taken_0x1c65d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65d4) {
            ctx->pc = 0x1C6824u;
            goto label_1c6824;
        }
    }
    ctx->pc = 0x1C65DCu;
label_1c65dc:
    // 0x1c65dc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c65dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c65e0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c65e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C65E4u;
    {
        const bool branch_taken_0x1c65e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65e4) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C65ECu;
    // 0x1c65ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65f4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c65f8: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c65fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6600: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6604: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C6604u;
    SET_GPR_U32(ctx, 31, 0x1C660Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6604u, 0x1C660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C660Cu;
label_1c660c:
    // 0x1c660c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C660Cu;
    {
        const bool branch_taken_0x1c660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c660c) {
            ctx->pc = 0x1C6634u;
            goto label_1c6634;
        }
    }
    ctx->pc = 0x1C6614u;
label_1c6614:
    // 0x1c6614: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6618: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c661c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c6620: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c6624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6628: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c662c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C662Cu;
    SET_GPR_U32(ctx, 31, 0x1C6634u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C662Cu, 0x1C6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6634u;
label_1c6634:
    // 0x1c6634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6638: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c6638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c663c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6640: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c6640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c6644:
    // 0x1c6644: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c6644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c6648: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c6648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c664c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C664Cu;
    {
        const bool branch_taken_0x1c664c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c664c) {
            ctx->pc = 0x1C667Cu;
            goto label_1c667c;
        }
    }
    ctx->pc = 0x1C6654u;
    // 0x1c6654: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c665c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c665cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c6660: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c6660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c6664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6668: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c666c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C666Cu;
    SET_GPR_U32(ctx, 31, 0x1C6674u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C666Cu, 0x1C6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6674u;
label_1c6674:
    // 0x1c6674: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6674u;
    {
        const bool branch_taken_0x1c6674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6674) {
            ctx->pc = 0x1C669Cu;
            goto label_1c669c;
        }
    }
    ctx->pc = 0x1C667Cu;
label_1c667c:
    // 0x1c667c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6680: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6684: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c6684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c6688: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c668c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6690: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6694: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C6694u;
    SET_GPR_U32(ctx, 31, 0x1C669Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C6694u, 0x1C669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C669Cu;
label_1c669c:
    // 0x1c669c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c66a0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c66a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c66a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c66a8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c66ac: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1c66acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c66b0: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1c66b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c66b4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C66B4u;
    SET_GPR_U32(ctx, 31, 0x1C66BCu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C66B4u, 0x1C66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66BCu;
label_1c66bc:
    // 0x1c66bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c66c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c66c4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c66c8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c66c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c66cc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C66CCu;
    SET_GPR_U32(ctx, 31, 0x1C66D4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C66CCu, 0x1C66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66D4u;
label_1c66d4:
    // 0x1c66d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c66d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c66d8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c66dc: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C66DCu;
    SET_GPR_U32(ctx, 31, 0x1C66E4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C66DCu, 0x1C66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66E4u;
label_1c66e4:
    // 0x1c66e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c66e8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c66e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c66ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c66f0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c66f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c66f4:
    // 0x1c66f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c66f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c66f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c66fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C66FCu;
    SET_GPR_U32(ctx, 31, 0x1C6704u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C66FCu, 0x1C6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6704u;
label_1c6704:
    // 0x1c6704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6708: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6708u;
    SET_GPR_U32(ctx, 31, 0x1C6710u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6708u, 0x1C6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6710u;
label_1c6710:
    // 0x1c6710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6714: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6718: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6718u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c671c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C671Cu;
    SET_GPR_U32(ctx, 31, 0x1C6724u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C671Cu, 0x1C6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6724u;
label_1c6724:
    // 0x1c6724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c6724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6728: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C6728u;
    SET_GPR_U32(ctx, 31, 0x1C6730u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C6728u, 0x1C6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6730u;
label_1c6730:
    // 0x1c6730: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c6734: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6738: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6738u;
    {
        const bool branch_taken_0x1c6738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6738) {
            ctx->pc = 0x1C676Cu;
            goto label_1c676c;
        }
    }
    ctx->pc = 0x1C6740u;
    // 0x1c6740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6744: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6748: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c674c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6750: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6750u;
    {
        const bool branch_taken_0x1c6750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6750) {
            ctx->pc = 0x1C676Cu;
            goto label_1c676c;
        }
    }
    ctx->pc = 0x1C6758u;
    // 0x1c6758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c675c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6760: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6764: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6768: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c676c:
    // 0x1c676c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6770: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6774: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c6774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6778: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C6778u;
    SET_GPR_U32(ctx, 31, 0x1C6780u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C6778u, 0x1C6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6780u;
label_1c6780:
    // 0x1c6780: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6780u;
    {
        const bool branch_taken_0x1c6780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6780) {
            ctx->pc = 0x1C67B4u;
            goto label_1c67b4;
        }
    }
    ctx->pc = 0x1C6788u;
    // 0x1c6788: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c6788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c678c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c678cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6790: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c6794: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6798: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c6798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c679c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c679cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c67a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67a4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c67a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c67a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c67ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67b0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c67b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c67b4:
    // 0x1c67b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67b8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c67b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c67bc: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C67BCu;
    {
        const bool branch_taken_0x1c67bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67bc) {
            ctx->pc = 0x1C6824u;
            goto label_1c6824;
        }
    }
    ctx->pc = 0x1C67C4u;
    // 0x1c67c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67c8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c67c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c67cc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C67CCu;
    {
        const bool branch_taken_0x1c67cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67cc) {
            ctx->pc = 0x1C6824u;
            goto label_1c6824;
        }
    }
    ctx->pc = 0x1C67D4u;
    // 0x1c67d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c67dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c67e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c67e4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C67E4u;
    {
        const bool branch_taken_0x1c67e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c67e4) {
            ctx->pc = 0x1C6824u;
            goto label_1c6824;
        }
    }
    ctx->pc = 0x1C67ECu;
    // 0x1c67ec: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c67f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67f4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c67f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c67f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c67fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6800: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6808: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c680c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c680cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6810: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c6810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6814: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c6814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c6818: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c681c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c681cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6820: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c6820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c6824:
    // 0x1c6824: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c6824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c682c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c682cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c6830: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6838u;
}
