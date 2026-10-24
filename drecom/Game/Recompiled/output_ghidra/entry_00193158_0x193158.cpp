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

// Function: entry_00193158
// Address: 0x193158 - 0x1931b4
void entry_00193158_0x193158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193158_0x193158");
#endif

    switch (ctx->pc) {
        case 0x19319cu: goto label_19319c;
        default: break;
    }

    ctx->pc = 0x193158u;

    // 0x193158: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x193158u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19315c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x19315cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x193160: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x193160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x193164: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x193164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x193168: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x193168u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x19316c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x19316cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x193170: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x193170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x193174: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x193174u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x193178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19317c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193180: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x193180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x193184: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x193184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193188: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x19318c: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x193190: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x193190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x193194: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x193194u;
    SET_GPR_U32(ctx, 31, 0x19319Cu);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x193194u, 0x19319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19319Cu;
label_19319c:
    // 0x19319c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1931a0: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1931a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1931a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1931a8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1931a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1931ac: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x1931acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x1931b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1931b4u;
}
