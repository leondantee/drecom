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

// Function: entry_00245378
// Address: 0x245378 - 0x2453d0
void entry_00245378_0x245378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245378_0x245378");
#endif

    ctx->pc = 0x245378u;

    // 0x245378: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24537c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x24537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245380: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245384: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x245384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x245388: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24538c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24538cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245390: 0x0  nop
    ctx->pc = 0x245390u;
    // NOP
    // 0x245394: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245398: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24539c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2453a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2453a4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2453a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2453a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2453a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2453ac: 0x0  nop
    ctx->pc = 0x2453acu;
    // NOP
    // 0x2453b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2453b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2453b4: 0x0  nop
    ctx->pc = 0x2453b4u;
    // NOP
    // 0x2453b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2453B8u;
    {
        const bool branch_taken_0x2453b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2453b8) {
            ctx->pc = 0x2453D0u;
            return;
        }
    }
    ctx->pc = 0x2453C0u;
    // 0x2453c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2453c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2453c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2453c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2453c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2453c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2453cc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2453ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x2453d0u;
}
