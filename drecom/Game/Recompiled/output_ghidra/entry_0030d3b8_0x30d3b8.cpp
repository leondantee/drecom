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

// Function: entry_0030d3b8
// Address: 0x30d3b8 - 0x30d3fc
void entry_0030d3b8_0x30d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d3b8_0x30d3b8");
#endif

    switch (ctx->pc) {
        case 0x30d3d8u: goto label_30d3d8;
        default: break;
    }

    ctx->pc = 0x30d3b8u;

    // 0x30d3b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d3c8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d3cc: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30d3d0: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30D3D0u;
    SET_GPR_U32(ctx, 31, 0x30D3D8u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30D3D0u, 0x30D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3D8u;
label_30d3d8:
    // 0x30d3d8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30d3d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30d3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d3e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3e4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d3e8: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x30d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x30d3ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D3ECu;
    {
        const bool branch_taken_0x30d3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d3ec) {
            ctx->pc = 0x30D3FCu;
            return;
        }
    }
    ctx->pc = 0x30D3F4u;
    // 0x30d3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3f8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30d3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x30d3fcu;
}
