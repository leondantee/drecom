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

// Function: entry_001621bc
// Address: 0x1621bc - 0x1621f8
void entry_001621bc_0x1621bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001621bc_0x1621bc");
#endif

    ctx->pc = 0x1621bcu;

    // 0x1621bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1621c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1621c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1621c4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1621C4u;
    {
        const bool branch_taken_0x1621c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621c4) {
            ctx->pc = 0x1623F0u;
            return;
        }
    }
    ctx->pc = 0x1621CCu;
    // 0x1621cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1621d0: 0x2455bb48  addiu       $s5, $v0, -0x44B8
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x1621d4: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1621d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1621d8: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1621d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1621dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1621dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1621e0: 0x0  nop
    ctx->pc = 0x1621e0u;
    // NOP
    // 0x1621e4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1621e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1621e8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1621e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1621ec: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1621ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1621f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1621F0u;
    {
        const bool branch_taken_0x1621f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621f0) {
            ctx->pc = 0x162270u;
            return;
        }
    }
    ctx->pc = 0x1621F8u;
}
