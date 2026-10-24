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

// Function: entry_00181374
// Address: 0x181374 - 0x1813ec
void entry_00181374_0x181374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181374_0x181374");
#endif

    ctx->pc = 0x181374u;

    // 0x181374: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181378: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x181378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x18137c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18137cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181380: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181380u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181384: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181388: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181388u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18138c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18138cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181390: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181394: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181398: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18139c: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1813a0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1813a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1813a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1813a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1813a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1813a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1813ac: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x1813acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1813b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1813b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1813b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1813b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813bc: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x1813bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x1813c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813c4: 0xc421f1f0  lwc1        $f1, -0xE10($at)
    ctx->pc = 0x1813c4u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1813c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813cc: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x1813ccu;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1813d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1813d4: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x1813d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x1813d8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1813d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1813dc: 0x0  nop
    ctx->pc = 0x1813dcu;
    // NOP
    // 0x1813e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1813e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1813e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813e8: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x1813e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    ctx->pc = 0x1813ecu;
}
