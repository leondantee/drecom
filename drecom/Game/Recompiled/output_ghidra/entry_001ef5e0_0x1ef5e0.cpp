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

// Function: entry_001ef5e0
// Address: 0x1ef5e0 - 0x1ef638
void entry_001ef5e0_0x1ef5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef5e0_0x1ef5e0");
#endif

    ctx->pc = 0x1ef5e0u;

    // 0x1ef5e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef5e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ef5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef5e8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ef5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef5ec: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1ef5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef5f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ef5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ef5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef5f8: 0x0  nop
    ctx->pc = 0x1ef5f8u;
    // NOP
    // 0x1ef5fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ef5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef600: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ef600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ef604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef608: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef60c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef614: 0x0  nop
    ctx->pc = 0x1ef614u;
    // NOP
    // 0x1ef618: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef61c: 0x0  nop
    ctx->pc = 0x1ef61cu;
    // NOP
    // 0x1ef620: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF620u;
    {
        const bool branch_taken_0x1ef620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef620) {
            ctx->pc = 0x1EF638u;
            return;
        }
    }
    ctx->pc = 0x1EF628u;
    // 0x1ef628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef62c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef630: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef634: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ef634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1ef638u;
}
