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

// Function: entry_001dd8d0
// Address: 0x1dd8d0 - 0x1dd95c
void entry_001dd8d0_0x1dd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd8d0_0x1dd8d0");
#endif

    switch (ctx->pc) {
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd944u: goto label_1dd944;
        default: break;
    }

    ctx->pc = 0x1dd8d0u;

    // 0x1dd8d0: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1dd8d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1dd8d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1dd8d8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dd8dc: 0x2fe202b  sltu        $a0, $s7, $fp
    ctx->pc = 0x1dd8dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1dd8e0: 0x1480fec6  bnez        $a0, . + 4 + (-0x13A << 2)
    ctx->pc = 0x1DD8E0u;
    {
        const bool branch_taken_0x1dd8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8e0) {
            ctx->pc = 0x1DD3FCu;
            return;
        }
    }
    ctx->pc = 0x1DD8E8u;
    // 0x1dd8e8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dd8ec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1dd8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1dd8f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dd8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dd8f4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1dd8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1dd8f8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DD8F8u;
    {
        const bool branch_taken_0x1dd8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8f8) {
            ctx->pc = 0x1DD990u;
            return;
        }
    }
    ctx->pc = 0x1DD900u;
    // 0x1dd900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd904: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dd908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd90c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dd910: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dd914: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x1dd914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1dd918: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1dd91c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1DD91Cu;
    SET_GPR_U32(ctx, 31, 0x1DD924u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1DD91Cu, 0x1DD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD924u;
label_1dd924:
    // 0x1dd924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd92c: 0x0  nop
    ctx->pc = 0x1dd92cu;
    // NOP
    // 0x1dd930: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1dd930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1dd934: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1dd934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dd938: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1dd938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dd93c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1DD93Cu;
    SET_GPR_U32(ctx, 31, 0x1DD944u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1DD944u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD944u) { return; }
    ctx->pc = 0x1DD944u;
label_1dd944:
    // 0x1dd944: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1dd944u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd948: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dd948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd94c: 0x8c760058  lw          $s6, 0x58($v1)
    ctx->pc = 0x1dd94cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dd950: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dd950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dd954: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1dd954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dd958: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x1dd958u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dd95cu;
}
