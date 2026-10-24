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

// Function: entry_00298160
// Address: 0x298160 - 0x2981f0
void entry_00298160_0x298160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298160_0x298160");
#endif

    ctx->pc = 0x298160u;

    // 0x298160: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298164: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x298164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x298168: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x298168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29816c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298174: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x298174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298178: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29817c: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x29817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x298180: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x298180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x298184: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x298184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29818c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298190: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x298190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x298194: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x298194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x298198: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29819c: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x29819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x2981a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2981a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2981a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2981a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2981ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2981acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2981b0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2981b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2981b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2981b8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2981b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2981bc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2981bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2981c0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2981c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2981c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981c8: 0x0  nop
    ctx->pc = 0x2981c8u;
    // NOP
    // 0x2981cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2981ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2981d0: 0x0  nop
    ctx->pc = 0x2981d0u;
    // NOP
    // 0x2981d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2981D4u;
    {
        const bool branch_taken_0x2981d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2981d4) {
            ctx->pc = 0x2981F0u;
            return;
        }
    }
    ctx->pc = 0x2981DCu;
    // 0x2981dc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2981dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2981e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981e4: 0x0  nop
    ctx->pc = 0x2981e4u;
    // NOP
    // 0x2981e8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2981e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2981ec: 0x0  nop
    ctx->pc = 0x2981ecu;
    // NOP
    ctx->pc = 0x2981f0u;
}
