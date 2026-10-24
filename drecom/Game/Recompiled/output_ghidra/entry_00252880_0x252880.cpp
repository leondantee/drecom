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

// Function: entry_00252880
// Address: 0x252880 - 0x2528d8
void entry_00252880_0x252880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252880_0x252880");
#endif

    switch (ctx->pc) {
        case 0x252894u: goto label_252894;
        default: break;
    }

    ctx->pc = 0x252880u;

    // 0x252880: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252884: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x252884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252888: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x252888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25288c: 0xc040c60  jal         func_103180
    ctx->pc = 0x25288Cu;
    SET_GPR_U32(ctx, 31, 0x252894u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x252894u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252894u) { return; }
    ctx->pc = 0x252894u;
label_252894:
    // 0x252894: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x252894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252898: 0x3c0344c7  lui         $v1, 0x44C7
    ctx->pc = 0x252898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17607 << 16));
    // 0x25289c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25289cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528a0: 0x0  nop
    ctx->pc = 0x2528a0u;
    // NOP
    // 0x2528a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2528a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2528a8: 0x0  nop
    ctx->pc = 0x2528a8u;
    // NOP
    // 0x2528ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2528ACu;
    {
        const bool branch_taken_0x2528ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2528ac) {
            ctx->pc = 0x2528D8u;
            return;
        }
    }
    ctx->pc = 0x2528B4u;
    // 0x2528b4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2528b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2528b8: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x2528b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x2528bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2528bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2528c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2528c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528c4: 0x0  nop
    ctx->pc = 0x2528c4u;
    // NOP
    // 0x2528c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2528c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2528cc: 0x0  nop
    ctx->pc = 0x2528ccu;
    // NOP
    // 0x2528d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2528D0u;
    {
        const bool branch_taken_0x2528d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2528d0) {
            ctx->pc = 0x2528E0u;
            return;
        }
    }
    ctx->pc = 0x2528D8u;
}
