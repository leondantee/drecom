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

// Function: entry_00172238
// Address: 0x172238 - 0x172288
void entry_00172238_0x172238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172238_0x172238");
#endif

    ctx->pc = 0x172238u;

    // 0x172238: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x172238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17223c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172244: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172248: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17224c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172258: 0x0  nop
    ctx->pc = 0x172258u;
    // NOP
    // 0x17225c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17225cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172260: 0x0  nop
    ctx->pc = 0x172260u;
    // NOP
    // 0x172264: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172264u;
    {
        const bool branch_taken_0x172264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172264) {
            ctx->pc = 0x172288u;
            return;
        }
    }
    ctx->pc = 0x17226Cu;
    // 0x17226c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172270: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172274: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17227c: 0x0  nop
    ctx->pc = 0x17227cu;
    // NOP
    // 0x172280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172284: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x172288u;
}
