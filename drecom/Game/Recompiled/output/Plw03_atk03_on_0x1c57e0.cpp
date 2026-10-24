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

// Function: Plw03_atk03_on
// Address: 0x1c57e0 - 0x1c5a98
void Plw03_atk03_on_0x1c57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk03_on_0x1c57e0");
#endif

    switch (ctx->pc) {
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5894u: goto label_1c5894;
        case 0x1c58d4u: goto label_1c58d4;
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5934u: goto label_1c5934;
        case 0x1c5944u: goto label_1c5944;
        case 0x1c5964u: goto label_1c5964;
        case 0x1c5970u: goto label_1c5970;
        case 0x1c5984u: goto label_1c5984;
        case 0x1c5990u: goto label_1c5990;
        case 0x1c59e0u: goto label_1c59e0;
        default: break;
    }

    ctx->pc = 0x1c57e0u;

    // 0x1c57e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c57e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c57e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c57e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c57ec: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c57f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c57f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c57f4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c57f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c57f8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c57fc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c57fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c5800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5804: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c5804u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c5808: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c580c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c580cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5810: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c5810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5814: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c5814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5818: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C5818u;
    {
        const bool branch_taken_0x1c5818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5818) {
            ctx->pc = 0x1C5954u;
            goto label_1c5954;
        }
    }
    ctx->pc = 0x1C5820u;
    // 0x1c5820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5824: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5824u;
    {
        const bool branch_taken_0x1c5824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5824) {
            ctx->pc = 0x1C58A4u;
            goto label_1c58a4;
        }
    }
    ctx->pc = 0x1C582Cu;
    // 0x1c582c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C582Cu;
    {
        const bool branch_taken_0x1c582c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c582c) {
            ctx->pc = 0x1C583Cu;
            goto label_1c583c;
        }
    }
    ctx->pc = 0x1C5834u;
    // 0x1c5834: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C5834u;
    {
        const bool branch_taken_0x1c5834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5834) {
            ctx->pc = 0x1C5A84u;
            goto label_1c5a84;
        }
    }
    ctx->pc = 0x1C583Cu;
label_1c583c:
    // 0x1c583c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5840: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5844: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5844u;
    {
        const bool branch_taken_0x1c5844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5844) {
            ctx->pc = 0x1C5874u;
            goto label_1c5874;
        }
    }
    ctx->pc = 0x1C584Cu;
    // 0x1c584c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c584cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5854: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5858: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c5858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c585c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c585cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5860: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5864: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5864u;
    SET_GPR_U32(ctx, 31, 0x1C586Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5864u, 0x1C586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C586Cu;
label_1c586c:
    // 0x1c586c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C586Cu;
    {
        const bool branch_taken_0x1c586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c586c) {
            ctx->pc = 0x1C5894u;
            goto label_1c5894;
        }
    }
    ctx->pc = 0x1C5874u;
label_1c5874:
    // 0x1c5874: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c587c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c587cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5880: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c5880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c5884: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5888: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c588c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C588Cu;
    SET_GPR_U32(ctx, 31, 0x1C5894u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C588Cu, 0x1C5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5894u;
label_1c5894:
    // 0x1c5894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5898: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c589c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c58a0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c58a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c58a4:
    // 0x1c58a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c58a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c58a8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c58ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C58ACu;
    {
        const bool branch_taken_0x1c58ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c58ac) {
            ctx->pc = 0x1C58DCu;
            goto label_1c58dc;
        }
    }
    ctx->pc = 0x1C58B4u;
    // 0x1c58b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c58b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c58b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c58bc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c58c0: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c58c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c58c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c58c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c58c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c58c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c58cc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C58CCu;
    SET_GPR_U32(ctx, 31, 0x1C58D4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C58CCu, 0x1C58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58D4u;
label_1c58d4:
    // 0x1c58d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C58D4u;
    {
        const bool branch_taken_0x1c58d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c58d4) {
            ctx->pc = 0x1C58FCu;
            goto label_1c58fc;
        }
    }
    ctx->pc = 0x1C58DCu;
