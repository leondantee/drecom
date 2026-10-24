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

// Function: entry_001988bc
// Address: 0x1988bc - 0x198914
void entry_001988bc_0x1988bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001988bc_0x1988bc");
#endif

    switch (ctx->pc) {
        case 0x1988dcu: goto label_1988dc;
        default: break;
    }

    ctx->pc = 0x1988bcu;

    // 0x1988bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1988bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1988c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1988c8: 0x24065a27  addiu       $a2, $zero, 0x5A27
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23079));
    // 0x1988cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1988d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1988d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1988D4u;
    SET_GPR_U32(ctx, 31, 0x1988DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1988D4u, 0x1988DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988DCu;
label_1988dc:
    // 0x1988dc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1988dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1988e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1988e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1988e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988e8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1988e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1988ec: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1988f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1988f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988f8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1988f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1988fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1988fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198900: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x198904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198908: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19890c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x19890Cu;
    {
        const bool branch_taken_0x19890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19890c) {
            ctx->pc = 0x198B8Cu;
            return;
        }
    }
    ctx->pc = 0x198914u;
}
