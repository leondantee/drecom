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

// Function: caseD_3
// Address: 0x27bdd0 - 0x27be40
void caseD_3_0x27bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x27bdd0");
#endif

    ctx->pc = 0x27bdd0u;

    // 0x27bdd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bdd4: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bdd4u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bdd8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27bddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bde0: 0x0  nop
    ctx->pc = 0x27bde0u;
    // NOP
    // 0x27bde4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27bde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27bde8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bdec: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27bdf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bdf4: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bdf4u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bdf8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x27bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x27bdfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27be00: 0x0  nop
    ctx->pc = 0x27be00u;
    // NOP
    // 0x27be04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27be04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27be08: 0x0  nop
    ctx->pc = 0x27be08u;
    // NOP
    // 0x27be0c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x27BE0Cu;
    {
        const bool branch_taken_0x27be0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27be0c) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BE14u;
    // 0x27be14: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x27be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x27be18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27be18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27be1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be20: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27be24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be28: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27be28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B48u));
    // 0x27be2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27be30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be34: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27be34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B48u, _value); } while (0);
    // 0x27be38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27BE38u;
    {
        const bool branch_taken_0x27be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be38) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BE40u;
}
