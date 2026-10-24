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

// Function: entry_00113810
// Address: 0x113810 - 0x1138c0
void entry_00113810_0x113810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113810_0x113810");
#endif

    ctx->pc = 0x113810u;

    // 0x113810: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x113810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x113814: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x113814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x113818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11381c: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x11381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x113820: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x113820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x113824: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113828: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x113828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x11382c: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x11382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x113830: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x113830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x113834: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x113834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x113838: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x113838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x11383c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11383cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x113840: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x113840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x113844: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x113844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x113848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11384c: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x11384cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x113850: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x113850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x113854: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x113854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x113858: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x113858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11385c: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x113860: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x113860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x113864: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x113864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x113868: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x113868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11386c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11386cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x113870: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x113870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x113874: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x113874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x113878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x113878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11387c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11387cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x113880: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x113880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x113884: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x113884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x113888: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x113888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11388c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11388Cu;
    {
        const bool branch_taken_0x11388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11388Cu;
        // 0x113890: 0x46003042  mul.s       $f1, $f6, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11388c) {
            ctx->pc = 0x1138C0u;
            return;
        }
    }
    ctx->pc = 0x113894u;
    // 0x113894: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x113894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x113898: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x113898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11389c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11389cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1138a0: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x1138a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1138a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1138a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1138a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1138a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1138ac: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1138acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1138b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1138b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1138b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1138b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1138b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1138B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1138BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138B8u;
        // 0x1138bc: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1138B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1138C0u;
}
