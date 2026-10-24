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

// Function: entry_002f43d4
// Address: 0x2f43d4 - 0x2f4498
void entry_002f43d4_0x2f43d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f43d4_0x2f43d4");
#endif

    switch (ctx->pc) {
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4478u: goto label_2f4478;
        default: break;
    }

    ctx->pc = 0x2f43d4u;

    // 0x2f43d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f43d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f43d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f43dc: 0x0  nop
    ctx->pc = 0x2f43dcu;
    // NOP
    // 0x2f43e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f43e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f43e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f43e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f43e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f43ec: 0x0  nop
    ctx->pc = 0x2f43ecu;
    // NOP
    // 0x2f43f0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f43f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f43f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f43f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f43f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f43fc: 0x0  nop
    ctx->pc = 0x2f43fcu;
    // NOP
    // 0x2f4400: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f4404: 0x3c0242ec  lui         $v0, 0x42EC
    ctx->pc = 0x2f4404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17132 << 16));
    // 0x2f4408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f440c: 0x0  nop
    ctx->pc = 0x2f440cu;
    // NOP
    // 0x2f4410: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f4410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f4414: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4414u;
    SET_GPR_U32(ctx, 31, 0x2F441Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4414u, 0x2F441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F441Cu;
label_2f441c:
    // 0x2f441c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f441cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4424: 0x0  nop
    ctx->pc = 0x2f4424u;
    // NOP
    // 0x2f4428: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f442c: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2f442cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2f4430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4434: 0x0  nop
    ctx->pc = 0x2f4434u;
    // NOP
    // 0x2f4438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f4438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f443c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f4440: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2f4440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2f4444: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x2f4444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x2f4448: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f4448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f444c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f444cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4450: 0x0  nop
    ctx->pc = 0x2f4450u;
    // NOP
    // 0x2f4454: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2f4454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2f4458: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f4458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f445c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f4460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4464: 0x0  nop
    ctx->pc = 0x2f4464u;
    // NOP
    // 0x2f4468: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f4468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f446c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f446cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f4470: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F4470u;
    SET_GPR_U32(ctx, 31, 0x2F4478u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F4470u, 0x2F4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4478u;
label_2f4478:
    // 0x2f4478: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2f4478u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f447c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x2f447cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2f4480: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f4480u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f448c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f448cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4490: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4498u;
}
