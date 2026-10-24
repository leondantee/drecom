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

// Function: entry_0033d7b0
// Address: 0x33d7b0 - 0x33d88c
void entry_0033d7b0_0x33d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d7b0_0x33d7b0");
#endif

    switch (ctx->pc) {
        case 0x33d7dcu: goto label_33d7dc;
        case 0x33d7fcu: goto label_33d7fc;
        default: break;
    }

    ctx->pc = 0x33d7b0u;

    // 0x33d7b0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x33d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d7b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33d7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33d7b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x33d7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33d7bc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d7c0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33d7c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33d7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33d7c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x33d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d7cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33d7d0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x33d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33d7d4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x33D7D4u;
    SET_GPR_U32(ctx, 31, 0x33D7DCu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x33D7D4u, 0x33D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7DCu;
label_33d7dc:
    // 0x33d7dc: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x33d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x33d7e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d7e4: 0x0  nop
    ctx->pc = 0x33d7e4u;
    // NOP
    // 0x33d7e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33d7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d7ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x33d7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33d7f0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x33d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33d7f4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x33D7F4u;
    SET_GPR_U32(ctx, 31, 0x33D7FCu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x33D7F4u, 0x33D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7FCu;
label_33d7fc:
    // 0x33d7fc: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x33d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x33d800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d804: 0x0  nop
    ctx->pc = 0x33d804u;
    // NOP
    // 0x33d808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33d808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d80c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33d810: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x33d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d814: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33d814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33d818: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x33d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33d81c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33d820: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x33d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d824: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x33d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x33d828: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33d82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d830: 0x0  nop
    ctx->pc = 0x33d830u;
    // NOP
    // 0x33d834: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33d834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d838: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x33d838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33d83c: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x33d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x33d840: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x33d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x33d844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d848: 0x0  nop
    ctx->pc = 0x33d848u;
    // NOP
    // 0x33d84c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x33d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33d850: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x33d850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x33d854: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x33d854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33d858: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33d858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d85c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33d860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33d860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33d864: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x33d864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x33d868: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33d868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33d86c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x33d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x33d870: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x33d870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x33d874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33d878: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33d878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d87c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x33d87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33d880: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x33d880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33d884: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x33D884u;
    SET_GPR_U32(ctx, 31, 0x33D88Cu);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x33D884u, 0x33D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D88Cu;
}
