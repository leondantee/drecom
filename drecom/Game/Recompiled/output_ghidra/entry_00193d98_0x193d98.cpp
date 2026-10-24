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

// Function: entry_00193d98
// Address: 0x193d98 - 0x193df0
void entry_00193d98_0x193d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d98_0x193d98");
#endif

    switch (ctx->pc) {
        case 0x193db4u: goto label_193db4;
        case 0x193dd8u: goto label_193dd8;
        default: break;
    }

    ctx->pc = 0x193d98u;

    // 0x193d98: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x193d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d9c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x193d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193da0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193da4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x193da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x193da8: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x193dac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x193DB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193DB4u) { return; }
    ctx->pc = 0x193DB4u;
label_193db4:
    // 0x193db4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x193db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193db8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193dbc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193dc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193dc4: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x193DC4u;
    {
        const bool branch_taken_0x193dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x193dc4) {
            ctx->pc = 0x193DF8u;
            return;
        }
    }
    ctx->pc = 0x193DCCu;
    // 0x193dcc: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x193dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193dd0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x193DD0u;
    SET_GPR_U32(ctx, 31, 0x193DD8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x193DD0u, 0x193DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD8u;
label_193dd8:
    // 0x193dd8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x193dd8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x193ddc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193de0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x193de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193de4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193DE4u;
    {
        const bool branch_taken_0x193de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193de4) {
            ctx->pc = 0x193DF0u;
            return;
        }
    }
    ctx->pc = 0x193DECu;
    // 0x193dec: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x193decu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x193df0u;
}
