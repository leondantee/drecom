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

// Function: entry_0031d2f4
// Address: 0x31d2f4 - 0x31d374
void entry_0031d2f4_0x31d2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d2f4_0x31d2f4");
#endif

    ctx->pc = 0x31d2f4u;

    // 0x31d2f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d2f8: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d2fc: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d300: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31d300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d308: 0x0  nop
    ctx->pc = 0x31d308u;
    // NOP
    // 0x31d30c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31d30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31d310: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
    // 0x31d314: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d318: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31d31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d320: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x31d324: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d328: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d32c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d334: 0x0  nop
    ctx->pc = 0x31d334u;
    // NOP
    // 0x31d338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31d338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d33c: 0x0  nop
    ctx->pc = 0x31d33cu;
    // NOP
    // 0x31d340: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x31D340u;
    {
        const bool branch_taken_0x31d340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d340) {
            ctx->pc = 0x31D414u;
            return;
        }
    }
    ctx->pc = 0x31D348u;
    // 0x31d348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d34c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d350: 0xac4312ac  sw          $v1, 0x12AC($v0)
    ctx->pc = 0x31d350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 3));
    // 0x31d354: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d358: 0xac4012b0  sw          $zero, 0x12B0($v0)
    ctx->pc = 0x31d358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 0));
    // 0x31d35c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d364: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d368: 0xe44012dc  swc1        $f0, 0x12DC($v0)
    ctx->pc = 0x31d368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4828), bits); }
    // 0x31d36c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31D36Cu;
    {
        const bool branch_taken_0x31d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d36c) {
            ctx->pc = 0x31D414u;
            return;
        }
    }
    ctx->pc = 0x31D374u;
}
