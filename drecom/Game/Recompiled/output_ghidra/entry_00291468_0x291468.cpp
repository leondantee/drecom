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

// Function: entry_00291468
// Address: 0x291468 - 0x2914dc
void entry_00291468_0x291468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291468_0x291468");
#endif

    ctx->pc = 0x291468u;

    // 0x291468: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x291468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x29146c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291470: 0x0  nop
    ctx->pc = 0x291470u;
    // NOP
    // 0x291474: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29147c: 0xe42032b4  swc1        $f0, 0x32B4($at)
    ctx->pc = 0x29147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232B4u, _value); } while (0); }
    // 0x291480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291488: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29148c: 0xe420328c  swc1        $f0, 0x328C($at)
    ctx->pc = 0x29148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62328Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62328Cu, _value); } while (0); }
    // 0x291490: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291498: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29149c: 0xe420329c  swc1        $f0, 0x329C($at)
    ctx->pc = 0x29149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62329Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62329Cu, _value); } while (0); }
    // 0x2914a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2914a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2914a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2914a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914ac: 0xe42032ac  swc1        $f0, 0x32AC($at)
    ctx->pc = 0x2914acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232ACu, _value); } while (0); }
    // 0x2914b0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2914b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2914b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2914b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2914b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914bc: 0xe42032bc  swc1        $f0, 0x32BC($at)
    ctx->pc = 0x2914bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232BCu, _value); } while (0); }
    // 0x2914c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914c4: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x2914c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A58u, _value); } while (0);
    // 0x2914c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914cc: 0x8c222a50  lw          $v0, 0x2A50($at)
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A50u));
    // 0x2914d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2914d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2914d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914d8: 0xac222a50  sw          $v0, 0x2A50($at)
    ctx->pc = 0x2914d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A50u, _value); } while (0);
    ctx->pc = 0x2914dcu;
}
