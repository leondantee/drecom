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

// Function: entry_001f1194
// Address: 0x1f1194 - 0x1f11d4
void entry_001f1194_0x1f1194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1194_0x1f1194");
#endif

    ctx->pc = 0x1f1194u;

    // 0x1f1194: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1198: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1198u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f119c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f11a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f11a4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f11a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f11a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f11a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f11ac: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f11acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f11b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1f11b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f11b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f11b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f11b8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1f11b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f11bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f11c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f11c4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f11c8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1f11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1f11cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f11ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f11d0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x1f11d4u;
}
