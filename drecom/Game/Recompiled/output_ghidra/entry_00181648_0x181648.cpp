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

// Function: entry_00181648
// Address: 0x181648 - 0x1816c0
void entry_00181648_0x181648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181648_0x181648");
#endif

    ctx->pc = 0x181648u;

    // 0x181648: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18164c: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x18164cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x181650: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181654: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181658: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18165c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18165cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181660: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181664: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181668: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18166c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181670: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181674: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x181678: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x18167c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x18167cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181680: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x181680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181684: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x181684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181688: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x181688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18168c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181690: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x181690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x181694: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181698: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x181698u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18169c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1816a0: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x1816a0u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1816a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1816a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1816a8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1816ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1816acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1816b0: 0x0  nop
    ctx->pc = 0x1816b0u;
    // NOP
    // 0x1816b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1816b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1816b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1816b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1816bc: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x1816bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    ctx->pc = 0x1816c0u;
}
