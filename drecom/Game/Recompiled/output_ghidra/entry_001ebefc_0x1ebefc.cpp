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

// Function: entry_001ebefc
// Address: 0x1ebefc - 0x1ebf40
void entry_001ebefc_0x1ebefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebefc_0x1ebefc");
#endif

    ctx->pc = 0x1ebefcu;

    // 0x1ebefc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ebf04: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1ebf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf08: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1ebf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1ebf0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebf0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf10: 0x0  nop
    ctx->pc = 0x1ebf10u;
    // NOP
    // 0x1ebf14: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ebf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebf18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ebf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf1c: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1ebf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebf20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebf20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebf24: 0x0  nop
    ctx->pc = 0x1ebf24u;
    // NOP
    // 0x1ebf28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBF28u;
    {
        const bool branch_taken_0x1ebf28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebf28) {
            ctx->pc = 0x1EBF40u;
            return;
        }
    }
    ctx->pc = 0x1EBF30u;
    // 0x1ebf30: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ebf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1ebf34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf3c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ebf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x1ebf40u;
}