label_1c58dc:
    // 0x1c58dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c58e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c58e4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c58e8: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c58e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c58ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c58ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c58f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c58f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c58f4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C58F4u;
    SET_GPR_U32(ctx, 31, 0x1C58FCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C58F4u, 0x1C58FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58FCu;
label_1c58fc:
    // 0x1c58fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5900: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5908: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c590c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c5910: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1c5910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c5914: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5914u;
    SET_GPR_U32(ctx, 31, 0x1C591Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5914u, 0x1C591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C591Cu;
label_1c591c:
    // 0x1c591c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5920: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5924: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5928: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c592c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C592Cu;
    SET_GPR_U32(ctx, 31, 0x1C5934u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C592Cu, 0x1C5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5934u;
label_1c5934:
    // 0x1c5934: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c5934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c5938: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c5938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c593c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C593Cu;
    SET_GPR_U32(ctx, 31, 0x1C5944u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C593Cu, 0x1C5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5944u;
label_1c5944:
    // 0x1c5944: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5948: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c594c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5950: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5954:
    // 0x1c5954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5958: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c595c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C595Cu;
    SET_GPR_U32(ctx, 31, 0x1C5964u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C595Cu, 0x1C5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5964u;
label_1c5964:
    // 0x1c5964: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5968: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5968u;
    SET_GPR_U32(ctx, 31, 0x1C5970u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5968u, 0x1C5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5970u;
label_1c5970:
    // 0x1c5970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5974: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5978: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c597c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C597Cu;
    SET_GPR_U32(ctx, 31, 0x1C5984u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C597Cu, 0x1C5984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5984u;
label_1c5984:
    // 0x1c5984: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5988: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5988u;
    SET_GPR_U32(ctx, 31, 0x1C5990u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5988u, 0x1C5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5990u;
label_1c5990:
    // 0x1c5990: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5994: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c5998: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5998u;
    {
        const bool branch_taken_0x1c5998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5998) {
            ctx->pc = 0x1C59CCu;
            goto label_1c59cc;
        }
    }
    ctx->pc = 0x1C59A0u;
    // 0x1c59a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c59a8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c59ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c59b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C59B0u;
    {
        const bool branch_taken_0x1c59b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c59b0) {
            ctx->pc = 0x1C59CCu;
            goto label_1c59cc;
        }
    }
    ctx->pc = 0x1C59B8u;
    // 0x1c59b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c59c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c59c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c59c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c59cc:
    // 0x1c59cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59d4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c59d8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C59D8u;
    SET_GPR_U32(ctx, 31, 0x1C59E0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C59D8u, 0x1C59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59E0u;
label_1c59e0:
    // 0x1c59e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C59E0u;
    {
        const bool branch_taken_0x1c59e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c59e0) {
            ctx->pc = 0x1C5A14u;
            goto label_1c5a14;
        }
    }
    ctx->pc = 0x1C59E8u;
    // 0x1c59e8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c59f0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c59f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c59f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c59f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c59f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c59fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a04: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c5a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5a08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a10: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c5a14:
    // 0x1c5a14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a18: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c5a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c5a1c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5A1Cu;
    {
        const bool branch_taken_0x1c5a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a1c) {
            ctx->pc = 0x1C5A84u;
            goto label_1c5a84;
        }
    }
    ctx->pc = 0x1C5A24u;
    // 0x1c5a24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a28: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c5a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c5a2c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C5A2Cu;
    {
        const bool branch_taken_0x1c5a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a2c) {
            ctx->pc = 0x1C5A84u;
            goto label_1c5a84;
        }
    }
    ctx->pc = 0x1C5A34u;
    // 0x1c5a34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a38: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c5a3c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5a40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5a44: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5A44u;
    {
        const bool branch_taken_0x1c5a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a44) {
            ctx->pc = 0x1C5A84u;
            goto label_1c5a84;
        }
    }
    ctx->pc = 0x1C5A4Cu;
    // 0x1c5a4c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c5a50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a54: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c5a54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c5a58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5a5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a60: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5a64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c5a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5a6c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5a74: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c5a78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c5a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c5a7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5a80: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c5a84:
    // 0x1c5a84: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c5a84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5a8c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c5a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5A98u;
}
