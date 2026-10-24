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

// Function: caseD_1
// Address: 0x27bd60 - 0x27bdd0
void caseD_1_0x27bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x27bd60");
#endif

    ctx->pc = 0x27bd60u;

    // 0x27bd60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bd64: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bd64u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bd68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27bd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bd70: 0x0  nop
    ctx->pc = 0x27bd70u;
    // NOP
    // 0x27bd74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27bd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27bd78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bd7c: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27bd80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bd84: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bd84u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bd88: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27bd8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bd90: 0x0  nop
    ctx->pc = 0x27bd90u;
    // NOP
    // 0x27bd94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27bd94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bd98: 0x0  nop
    ctx->pc = 0x27bd98u;
    // NOP
    // 0x27bd9c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x27BD9Cu;
    {
        const bool branch_taken_0x27bd9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bd9c) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BDA4u;
    // 0x27bda4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27bda8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bdac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bdb0: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27bdb4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bdb8: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27bdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B48u));
    // 0x27bdbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27bdc0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bdc4: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27bdc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B48u, _value); } while (0);
    // 0x27bdc8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x27BDC8u;
    {
        const bool branch_taken_0x27bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bdc8) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BDD0u;
}
