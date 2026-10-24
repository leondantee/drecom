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

// Function: entry_00322550
// Address: 0x322550 - 0x322648
void entry_00322550_0x322550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322550_0x322550");
#endif

    switch (ctx->pc) {
        case 0x322580u: goto label_322580;
        case 0x3225f4u: goto label_3225f4;
        case 0x322600u: goto label_322600;
        case 0x322624u: goto label_322624;
        case 0x322638u: goto label_322638;
        case 0x322644u: goto label_322644;
        default: break;
    }

    ctx->pc = 0x322550u;

    // 0x322550: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x322550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x322554: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x322558: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x322558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x32255c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x32255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x322560: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x322560u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322564: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x322564u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x322568: 0x3c120800  lui         $s2, 0x800
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2048 << 16));
    // 0x32256c: 0x36420011  ori         $v0, $s2, 0x11
    ctx->pc = 0x32256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)17);
    // 0x322570: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x322570u;
    {
        const bool branch_taken_0x322570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x322570) {
            ctx->pc = 0x322648u;
            return;
        }
    }
    ctx->pc = 0x322578u;
    // 0x322578: 0xc06765c  jal         func_19D970
    ctx->pc = 0x322578u;
    SET_GPR_U32(ctx, 31, 0x322580u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x322578u, 0x322580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322580u;
label_322580:
    // 0x322580: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x322580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x322584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322588: 0x0  nop
    ctx->pc = 0x322588u;
    // NOP
    // 0x32258c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32258cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322590: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x322590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x322594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322598: 0x0  nop
    ctx->pc = 0x322598u;
    // NOP
    // 0x32259c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32259cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3225a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3225a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3225a4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3225a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3225a8: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x3225a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3225ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3225acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3225b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225b4: 0x0  nop
    ctx->pc = 0x3225b4u;
    // NOP
    // 0x3225b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3225b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3225bc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3225bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3225c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225c4: 0x0  nop
    ctx->pc = 0x3225c4u;
    // NOP
    // 0x3225c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3225c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3225cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3225ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3225d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225d4: 0x0  nop
    ctx->pc = 0x3225d4u;
    // NOP
    // 0x3225d8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3225d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3225dc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x3225dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x3225e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225e4: 0x0  nop
    ctx->pc = 0x3225e4u;
    // NOP
    // 0x3225e8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3225e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3225ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x3225ECu;
    SET_GPR_U32(ctx, 31, 0x3225F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3225ECu, 0x3225F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225F4u;
label_3225f4:
    // 0x3225f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3225f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3225f8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x3225F8u;
    SET_GPR_U32(ctx, 31, 0x322600u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x3225F8u, 0x322600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322600u;
label_322600:
    // 0x322600: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x322600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322604: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x322604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x322608: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x322608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x32260c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322610: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x322610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x322614: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x322614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x322618: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x322618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32261c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x32261Cu;
    SET_GPR_U32(ctx, 31, 0x322624u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x32261Cu, 0x322624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322624u;
label_322624:
    // 0x322624: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x322624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322628: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x322628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x32262c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x32262cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x322630: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x322630u;
    SET_GPR_U32(ctx, 31, 0x322638u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x322630u, 0x322638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322638u;
label_322638:
    // 0x322638: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x322638u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32263c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32263Cu;
    SET_GPR_U32(ctx, 31, 0x322644u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32263Cu, 0x322644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322644u;
label_322644:
    // 0x322644: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x322644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->pc = 0x322648u;
}
