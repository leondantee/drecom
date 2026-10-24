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

// Function: entry_00209d64
// Address: 0x209d64 - 0x209e10
void entry_00209d64_0x209d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209d64_0x209d64");
#endif

    switch (ctx->pc) {
        case 0x209d90u: goto label_209d90;
        default: break;
    }

    ctx->pc = 0x209d64u;

    // 0x209d64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209d68: 0xac2094b0  sw          $zero, -0x6B50($at)
    ctx->pc = 0x209d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6194B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B0u, _value); } while (0);
    // 0x209d6c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d70: 0x8fab0218  lw          $t3, 0x218($sp)
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d74: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x209d74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x209d78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x209d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x209d7c: 0x24063c11  addiu       $a2, $zero, 0x3C11
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15377));
    // 0x209d80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x209d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x209d88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x209D88u;
    SET_GPR_U32(ctx, 31, 0x209D90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x209D88u, 0x209D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x8fa90218  lw          $t1, 0x218($sp)
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d94: 0xa5201278  sh          $zero, 0x1278($t1)
    ctx->pc = 0x209d94u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x209d98: 0x8faa0218  lw          $t2, 0x218($sp)
    ctx->pc = 0x209d98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d9c: 0xa540127a  sh          $zero, 0x127A($t2)
    ctx->pc = 0x209d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x209da0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209da4: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x209da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x209da8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209dac: 0xac601344  sw          $zero, 0x1344($v1)
    ctx->pc = 0x209dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4932), GPR_U32(ctx, 0));
    // 0x209db0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209db4: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x209db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x209db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209dbc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209dc0: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x209dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    // 0x209dc4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x209dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x209dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209dcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209dd0: 0xe4209490  swc1        $f0, -0x6B70($at)
    ctx->pc = 0x209dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619490u, _value); } while (0); }
    // 0x209dd4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209dd8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x209ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209de0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x209de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x209de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209de8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209dec: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x209decu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x209df0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209df4: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x209df4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x209df8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209dfc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e00: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x209e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x209e04: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x209e04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x209e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209E08u;
    {
        const bool branch_taken_0x209e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e08) {
            ctx->pc = 0x209E28u;
            return;
        }
    }
    ctx->pc = 0x209E10u;
}
