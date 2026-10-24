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

// Function: entry_002278e8
// Address: 0x2278e8 - 0x227940
void entry_002278e8_0x2278e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002278e8_0x2278e8");
#endif

    ctx->pc = 0x2278e8u;

    // 0x2278e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2278e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2278ec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2278ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2278f0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2278f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2278f4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2278f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2278f8: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x2278f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2278fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2278fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227900: 0x0  nop
    ctx->pc = 0x227900u;
    // NOP
    // 0x227904: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x227908: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x227908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22790c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x22790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227910: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x227910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227914: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22791c: 0x0  nop
    ctx->pc = 0x22791cu;
    // NOP
    // 0x227920: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227924: 0x0  nop
    ctx->pc = 0x227924u;
    // NOP
    // 0x227928: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x227928u;
    {
        const bool branch_taken_0x227928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227928) {
            ctx->pc = 0x227940u;
            return;
        }
    }
    ctx->pc = 0x227930u;
    // 0x227930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227934: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227938: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22793c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    ctx->pc = 0x227940u;
}
