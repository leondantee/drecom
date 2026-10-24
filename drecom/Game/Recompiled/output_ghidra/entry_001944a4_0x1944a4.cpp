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

// Function: entry_001944a4
// Address: 0x1944a4 - 0x194510
void entry_001944a4_0x1944a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001944a4_0x1944a4");
#endif

    switch (ctx->pc) {
        case 0x1944f8u: goto label_1944f8;
        default: break;
    }

    ctx->pc = 0x1944a4u;

    // 0x1944a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1944a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1944a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1944ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1944b4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1944b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1944b8: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1944b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1944bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1944bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1944c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1944c4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1944c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1944c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1944c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1944cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1944ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1944d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1944d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1944d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1944d8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1944d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1944dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1944dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1944e0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1944e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1944e4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1944e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1944e8: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x1944e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x1944ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1944ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1944f0: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x1944F0u;
    SET_GPR_U32(ctx, 31, 0x1944F8u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x1944F0u, 0x1944F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944F8u;
label_1944f8:
    // 0x1944f8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1944f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1944fc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1944fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194500: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194504: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x194508: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x194508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x19450c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x194510u;
}
