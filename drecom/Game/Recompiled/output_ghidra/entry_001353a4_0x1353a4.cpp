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

// Function: entry_001353a4
// Address: 0x1353a4 - 0x1353e8
void entry_001353a4_0x1353a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001353a4_0x1353a4");
#endif

    ctx->pc = 0x1353a4u;

    // 0x1353a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1353a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1353a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1353ac: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1353acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1353b0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1353b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1353b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1353b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1353b8: 0x0  nop
    ctx->pc = 0x1353b8u;
    // NOP
    // 0x1353bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1353bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1353c0: 0x0  nop
    ctx->pc = 0x1353c0u;
    // NOP
    // 0x1353c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1353C4u;
    {
        const bool branch_taken_0x1353c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1353c4) {
            ctx->pc = 0x1353E8u;
            return;
        }
    }
    ctx->pc = 0x1353CCu;
    // 0x1353cc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1353d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1353d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1353d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1353d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1353d8: 0x0  nop
    ctx->pc = 0x1353d8u;
    // NOP
    // 0x1353dc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1353dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1353e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1353E0u;
    {
        const bool branch_taken_0x1353e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353e0) {
            ctx->pc = 0x1353F4u;
            return;
        }
    }
    ctx->pc = 0x1353E8u;
}
