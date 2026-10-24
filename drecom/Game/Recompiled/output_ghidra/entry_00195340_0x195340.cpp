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

// Function: entry_00195340
// Address: 0x195340 - 0x1953ac
void entry_00195340_0x195340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195340_0x195340");
#endif

    switch (ctx->pc) {
        case 0x195394u: goto label_195394;
        default: break;
    }

    ctx->pc = 0x195340u;

    // 0x195340: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x195348: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19534c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x195350: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x195350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x195354: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x195358: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x195358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19535c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x195360: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x195360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x195364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195368: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19536c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19536cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x195370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195374: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x195378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19537c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19537cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195380: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x195380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x195384: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x195384u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x195388: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x195388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x19538c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x19538Cu;
    SET_GPR_U32(ctx, 31, 0x195394u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x19538Cu, 0x195394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195394u;
label_195394:
    // 0x195394: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x195394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x195398: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x195398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x19539c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1953a0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1953a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1953a4: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x1953a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x1953a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1953a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1953acu;
}
