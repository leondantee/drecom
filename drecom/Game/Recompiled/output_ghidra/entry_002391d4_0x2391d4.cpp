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

// Function: entry_002391d4
// Address: 0x2391d4 - 0x23922c
void entry_002391d4_0x2391d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002391d4_0x2391d4");
#endif

    ctx->pc = 0x2391d4u;

    // 0x2391d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2391d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2391dc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2391dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2391e0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2391e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2391e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2391e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2391e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391ec: 0x0  nop
    ctx->pc = 0x2391ecu;
    // NOP
    // 0x2391f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2391f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2391f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2391f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2391f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2391f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2391fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2391fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239200: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x239204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239208: 0x0  nop
    ctx->pc = 0x239208u;
    // NOP
    // 0x23920c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23920cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239210: 0x0  nop
    ctx->pc = 0x239210u;
    // NOP
    // 0x239214: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x239214u;
    {
        const bool branch_taken_0x239214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239214) {
            ctx->pc = 0x23922Cu;
            return;
        }
    }
    ctx->pc = 0x23921Cu;
    // 0x23921c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23921cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239220: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239224: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239228: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x239228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23922cu;
}
