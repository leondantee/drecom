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

// Function: entry_002da470
// Address: 0x2da470 - 0x2da544
void entry_002da470_0x2da470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da470_0x2da470");
#endif

    switch (ctx->pc) {
        case 0x2da484u: goto label_2da484;
        case 0x2da494u: goto label_2da494;
        case 0x2da50cu: goto label_2da50c;
        default: break;
    }

    ctx->pc = 0x2da470u;

    // 0x2da470: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2da470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da474: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2da474u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2da478: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2da478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2da47c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x2DA47Cu;
    SET_GPR_U32(ctx, 31, 0x2DA484u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x2DA47Cu, 0x2DA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA484u;
label_2da484:
    // 0x2da484: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2da484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2da488: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x2da488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da48c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x2DA48Cu;
    SET_GPR_U32(ctx, 31, 0x2DA494u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x2DA48Cu, 0x2DA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA494u;
label_2da494:
    // 0x2da494: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da49c: 0x0  nop
    ctx->pc = 0x2da49cu;
    // NOP
    // 0x2da4a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da4a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da4a4: 0x0  nop
    ctx->pc = 0x2da4a4u;
    // NOP
    // 0x2da4a8: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x2DA4A8u;
    {
        const bool branch_taken_0x2da4a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da4a8) {
            ctx->pc = 0x2DA544u;
            return;
        }
    }
    ctx->pc = 0x2DA4B0u;
    // 0x2da4b0: 0x3c02423e  lui         $v0, 0x423E
    ctx->pc = 0x2da4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16958 << 16));
    // 0x2da4b4: 0x3442fc66  ori         $v0, $v0, 0xFC66
    ctx->pc = 0x2da4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64614);
    // 0x2da4b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da4bc: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2da4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da4c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2da4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2da4c4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2da4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2da4c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4cc: 0x0  nop
    ctx->pc = 0x2da4ccu;
    // NOP
    // 0x2da4d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2da4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2da4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4d8: 0x0  nop
    ctx->pc = 0x2da4d8u;
    // NOP
    // 0x2da4dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2da4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2da4e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2da4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4e8: 0x0  nop
    ctx->pc = 0x2da4e8u;
    // NOP
    // 0x2da4ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2da4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2da4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2da4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4f8: 0x0  nop
    ctx->pc = 0x2da4f8u;
    // NOP
    // 0x2da4fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2da4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2da500: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2da500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da504: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DA504u;
    SET_GPR_U32(ctx, 31, 0x2DA50Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DA504u, 0x2DA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA50Cu;
label_2da50c:
    // 0x2da50c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2da50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2da510: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2da514: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2da514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2da518: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x2da51c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2da51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da520: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2da520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2da524: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2da524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2da528: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2da528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2da52c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2da52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da530: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2da530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da534: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2da534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da538: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2da538u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2da53c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DA53Cu;
    SET_GPR_U32(ctx, 31, 0x2DA544u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DA53Cu, 0x2DA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA544u;
}
