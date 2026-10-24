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

// Function: entry_00180ea4
// Address: 0x180ea4 - 0x180f1c
void entry_00180ea4_0x180ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180ea4_0x180ea4");
#endif

    ctx->pc = 0x180ea4u;

    // 0x180ea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180ea8: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x180ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x180eac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180eb0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180eb4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180eb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180eb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180ebc: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x180ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ec0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180ec4: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180ec8: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x180ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x180ecc: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x180ed0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180ed4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x180ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x180ed8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x180ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180edc: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x180edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ee0: 0x46007042  mul.s       $f1, $f14, $f0
    ctx->pc = 0x180ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x180ee4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x180ee4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x180ee8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180eec: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x180eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x180ef0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180ef4: 0xc421f1f0  lwc1        $f1, -0xE10($at)
    ctx->pc = 0x180ef4u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180ef8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180efc: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x180efcu;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180f00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x180f00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180f04: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x180f08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x180f08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180f0c: 0x0  nop
    ctx->pc = 0x180f0cu;
    // NOP
    // 0x180f10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x180f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x180f14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f18: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x180f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    ctx->pc = 0x180f1cu;
}
