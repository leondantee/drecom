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

// Function: entry_003686a4
// Address: 0x3686a4 - 0x3686fc
void entry_003686a4_0x3686a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003686a4_0x3686a4");
#endif

    ctx->pc = 0x3686a4u;

    // 0x3686a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3686a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686a8: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x3686a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3686ac: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3686acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3686b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3686b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3686b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3686b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3686b8: 0x0  nop
    ctx->pc = 0x3686b8u;
    // NOP
    // 0x3686bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3686bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3686c0: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x3686c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x3686c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3686c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686c8: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x3686c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3686cc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3686ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3686d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3686d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3686d4: 0x0  nop
    ctx->pc = 0x3686d4u;
    // NOP
    // 0x3686d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3686d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3686dc: 0x0  nop
    ctx->pc = 0x3686dcu;
    // NOP
    // 0x3686e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3686E0u;
    {
        const bool branch_taken_0x3686e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3686e0) {
            ctx->pc = 0x3686FCu;
            return;
        }
    }
    ctx->pc = 0x3686E8u;
    // 0x3686e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3686e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3686ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3686ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3686f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3686f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686f4: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3686f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x3686f8: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x3686f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3686fcu;
}
