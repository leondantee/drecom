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

// Function: entry_0033c7a0
// Address: 0x33c7a0 - 0x33c87c
void entry_0033c7a0_0x33c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c7a0_0x33c7a0");
#endif

    switch (ctx->pc) {
        case 0x33c7e0u: goto label_33c7e0;
        case 0x33c804u: goto label_33c804;
        default: break;
    }

    ctx->pc = 0x33c7a0u;

    // 0x33c7a0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c7a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c7a8: 0x1222006f  beq         $s1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x33C7A8u;
    {
        const bool branch_taken_0x33c7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c7a8) {
            ctx->pc = 0x33C968u;
            return;
        }
    }
    ctx->pc = 0x33C7B0u;
    // 0x33c7b0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33c7b4: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c7b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c7bc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c7c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c7c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c7c4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c7c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c7cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c7d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x33c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c7d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x33c7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c7d8: 0xc040c80  jal         func_103200
    ctx->pc = 0x33C7D8u;
    SET_GPR_U32(ctx, 31, 0x33C7E0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x33C7E0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33C7E0u) { return; }
    ctx->pc = 0x33C7E0u;
label_33c7e0:
    // 0x33c7e0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x33c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c7e4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x33c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c7e8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x33c7e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33c7ec: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x33c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c7f0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c7f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33c7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33c7f8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x33c7f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33c7fc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x33C7FCu;
    SET_GPR_U32(ctx, 31, 0x33C804u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x33C7FCu, 0x33C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C804u;
label_33c804:
    // 0x33c804: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x33c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x33c808: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x33c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c80c: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x33c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x33c810: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x33c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x33c814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c818: 0x0  nop
    ctx->pc = 0x33c818u;
    // NOP
    // 0x33c81c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33c81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c820: 0x0  nop
    ctx->pc = 0x33c820u;
    // NOP
    // 0x33c824: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x33C824u;
    {
        const bool branch_taken_0x33c824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c824) {
            ctx->pc = 0x33C968u;
            return;
        }
    }
    ctx->pc = 0x33C82Cu;
    // 0x33c82c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33c830: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c838: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c83c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c83cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c840: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c844: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c844u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c848: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33c848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33c84c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c854: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33c858: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x33c858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33c85c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c860: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33C860u;
    {
        const bool branch_taken_0x33c860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c860) {
            ctx->pc = 0x33C8DCu;
            return;
        }
    }
    ctx->pc = 0x33C868u;
    // 0x33c868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c86c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C86Cu;
    {
        const bool branch_taken_0x33c86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c86c) {
            ctx->pc = 0x33C87Cu;
            return;
        }
    }
    ctx->pc = 0x33C874u;
    // 0x33c874: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x33C874u;
    {
        const bool branch_taken_0x33c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c874) {
            ctx->pc = 0x33C938u;
            return;
        }
    }
    ctx->pc = 0x33C87Cu;
}
