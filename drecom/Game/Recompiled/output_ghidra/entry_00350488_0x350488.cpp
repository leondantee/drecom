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

// Function: entry_00350488
// Address: 0x350488 - 0x350500
void entry_00350488_0x350488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350488_0x350488");
#endif

    ctx->pc = 0x350488u;

    // 0x350488: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35048c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350490: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x350490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350494: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350498: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35049c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35049cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3504a0: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x3504a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x3504a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3504a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3504ac: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3504acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3504b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504b4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3504b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3504b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3504b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3504bc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x3504bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x3504c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504c4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3504c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3504c8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3504c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3504cc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3504ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3504d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3504d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3504d4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3504d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3504d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3504d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3504dc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3504dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3504e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504e4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3504e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3504e8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3504ec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3504ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3504f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3504f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3504f4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3504f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3504f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3504f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3504fc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3504fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x350500u;
}
