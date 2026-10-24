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

// Function: entry_00163938
// Address: 0x163938 - 0x1639a4
void entry_00163938_0x163938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163938_0x163938");
#endif

    ctx->pc = 0x163938u;

    // 0x163938: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x163938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16393c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163940: 0xc42056c8  lwc1        $f0, 0x56C8($at)
    ctx->pc = 0x163940u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163944: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163948: 0x0  nop
    ctx->pc = 0x163948u;
    // NOP
    // 0x16394c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x16394Cu;
    {
        const bool branch_taken_0x16394c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16394c) {
            ctx->pc = 0x1639B8u;
            return;
        }
    }
    ctx->pc = 0x163954u;
    // 0x163954: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x163954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163958: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16395c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16395cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163960: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163964: 0xc42056c8  lwc1        $f0, 0x56C8($at)
    ctx->pc = 0x163964u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163968: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16396c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16396cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163970: 0x0  nop
    ctx->pc = 0x163970u;
    // NOP
    // 0x163974: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x163974u;
    {
        const bool branch_taken_0x163974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163974) {
            ctx->pc = 0x1639A4u;
            return;
        }
    }
    ctx->pc = 0x16397Cu;
    // 0x16397c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163980: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x163980u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163984: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x163988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16398c: 0x0  nop
    ctx->pc = 0x16398cu;
    // NOP
    // 0x163990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163994: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163998: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x163998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
    // 0x16399c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16399Cu;
    {
        const bool branch_taken_0x16399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16399c) {
            ctx->pc = 0x163A18u;
            return;
        }
    }
    ctx->pc = 0x1639A4u;
}
