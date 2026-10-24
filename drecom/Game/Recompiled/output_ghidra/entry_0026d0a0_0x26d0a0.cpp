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

// Function: entry_0026d0a0
// Address: 0x26d0a0 - 0x26d124
void entry_0026d0a0_0x26d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d0a0_0x26d0a0");
#endif

    ctx->pc = 0x26d0a0u;

    // 0x26d0a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26d0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d0a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26d0a8: 0x3042000a  andi        $v0, $v0, 0xA
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10);
    // 0x26d0ac: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x26D0ACu;
    {
        const bool branch_taken_0x26d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d0ac) {
            ctx->pc = 0x26D194u;
            return;
        }
    }
    ctx->pc = 0x26D0B4u;
    // 0x26d0b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d0b8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d0c0: 0x0  nop
    ctx->pc = 0x26d0c0u;
    // NOP
    // 0x26d0c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d0c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d0c8: 0x0  nop
    ctx->pc = 0x26d0c8u;
    // NOP
    // 0x26d0cc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x26D0CCu;
    {
        const bool branch_taken_0x26d0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d0cc) {
            ctx->pc = 0x26D138u;
            return;
        }
    }
    ctx->pc = 0x26D0D4u;
    // 0x26d0d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d0d8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d0dc: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26d0e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d0e8: 0x0  nop
    ctx->pc = 0x26d0e8u;
    // NOP
    // 0x26d0ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d0f0: 0x0  nop
    ctx->pc = 0x26d0f0u;
    // NOP
    // 0x26d0f4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x26D0F4u;
    {
        const bool branch_taken_0x26d0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d0f4) {
            ctx->pc = 0x26D124u;
            return;
        }
    }
    ctx->pc = 0x26D0FCu;
    // 0x26d0fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d100: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d104: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26d108: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26d10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d110: 0x0  nop
    ctx->pc = 0x26d110u;
    // NOP
    // 0x26d114: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26d118: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x26d11c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26D11Cu;
    {
        const bool branch_taken_0x26d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d11c) {
            ctx->pc = 0x26D194u;
            return;
        }
    }
    ctx->pc = 0x26D124u;
}
