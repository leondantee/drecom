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

// Function: entry_0031c9b0
// Address: 0x31c9b0 - 0x31ca30
void entry_0031c9b0_0x31c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c9b0_0x31c9b0");
#endif

    ctx->pc = 0x31c9b0u;

    // 0x31c9b0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c9b4: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31c9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c9b8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31c9bc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31c9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c9c4: 0x0  nop
    ctx->pc = 0x31c9c4u;
    // NOP
    // 0x31c9c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31c9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31c9cc: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31c9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
    // 0x31c9d0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c9d4: 0x8c8512b0  lw          $a1, 0x12B0($a0)
    ctx->pc = 0x31c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4784)));
    // 0x31c9d8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x31c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31c9dc: 0xac8612b0  sw          $a2, 0x12B0($a0)
    ctx->pc = 0x31c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 6));
    // 0x31c9e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c9e4: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c9e8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x31c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x31c9ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31c9ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c9f0: 0x0  nop
    ctx->pc = 0x31c9f0u;
    // NOP
    // 0x31c9f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31c9f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c9f8: 0x0  nop
    ctx->pc = 0x31c9f8u;
    // NOP
    // 0x31c9fc: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x31C9FCu;
    {
        const bool branch_taken_0x31c9fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c9fc) {
            ctx->pc = 0x31CAD0u;
            return;
        }
    }
    ctx->pc = 0x31CA04u;
    // 0x31ca04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ca08: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca0c: 0xac4612ac  sw          $a2, 0x12AC($v0)
    ctx->pc = 0x31ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 6));
    // 0x31ca10: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca14: 0xac4012b0  sw          $zero, 0x12B0($v0)
    ctx->pc = 0x31ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 0));
    // 0x31ca18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31ca1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ca1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ca20: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca24: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
    // 0x31ca28: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31CA28u;
    {
        const bool branch_taken_0x31ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca28) {
            ctx->pc = 0x31CAD0u;
            return;
        }
    }
    ctx->pc = 0x31CA30u;
}
