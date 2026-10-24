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

// Function: entry_001928e0
// Address: 0x1928e0 - 0x19294c
void entry_001928e0_0x1928e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001928e0_0x1928e0");
#endif

    switch (ctx->pc) {
        case 0x192934u: goto label_192934;
        default: break;
    }

    ctx->pc = 0x1928e0u;

    // 0x1928e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1928e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1928e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1928e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1928e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1928ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1928ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1928f0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1928f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1928f4: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1928f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1928f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1928f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1928fc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1928fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x192900: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x192904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192908: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19290c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19290cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x192910: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192914: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x192918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19291c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19291cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192920: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192924: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x192924u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x192928: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x192928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x19292c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x19292Cu;
    SET_GPR_U32(ctx, 31, 0x192934u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x19292Cu, 0x192934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192938: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x19293c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192940: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192944: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x192944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x192948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19294cu;
}
