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

// Function: entry_0028d3ec
// Address: 0x28d3ec - 0x28d430
void entry_0028d3ec_0x28d3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d3ec_0x28d3ec");
#endif

    switch (ctx->pc) {
        case 0x28d428u: goto label_28d428;
        default: break;
    }

    ctx->pc = 0x28d3ecu;

    // 0x28d3ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d3f0: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d3f4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d3f8: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x28d3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d3fc: 0x8e155dd0  lw          $s5, 0x5DD0($s0)
    ctx->pc = 0x28d3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d400: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x28d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d404: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28d404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28d408: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d40c: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28d40cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28d410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d414: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28d418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d41c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d41cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d420: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D420u;
    SET_GPR_U32(ctx, 31, 0x28D428u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D420u, 0x28D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D428u;
label_28d428:
    // 0x28d428: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x28D428u;
    {
        const bool branch_taken_0x28d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d428) {
            ctx->pc = 0x28D528u;
            return;
        }
    }
    ctx->pc = 0x28D430u;
}
