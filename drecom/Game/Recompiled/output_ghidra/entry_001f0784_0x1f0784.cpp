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

// Function: entry_001f0784
// Address: 0x1f0784 - 0x1f0848
void entry_001f0784_0x1f0784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0784_0x1f0784");
#endif

    switch (ctx->pc) {
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0840u: goto label_1f0840;
        default: break;
    }

    ctx->pc = 0x1f0784u;

    // 0x1f0784: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0788: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1f0788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f078c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0790: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f0790u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0794: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F0794u;
    SET_GPR_U32(ctx, 31, 0x1F079Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F0794u, 0x1F079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F079Cu;
label_1f079c:
    // 0x1f079c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07a0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f07a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f07a4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f07a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f07ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f07acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f07b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F07B0u;
    SET_GPR_U32(ctx, 31, 0x1F07B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F07B0u, 0x1F07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07B8u;
label_1f07b8:
    // 0x1f07b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f07b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f07bc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F07C0u;
    SET_GPR_U32(ctx, 31, 0x1F07C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F07C0u, 0x1F07C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07C8u;
label_1f07c8:
    // 0x1f07c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f07c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f07cc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f07d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f07d4: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F07D4u;
    {
        const bool branch_taken_0x1f07d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07d4) {
            ctx->pc = 0x1F08FCu;
            return;
        }
    }
    ctx->pc = 0x1F07DCu;
    // 0x1f07dc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07e0: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x1f07e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f07e4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f07e8: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f07e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f07ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07f0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f07f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f07f4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07f8: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1f07f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1f07fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f07fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0800: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f0800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f0804: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0804u;
    {
        const bool branch_taken_0x1f0804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f0804) {
            ctx->pc = 0x1F0848u;
            return;
        }
    }
    ctx->pc = 0x1F080Cu;
    // 0x1f080c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F080Cu;
    SET_GPR_U32(ctx, 31, 0x1F0814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F080Cu, 0x1F0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0814u;
label_1f0814:
    // 0x1f0814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f081c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x1f081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x1f0820: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x1f0820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x1f0824: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0828: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f082c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f082cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f0830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f0830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0834: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f0834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f0838: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F0838u;
    SET_GPR_U32(ctx, 31, 0x1F0840u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F0838u, 0x1F0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0840u;
label_1f0840:
    // 0x1f0840: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1F0840u;
    {
        const bool branch_taken_0x1f0840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0840) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0848u;
}
