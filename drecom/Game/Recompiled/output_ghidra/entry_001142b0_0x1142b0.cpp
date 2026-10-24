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

// Function: entry_001142b0
// Address: 0x1142b0 - 0x114334
void entry_001142b0_0x1142b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001142b0_0x1142b0");
#endif

    ctx->pc = 0x1142b0u;

    // 0x1142b0: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x1142b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x1142b4: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x1142b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x1142b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1142b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1142bc: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x1142c0: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x1142c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x1142c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1142c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1142c8: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x1142c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x1142cc: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x1142ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x1142d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1142d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1142d4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1142d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1142d8: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x1142d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x1142dc: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1142dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1142e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1142e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1142e4: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x1142e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x1142e8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1142e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1142ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1142ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1142f0: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x1142f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1142f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1142f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1142f8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1142f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1142fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1142fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x114300: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x114300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x114304: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x114304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x114308: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x114308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11430c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11430Cu;
    {
        const bool branch_taken_0x11430c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x114310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11430Cu;
        // 0x114310: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11430c) {
            ctx->pc = 0x114334u;
            return;
        }
    }
    ctx->pc = 0x114314u;
    // 0x114314: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x114314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x114318: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x114318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x11431c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x11431cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x114320: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114324: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114328: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x114328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11432c: 0x3e00008  jr          $ra
    ctx->pc = 0x11432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11432Cu;
        // 0x114330: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114334u;
}
