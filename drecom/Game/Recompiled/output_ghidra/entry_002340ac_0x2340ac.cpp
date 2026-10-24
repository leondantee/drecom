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

// Function: entry_002340ac
// Address: 0x2340ac - 0x2340e8
void entry_002340ac_0x2340ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002340ac_0x2340ac");
#endif

    ctx->pc = 0x2340acu;

    // 0x2340ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2340acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2340b0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2340b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2340b4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2340b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2340b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2340b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2340bc: 0x0  nop
    ctx->pc = 0x2340bcu;
    // NOP
    // 0x2340c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2340C0u;
    {
        const bool branch_taken_0x2340c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2340c0) {
            ctx->pc = 0x2340E8u;
            return;
        }
    }
    ctx->pc = 0x2340C8u;
    // 0x2340c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2340c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2340cc: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2340ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2340d0: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x2340d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
    // 0x2340d4: 0x34e3cccd  ori         $v1, $a3, 0xCCCD
    ctx->pc = 0x2340d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2340d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2340d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2340dc: 0x0  nop
    ctx->pc = 0x2340dcu;
    // NOP
    // 0x2340e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2340e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2340e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2340e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    ctx->pc = 0x2340e8u;
}
