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

// Function: entry_00187dd0
// Address: 0x187dd0 - 0x187e30
void entry_00187dd0_0x187dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187dd0_0x187dd0");
#endif

    ctx->pc = 0x187dd0u;

    // 0x187dd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187dd4: 0xc420ef40  lwc1        $f0, -0x10C0($at)
    ctx->pc = 0x187dd4u;
    { uint32_t bits = FAST_READ32(0x3EEF40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187dd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187ddc: 0xe4200370  swc1        $f0, 0x370($at)
    ctx->pc = 0x187ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480370u, _value); } while (0); }
    // 0x187de0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x187de4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x187de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x187de8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x187DE8u;
    {
        const bool branch_taken_0x187de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187de8) {
            ctx->pc = 0x187E30u;
            return;
        }
    }
    ctx->pc = 0x187DF0u;
    // 0x187df0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x187df4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x187df8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187dfc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187e00: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187e04: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x187e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e08: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x187e0c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x187e10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x187e14: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x187e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x187e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187e1c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187e20: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x187e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x187e24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x187e28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187e2c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x187e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x187e30u;
}
