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

// Function: entry_00244920
// Address: 0x244920 - 0x2449a4
void entry_00244920_0x244920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244920_0x244920");
#endif

    switch (ctx->pc) {
        case 0x244934u: goto label_244934;
        default: break;
    }

    ctx->pc = 0x244920u;

    // 0x244920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244928: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x244928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x24492c: 0xc067654  jal         func_19D950
    ctx->pc = 0x24492Cu;
    SET_GPR_U32(ctx, 31, 0x244934u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24492Cu, 0x244934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244934u;
label_244934:
    // 0x244934: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x244938: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x244938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24493c: 0x0  nop
    ctx->pc = 0x24493cu;
    // NOP
    // 0x244940: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x244940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x244944: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x244948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24494c: 0x0  nop
    ctx->pc = 0x24494cu;
    // NOP
    // 0x244950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x244950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244958: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24495c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x24495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x244960: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x244960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x244964: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x244964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x244968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24496c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244970: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244974: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x244974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x244978: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x244978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x24497c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x24497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x244980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244984: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24498c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x244990: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244998: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x24499c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x24499Cu;
    {
        const bool branch_taken_0x24499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24499c) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x2449A4u;
}
