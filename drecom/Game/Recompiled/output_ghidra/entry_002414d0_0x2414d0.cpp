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

// Function: entry_002414d0
// Address: 0x2414d0 - 0x241568
void entry_002414d0_0x2414d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002414d0_0x2414d0");
#endif

    switch (ctx->pc) {
        case 0x2414f4u: goto label_2414f4;
        default: break;
    }

    ctx->pc = 0x2414d0u;

    // 0x2414d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2414d4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2414d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2414d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2414d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2414dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2414dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2414e0: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2414e4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2414e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2414e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2414ec: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2414ECu;
    SET_GPR_U32(ctx, 31, 0x2414F4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2414ECu, 0x2414F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414F4u;
label_2414f4:
    // 0x2414f4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2414f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2414f8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2414f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2414fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2414fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x241500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241504: 0x0  nop
    ctx->pc = 0x241504u;
    // NOP
    // 0x241508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x241508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24150c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x24150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x241510: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241514: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x241514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241518: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x241518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x24151c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24151cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241520: 0x0  nop
    ctx->pc = 0x241520u;
    // NOP
    // 0x241524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x241524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x241528: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x241528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x24152c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241530: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241534: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x241534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x241538: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x24153c: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x24153cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x241540: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241544: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241548: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x24154c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x24154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241550: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x241554: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241554u;
    {
        const bool branch_taken_0x241554 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241554) {
            ctx->pc = 0x241568u;
            return;
        }
    }
    ctx->pc = 0x24155Cu;
    // 0x24155c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241560: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241564: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x241564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x241568u;
}
