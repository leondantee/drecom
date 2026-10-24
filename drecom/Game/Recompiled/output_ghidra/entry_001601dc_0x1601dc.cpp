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

// Function: entry_001601dc
// Address: 0x1601dc - 0x16029c
void entry_001601dc_0x1601dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001601dc_0x1601dc");
#endif

    switch (ctx->pc) {
        case 0x16024cu: goto label_16024c;
        case 0x16027cu: goto label_16027c;
        default: break;
    }

    ctx->pc = 0x1601dcu;

    // 0x1601dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1601e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1601e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1601e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1601e8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1601ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1601ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1601f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1601f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601f4: 0x0  nop
    ctx->pc = 0x1601f4u;
    // NOP
    // 0x1601f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1601f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1601fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1601fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160200: 0x0  nop
    ctx->pc = 0x160200u;
    // NOP
    // 0x160204: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160208: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x16020c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16020cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160210: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x160210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x160214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160218: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x160218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16021c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160220: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x160220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160224: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x160224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x160228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16022c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160230: 0x0  nop
    ctx->pc = 0x160230u;
    // NOP
    // 0x160234: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160238: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16023c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160240: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160244: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x160244u;
    SET_GPR_U32(ctx, 31, 0x16024Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16024Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16024Cu) { return; }
    ctx->pc = 0x16024Cu;
label_16024c:
    // 0x16024c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x160250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160254: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16025c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x16025cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160260: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x160260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160264: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160268: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16026c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16026cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160270: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x160270u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160274: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160274u;
    SET_GPR_U32(ctx, 31, 0x16027Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160274u, 0x16027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16027Cu;
label_16027c:
    // 0x16027c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x16027cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x160280: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160280u;
    {
        const bool branch_taken_0x160280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160280) {
            ctx->pc = 0x16029Cu;
            return;
        }
    }
    ctx->pc = 0x160288u;
    // 0x160288: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16028c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160294: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x160294u;
    {
        const bool branch_taken_0x160294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160294) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x16029Cu;
}
