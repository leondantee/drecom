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

// Function: entry_0031f21c
// Address: 0x31f21c - 0x31f2d4
void entry_0031f21c_0x31f21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f21c_0x31f21c");
#endif

    switch (ctx->pc) {
        case 0x31f228u: goto label_31f228;
        default: break;
    }

    ctx->pc = 0x31f21cu;

    // 0x31f21c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x31f21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f220: 0xc062010  jal         func_188040
    ctx->pc = 0x31F220u;
    SET_GPR_U32(ctx, 31, 0x31F228u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x31F220u, 0x31F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F228u;
label_31f228:
    // 0x31f228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f22c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f230: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x31f230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x31f234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f238: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f23c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f240: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f248: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f24c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x31f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x31f250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f25c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f260: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f264: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f268: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31f26c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x31f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x31f270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f274: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f278: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f27c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f280: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f284: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x31f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x31f288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f28c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f290: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f298: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x31f298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31f29c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x31f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x31f2a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f2a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f2a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f2ac: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x31f2acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31f2b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f2b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f2b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f2c0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31f2c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f2c8: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31f2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f2d0: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x31f2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x31f2d4u;
}
