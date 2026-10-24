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

// Function: entry_001f4578
// Address: 0x1f4578 - 0x1f4614
void entry_001f4578_0x1f4578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4578_0x1f4578");
#endif

    ctx->pc = 0x1f4578u;

    // 0x1f4578: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f457c: 0x8c230a94  lw          $v1, 0xA94($at)
    ctx->pc = 0x1f457cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f4580: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1f4580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1f4584: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1f4584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1f4588: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F4588u;
    {
        const bool branch_taken_0x1f4588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f4588) {
            ctx->pc = 0x1F4614u;
            return;
        }
    }
    ctx->pc = 0x1F4590u;
    // 0x1f4590: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4594: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4598: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f459c: 0x8c220a94  lw          $v0, 0xA94($at)
    ctx->pc = 0x1f459cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f45a0: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x1f45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45a4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f45a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f45ac: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x1f45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x1f45b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f45b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f45b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f45b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f45bc: 0x8c220a94  lw          $v0, 0xA94($at)
    ctx->pc = 0x1f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f45c0: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1f45c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45c4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f45c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f45cc: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x1f45ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x1f45d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f45d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f45d8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f45dc: 0x8c220a94  lw          $v0, 0xA94($at)
    ctx->pc = 0x1f45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f45e0: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45e4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f45e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f45e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f45ec: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f45ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f45f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f45f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f45f8: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45fc: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1f45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x1f4600: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f4600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1f4604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4608: 0x0  nop
    ctx->pc = 0x1f4608u;
    // NOP
    // 0x1f460c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f4610: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f4610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1f4614u;
}
