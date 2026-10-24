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

// Function: entry_0023a0d0
// Address: 0x23a0d0 - 0x23a128
void entry_0023a0d0_0x23a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a0d0_0x23a0d0");
#endif

    ctx->pc = 0x23a0d0u;

    // 0x23a0d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a0d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a0d8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a0dc: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x23a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x23a0e0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a0e8: 0x0  nop
    ctx->pc = 0x23a0e8u;
    // NOP
    // 0x23a0ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23a0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a0f0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a0f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a0f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a0fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a104: 0x0  nop
    ctx->pc = 0x23a104u;
    // NOP
    // 0x23a108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a10c: 0x0  nop
    ctx->pc = 0x23a10cu;
    // NOP
    // 0x23a110: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23A110u;
    {
        const bool branch_taken_0x23a110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a110) {
            ctx->pc = 0x23A128u;
            return;
        }
    }
    ctx->pc = 0x23A118u;
    // 0x23a118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a11c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a120: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a124: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23a128u;
}
