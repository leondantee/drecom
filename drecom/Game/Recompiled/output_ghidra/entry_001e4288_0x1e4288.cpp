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

// Function: entry_001e4288
// Address: 0x1e4288 - 0x1e4310
void entry_001e4288_0x1e4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4288_0x1e4288");
#endif

    switch (ctx->pc) {
        case 0x1e429cu: goto label_1e429c;
        default: break;
    }

    ctx->pc = 0x1e4288u;

    // 0x1e4288: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e4288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e428c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e428cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4290: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1e4290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e4294: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E4294u;
    SET_GPR_U32(ctx, 31, 0x1E429Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E4294u, 0x1E429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E429Cu;
label_1e429c:
    // 0x1e429c: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42a0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e42a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e42a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e42a8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e42a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e42ac: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42b0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e42b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e42b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e42b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e42b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e42b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e42bc: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e42bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42c0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e42c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e42c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e42c8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e42c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e42cc: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e42ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e42d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e42d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e42d8: 0x0  nop
    ctx->pc = 0x1e42d8u;
    // NOP
    // 0x1e42dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e42dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e42e0: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e42e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e42e4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e42e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e42ec: 0x0  nop
    ctx->pc = 0x1e42ecu;
    // NOP
    // 0x1e42f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e42f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e42f4: 0x0  nop
    ctx->pc = 0x1e42f4u;
    // NOP
    // 0x1e42f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E42F8u;
    {
        const bool branch_taken_0x1e42f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e42f8) {
            ctx->pc = 0x1E4310u;
            return;
        }
    }
    ctx->pc = 0x1E4300u;
    // 0x1e4300: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e4304: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e4304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e4308: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e4308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e430c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e430cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1e4310u;
}
