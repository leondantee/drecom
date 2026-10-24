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

// Function: entry_0022724c
// Address: 0x22724c - 0x2272a8
void entry_0022724c_0x22724c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022724c_0x22724c");
#endif

    ctx->pc = 0x22724cu;

    // 0x22724c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227250: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x227250u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x227254: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x227258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22725c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227260: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227264: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x227264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x227268: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22726c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22726cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227270: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227274: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227278: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x227278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22727c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227280: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227284: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x227284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x227288: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22728c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22728cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227290: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227294: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227298: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22729c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22729cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2272a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2272a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2272a4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2272a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x2272a8u;
}
