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

// Function: entry_001235c4
// Address: 0x1235c4 - 0x123824
void entry_001235c4_0x1235c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001235c4_0x1235c4");
#endif

    switch (ctx->pc) {
        case 0x1235ccu: goto label_1235cc;
        case 0x12363cu: goto label_12363c;
        case 0x12370cu: goto label_12370c;
        case 0x123744u: goto label_123744;
        case 0x1237f8u: goto label_1237f8;
        case 0x123808u: goto label_123808;
        default: break;
    }

    ctx->pc = 0x1235c4u;

    // 0x1235c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1235C4u;
    SET_GPR_U32(ctx, 31, 0x1235CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1235C4u, 0x1235CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235CCu;
label_1235cc:
    // 0x1235cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1235ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1235d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1235d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1235d4: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1235d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1235d8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1235d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1235dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1235dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1235e0: 0x24624d80  addiu       $v0, $v1, 0x4D80
    ctx->pc = 0x1235e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19840));
    // 0x1235e4: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1235e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1235e8: 0x86320000  lh          $s2, 0x0($s1)
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1235ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1235ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1235f0: 0xa47210a6  sh          $s2, 0x10A6($v1)
    ctx->pc = 0x1235f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 18));
    // 0x1235f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1235f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1235f8: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1235f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1235fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1235fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123600: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x123600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x123604: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x123604u;
    {
        const bool branch_taken_0x123604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123604) {
            ctx->pc = 0x123B54u;
            return;
        }
    }
    ctx->pc = 0x12360Cu;
    // 0x12360c: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x12360cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x123610: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x123610u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123614: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123618: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x123618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x12361c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x12361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x123620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123624: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123628: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x123628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x12362c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x12362cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x123630: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x123630u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123634: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x123634u;
    SET_GPR_U32(ctx, 31, 0x12363Cu);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x123634u, 0x12363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12363Cu;
label_12363c:
    // 0x12363c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x12363cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x123640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x123640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123644: 0x0  nop
    ctx->pc = 0x123644u;
    // NOP
    // 0x123648: 0xe6a000d0  swc1        $f0, 0xD0($s5)
    ctx->pc = 0x123648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 208), bits); }
    // 0x12364c: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x12364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
    // 0x123650: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x123654: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x123654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x123658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12365c: 0x0  nop
    ctx->pc = 0x12365cu;
    // NOP
    // 0x123660: 0xe6a000d8  swc1        $f0, 0xD8($s5)
    ctx->pc = 0x123660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
    // 0x123664: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x123668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x123668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12366c: 0x0  nop
    ctx->pc = 0x12366cu;
    // NOP
    // 0x123670: 0xe6a000e4  swc1        $f0, 0xE4($s5)
    ctx->pc = 0x123670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
    // 0x123674: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123678: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x123678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12367c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x12367cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x123680: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x123680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x123684: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x123684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123688: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x123688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x12368c: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x12368cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x123690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123694: 0x0  nop
    ctx->pc = 0x123694u;
    // NOP
    // 0x123698: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x123698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x12369c: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x12369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1236a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1236a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1236a4: 0x0  nop
    ctx->pc = 0x1236a4u;
    // NOP
    // 0x1236a8: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x1236a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x1236ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1236acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1236b0: 0x0  nop
    ctx->pc = 0x1236b0u;
    // NOP
    // 0x1236b4: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x1236b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x1236b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1236b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1236bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1236bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1236c0: 0x0  nop
    ctx->pc = 0x1236c0u;
    // NOP
    // 0x1236c4: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x1236c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x1236c8: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x1236c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1236cc: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x1236ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1236d0: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1236d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1236d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1236d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1236d8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1236d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1236dc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1236e0: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123824u;
            return;
        }
    }
    ctx->pc = 0x1236E8u;
    // 0x1236e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1236ec: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1236f0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1236f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1236f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1236f8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1236f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1236fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1236fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x123700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x123700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123704: 0xc099794  jal         func_265E50
    ctx->pc = 0x123704u;
    SET_GPR_U32(ctx, 31, 0x12370Cu);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x123704u, 0x12370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12370Cu;
label_12370c:
    // 0x12370c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x123710: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x123710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x123714: 0x2443e650  addiu       $v1, $v0, -0x19B0
    ctx->pc = 0x123714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x123718: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12371c: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x12371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x123720: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123724: 0xac226828  sw          $v0, 0x6828($at)
    ctx->pc = 0x123724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3B6828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6828u, _value); } while (0);
    // 0x123728: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x123728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x12372c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12372cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x123730: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123734: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x123734u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x123738: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x123738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12373c: 0xc077e7c  jal         func_1DF9F0
    ctx->pc = 0x12373Cu;
    SET_GPR_U32(ctx, 31, 0x123744u);
    ctx->pc = 0x1DF9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9F0u, 0x12373Cu, 0x123744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123744u;
label_123744:
    // 0x123744: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123748: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12374c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123750: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x123750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x123754: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x123754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x123758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12375c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123760: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x123764: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x123764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x123768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12376c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123770: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x123774: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x123774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x123778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12377c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123780: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123780u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x123784: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x123784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x123788: 0x3c04c974  lui         $a0, 0xC974
    ctx->pc = 0x123788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51572 << 16));
    // 0x12378c: 0x34822400  ori         $v0, $a0, 0x2400
    ctx->pc = 0x12378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9216);
    // 0x123790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123794: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123798: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12379c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1237a0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1237a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1237a4: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x1237a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1237a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1237a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1237ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1237b0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1237b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1237b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1237b8: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x1237b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x1237bc: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x1237bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x1237c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1237c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1237c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1237c8: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1237c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1237cc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1237ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1237d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1237d4: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1237d8: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x1237d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1237dc: 0x34620080  ori         $v0, $v1, 0x80
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1237e0: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1237e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1237e4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1237e8: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1237ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1237f0: 0xc077e1c  jal         func_1DF870
    ctx->pc = 0x1237F0u;
    SET_GPR_U32(ctx, 31, 0x1237F8u);
    ctx->pc = 0x1DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF870u, 0x1237F0u, 0x1237F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237F8u;
label_1237f8:
    // 0x1237f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1237fc: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x1237fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x123800: 0xc075e9c  jal         func_1D7A70
    ctx->pc = 0x123800u;
    SET_GPR_U32(ctx, 31, 0x123808u);
    ctx->pc = 0x1D7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7A70u, 0x123800u, 0x123808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123808u;
label_123808:
    // 0x123808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12380c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x12380cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x123810: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123814: 0xac236830  sw          $v1, 0x6830($at)
    ctx->pc = 0x123814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B6830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6830u, _value); } while (0);
    // 0x123818: 0xa3808090  sb          $zero, -0x7F70($gp)
    ctx->pc = 0x123818u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934672), (uint8_t)GPR_U32(ctx, 0));
    // 0x12381c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123820: 0xac206838  sw          $zero, 0x6838($at)
    ctx->pc = 0x123820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B6838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6838u, _value); } while (0);
    ctx->pc = 0x123824u;
}
