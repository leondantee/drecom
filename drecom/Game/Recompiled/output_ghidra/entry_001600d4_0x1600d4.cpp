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

// Function: entry_001600d4
// Address: 0x1600d4 - 0x160138
void entry_001600d4_0x1600d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001600d4_0x1600d4");
#endif

    ctx->pc = 0x1600d4u;

    // 0x1600d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1600d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1600dc: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1600dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1600e0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1600e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1600e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1600e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1600e8: 0x0  nop
    ctx->pc = 0x1600e8u;
    // NOP
    // 0x1600ec: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1600ECu;
    {
        const bool branch_taken_0x1600ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1600ec) {
            ctx->pc = 0x160138u;
            return;
        }
    }
    ctx->pc = 0x1600F4u;
    // 0x1600f4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1600f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1600f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1600f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1600fc: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1600fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160100: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x160100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x160104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160108: 0x0  nop
    ctx->pc = 0x160108u;
    // NOP
    // 0x16010c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x16010cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x160110: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160114: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x160114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160118: 0x0  nop
    ctx->pc = 0x160118u;
    // NOP
    // 0x16011c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x16011Cu;
    {
        const bool branch_taken_0x16011c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16011c) {
            ctx->pc = 0x160178u;
            return;
        }
    }
    ctx->pc = 0x160124u;
    // 0x160124: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160128: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16012c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16012cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160130: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x160130u;
    {
        const bool branch_taken_0x160130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160130) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x160138u;
}
