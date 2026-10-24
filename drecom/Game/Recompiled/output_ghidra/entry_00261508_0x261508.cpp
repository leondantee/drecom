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

// Function: entry_00261508
// Address: 0x261508 - 0x261598
void entry_00261508_0x261508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261508_0x261508");
#endif

    ctx->pc = 0x261508u;

    // 0x261508: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26150c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261510: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261518: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26151c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261524: 0x0  nop
    ctx->pc = 0x261524u;
    // NOP
    // 0x261528: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x261528u;
    {
        const bool branch_taken_0x261528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261528) {
            ctx->pc = 0x261598u;
            return;
        }
    }
    ctx->pc = 0x261530u;
    // 0x261530: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261534: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261538: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26153c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261540: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261544: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26154c: 0x0  nop
    ctx->pc = 0x26154cu;
    // NOP
    // 0x261550: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x261550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261554: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261558: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26155c: 0x0  nop
    ctx->pc = 0x26155cu;
    // NOP
    // 0x261560: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x261560u;
    {
        const bool branch_taken_0x261560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261560) {
            ctx->pc = 0x2615F8u;
            return;
        }
    }
    ctx->pc = 0x261568u;
    // 0x261568: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26156c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26156cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261570: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261578: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26157c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x26157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261584: 0x0  nop
    ctx->pc = 0x261584u;
    // NOP
    // 0x261588: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x261588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26158c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x26158cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261590: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x261590u;
    {
        const bool branch_taken_0x261590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261590) {
            ctx->pc = 0x2615F8u;
            return;
        }
    }
    ctx->pc = 0x261598u;
}
